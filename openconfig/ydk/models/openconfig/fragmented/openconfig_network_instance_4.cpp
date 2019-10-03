
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_network_instance_4.hpp"
#include "openconfig_network_instance_5.hpp"
#include "openconfig_network_instance_6.hpp"
#include "openconfig_network_instance_7.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_network_instance {

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::L3vpnIpv4Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::~L3vpnIpv4Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::L3vpnIpv6Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::~L3vpnIpv6Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::L3vpnIpv4Multicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::~L3vpnIpv4Multicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::L3vpnIpv6Multicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::~L3vpnIpv6Multicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::L2vpnVpls()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-vpls"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::~L2vpnVpls()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::L2vpnEvpn()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-evpn"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::~L2vpnEvpn()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Isis()
    :
    global(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global>())
    , levels(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels>())
    , interfaces(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces>())
{
    global->parent = this;
    levels->parent = this;
    interfaces->parent = this;

    yang_name = "isis"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::~Isis()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (levels !=  nullptr && levels->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (levels !=  nullptr && levels->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global>();
        }
        return global;
    }

    if(child_yang_name == "levels")
    {
        if(levels == nullptr)
        {
            levels = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels>();
        }
        return levels;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(levels != nullptr)
    {
        _children["levels"] = levels;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "levels" || name == "interfaces")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Global()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State>())
    , lsp_bit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit>())
    , reference_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth>())
    , nsr(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr>())
    , graceful_restart(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart>())
    , timers(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers>())
    , transport(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport>())
    , mpls(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls>())
    , igp_shortcuts(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts>())
    , afi_safi(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi>())
    , segment_routing(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting>())
    , inter_level_propagation_policies(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies>())
{
    config->parent = this;
    state->parent = this;
    lsp_bit->parent = this;
    reference_bandwidth->parent = this;
    nsr->parent = this;
    graceful_restart->parent = this;
    timers->parent = this;
    transport->parent = this;
    mpls->parent = this;
    igp_shortcuts->parent = this;
    afi_safi->parent = this;
    segment_routing->parent = this;
    inter_level_propagation_policies->parent = this;

    yang_name = "global"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::~Global()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (lsp_bit !=  nullptr && lsp_bit->has_data())
	|| (reference_bandwidth !=  nullptr && reference_bandwidth->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (igp_shortcuts !=  nullptr && igp_shortcuts->has_data())
	|| (afi_safi !=  nullptr && afi_safi->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (inter_level_propagation_policies !=  nullptr && inter_level_propagation_policies->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (lsp_bit !=  nullptr && lsp_bit->has_operation())
	|| (reference_bandwidth !=  nullptr && reference_bandwidth->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (igp_shortcuts !=  nullptr && igp_shortcuts->has_operation())
	|| (afi_safi !=  nullptr && afi_safi->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (inter_level_propagation_policies !=  nullptr && inter_level_propagation_policies->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State>();
        }
        return state;
    }

    if(child_yang_name == "lsp-bit")
    {
        if(lsp_bit == nullptr)
        {
            lsp_bit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit>();
        }
        return lsp_bit;
    }

    if(child_yang_name == "reference-bandwidth")
    {
        if(reference_bandwidth == nullptr)
        {
            reference_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth>();
        }
        return reference_bandwidth;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "igp-shortcuts")
    {
        if(igp_shortcuts == nullptr)
        {
            igp_shortcuts = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts>();
        }
        return igp_shortcuts;
    }

    if(child_yang_name == "afi-safi")
    {
        if(afi_safi == nullptr)
        {
            afi_safi = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi>();
        }
        return afi_safi;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "inter-level-propagation-policies")
    {
        if(inter_level_propagation_policies == nullptr)
        {
            inter_level_propagation_policies = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies>();
        }
        return inter_level_propagation_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(lsp_bit != nullptr)
    {
        _children["lsp-bit"] = lsp_bit;
    }

    if(reference_bandwidth != nullptr)
    {
        _children["reference-bandwidth"] = reference_bandwidth;
    }

    if(nsr != nullptr)
    {
        _children["nsr"] = nsr;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(igp_shortcuts != nullptr)
    {
        _children["igp-shortcuts"] = igp_shortcuts;
    }

    if(afi_safi != nullptr)
    {
        _children["afi-safi"] = afi_safi;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    if(inter_level_propagation_policies != nullptr)
    {
        _children["inter-level-propagation-policies"] = inter_level_propagation_policies;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "lsp-bit" || name == "reference-bandwidth" || name == "nsr" || name == "graceful-restart" || name == "timers" || name == "transport" || name == "mpls" || name == "igp-shortcuts" || name == "afi-safi" || name == "segment-routing" || name == "inter-level-propagation-policies")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::Config()
    :
    authentication_check{YType::boolean, "authentication-check"},
    instance{YType::str, "instance"},
    net{YType::str, "net"},
    maximum_area_addresses{YType::uint8, "maximum-area-addresses"},
    level_capability{YType::enumeration, "level-capability"},
    max_ecmp_paths{YType::uint8, "max-ecmp-paths"},
    poi_tlv{YType::boolean, "poi-tlv"},
    iid_tlv{YType::boolean, "iid-tlv"},
    fast_flooding{YType::boolean, "fast-flooding"}
{

    yang_name = "config"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : net.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authentication_check.is_set
	|| instance.is_set
	|| maximum_area_addresses.is_set
	|| level_capability.is_set
	|| max_ecmp_paths.is_set
	|| poi_tlv.is_set
	|| iid_tlv.is_set
	|| fast_flooding.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::has_operation() const
{
    for (auto const & leaf : net.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authentication_check.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(net.yfilter)
	|| ydk::is_set(maximum_area_addresses.yfilter)
	|| ydk::is_set(level_capability.yfilter)
	|| ydk::is_set(max_ecmp_paths.yfilter)
	|| ydk::is_set(poi_tlv.yfilter)
	|| ydk::is_set(iid_tlv.yfilter)
	|| ydk::is_set(fast_flooding.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_check.is_set || is_set(authentication_check.yfilter)) leaf_name_data.push_back(authentication_check.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (maximum_area_addresses.is_set || is_set(maximum_area_addresses.yfilter)) leaf_name_data.push_back(maximum_area_addresses.get_name_leafdata());
    if (level_capability.is_set || is_set(level_capability.yfilter)) leaf_name_data.push_back(level_capability.get_name_leafdata());
    if (max_ecmp_paths.is_set || is_set(max_ecmp_paths.yfilter)) leaf_name_data.push_back(max_ecmp_paths.get_name_leafdata());
    if (poi_tlv.is_set || is_set(poi_tlv.yfilter)) leaf_name_data.push_back(poi_tlv.get_name_leafdata());
    if (iid_tlv.is_set || is_set(iid_tlv.yfilter)) leaf_name_data.push_back(iid_tlv.get_name_leafdata());
    if (fast_flooding.is_set || is_set(fast_flooding.yfilter)) leaf_name_data.push_back(fast_flooding.get_name_leafdata());

    auto net_name_datas = net.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), net_name_datas.begin(), net_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-check")
    {
        authentication_check = value;
        authentication_check.value_namespace = name_space;
        authentication_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net")
    {
        net.append(value);
    }
    if(value_path == "maximum-area-addresses")
    {
        maximum_area_addresses = value;
        maximum_area_addresses.value_namespace = name_space;
        maximum_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-capability")
    {
        level_capability = value;
        level_capability.value_namespace = name_space;
        level_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-ecmp-paths")
    {
        max_ecmp_paths = value;
        max_ecmp_paths.value_namespace = name_space;
        max_ecmp_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poi-tlv")
    {
        poi_tlv = value;
        poi_tlv.value_namespace = name_space;
        poi_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iid-tlv")
    {
        iid_tlv = value;
        iid_tlv.value_namespace = name_space;
        iid_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-flooding")
    {
        fast_flooding = value;
        fast_flooding.value_namespace = name_space;
        fast_flooding.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-check")
    {
        authentication_check.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
    if(value_path == "maximum-area-addresses")
    {
        maximum_area_addresses.yfilter = yfilter;
    }
    if(value_path == "level-capability")
    {
        level_capability.yfilter = yfilter;
    }
    if(value_path == "max-ecmp-paths")
    {
        max_ecmp_paths.yfilter = yfilter;
    }
    if(value_path == "poi-tlv")
    {
        poi_tlv.yfilter = yfilter;
    }
    if(value_path == "iid-tlv")
    {
        iid_tlv.yfilter = yfilter;
    }
    if(value_path == "fast-flooding")
    {
        fast_flooding.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-check" || name == "instance" || name == "net" || name == "maximum-area-addresses" || name == "level-capability" || name == "max-ecmp-paths" || name == "poi-tlv" || name == "iid-tlv" || name == "fast-flooding")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::State()
    :
    authentication_check{YType::boolean, "authentication-check"},
    instance{YType::str, "instance"},
    net{YType::str, "net"},
    maximum_area_addresses{YType::uint8, "maximum-area-addresses"},
    level_capability{YType::enumeration, "level-capability"},
    max_ecmp_paths{YType::uint8, "max-ecmp-paths"},
    poi_tlv{YType::boolean, "poi-tlv"},
    iid_tlv{YType::boolean, "iid-tlv"},
    fast_flooding{YType::boolean, "fast-flooding"}
{

    yang_name = "state"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : net.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authentication_check.is_set
	|| instance.is_set
	|| maximum_area_addresses.is_set
	|| level_capability.is_set
	|| max_ecmp_paths.is_set
	|| poi_tlv.is_set
	|| iid_tlv.is_set
	|| fast_flooding.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::has_operation() const
{
    for (auto const & leaf : net.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authentication_check.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(net.yfilter)
	|| ydk::is_set(maximum_area_addresses.yfilter)
	|| ydk::is_set(level_capability.yfilter)
	|| ydk::is_set(max_ecmp_paths.yfilter)
	|| ydk::is_set(poi_tlv.yfilter)
	|| ydk::is_set(iid_tlv.yfilter)
	|| ydk::is_set(fast_flooding.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_check.is_set || is_set(authentication_check.yfilter)) leaf_name_data.push_back(authentication_check.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (maximum_area_addresses.is_set || is_set(maximum_area_addresses.yfilter)) leaf_name_data.push_back(maximum_area_addresses.get_name_leafdata());
    if (level_capability.is_set || is_set(level_capability.yfilter)) leaf_name_data.push_back(level_capability.get_name_leafdata());
    if (max_ecmp_paths.is_set || is_set(max_ecmp_paths.yfilter)) leaf_name_data.push_back(max_ecmp_paths.get_name_leafdata());
    if (poi_tlv.is_set || is_set(poi_tlv.yfilter)) leaf_name_data.push_back(poi_tlv.get_name_leafdata());
    if (iid_tlv.is_set || is_set(iid_tlv.yfilter)) leaf_name_data.push_back(iid_tlv.get_name_leafdata());
    if (fast_flooding.is_set || is_set(fast_flooding.yfilter)) leaf_name_data.push_back(fast_flooding.get_name_leafdata());

    auto net_name_datas = net.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), net_name_datas.begin(), net_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-check")
    {
        authentication_check = value;
        authentication_check.value_namespace = name_space;
        authentication_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net")
    {
        net.append(value);
    }
    if(value_path == "maximum-area-addresses")
    {
        maximum_area_addresses = value;
        maximum_area_addresses.value_namespace = name_space;
        maximum_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-capability")
    {
        level_capability = value;
        level_capability.value_namespace = name_space;
        level_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-ecmp-paths")
    {
        max_ecmp_paths = value;
        max_ecmp_paths.value_namespace = name_space;
        max_ecmp_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poi-tlv")
    {
        poi_tlv = value;
        poi_tlv.value_namespace = name_space;
        poi_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iid-tlv")
    {
        iid_tlv = value;
        iid_tlv.value_namespace = name_space;
        iid_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-flooding")
    {
        fast_flooding = value;
        fast_flooding.value_namespace = name_space;
        fast_flooding.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-check")
    {
        authentication_check.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
    if(value_path == "maximum-area-addresses")
    {
        maximum_area_addresses.yfilter = yfilter;
    }
    if(value_path == "level-capability")
    {
        level_capability.yfilter = yfilter;
    }
    if(value_path == "max-ecmp-paths")
    {
        max_ecmp_paths.yfilter = yfilter;
    }
    if(value_path == "poi-tlv")
    {
        poi_tlv.yfilter = yfilter;
    }
    if(value_path == "iid-tlv")
    {
        iid_tlv.yfilter = yfilter;
    }
    if(value_path == "fast-flooding")
    {
        fast_flooding.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-check" || name == "instance" || name == "net" || name == "maximum-area-addresses" || name == "level-capability" || name == "max-ecmp-paths" || name == "poi-tlv" || name == "iid-tlv" || name == "fast-flooding")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::LspBit()
    :
    overload_bit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit>())
    , attached_bit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit>())
{
    overload_bit->parent = this;
    attached_bit->parent = this;

    yang_name = "lsp-bit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::~LspBit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::has_data() const
{
    if (is_presence_container) return true;
    return (overload_bit !=  nullptr && overload_bit->has_data())
	|| (attached_bit !=  nullptr && attached_bit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::has_operation() const
{
    return is_set(yfilter)
	|| (overload_bit !=  nullptr && overload_bit->has_operation())
	|| (attached_bit !=  nullptr && attached_bit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overload-bit")
    {
        if(overload_bit == nullptr)
        {
            overload_bit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit>();
        }
        return overload_bit;
    }

    if(child_yang_name == "attached-bit")
    {
        if(attached_bit == nullptr)
        {
            attached_bit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit>();
        }
        return attached_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(overload_bit != nullptr)
    {
        _children["overload-bit"] = overload_bit;
    }

    if(attached_bit != nullptr)
    {
        _children["attached-bit"] = attached_bit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload-bit" || name == "attached-bit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State>())
    , reset_triggers(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers>())
{
    config->parent = this;
    state->parent = this;
    reset_triggers->parent = this;

    yang_name = "overload-bit"; yang_parent_name = "lsp-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::~OverloadBit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (reset_triggers !=  nullptr && reset_triggers->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (reset_triggers !=  nullptr && reset_triggers->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State>();
        }
        return state;
    }

    if(child_yang_name == "reset-triggers")
    {
        if(reset_triggers == nullptr)
        {
            reset_triggers = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers>();
        }
        return reset_triggers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(reset_triggers != nullptr)
    {
        _children["reset-triggers"] = reset_triggers;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "reset-triggers")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::Config()
    :
    set_bit{YType::boolean, "set-bit"},
    set_bit_on_boot{YType::boolean, "set-bit-on-boot"},
    advertise_high_metric{YType::boolean, "advertise-high-metric"}
{

    yang_name = "config"; yang_parent_name = "overload-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::has_data() const
{
    if (is_presence_container) return true;
    return set_bit.is_set
	|| set_bit_on_boot.is_set
	|| advertise_high_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_bit.yfilter)
	|| ydk::is_set(set_bit_on_boot.yfilter)
	|| ydk::is_set(advertise_high_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_bit.is_set || is_set(set_bit.yfilter)) leaf_name_data.push_back(set_bit.get_name_leafdata());
    if (set_bit_on_boot.is_set || is_set(set_bit_on_boot.yfilter)) leaf_name_data.push_back(set_bit_on_boot.get_name_leafdata());
    if (advertise_high_metric.is_set || is_set(advertise_high_metric.yfilter)) leaf_name_data.push_back(advertise_high_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-bit")
    {
        set_bit = value;
        set_bit.value_namespace = name_space;
        set_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-bit-on-boot")
    {
        set_bit_on_boot = value;
        set_bit_on_boot.value_namespace = name_space;
        set_bit_on_boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-high-metric")
    {
        advertise_high_metric = value;
        advertise_high_metric.value_namespace = name_space;
        advertise_high_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-bit")
    {
        set_bit.yfilter = yfilter;
    }
    if(value_path == "set-bit-on-boot")
    {
        set_bit_on_boot.yfilter = yfilter;
    }
    if(value_path == "advertise-high-metric")
    {
        advertise_high_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-bit" || name == "set-bit-on-boot" || name == "advertise-high-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::State()
    :
    set_bit{YType::boolean, "set-bit"},
    set_bit_on_boot{YType::boolean, "set-bit-on-boot"},
    advertise_high_metric{YType::boolean, "advertise-high-metric"}
{

    yang_name = "state"; yang_parent_name = "overload-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::has_data() const
{
    if (is_presence_container) return true;
    return set_bit.is_set
	|| set_bit_on_boot.is_set
	|| advertise_high_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_bit.yfilter)
	|| ydk::is_set(set_bit_on_boot.yfilter)
	|| ydk::is_set(advertise_high_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_bit.is_set || is_set(set_bit.yfilter)) leaf_name_data.push_back(set_bit.get_name_leafdata());
    if (set_bit_on_boot.is_set || is_set(set_bit_on_boot.yfilter)) leaf_name_data.push_back(set_bit_on_boot.get_name_leafdata());
    if (advertise_high_metric.is_set || is_set(advertise_high_metric.yfilter)) leaf_name_data.push_back(advertise_high_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-bit")
    {
        set_bit = value;
        set_bit.value_namespace = name_space;
        set_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-bit-on-boot")
    {
        set_bit_on_boot = value;
        set_bit_on_boot.value_namespace = name_space;
        set_bit_on_boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-high-metric")
    {
        advertise_high_metric = value;
        advertise_high_metric.value_namespace = name_space;
        advertise_high_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-bit")
    {
        set_bit.yfilter = yfilter;
    }
    if(value_path == "set-bit-on-boot")
    {
        set_bit_on_boot.yfilter = yfilter;
    }
    if(value_path == "advertise-high-metric")
    {
        advertise_high_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-bit" || name == "set-bit-on-boot" || name == "advertise-high-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTriggers()
    :
    reset_trigger(this, {"reset_trigger"})
{

    yang_name = "reset-triggers"; yang_parent_name = "overload-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::~ResetTriggers()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reset_trigger.len(); index++)
    {
        if(reset_trigger[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::has_operation() const
{
    for (std::size_t index=0; index<reset_trigger.len(); index++)
    {
        if(reset_trigger[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reset-trigger")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger>();
        ent_->parent = this;
        reset_trigger.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reset_trigger.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset-trigger")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::ResetTrigger()
    :
    reset_trigger{YType::identityref, "reset-trigger"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "reset-trigger"; yang_parent_name = "reset-triggers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::~ResetTrigger()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::has_data() const
{
    if (is_presence_container) return true;
    return reset_trigger.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reset_trigger.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-trigger";
    ADD_KEY_TOKEN(reset_trigger, "reset-trigger");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reset_trigger.is_set || is_set(reset_trigger.yfilter)) leaf_name_data.push_back(reset_trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger = value;
        reset_trigger.value_namespace = name_space;
        reset_trigger.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "reset-trigger")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::Config()
    :
    reset_trigger{YType::identityref, "reset-trigger"},
    delay{YType::uint16, "delay"}
{

    yang_name = "config"; yang_parent_name = "reset-trigger"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::has_data() const
{
    if (is_presence_container) return true;
    return reset_trigger.is_set
	|| delay.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reset_trigger.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reset_trigger.is_set || is_set(reset_trigger.yfilter)) leaf_name_data.push_back(reset_trigger.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger = value;
        reset_trigger.value_namespace = name_space;
        reset_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset-trigger" || name == "delay")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::State()
    :
    reset_trigger{YType::identityref, "reset-trigger"},
    delay{YType::uint16, "delay"}
{

    yang_name = "state"; yang_parent_name = "reset-trigger"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::has_data() const
{
    if (is_presence_container) return true;
    return reset_trigger.is_set
	|| delay.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reset_trigger.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reset_trigger.is_set || is_set(reset_trigger.yfilter)) leaf_name_data.push_back(reset_trigger.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger = value;
        reset_trigger.value_namespace = name_space;
        reset_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset-trigger" || name == "delay")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::AttachedBit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "attached-bit"; yang_parent_name = "lsp-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::~AttachedBit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::Config()
    :
    ignore_bit{YType::boolean, "ignore-bit"},
    suppress_bit{YType::boolean, "suppress-bit"}
{

    yang_name = "config"; yang_parent_name = "attached-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::has_data() const
{
    if (is_presence_container) return true;
    return ignore_bit.is_set
	|| suppress_bit.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_bit.yfilter)
	|| ydk::is_set(suppress_bit.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bit.is_set || is_set(ignore_bit.yfilter)) leaf_name_data.push_back(ignore_bit.get_name_leafdata());
    if (suppress_bit.is_set || is_set(suppress_bit.yfilter)) leaf_name_data.push_back(suppress_bit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-bit")
    {
        ignore_bit = value;
        ignore_bit.value_namespace = name_space;
        ignore_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-bit")
    {
        suppress_bit = value;
        suppress_bit.value_namespace = name_space;
        suppress_bit.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-bit")
    {
        ignore_bit.yfilter = yfilter;
    }
    if(value_path == "suppress-bit")
    {
        suppress_bit.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-bit" || name == "suppress-bit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::State()
    :
    ignore_bit{YType::boolean, "ignore-bit"},
    suppress_bit{YType::boolean, "suppress-bit"}
{

    yang_name = "state"; yang_parent_name = "attached-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::has_data() const
{
    if (is_presence_container) return true;
    return ignore_bit.is_set
	|| suppress_bit.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_bit.yfilter)
	|| ydk::is_set(suppress_bit.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bit.is_set || is_set(ignore_bit.yfilter)) leaf_name_data.push_back(ignore_bit.get_name_leafdata());
    if (suppress_bit.is_set || is_set(suppress_bit.yfilter)) leaf_name_data.push_back(suppress_bit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-bit")
    {
        ignore_bit = value;
        ignore_bit.value_namespace = name_space;
        ignore_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-bit")
    {
        suppress_bit = value;
        suppress_bit.value_namespace = name_space;
        suppress_bit.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-bit")
    {
        ignore_bit.yfilter = yfilter;
    }
    if(value_path == "suppress-bit")
    {
        suppress_bit.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-bit" || name == "suppress-bit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::ReferenceBandwidth()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "reference-bandwidth"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::~ReferenceBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::Config()
    :
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{

    yang_name = "config"; yang_parent_name = "reference-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::has_data() const
{
    if (is_presence_container) return true;
    return reference_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reference_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reference_bandwidth.is_set || is_set(reference_bandwidth.yfilter)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
        reference_bandwidth.value_namespace = name_space;
        reference_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::State()
    :
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "reference-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return reference_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reference_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reference_bandwidth.is_set || is_set(reference_bandwidth.yfilter)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
        reference_bandwidth.value_namespace = name_space;
        reference_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::ReferenceBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Nsr()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "nsr"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::~Nsr()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::~GracefulRestart()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| helper_only.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "helper-only")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| helper_only.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "helper-only")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Timers()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State>())
    , spf(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf>())
    , lsp_generation(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration>())
{
    config->parent = this;
    state->parent = this;
    spf->parent = this;
    lsp_generation->parent = this;

    yang_name = "timers"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::~Timers()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (spf !=  nullptr && spf->has_data())
	|| (lsp_generation !=  nullptr && lsp_generation->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (spf !=  nullptr && spf->has_operation())
	|| (lsp_generation !=  nullptr && lsp_generation->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State>();
        }
        return state;
    }

    if(child_yang_name == "spf")
    {
        if(spf == nullptr)
        {
            spf = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf>();
        }
        return spf;
    }

    if(child_yang_name == "lsp-generation")
    {
        if(lsp_generation == nullptr)
        {
            lsp_generation = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration>();
        }
        return lsp_generation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(spf != nullptr)
    {
        _children["spf"] = spf;
    }

    if(lsp_generation != nullptr)
    {
        _children["lsp-generation"] = lsp_generation;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "spf" || name == "lsp-generation")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::Config()
    :
    lsp_lifetime_interval{YType::uint16, "lsp-lifetime-interval"},
    lsp_refresh_interval{YType::uint16, "lsp-refresh-interval"}
{

    yang_name = "config"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::has_data() const
{
    if (is_presence_container) return true;
    return lsp_lifetime_interval.is_set
	|| lsp_refresh_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_lifetime_interval.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_lifetime_interval.is_set || is_set(lsp_lifetime_interval.yfilter)) leaf_name_data.push_back(lsp_lifetime_interval.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-lifetime-interval")
    {
        lsp_lifetime_interval = value;
        lsp_lifetime_interval.value_namespace = name_space;
        lsp_lifetime_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
        lsp_refresh_interval.value_namespace = name_space;
        lsp_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-lifetime-interval")
    {
        lsp_lifetime_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-lifetime-interval" || name == "lsp-refresh-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::State()
    :
    lsp_lifetime_interval{YType::uint16, "lsp-lifetime-interval"},
    lsp_refresh_interval{YType::uint16, "lsp-refresh-interval"}
{

    yang_name = "state"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::has_data() const
{
    if (is_presence_container) return true;
    return lsp_lifetime_interval.is_set
	|| lsp_refresh_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_lifetime_interval.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_lifetime_interval.is_set || is_set(lsp_lifetime_interval.yfilter)) leaf_name_data.push_back(lsp_lifetime_interval.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-lifetime-interval")
    {
        lsp_lifetime_interval = value;
        lsp_lifetime_interval.value_namespace = name_space;
        lsp_lifetime_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
        lsp_refresh_interval.value_namespace = name_space;
        lsp_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-lifetime-interval")
    {
        lsp_lifetime_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-lifetime-interval" || name == "lsp-refresh-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Spf()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "spf"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::~Spf()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::Config()
    :
    spf_hold_interval{YType::uint64, "spf-hold-interval"},
    spf_first_interval{YType::uint64, "spf-first-interval"},
    spf_second_interval{YType::uint64, "spf-second-interval"}
{

    yang_name = "config"; yang_parent_name = "spf"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::has_data() const
{
    if (is_presence_container) return true;
    return spf_hold_interval.is_set
	|| spf_first_interval.is_set
	|| spf_second_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_hold_interval.yfilter)
	|| ydk::is_set(spf_first_interval.yfilter)
	|| ydk::is_set(spf_second_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_hold_interval.is_set || is_set(spf_hold_interval.yfilter)) leaf_name_data.push_back(spf_hold_interval.get_name_leafdata());
    if (spf_first_interval.is_set || is_set(spf_first_interval.yfilter)) leaf_name_data.push_back(spf_first_interval.get_name_leafdata());
    if (spf_second_interval.is_set || is_set(spf_second_interval.yfilter)) leaf_name_data.push_back(spf_second_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-hold-interval")
    {
        spf_hold_interval = value;
        spf_hold_interval.value_namespace = name_space;
        spf_hold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-first-interval")
    {
        spf_first_interval = value;
        spf_first_interval.value_namespace = name_space;
        spf_first_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-second-interval")
    {
        spf_second_interval = value;
        spf_second_interval.value_namespace = name_space;
        spf_second_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-hold-interval")
    {
        spf_hold_interval.yfilter = yfilter;
    }
    if(value_path == "spf-first-interval")
    {
        spf_first_interval.yfilter = yfilter;
    }
    if(value_path == "spf-second-interval")
    {
        spf_second_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-hold-interval" || name == "spf-first-interval" || name == "spf-second-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::State()
    :
    spf_hold_interval{YType::uint64, "spf-hold-interval"},
    spf_first_interval{YType::uint64, "spf-first-interval"},
    spf_second_interval{YType::uint64, "spf-second-interval"},
    adaptive_timer{YType::enumeration, "adaptive-timer"}
{

    yang_name = "state"; yang_parent_name = "spf"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::has_data() const
{
    if (is_presence_container) return true;
    return spf_hold_interval.is_set
	|| spf_first_interval.is_set
	|| spf_second_interval.is_set
	|| adaptive_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_hold_interval.yfilter)
	|| ydk::is_set(spf_first_interval.yfilter)
	|| ydk::is_set(spf_second_interval.yfilter)
	|| ydk::is_set(adaptive_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_hold_interval.is_set || is_set(spf_hold_interval.yfilter)) leaf_name_data.push_back(spf_hold_interval.get_name_leafdata());
    if (spf_first_interval.is_set || is_set(spf_first_interval.yfilter)) leaf_name_data.push_back(spf_first_interval.get_name_leafdata());
    if (spf_second_interval.is_set || is_set(spf_second_interval.yfilter)) leaf_name_data.push_back(spf_second_interval.get_name_leafdata());
    if (adaptive_timer.is_set || is_set(adaptive_timer.yfilter)) leaf_name_data.push_back(adaptive_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-hold-interval")
    {
        spf_hold_interval = value;
        spf_hold_interval.value_namespace = name_space;
        spf_hold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-first-interval")
    {
        spf_first_interval = value;
        spf_first_interval.value_namespace = name_space;
        spf_first_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-second-interval")
    {
        spf_second_interval = value;
        spf_second_interval.value_namespace = name_space;
        spf_second_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adaptive-timer")
    {
        adaptive_timer = value;
        adaptive_timer.value_namespace = name_space;
        adaptive_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-hold-interval")
    {
        spf_hold_interval.yfilter = yfilter;
    }
    if(value_path == "spf-first-interval")
    {
        spf_first_interval.yfilter = yfilter;
    }
    if(value_path == "spf-second-interval")
    {
        spf_second_interval.yfilter = yfilter;
    }
    if(value_path == "adaptive-timer")
    {
        adaptive_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-hold-interval" || name == "spf-first-interval" || name == "spf-second-interval" || name == "adaptive-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::LspGeneration()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "lsp-generation"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::~LspGeneration()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-generation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::Config()
    :
    lsp_max_wait_interval{YType::uint64, "lsp-max-wait-interval"},
    lsp_first_wait_interval{YType::uint64, "lsp-first-wait-interval"},
    lsp_second_wait_interval{YType::uint64, "lsp-second-wait-interval"}
{

    yang_name = "config"; yang_parent_name = "lsp-generation"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::has_data() const
{
    if (is_presence_container) return true;
    return lsp_max_wait_interval.is_set
	|| lsp_first_wait_interval.is_set
	|| lsp_second_wait_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_max_wait_interval.yfilter)
	|| ydk::is_set(lsp_first_wait_interval.yfilter)
	|| ydk::is_set(lsp_second_wait_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_max_wait_interval.is_set || is_set(lsp_max_wait_interval.yfilter)) leaf_name_data.push_back(lsp_max_wait_interval.get_name_leafdata());
    if (lsp_first_wait_interval.is_set || is_set(lsp_first_wait_interval.yfilter)) leaf_name_data.push_back(lsp_first_wait_interval.get_name_leafdata());
    if (lsp_second_wait_interval.is_set || is_set(lsp_second_wait_interval.yfilter)) leaf_name_data.push_back(lsp_second_wait_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-max-wait-interval")
    {
        lsp_max_wait_interval = value;
        lsp_max_wait_interval.value_namespace = name_space;
        lsp_max_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-first-wait-interval")
    {
        lsp_first_wait_interval = value;
        lsp_first_wait_interval.value_namespace = name_space;
        lsp_first_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-second-wait-interval")
    {
        lsp_second_wait_interval = value;
        lsp_second_wait_interval.value_namespace = name_space;
        lsp_second_wait_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-max-wait-interval")
    {
        lsp_max_wait_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-first-wait-interval")
    {
        lsp_first_wait_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-second-wait-interval")
    {
        lsp_second_wait_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-max-wait-interval" || name == "lsp-first-wait-interval" || name == "lsp-second-wait-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::State()
    :
    lsp_max_wait_interval{YType::uint64, "lsp-max-wait-interval"},
    lsp_first_wait_interval{YType::uint64, "lsp-first-wait-interval"},
    lsp_second_wait_interval{YType::uint64, "lsp-second-wait-interval"},
    adaptive_timer{YType::enumeration, "adaptive-timer"}
{

    yang_name = "state"; yang_parent_name = "lsp-generation"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::has_data() const
{
    if (is_presence_container) return true;
    return lsp_max_wait_interval.is_set
	|| lsp_first_wait_interval.is_set
	|| lsp_second_wait_interval.is_set
	|| adaptive_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_max_wait_interval.yfilter)
	|| ydk::is_set(lsp_first_wait_interval.yfilter)
	|| ydk::is_set(lsp_second_wait_interval.yfilter)
	|| ydk::is_set(adaptive_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_max_wait_interval.is_set || is_set(lsp_max_wait_interval.yfilter)) leaf_name_data.push_back(lsp_max_wait_interval.get_name_leafdata());
    if (lsp_first_wait_interval.is_set || is_set(lsp_first_wait_interval.yfilter)) leaf_name_data.push_back(lsp_first_wait_interval.get_name_leafdata());
    if (lsp_second_wait_interval.is_set || is_set(lsp_second_wait_interval.yfilter)) leaf_name_data.push_back(lsp_second_wait_interval.get_name_leafdata());
    if (adaptive_timer.is_set || is_set(adaptive_timer.yfilter)) leaf_name_data.push_back(adaptive_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-max-wait-interval")
    {
        lsp_max_wait_interval = value;
        lsp_max_wait_interval.value_namespace = name_space;
        lsp_max_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-first-wait-interval")
    {
        lsp_first_wait_interval = value;
        lsp_first_wait_interval.value_namespace = name_space;
        lsp_first_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-second-wait-interval")
    {
        lsp_second_wait_interval = value;
        lsp_second_wait_interval.value_namespace = name_space;
        lsp_second_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adaptive-timer")
    {
        adaptive_timer = value;
        adaptive_timer.value_namespace = name_space;
        adaptive_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-max-wait-interval")
    {
        lsp_max_wait_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-first-wait-interval")
    {
        lsp_first_wait_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-second-wait-interval")
    {
        lsp_second_wait_interval.yfilter = yfilter;
    }
    if(value_path == "adaptive-timer")
    {
        adaptive_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-max-wait-interval" || name == "lsp-first-wait-interval" || name == "lsp-second-wait-interval" || name == "adaptive-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Transport()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "transport"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::~Transport()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::Config()
    :
    lsp_mtu_size{YType::uint16, "lsp-mtu-size"}
{

    yang_name = "config"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::has_data() const
{
    if (is_presence_container) return true;
    return lsp_mtu_size.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_mtu_size.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_mtu_size.is_set || is_set(lsp_mtu_size.yfilter)) leaf_name_data.push_back(lsp_mtu_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-mtu-size")
    {
        lsp_mtu_size = value;
        lsp_mtu_size.value_namespace = name_space;
        lsp_mtu_size.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-mtu-size")
    {
        lsp_mtu_size.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-mtu-size")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::State()
    :
    lsp_mtu_size{YType::uint16, "lsp-mtu-size"}
{

    yang_name = "state"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::has_data() const
{
    if (is_presence_container) return true;
    return lsp_mtu_size.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_mtu_size.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_mtu_size.is_set || is_set(lsp_mtu_size.yfilter)) leaf_name_data.push_back(lsp_mtu_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-mtu-size")
    {
        lsp_mtu_size = value;
        lsp_mtu_size.value_namespace = name_space;
        lsp_mtu_size.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-mtu-size")
    {
        lsp_mtu_size.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-mtu-size")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::Mpls()
    :
    igp_ldp_sync(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync>())
{
    igp_ldp_sync->parent = this;

    yang_name = "mpls"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::~Mpls()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (igp_ldp_sync !=  nullptr && igp_ldp_sync->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (igp_ldp_sync !=  nullptr && igp_ldp_sync->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-ldp-sync")
    {
        if(igp_ldp_sync == nullptr)
        {
            igp_ldp_sync = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync>();
        }
        return igp_ldp_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp_ldp_sync != nullptr)
    {
        _children["igp-ldp-sync"] = igp_ldp_sync;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-ldp-sync")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::IgpLdpSync()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "igp-ldp-sync"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::~IgpLdpSync()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-ldp-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    post_session_up_delay{YType::uint16, "post-session-up-delay"}
{

    yang_name = "config"; yang_parent_name = "igp-ldp-sync"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| post_session_up_delay.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(post_session_up_delay.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (post_session_up_delay.is_set || is_set(post_session_up_delay.yfilter)) leaf_name_data.push_back(post_session_up_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "post-session-up-delay")
    {
        post_session_up_delay = value;
        post_session_up_delay.value_namespace = name_space;
        post_session_up_delay.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "post-session-up-delay")
    {
        post_session_up_delay.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "post-session-up-delay")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::State()
    :
    enabled{YType::boolean, "enabled"},
    post_session_up_delay{YType::uint16, "post-session-up-delay"}
{

    yang_name = "state"; yang_parent_name = "igp-ldp-sync"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| post_session_up_delay.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(post_session_up_delay.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (post_session_up_delay.is_set || is_set(post_session_up_delay.yfilter)) leaf_name_data.push_back(post_session_up_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "post-session-up-delay")
    {
        post_session_up_delay = value;
        post_session_up_delay.value_namespace = name_space;
        post_session_up_delay.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "post-session-up-delay")
    {
        post_session_up_delay.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "post-session-up-delay")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::IgpShortcuts()
    :
    afi(this, {"afi_name"})
{

    yang_name = "igp-shortcuts"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::~IgpShortcuts()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afi.len(); index++)
    {
        if(afi[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::has_operation() const
{
    for (std::size_t index=0; index<afi.len(); index++)
    {
        if(afi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-shortcuts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi>();
        ent_->parent = this;
        afi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : afi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Afi()
    :
    afi_name{YType::identityref, "afi-name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "afi"; yang_parent_name = "igp-shortcuts"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::~Afi()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi";
    ADD_KEY_TOKEN(afi_name, "afi-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "afi-name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::Config()
    :
    afi_name{YType::identityref, "afi-name"},
    nh_type{YType::identityref, "nh-type"}
{

    yang_name = "config"; yang_parent_name = "afi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : nh_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return afi_name.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::has_operation() const
{
    for (auto const & leaf : nh_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(nh_type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());

    auto nh_type_name_datas = nh_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nh_type_name_datas.begin(), nh_type_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-type")
    {
        Identity identity{name_space, name_space_prefix, value};
        nh_type.append(identity);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "nh-type")
    {
        nh_type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "nh-type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::State()
    :
    afi_name{YType::identityref, "afi-name"},
    nh_type{YType::identityref, "nh-type"}
{

    yang_name = "state"; yang_parent_name = "afi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : nh_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return afi_name.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::has_operation() const
{
    for (auto const & leaf : nh_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(nh_type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());

    auto nh_type_name_datas = nh_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nh_type_name_datas.begin(), nh_type_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-type")
    {
        Identity identity{name_space, name_space_prefix, value};
        nh_type.append(identity);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "nh-type")
    {
        nh_type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "nh-type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::AfiSafi()
    :
    af(this, {"afi_name", "safi_name"})
{

    yang_name = "afi-safi"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::~AfiSafi()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Af()
    :
    afi_name{YType::identityref, "afi-name"},
    safi_name{YType::identityref, "safi-name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State>())
    , multi_topology(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology>())
{
    config->parent = this;
    state->parent = this;
    multi_topology->parent = this;

    yang_name = "af"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::~Af()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (multi_topology !=  nullptr && multi_topology->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (multi_topology !=  nullptr && multi_topology->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(afi_name, "afi-name");
    ADD_KEY_TOKEN(safi_name, "safi-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State>();
        }
        return state;
    }

    if(child_yang_name == "multi-topology")
    {
        if(multi_topology == nullptr)
        {
            multi_topology = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology>();
        }
        return multi_topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(multi_topology != nullptr)
    {
        _children["multi-topology"] = multi_topology;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "multi-topology" || name == "afi-name" || name == "safi-name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::Config()
    :
    afi_name{YType::identityref, "afi-name"},
    safi_name{YType::identityref, "safi-name"},
    metric{YType::uint32, "metric"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| metric.is_set
	|| enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "safi-name" || name == "metric" || name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::State()
    :
    afi_name{YType::identityref, "afi-name"},
    safi_name{YType::identityref, "safi-name"},
    metric{YType::uint32, "metric"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| metric.is_set
	|| enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "safi-name" || name == "metric" || name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::MultiTopology()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "multi-topology"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::~MultiTopology()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::Config()
    :
    afi_name{YType::identityref, "afi-name"},
    safi_name{YType::identityref, "safi-name"}
{

    yang_name = "config"; yang_parent_name = "multi-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "safi-name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::State()
    :
    afi_name{YType::identityref, "afi-name"},
    safi_name{YType::identityref, "safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "multi-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "safi-name" || name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::SegmentRouting()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::~SegmentRouting()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    srgb{YType::str, "srgb"},
    srlb{YType::str, "srlb"}
{

    yang_name = "config"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| srgb.is_set
	|| srlb.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(srgb.yfilter)
	|| ydk::is_set(srlb.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (srgb.is_set || is_set(srgb.yfilter)) leaf_name_data.push_back(srgb.get_name_leafdata());
    if (srlb.is_set || is_set(srlb.yfilter)) leaf_name_data.push_back(srlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb")
    {
        srgb = value;
        srgb.value_namespace = name_space;
        srgb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb")
    {
        srlb = value;
        srlb.value_namespace = name_space;
        srlb.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "srgb")
    {
        srgb.yfilter = yfilter;
    }
    if(value_path == "srlb")
    {
        srlb.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "srgb" || name == "srlb")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::State()
    :
    enabled{YType::boolean, "enabled"},
    srgb{YType::str, "srgb"},
    srlb{YType::str, "srlb"}
{

    yang_name = "state"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| srgb.is_set
	|| srlb.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(srgb.yfilter)
	|| ydk::is_set(srlb.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (srgb.is_set || is_set(srgb.yfilter)) leaf_name_data.push_back(srgb.get_name_leafdata());
    if (srlb.is_set || is_set(srlb.yfilter)) leaf_name_data.push_back(srlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb")
    {
        srgb = value;
        srgb.value_namespace = name_space;
        srgb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb")
    {
        srlb = value;
        srlb.value_namespace = name_space;
        srlb.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "srgb")
    {
        srgb.yfilter = yfilter;
    }
    if(value_path == "srlb")
    {
        srlb.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "srgb" || name == "srlb")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::InterLevelPropagationPolicies()
    :
    level1_to_level2(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2>())
    , level2_to_level1(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1>())
{
    level1_to_level2->parent = this;
    level2_to_level1->parent = this;

    yang_name = "inter-level-propagation-policies"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::~InterLevelPropagationPolicies()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::has_data() const
{
    if (is_presence_container) return true;
    return (level1_to_level2 !=  nullptr && level1_to_level2->has_data())
	|| (level2_to_level1 !=  nullptr && level2_to_level1->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::has_operation() const
{
    return is_set(yfilter)
	|| (level1_to_level2 !=  nullptr && level1_to_level2->has_operation())
	|| (level2_to_level1 !=  nullptr && level2_to_level1->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-level-propagation-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level1-to-level2")
    {
        if(level1_to_level2 == nullptr)
        {
            level1_to_level2 = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2>();
        }
        return level1_to_level2;
    }

    if(child_yang_name == "level2-to-level1")
    {
        if(level2_to_level1 == nullptr)
        {
            level2_to_level1 = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1>();
        }
        return level2_to_level1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level1_to_level2 != nullptr)
    {
        _children["level1-to-level2"] = level1_to_level2;
    }

    if(level2_to_level1 != nullptr)
    {
        _children["level2-to-level1"] = level2_to_level1;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level1-to-level2" || name == "level2-to-level1")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Level1ToLevel2()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "level1-to-level2"; yang_parent_name = "inter-level-propagation-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::~Level1ToLevel2()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-to-level2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::Config()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"}
{

    yang_name = "config"; yang_parent_name = "level1-to-level2"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::State()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"}
{

    yang_name = "state"; yang_parent_name = "level1-to-level2"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Level2ToLevel1()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "level2-to-level1"; yang_parent_name = "inter-level-propagation-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::~Level2ToLevel1()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-to-level1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::Config()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"}
{

    yang_name = "config"; yang_parent_name = "level2-to-level1"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::State()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"}
{

    yang_name = "state"; yang_parent_name = "level2-to-level1"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Levels()
    :
    level(this, {"level_number"})
{

    yang_name = "levels"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::~Levels()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_children() const
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

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Level()
    :
    level_number{YType::str, "level-number"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State>())
    , system_level_counters(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters>())
    , link_state_database(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase>())
    , traffic_engineering(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering>())
    , route_preference(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference>())
    , authentication(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication>())
{
    config->parent = this;
    state->parent = this;
    system_level_counters->parent = this;
    link_state_database->parent = this;
    traffic_engineering->parent = this;
    route_preference->parent = this;
    authentication->parent = this;

    yang_name = "level"; yang_parent_name = "levels"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::~Level()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::has_data() const
{
    if (is_presence_container) return true;
    return level_number.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (system_level_counters !=  nullptr && system_level_counters->has_data())
	|| (link_state_database !=  nullptr && link_state_database->has_data())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_data())
	|| (route_preference !=  nullptr && route_preference->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_number.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (system_level_counters !=  nullptr && system_level_counters->has_operation())
	|| (link_state_database !=  nullptr && link_state_database->has_operation())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_operation())
	|| (route_preference !=  nullptr && route_preference->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(level_number, "level-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_number.is_set || is_set(level_number.yfilter)) leaf_name_data.push_back(level_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State>();
        }
        return state;
    }

    if(child_yang_name == "system-level-counters")
    {
        if(system_level_counters == nullptr)
        {
            system_level_counters = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters>();
        }
        return system_level_counters;
    }

    if(child_yang_name == "link-state-database")
    {
        if(link_state_database == nullptr)
        {
            link_state_database = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase>();
        }
        return link_state_database;
    }

    if(child_yang_name == "traffic-engineering")
    {
        if(traffic_engineering == nullptr)
        {
            traffic_engineering = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering>();
        }
        return traffic_engineering;
    }

    if(child_yang_name == "route-preference")
    {
        if(route_preference == nullptr)
        {
            route_preference = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference>();
        }
        return route_preference;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(system_level_counters != nullptr)
    {
        _children["system-level-counters"] = system_level_counters;
    }

    if(link_state_database != nullptr)
    {
        _children["link-state-database"] = link_state_database;
    }

    if(traffic_engineering != nullptr)
    {
        _children["traffic-engineering"] = traffic_engineering;
    }

    if(route_preference != nullptr)
    {
        _children["route-preference"] = route_preference;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-number")
    {
        level_number = value;
        level_number.value_namespace = name_space;
        level_number.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-number")
    {
        level_number.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "system-level-counters" || name == "link-state-database" || name == "traffic-engineering" || name == "route-preference" || name == "authentication" || name == "level-number")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    level_number{YType::uint8, "level-number"},
    metric_style{YType::enumeration, "metric-style"},
    authentication_check{YType::boolean, "authentication-check"}
{

    yang_name = "config"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| level_number.is_set
	|| metric_style.is_set
	|| authentication_check.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(level_number.yfilter)
	|| ydk::is_set(metric_style.yfilter)
	|| ydk::is_set(authentication_check.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (level_number.is_set || is_set(level_number.yfilter)) leaf_name_data.push_back(level_number.get_name_leafdata());
    if (metric_style.is_set || is_set(metric_style.yfilter)) leaf_name_data.push_back(metric_style.get_name_leafdata());
    if (authentication_check.is_set || is_set(authentication_check.yfilter)) leaf_name_data.push_back(authentication_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-number")
    {
        level_number = value;
        level_number.value_namespace = name_space;
        level_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-style")
    {
        metric_style = value;
        metric_style.value_namespace = name_space;
        metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-check")
    {
        authentication_check = value;
        authentication_check.value_namespace = name_space;
        authentication_check.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "level-number")
    {
        level_number.yfilter = yfilter;
    }
    if(value_path == "metric-style")
    {
        metric_style.yfilter = yfilter;
    }
    if(value_path == "authentication-check")
    {
        authentication_check.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "level-number" || name == "metric-style" || name == "authentication-check")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::State()
    :
    enabled{YType::boolean, "enabled"},
    level_number{YType::uint8, "level-number"},
    metric_style{YType::enumeration, "metric-style"},
    authentication_check{YType::boolean, "authentication-check"}
{

    yang_name = "state"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| level_number.is_set
	|| metric_style.is_set
	|| authentication_check.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(level_number.yfilter)
	|| ydk::is_set(metric_style.yfilter)
	|| ydk::is_set(authentication_check.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (level_number.is_set || is_set(level_number.yfilter)) leaf_name_data.push_back(level_number.get_name_leafdata());
    if (metric_style.is_set || is_set(metric_style.yfilter)) leaf_name_data.push_back(metric_style.get_name_leafdata());
    if (authentication_check.is_set || is_set(authentication_check.yfilter)) leaf_name_data.push_back(authentication_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-number")
    {
        level_number = value;
        level_number.value_namespace = name_space;
        level_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-style")
    {
        metric_style = value;
        metric_style.value_namespace = name_space;
        metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-check")
    {
        authentication_check = value;
        authentication_check.value_namespace = name_space;
        authentication_check.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "level-number")
    {
        level_number.yfilter = yfilter;
    }
    if(value_path == "metric-style")
    {
        metric_style.yfilter = yfilter;
    }
    if(value_path == "authentication-check")
    {
        authentication_check.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "level-number" || name == "metric-style" || name == "authentication-check")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::SystemLevelCounters()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State>())
{
    state->parent = this;

    yang_name = "system-level-counters"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::~SystemLevelCounters()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-level-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::State()
    :
    corrupted_lsps{YType::uint32, "corrupted-lsps"},
    database_overloads{YType::uint32, "database-overloads"},
    manual_address_drop_from_areas{YType::uint32, "manual-address-drop-from-areas"},
    exceed_max_seq_nums{YType::uint32, "exceed-max-seq-nums"},
    seq_num_skips{YType::uint32, "seq-num-skips"},
    own_lsp_purges{YType::uint32, "own-lsp-purges"},
    id_len_mismatch{YType::uint32, "id-len-mismatch"},
    part_changes{YType::uint32, "part-changes"},
    max_area_address_mismatches{YType::uint32, "max-area-address-mismatches"},
    auth_fails{YType::uint32, "auth-fails"},
    spf_runs{YType::uint32, "spf-runs"},
    auth_type_fails{YType::uint32, "auth-type-fails"},
    lsp_errors{YType::uint32, "lsp-errors"}
{

    yang_name = "state"; yang_parent_name = "system-level-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::has_data() const
{
    if (is_presence_container) return true;
    return corrupted_lsps.is_set
	|| database_overloads.is_set
	|| manual_address_drop_from_areas.is_set
	|| exceed_max_seq_nums.is_set
	|| seq_num_skips.is_set
	|| own_lsp_purges.is_set
	|| id_len_mismatch.is_set
	|| part_changes.is_set
	|| max_area_address_mismatches.is_set
	|| auth_fails.is_set
	|| spf_runs.is_set
	|| auth_type_fails.is_set
	|| lsp_errors.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(corrupted_lsps.yfilter)
	|| ydk::is_set(database_overloads.yfilter)
	|| ydk::is_set(manual_address_drop_from_areas.yfilter)
	|| ydk::is_set(exceed_max_seq_nums.yfilter)
	|| ydk::is_set(seq_num_skips.yfilter)
	|| ydk::is_set(own_lsp_purges.yfilter)
	|| ydk::is_set(id_len_mismatch.yfilter)
	|| ydk::is_set(part_changes.yfilter)
	|| ydk::is_set(max_area_address_mismatches.yfilter)
	|| ydk::is_set(auth_fails.yfilter)
	|| ydk::is_set(spf_runs.yfilter)
	|| ydk::is_set(auth_type_fails.yfilter)
	|| ydk::is_set(lsp_errors.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (corrupted_lsps.is_set || is_set(corrupted_lsps.yfilter)) leaf_name_data.push_back(corrupted_lsps.get_name_leafdata());
    if (database_overloads.is_set || is_set(database_overloads.yfilter)) leaf_name_data.push_back(database_overloads.get_name_leafdata());
    if (manual_address_drop_from_areas.is_set || is_set(manual_address_drop_from_areas.yfilter)) leaf_name_data.push_back(manual_address_drop_from_areas.get_name_leafdata());
    if (exceed_max_seq_nums.is_set || is_set(exceed_max_seq_nums.yfilter)) leaf_name_data.push_back(exceed_max_seq_nums.get_name_leafdata());
    if (seq_num_skips.is_set || is_set(seq_num_skips.yfilter)) leaf_name_data.push_back(seq_num_skips.get_name_leafdata());
    if (own_lsp_purges.is_set || is_set(own_lsp_purges.yfilter)) leaf_name_data.push_back(own_lsp_purges.get_name_leafdata());
    if (id_len_mismatch.is_set || is_set(id_len_mismatch.yfilter)) leaf_name_data.push_back(id_len_mismatch.get_name_leafdata());
    if (part_changes.is_set || is_set(part_changes.yfilter)) leaf_name_data.push_back(part_changes.get_name_leafdata());
    if (max_area_address_mismatches.is_set || is_set(max_area_address_mismatches.yfilter)) leaf_name_data.push_back(max_area_address_mismatches.get_name_leafdata());
    if (auth_fails.is_set || is_set(auth_fails.yfilter)) leaf_name_data.push_back(auth_fails.get_name_leafdata());
    if (spf_runs.is_set || is_set(spf_runs.yfilter)) leaf_name_data.push_back(spf_runs.get_name_leafdata());
    if (auth_type_fails.is_set || is_set(auth_type_fails.yfilter)) leaf_name_data.push_back(auth_type_fails.get_name_leafdata());
    if (lsp_errors.is_set || is_set(lsp_errors.yfilter)) leaf_name_data.push_back(lsp_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "corrupted-lsps")
    {
        corrupted_lsps = value;
        corrupted_lsps.value_namespace = name_space;
        corrupted_lsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-overloads")
    {
        database_overloads = value;
        database_overloads.value_namespace = name_space;
        database_overloads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-address-drop-from-areas")
    {
        manual_address_drop_from_areas = value;
        manual_address_drop_from_areas.value_namespace = name_space;
        manual_address_drop_from_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-max-seq-nums")
    {
        exceed_max_seq_nums = value;
        exceed_max_seq_nums.value_namespace = name_space;
        exceed_max_seq_nums.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num-skips")
    {
        seq_num_skips = value;
        seq_num_skips.value_namespace = name_space;
        seq_num_skips.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "own-lsp-purges")
    {
        own_lsp_purges = value;
        own_lsp_purges.value_namespace = name_space;
        own_lsp_purges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-len-mismatch")
    {
        id_len_mismatch = value;
        id_len_mismatch.value_namespace = name_space;
        id_len_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-changes")
    {
        part_changes = value;
        part_changes.value_namespace = name_space;
        part_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-address-mismatches")
    {
        max_area_address_mismatches = value;
        max_area_address_mismatches.value_namespace = name_space;
        max_area_address_mismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-fails")
    {
        auth_fails = value;
        auth_fails.value_namespace = name_space;
        auth_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-runs")
    {
        spf_runs = value;
        spf_runs.value_namespace = name_space;
        spf_runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type-fails")
    {
        auth_type_fails = value;
        auth_type_fails.value_namespace = name_space;
        auth_type_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-errors")
    {
        lsp_errors = value;
        lsp_errors.value_namespace = name_space;
        lsp_errors.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "corrupted-lsps")
    {
        corrupted_lsps.yfilter = yfilter;
    }
    if(value_path == "database-overloads")
    {
        database_overloads.yfilter = yfilter;
    }
    if(value_path == "manual-address-drop-from-areas")
    {
        manual_address_drop_from_areas.yfilter = yfilter;
    }
    if(value_path == "exceed-max-seq-nums")
    {
        exceed_max_seq_nums.yfilter = yfilter;
    }
    if(value_path == "seq-num-skips")
    {
        seq_num_skips.yfilter = yfilter;
    }
    if(value_path == "own-lsp-purges")
    {
        own_lsp_purges.yfilter = yfilter;
    }
    if(value_path == "id-len-mismatch")
    {
        id_len_mismatch.yfilter = yfilter;
    }
    if(value_path == "part-changes")
    {
        part_changes.yfilter = yfilter;
    }
    if(value_path == "max-area-address-mismatches")
    {
        max_area_address_mismatches.yfilter = yfilter;
    }
    if(value_path == "auth-fails")
    {
        auth_fails.yfilter = yfilter;
    }
    if(value_path == "spf-runs")
    {
        spf_runs.yfilter = yfilter;
    }
    if(value_path == "auth-type-fails")
    {
        auth_type_fails.yfilter = yfilter;
    }
    if(value_path == "lsp-errors")
    {
        lsp_errors.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "corrupted-lsps" || name == "database-overloads" || name == "manual-address-drop-from-areas" || name == "exceed-max-seq-nums" || name == "seq-num-skips" || name == "own-lsp-purges" || name == "id-len-mismatch" || name == "part-changes" || name == "max-area-address-mismatches" || name == "auth-fails" || name == "spf-runs" || name == "auth-type-fails" || name == "lsp-errors")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::LinkStateDatabase()
    :
    lsp(this, {"lsp_id"})
{

    yang_name = "link-state-database"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::~LinkStateDatabase()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp.len(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::has_operation() const
{
    for (std::size_t index=0; index<lsp.len(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-state-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp>();
        ent_->parent = this;
        lsp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Lsp()
    :
    lsp_id{YType::str, "lsp-id"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State>())
    , tlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs>())
    , undefined_tlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs>())
{
    state->parent = this;
    tlvs->parent = this;
    undefined_tlvs->parent = this;

    yang_name = "lsp"; yang_parent_name = "link-state-database"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::~Lsp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (tlvs !=  nullptr && tlvs->has_data())
	|| (undefined_tlvs !=  nullptr && undefined_tlvs->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (tlvs !=  nullptr && tlvs->has_operation())
	|| (undefined_tlvs !=  nullptr && undefined_tlvs->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State>();
        }
        return state;
    }

    if(child_yang_name == "tlvs")
    {
        if(tlvs == nullptr)
        {
            tlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs>();
        }
        return tlvs;
    }

    if(child_yang_name == "undefined-tlvs")
    {
        if(undefined_tlvs == nullptr)
        {
            undefined_tlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs>();
        }
        return undefined_tlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(tlvs != nullptr)
    {
        _children["tlvs"] = tlvs;
    }

    if(undefined_tlvs != nullptr)
    {
        _children["undefined-tlvs"] = undefined_tlvs;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "tlvs" || name == "undefined-tlvs" || name == "lsp-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::State()
    :
    lsp_id{YType::str, "lsp-id"},
    maximum_area_addresses{YType::uint8, "maximum-area-addresses"},
    version{YType::uint8, "version"},
    version2{YType::uint8, "version2"},
    id_length{YType::uint8, "id-length"},
    pdu_type{YType::enumeration, "pdu-type"},
    remaining_lifetime{YType::uint16, "remaining-lifetime"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    pdu_length{YType::uint16, "pdu-length"},
    flags{YType::enumeration, "flags"},
    is_type{YType::uint8, "is-type"}
{

    yang_name = "state"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsp_id.is_set
	|| maximum_area_addresses.is_set
	|| version.is_set
	|| version2.is_set
	|| id_length.is_set
	|| pdu_type.is_set
	|| remaining_lifetime.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| pdu_length.is_set
	|| is_type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(maximum_area_addresses.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(version2.yfilter)
	|| ydk::is_set(id_length.yfilter)
	|| ydk::is_set(pdu_type.yfilter)
	|| ydk::is_set(remaining_lifetime.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(pdu_length.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(is_type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (maximum_area_addresses.is_set || is_set(maximum_area_addresses.yfilter)) leaf_name_data.push_back(maximum_area_addresses.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());
    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
    if (pdu_type.is_set || is_set(pdu_type.yfilter)) leaf_name_data.push_back(pdu_type.get_name_leafdata());
    if (remaining_lifetime.is_set || is_set(remaining_lifetime.yfilter)) leaf_name_data.push_back(remaining_lifetime.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (pdu_length.is_set || is_set(pdu_length.yfilter)) leaf_name_data.push_back(pdu_length.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.yfilter)) leaf_name_data.push_back(is_type.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-area-addresses")
    {
        maximum_area_addresses = value;
        maximum_area_addresses.value_namespace = name_space;
        maximum_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-type")
    {
        pdu_type = value;
        pdu_type.value_namespace = name_space;
        pdu_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-lifetime")
    {
        remaining_lifetime = value;
        remaining_lifetime.value_namespace = name_space;
        remaining_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-length")
    {
        pdu_length = value;
        pdu_length.value_namespace = name_space;
        pdu_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
    if(value_path == "is-type")
    {
        is_type = value;
        is_type.value_namespace = name_space;
        is_type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "maximum-area-addresses")
    {
        maximum_area_addresses.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
    }
    if(value_path == "pdu-type")
    {
        pdu_type.yfilter = yfilter;
    }
    if(value_path == "remaining-lifetime")
    {
        remaining_lifetime.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "pdu-length")
    {
        pdu_length.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "is-type")
    {
        is_type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "maximum-area-addresses" || name == "version" || name == "version2" || name == "id-length" || name == "pdu-type" || name == "remaining-lifetime" || name == "sequence-number" || name == "checksum" || name == "pdu-length" || name == "flags" || name == "is-type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlvs()
    :
    tlv(this, {"type"})
{

    yang_name = "tlvs"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::~Tlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::has_operation() const
{
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv>();
        ent_->parent = this;
        tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Tlv()
    :
    type{YType::identityref, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State>())
    , area_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress>())
    , lsp_buffer_size(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize>())
    , nlpid(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid>())
    , hostname(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname>())
    , ipv4_interface_addresses(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses>())
    , ipv6_interface_addresses(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses>())
    , ipv4_te_router_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId>())
    , ipv6_te_router_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId>())
    , instance_ids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds>())
    , ipv4_srlgs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs>())
    , ipv6_srlgs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs>())
    , purge_oi(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi>())
    , router_capabilities(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities>())
    , is_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability>())
    , ipv4_internal_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability>())
    , ipv4_external_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability>())
    , authentication(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication>())
    , extended_is_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability>())
    , extended_ipv4_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability>())
    , ipv6_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability>())
    , multi_topology(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology>())
    , isis_neighbor_attribute(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute>())
    , is_alias_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsAliasId>())
    , mt_isn(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsn>())
    , mt_isis_neighbor_attribute(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute>())
    , mt_ipv4_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability>())
    , mt_ipv6_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability>())
{
    state->parent = this;
    area_address->parent = this;
    lsp_buffer_size->parent = this;
    nlpid->parent = this;
    hostname->parent = this;
    ipv4_interface_addresses->parent = this;
    ipv6_interface_addresses->parent = this;
    ipv4_te_router_id->parent = this;
    ipv6_te_router_id->parent = this;
    instance_ids->parent = this;
    ipv4_srlgs->parent = this;
    ipv6_srlgs->parent = this;
    purge_oi->parent = this;
    router_capabilities->parent = this;
    is_reachability->parent = this;
    ipv4_internal_reachability->parent = this;
    ipv4_external_reachability->parent = this;
    authentication->parent = this;
    extended_is_reachability->parent = this;
    extended_ipv4_reachability->parent = this;
    ipv6_reachability->parent = this;
    multi_topology->parent = this;
    isis_neighbor_attribute->parent = this;
    is_alias_id->parent = this;
    mt_isn->parent = this;
    mt_isis_neighbor_attribute->parent = this;
    mt_ipv4_reachability->parent = this;
    mt_ipv6_reachability->parent = this;

    yang_name = "tlv"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::~Tlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data())
	|| (area_address !=  nullptr && area_address->has_data())
	|| (lsp_buffer_size !=  nullptr && lsp_buffer_size->has_data())
	|| (nlpid !=  nullptr && nlpid->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (ipv4_interface_addresses !=  nullptr && ipv4_interface_addresses->has_data())
	|| (ipv6_interface_addresses !=  nullptr && ipv6_interface_addresses->has_data())
	|| (ipv4_te_router_id !=  nullptr && ipv4_te_router_id->has_data())
	|| (ipv6_te_router_id !=  nullptr && ipv6_te_router_id->has_data())
	|| (instance_ids !=  nullptr && instance_ids->has_data())
	|| (ipv4_srlgs !=  nullptr && ipv4_srlgs->has_data())
	|| (ipv6_srlgs !=  nullptr && ipv6_srlgs->has_data())
	|| (purge_oi !=  nullptr && purge_oi->has_data())
	|| (router_capabilities !=  nullptr && router_capabilities->has_data())
	|| (is_reachability !=  nullptr && is_reachability->has_data())
	|| (ipv4_internal_reachability !=  nullptr && ipv4_internal_reachability->has_data())
	|| (ipv4_external_reachability !=  nullptr && ipv4_external_reachability->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (extended_is_reachability !=  nullptr && extended_is_reachability->has_data())
	|| (extended_ipv4_reachability !=  nullptr && extended_ipv4_reachability->has_data())
	|| (ipv6_reachability !=  nullptr && ipv6_reachability->has_data())
	|| (multi_topology !=  nullptr && multi_topology->has_data())
	|| (isis_neighbor_attribute !=  nullptr && isis_neighbor_attribute->has_data())
	|| (is_alias_id !=  nullptr && is_alias_id->has_data())
	|| (mt_isn !=  nullptr && mt_isn->has_data())
	|| (mt_isis_neighbor_attribute !=  nullptr && mt_isis_neighbor_attribute->has_data())
	|| (mt_ipv4_reachability !=  nullptr && mt_ipv4_reachability->has_data())
	|| (mt_ipv6_reachability !=  nullptr && mt_ipv6_reachability->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (area_address !=  nullptr && area_address->has_operation())
	|| (lsp_buffer_size !=  nullptr && lsp_buffer_size->has_operation())
	|| (nlpid !=  nullptr && nlpid->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (ipv4_interface_addresses !=  nullptr && ipv4_interface_addresses->has_operation())
	|| (ipv6_interface_addresses !=  nullptr && ipv6_interface_addresses->has_operation())
	|| (ipv4_te_router_id !=  nullptr && ipv4_te_router_id->has_operation())
	|| (ipv6_te_router_id !=  nullptr && ipv6_te_router_id->has_operation())
	|| (instance_ids !=  nullptr && instance_ids->has_operation())
	|| (ipv4_srlgs !=  nullptr && ipv4_srlgs->has_operation())
	|| (ipv6_srlgs !=  nullptr && ipv6_srlgs->has_operation())
	|| (purge_oi !=  nullptr && purge_oi->has_operation())
	|| (router_capabilities !=  nullptr && router_capabilities->has_operation())
	|| (is_reachability !=  nullptr && is_reachability->has_operation())
	|| (ipv4_internal_reachability !=  nullptr && ipv4_internal_reachability->has_operation())
	|| (ipv4_external_reachability !=  nullptr && ipv4_external_reachability->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (extended_is_reachability !=  nullptr && extended_is_reachability->has_operation())
	|| (extended_ipv4_reachability !=  nullptr && extended_ipv4_reachability->has_operation())
	|| (ipv6_reachability !=  nullptr && ipv6_reachability->has_operation())
	|| (multi_topology !=  nullptr && multi_topology->has_operation())
	|| (isis_neighbor_attribute !=  nullptr && isis_neighbor_attribute->has_operation())
	|| (is_alias_id !=  nullptr && is_alias_id->has_operation())
	|| (mt_isn !=  nullptr && mt_isn->has_operation())
	|| (mt_isis_neighbor_attribute !=  nullptr && mt_isis_neighbor_attribute->has_operation())
	|| (mt_ipv4_reachability !=  nullptr && mt_ipv4_reachability->has_operation())
	|| (mt_ipv6_reachability !=  nullptr && mt_ipv6_reachability->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State>();
        }
        return state;
    }

    if(child_yang_name == "area-address")
    {
        if(area_address == nullptr)
        {
            area_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress>();
        }
        return area_address;
    }

    if(child_yang_name == "lsp-buffer-size")
    {
        if(lsp_buffer_size == nullptr)
        {
            lsp_buffer_size = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize>();
        }
        return lsp_buffer_size;
    }

    if(child_yang_name == "nlpid")
    {
        if(nlpid == nullptr)
        {
            nlpid = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid>();
        }
        return nlpid;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "ipv4-interface-addresses")
    {
        if(ipv4_interface_addresses == nullptr)
        {
            ipv4_interface_addresses = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses>();
        }
        return ipv4_interface_addresses;
    }

    if(child_yang_name == "ipv6-interface-addresses")
    {
        if(ipv6_interface_addresses == nullptr)
        {
            ipv6_interface_addresses = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses>();
        }
        return ipv6_interface_addresses;
    }

    if(child_yang_name == "ipv4-te-router-id")
    {
        if(ipv4_te_router_id == nullptr)
        {
            ipv4_te_router_id = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId>();
        }
        return ipv4_te_router_id;
    }

    if(child_yang_name == "ipv6-te-router-id")
    {
        if(ipv6_te_router_id == nullptr)
        {
            ipv6_te_router_id = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId>();
        }
        return ipv6_te_router_id;
    }

    if(child_yang_name == "instance-ids")
    {
        if(instance_ids == nullptr)
        {
            instance_ids = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds>();
        }
        return instance_ids;
    }

    if(child_yang_name == "ipv4-srlgs")
    {
        if(ipv4_srlgs == nullptr)
        {
            ipv4_srlgs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs>();
        }
        return ipv4_srlgs;
    }

    if(child_yang_name == "ipv6-srlgs")
    {
        if(ipv6_srlgs == nullptr)
        {
            ipv6_srlgs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs>();
        }
        return ipv6_srlgs;
    }

    if(child_yang_name == "purge-oi")
    {
        if(purge_oi == nullptr)
        {
            purge_oi = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi>();
        }
        return purge_oi;
    }

    if(child_yang_name == "router-capabilities")
    {
        if(router_capabilities == nullptr)
        {
            router_capabilities = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities>();
        }
        return router_capabilities;
    }

    if(child_yang_name == "is-reachability")
    {
        if(is_reachability == nullptr)
        {
            is_reachability = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability>();
        }
        return is_reachability;
    }

    if(child_yang_name == "ipv4-internal-reachability")
    {
        if(ipv4_internal_reachability == nullptr)
        {
            ipv4_internal_reachability = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability>();
        }
        return ipv4_internal_reachability;
    }

    if(child_yang_name == "ipv4-external-reachability")
    {
        if(ipv4_external_reachability == nullptr)
        {
            ipv4_external_reachability = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability>();
        }
        return ipv4_external_reachability;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "extended-is-reachability")
    {
        if(extended_is_reachability == nullptr)
        {
            extended_is_reachability = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability>();
        }
        return extended_is_reachability;
    }

    if(child_yang_name == "extended-ipv4-reachability")
    {
        if(extended_ipv4_reachability == nullptr)
        {
            extended_ipv4_reachability = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability>();
        }
        return extended_ipv4_reachability;
    }

    if(child_yang_name == "ipv6-reachability")
    {
        if(ipv6_reachability == nullptr)
        {
            ipv6_reachability = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability>();
        }
        return ipv6_reachability;
    }

    if(child_yang_name == "multi-topology")
    {
        if(multi_topology == nullptr)
        {
            multi_topology = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology>();
        }
        return multi_topology;
    }

    if(child_yang_name == "isis-neighbor-attribute")
    {
        if(isis_neighbor_attribute == nullptr)
        {
            isis_neighbor_attribute = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute>();
        }
        return isis_neighbor_attribute;
    }

    if(child_yang_name == "is-alias-id")
    {
        if(is_alias_id == nullptr)
        {
            is_alias_id = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsAliasId>();
        }
        return is_alias_id;
    }

    if(child_yang_name == "mt-isn")
    {
        if(mt_isn == nullptr)
        {
            mt_isn = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsn>();
        }
        return mt_isn;
    }

    if(child_yang_name == "mt-isis-neighbor-attribute")
    {
        if(mt_isis_neighbor_attribute == nullptr)
        {
            mt_isis_neighbor_attribute = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute>();
        }
        return mt_isis_neighbor_attribute;
    }

    if(child_yang_name == "mt-ipv4-reachability")
    {
        if(mt_ipv4_reachability == nullptr)
        {
            mt_ipv4_reachability = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability>();
        }
        return mt_ipv4_reachability;
    }

    if(child_yang_name == "mt-ipv6-reachability")
    {
        if(mt_ipv6_reachability == nullptr)
        {
            mt_ipv6_reachability = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability>();
        }
        return mt_ipv6_reachability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(area_address != nullptr)
    {
        _children["area-address"] = area_address;
    }

    if(lsp_buffer_size != nullptr)
    {
        _children["lsp-buffer-size"] = lsp_buffer_size;
    }

    if(nlpid != nullptr)
    {
        _children["nlpid"] = nlpid;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    if(ipv4_interface_addresses != nullptr)
    {
        _children["ipv4-interface-addresses"] = ipv4_interface_addresses;
    }

    if(ipv6_interface_addresses != nullptr)
    {
        _children["ipv6-interface-addresses"] = ipv6_interface_addresses;
    }

    if(ipv4_te_router_id != nullptr)
    {
        _children["ipv4-te-router-id"] = ipv4_te_router_id;
    }

    if(ipv6_te_router_id != nullptr)
    {
        _children["ipv6-te-router-id"] = ipv6_te_router_id;
    }

    if(instance_ids != nullptr)
    {
        _children["instance-ids"] = instance_ids;
    }

    if(ipv4_srlgs != nullptr)
    {
        _children["ipv4-srlgs"] = ipv4_srlgs;
    }

    if(ipv6_srlgs != nullptr)
    {
        _children["ipv6-srlgs"] = ipv6_srlgs;
    }

    if(purge_oi != nullptr)
    {
        _children["purge-oi"] = purge_oi;
    }

    if(router_capabilities != nullptr)
    {
        _children["router-capabilities"] = router_capabilities;
    }

    if(is_reachability != nullptr)
    {
        _children["is-reachability"] = is_reachability;
    }

    if(ipv4_internal_reachability != nullptr)
    {
        _children["ipv4-internal-reachability"] = ipv4_internal_reachability;
    }

    if(ipv4_external_reachability != nullptr)
    {
        _children["ipv4-external-reachability"] = ipv4_external_reachability;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(extended_is_reachability != nullptr)
    {
        _children["extended-is-reachability"] = extended_is_reachability;
    }

    if(extended_ipv4_reachability != nullptr)
    {
        _children["extended-ipv4-reachability"] = extended_ipv4_reachability;
    }

    if(ipv6_reachability != nullptr)
    {
        _children["ipv6-reachability"] = ipv6_reachability;
    }

    if(multi_topology != nullptr)
    {
        _children["multi-topology"] = multi_topology;
    }

    if(isis_neighbor_attribute != nullptr)
    {
        _children["isis-neighbor-attribute"] = isis_neighbor_attribute;
    }

    if(is_alias_id != nullptr)
    {
        _children["is-alias-id"] = is_alias_id;
    }

    if(mt_isn != nullptr)
    {
        _children["mt-isn"] = mt_isn;
    }

    if(mt_isis_neighbor_attribute != nullptr)
    {
        _children["mt-isis-neighbor-attribute"] = mt_isis_neighbor_attribute;
    }

    if(mt_ipv4_reachability != nullptr)
    {
        _children["mt-ipv4-reachability"] = mt_ipv4_reachability;
    }

    if(mt_ipv6_reachability != nullptr)
    {
        _children["mt-ipv6-reachability"] = mt_ipv6_reachability;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "area-address" || name == "lsp-buffer-size" || name == "nlpid" || name == "hostname" || name == "ipv4-interface-addresses" || name == "ipv6-interface-addresses" || name == "ipv4-te-router-id" || name == "ipv6-te-router-id" || name == "instance-ids" || name == "ipv4-srlgs" || name == "ipv6-srlgs" || name == "purge-oi" || name == "router-capabilities" || name == "is-reachability" || name == "ipv4-internal-reachability" || name == "ipv4-external-reachability" || name == "authentication" || name == "extended-is-reachability" || name == "extended-ipv4-reachability" || name == "ipv6-reachability" || name == "multi-topology" || name == "isis-neighbor-attribute" || name == "is-alias-id" || name == "mt-isn" || name == "mt-isis-neighbor-attribute" || name == "mt-ipv4-reachability" || name == "mt-ipv6-reachability" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::State()
    :
    type{YType::identityref, "type"}
{

    yang_name = "state"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::AreaAddress()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State>())
{
    state->parent = this;

    yang_name = "area-address"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::~AreaAddress()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::State()
    :
    area_address{YType::str, "area-address"}
{

    yang_name = "state"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : area_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::has_operation() const
{
    for (auto const & leaf : area_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto area_address_name_datas = area_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), area_address_name_datas.begin(), area_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-address")
    {
        area_address.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-address")
    {
        area_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::LspBufferSize()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State>())
{
    state->parent = this;

    yang_name = "lsp-buffer-size"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::~LspBufferSize()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::State()
    :
    buffer_size{YType::uint16, "buffer-size"}
{

    yang_name = "state"; yang_parent_name = "lsp-buffer-size"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::has_data() const
{
    if (is_presence_container) return true;
    return buffer_size.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffer_size.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffer-size")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::Nlpid()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State>())
{
    state->parent = this;

    yang_name = "nlpid"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::~Nlpid()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlpid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::State()
    :
    nlpid{YType::enumeration, "nlpid"}
{

    yang_name = "state"; yang_parent_name = "nlpid"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : nlpid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::has_operation() const
{
    for (auto const & leaf : nlpid.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nlpid.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nlpid_name_datas = nlpid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nlpid_name_datas.begin(), nlpid_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlpid")
    {
        nlpid.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlpid")
    {
        nlpid.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlpid")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::Hostname()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State>())
{
    state->parent = this;

    yang_name = "hostname"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::~Hostname()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::State()
    :
    hostname{YType::str, "hostname"}
{

    yang_name = "state"; yang_parent_name = "hostname"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : hostname.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::has_operation() const
{
    for (auto const & leaf : hostname.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto hostname_name_datas = hostname.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), hostname_name_datas.begin(), hostname_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::Ipv4InterfaceAddresses()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State>())
{
    state->parent = this;

    yang_name = "ipv4-interface-addresses"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::~Ipv4InterfaceAddresses()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-interface-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::State()
    :
    ipv4_interface_addresses{YType::str, "ipv4-interface-addresses"}
{

    yang_name = "state"; yang_parent_name = "ipv4-interface-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv4_interface_addresses.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::has_operation() const
{
    for (auto const & leaf : ipv4_interface_addresses.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_interface_addresses.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_interface_addresses_name_datas = ipv4_interface_addresses.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_interface_addresses_name_datas.begin(), ipv4_interface_addresses_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-interface-addresses")
    {
        ipv4_interface_addresses.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-interface-addresses")
    {
        ipv4_interface_addresses.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-interface-addresses")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::Ipv6InterfaceAddresses()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State>())
{
    state->parent = this;

    yang_name = "ipv6-interface-addresses"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::~Ipv6InterfaceAddresses()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-interface-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::State()
    :
    ipv6_interface_addresses{YType::str, "ipv6-interface-addresses"}
{

    yang_name = "state"; yang_parent_name = "ipv6-interface-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv6_interface_addresses.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::has_operation() const
{
    for (auto const & leaf : ipv6_interface_addresses.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_interface_addresses.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_interface_addresses_name_datas = ipv6_interface_addresses.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_interface_addresses_name_datas.begin(), ipv6_interface_addresses_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-interface-addresses")
    {
        ipv6_interface_addresses.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-interface-addresses")
    {
        ipv6_interface_addresses.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-interface-addresses")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::Ipv4TeRouterId()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv4-te-router-id"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::~Ipv4TeRouterId()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-te-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::State()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv4-te-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::has_operation() const
{
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto router_id_name_datas = router_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), router_id_name_datas.begin(), router_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::Ipv6TeRouterId()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv6-te-router-id"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::~Ipv6TeRouterId()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-te-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::State()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv6-te-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::has_operation() const
{
    for (auto const & leaf : router_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto router_id_name_datas = router_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), router_id_name_datas.begin(), router_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceIds()
    :
    instance_id(this, {"instance_id"})
{

    yang_name = "instance-ids"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::~InstanceIds()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::has_operation() const
{
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId>();
        ent_->parent = this;
        instance_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::InstanceId()
    :
    instance_id{YType::str, "instance-id"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State>())
{
    state->parent = this;

    yang_name = "instance-id"; yang_parent_name = "instance-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::~InstanceId()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::has_data() const
{
    if (is_presence_container) return true;
    return instance_id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "instance-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::State()
    :
    instance_id{YType::uint16, "instance-id"},
    topology_id{YType::uint16, "topology-id"}
{

    yang_name = "state"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : topology_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return instance_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::has_operation() const
{
    for (auto const & leaf : topology_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(topology_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    auto topology_id_name_datas = topology_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topology_id_name_datas.begin(), topology_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "topology-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlgs()
    :
    ipv4_srlg(this, {"instance_number"})
{

    yang_name = "ipv4-srlgs"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::~Ipv4Srlgs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_srlg.len(); index++)
    {
        if(ipv4_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::has_operation() const
{
    for (std::size_t index=0; index<ipv4_srlg.len(); index++)
    {
        if(ipv4_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-srlg")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg>();
        ent_->parent = this;
        ipv4_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srlg")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::Ipv4Srlg()
    :
    instance_number{YType::str, "instance-number"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State>())
{
    state->parent = this;

    yang_name = "ipv4-srlg"; yang_parent_name = "ipv4-srlgs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::~Ipv4Srlg()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::has_data() const
{
    if (is_presence_container) return true;
    return instance_number.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-srlg";
    ADD_KEY_TOKEN(instance_number, "instance-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "instance-number")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::State()
    :
    instance_number{YType::uint32, "instance-number"},
    system_id{YType::str, "system-id"},
    psn_number{YType::uint8, "psn-number"},
    flags{YType::enumeration, "flags"},
    ipv4_interface_address{YType::str, "ipv4-interface-address"},
    ipv4_neighbor_address{YType::str, "ipv4-neighbor-address"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "state"; yang_parent_name = "ipv4-srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return instance_number.is_set
	|| system_id.is_set
	|| psn_number.is_set
	|| ipv4_interface_address.is_set
	|| ipv4_neighbor_address.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(psn_number.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ipv4_interface_address.yfilter)
	|| ydk::is_set(ipv4_neighbor_address.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (psn_number.is_set || is_set(psn_number.yfilter)) leaf_name_data.push_back(psn_number.get_name_leafdata());
    if (ipv4_interface_address.is_set || is_set(ipv4_interface_address.yfilter)) leaf_name_data.push_back(ipv4_interface_address.get_name_leafdata());
    if (ipv4_neighbor_address.is_set || is_set(ipv4_neighbor_address.yfilter)) leaf_name_data.push_back(ipv4_neighbor_address.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    auto srlg_value_name_datas = srlg_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_value_name_datas.begin(), srlg_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psn-number")
    {
        psn_number = value;
        psn_number.value_namespace = name_space;
        psn_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address = value;
        ipv4_interface_address.value_namespace = name_space;
        ipv4_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address = value;
        ipv4_neighbor_address.value_namespace = name_space;
        ipv4_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "psn-number")
    {
        psn_number.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-number" || name == "system-id" || name == "psn-number" || name == "flags" || name == "ipv4-interface-address" || name == "ipv4-neighbor-address" || name == "srlg-value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlgs()
    :
    ipv6_srlg(this, {"instance_number"})
{

    yang_name = "ipv6-srlgs"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::~Ipv6Srlgs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_srlg.len(); index++)
    {
        if(ipv6_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_srlg.len(); index++)
    {
        if(ipv6_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-srlg")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg>();
        ent_->parent = this;
        ipv6_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srlg")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::Ipv6Srlg()
    :
    instance_number{YType::str, "instance-number"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State>())
{
    state->parent = this;

    yang_name = "ipv6-srlg"; yang_parent_name = "ipv6-srlgs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::~Ipv6Srlg()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::has_data() const
{
    if (is_presence_container) return true;
    return instance_number.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-srlg";
    ADD_KEY_TOKEN(instance_number, "instance-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "instance-number")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::State()
    :
    instance_number{YType::uint32, "instance-number"},
    system_id{YType::str, "system-id"},
    psn_number{YType::uint8, "psn-number"},
    flags{YType::enumeration, "flags"},
    ipv6_interface_address{YType::str, "ipv6-interface-address"},
    ipv6_neighbor_address{YType::str, "ipv6-neighbor-address"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "state"; yang_parent_name = "ipv6-srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return instance_number.is_set
	|| system_id.is_set
	|| psn_number.is_set
	|| ipv6_interface_address.is_set
	|| ipv6_neighbor_address.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(psn_number.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ipv6_interface_address.yfilter)
	|| ydk::is_set(ipv6_neighbor_address.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (psn_number.is_set || is_set(psn_number.yfilter)) leaf_name_data.push_back(psn_number.get_name_leafdata());
    if (ipv6_interface_address.is_set || is_set(ipv6_interface_address.yfilter)) leaf_name_data.push_back(ipv6_interface_address.get_name_leafdata());
    if (ipv6_neighbor_address.is_set || is_set(ipv6_neighbor_address.yfilter)) leaf_name_data.push_back(ipv6_neighbor_address.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    auto srlg_value_name_datas = srlg_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_value_name_datas.begin(), srlg_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psn-number")
    {
        psn_number = value;
        psn_number.value_namespace = name_space;
        psn_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address = value;
        ipv6_interface_address.value_namespace = name_space;
        ipv6_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address = value;
        ipv6_neighbor_address.value_namespace = name_space;
        ipv6_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "psn-number")
    {
        psn_number.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-number" || name == "system-id" || name == "psn-number" || name == "flags" || name == "ipv6-interface-address" || name == "ipv6-neighbor-address" || name == "srlg-value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::PurgeOi()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State>())
{
    state->parent = this;

    yang_name = "purge-oi"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::~PurgeOi()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "purge-oi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::State()
    :
    system_id_count{YType::uint8, "system-id-count"},
    source_system_id{YType::str, "source-system-id"},
    received_system_id{YType::str, "received-system-id"}
{

    yang_name = "state"; yang_parent_name = "purge-oi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::has_data() const
{
    if (is_presence_container) return true;
    return system_id_count.is_set
	|| source_system_id.is_set
	|| received_system_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id_count.yfilter)
	|| ydk::is_set(source_system_id.yfilter)
	|| ydk::is_set(received_system_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id_count.is_set || is_set(system_id_count.yfilter)) leaf_name_data.push_back(system_id_count.get_name_leafdata());
    if (source_system_id.is_set || is_set(source_system_id.yfilter)) leaf_name_data.push_back(source_system_id.get_name_leafdata());
    if (received_system_id.is_set || is_set(received_system_id.yfilter)) leaf_name_data.push_back(received_system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id-count")
    {
        system_id_count = value;
        system_id_count.value_namespace = name_space;
        system_id_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-system-id")
    {
        source_system_id = value;
        source_system_id.value_namespace = name_space;
        source_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-system-id")
    {
        received_system_id = value;
        received_system_id.value_namespace = name_space;
        received_system_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id-count")
    {
        system_id_count.yfilter = yfilter;
    }
    if(value_path == "source-system-id")
    {
        source_system_id.yfilter = yfilter;
    }
    if(value_path == "received-system-id")
    {
        received_system_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id-count" || name == "source-system-id" || name == "received-system-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapabilities()
    :
    router_capability(this, {"instance_number"})
{

    yang_name = "router-capabilities"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::~RouterCapabilities()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<router_capability.len(); index++)
    {
        if(router_capability[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::has_operation() const
{
    for (std::size_t index=0; index<router_capability.len(); index++)
    {
        if(router_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-capability")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability>();
        ent_->parent = this;
        router_capability.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : router_capability.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-capability")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::RouterCapability()
    :
    instance_number{YType::str, "instance-number"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State>())
    , subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs>())
    , undefined_subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs>())
{
    state->parent = this;
    subtlvs->parent = this;
    undefined_subtlvs->parent = this;

    yang_name = "router-capability"; yang_parent_name = "router-capabilities"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::~RouterCapability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::has_data() const
{
    if (is_presence_container) return true;
    return instance_number.is_set
	|| (state !=  nullptr && state->has_data())
	|| (subtlvs !=  nullptr && subtlvs->has_data())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (subtlvs !=  nullptr && subtlvs->has_operation())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-capability";
    ADD_KEY_TOKEN(instance_number, "instance-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State>();
        }
        return state;
    }

    if(child_yang_name == "subtlvs")
    {
        if(subtlvs == nullptr)
        {
            subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs>();
        }
        return subtlvs;
    }

    if(child_yang_name == "undefined-subtlvs")
    {
        if(undefined_subtlvs == nullptr)
        {
            undefined_subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs>();
        }
        return undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(subtlvs != nullptr)
    {
        _children["subtlvs"] = subtlvs;
    }

    if(undefined_subtlvs != nullptr)
    {
        _children["undefined-subtlvs"] = undefined_subtlvs;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "subtlvs" || name == "undefined-subtlvs" || name == "instance-number")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::State()
    :
    instance_number{YType::uint32, "instance-number"},
    router_id{YType::str, "router-id"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "router-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return instance_number.is_set
	|| router_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-number" || name == "router-id" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlvs()
    :
    subtlv(this, {"type"})
{

    yang_name = "subtlvs"; yang_parent_name = "router-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::~Subtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::has_operation() const
{
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv>();
        ent_->parent = this;
        subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::Subtlv()
    :
    type{YType::identityref, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State>())
    , segment_routing_algorithms(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms>())
    , segment_routing_capability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability>())
{
    state->parent = this;
    segment_routing_algorithms->parent = this;
    segment_routing_capability->parent = this;

    yang_name = "subtlv"; yang_parent_name = "subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::~Subtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data())
	|| (segment_routing_algorithms !=  nullptr && segment_routing_algorithms->has_data())
	|| (segment_routing_capability !=  nullptr && segment_routing_capability->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (segment_routing_algorithms !=  nullptr && segment_routing_algorithms->has_operation())
	|| (segment_routing_capability !=  nullptr && segment_routing_capability->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State>();
        }
        return state;
    }

    if(child_yang_name == "segment-routing-algorithms")
    {
        if(segment_routing_algorithms == nullptr)
        {
            segment_routing_algorithms = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms>();
        }
        return segment_routing_algorithms;
    }

    if(child_yang_name == "segment-routing-capability")
    {
        if(segment_routing_capability == nullptr)
        {
            segment_routing_capability = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability>();
        }
        return segment_routing_capability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(segment_routing_algorithms != nullptr)
    {
        _children["segment-routing-algorithms"] = segment_routing_algorithms;
    }

    if(segment_routing_capability != nullptr)
    {
        _children["segment-routing-capability"] = segment_routing_capability;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "segment-routing-algorithms" || name == "segment-routing-capability" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::State()
    :
    type{YType::identityref, "type"}
{

    yang_name = "state"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithms()
    :
    segment_routing_algorithm(this, {"algorithm"})
{

    yang_name = "segment-routing-algorithms"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::~SegmentRoutingAlgorithms()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_algorithm.len(); index++)
    {
        if(segment_routing_algorithm[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_algorithm.len(); index++)
    {
        if(segment_routing_algorithm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-algorithms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-algorithm")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm>();
        ent_->parent = this;
        segment_routing_algorithm.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_algorithm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-algorithm")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::SegmentRoutingAlgorithm()
    :
    algorithm{YType::enumeration, "algorithm"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State>())
{
    state->parent = this;

    yang_name = "segment-routing-algorithm"; yang_parent_name = "segment-routing-algorithms"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::~SegmentRoutingAlgorithm()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::has_data() const
{
    if (is_presence_container) return true;
    return algorithm.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-algorithm";
    ADD_KEY_TOKEN(algorithm, "algorithm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "algorithm")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::State()
    :
    algorithm{YType::enumeration, "algorithm"}
{

    yang_name = "state"; yang_parent_name = "segment-routing-algorithm"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::has_data() const
{
    if (is_presence_container) return true;
    return algorithm.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SegmentRoutingCapability()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State>())
    , srgb_descriptors(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors>())
{
    state->parent = this;
    srgb_descriptors->parent = this;

    yang_name = "segment-routing-capability"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::~SegmentRoutingCapability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data())
	|| (srgb_descriptors !=  nullptr && srgb_descriptors->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (srgb_descriptors !=  nullptr && srgb_descriptors->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State>();
        }
        return state;
    }

    if(child_yang_name == "srgb-descriptors")
    {
        if(srgb_descriptors == nullptr)
        {
            srgb_descriptors = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors>();
        }
        return srgb_descriptors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(srgb_descriptors != nullptr)
    {
        _children["srgb-descriptors"] = srgb_descriptors;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "srgb-descriptors")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::State()
    :
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "segment-routing-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptors()
    :
    srgb_descriptor(this, {})
{

    yang_name = "srgb-descriptors"; yang_parent_name = "segment-routing-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::~SrgbDescriptors()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srgb_descriptor.len(); index++)
    {
        if(srgb_descriptor[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::has_operation() const
{
    for (std::size_t index=0; index<srgb_descriptor.len(); index++)
    {
        if(srgb_descriptor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-descriptors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srgb-descriptor")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor>();
        ent_->parent = this;
        srgb_descriptor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srgb_descriptor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srgb-descriptor")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::SrgbDescriptor()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State>())
{
    state->parent = this;

    yang_name = "srgb-descriptor"; yang_parent_name = "srgb-descriptors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::~SrgbDescriptor()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-descriptor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::State()
    :
    range{YType::uint32, "range"},
    label{YType::str, "label"}
{

    yang_name = "state"; yang_parent_name = "srgb-descriptor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| label.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlvs()
    :
    undefined_subtlv(this, {"type"})
{

    yang_name = "undefined-subtlvs"; yang_parent_name = "router-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::~UndefinedSubtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "undefined-subtlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv>();
        ent_->parent = this;
        undefined_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : undefined_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "undefined-subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::UndefinedSubtlv()
    :
    type{YType::str, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "undefined-subtlv"; yang_parent_name = "undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::~UndefinedSubtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::IsReachability()
    :
    neighbors(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors>())
{
    neighbors->parent = this;

    yang_name = "is-reachability"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::~IsReachability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::has_data() const
{
    if (is_presence_container) return true;
    return (neighbors !=  nullptr && neighbors->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "is-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors()
    :
    neighbors(this, {"system_id"})
{

    yang_name = "neighbors"; yang_parent_name = "is-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::~Neighbors()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbors.len(); index++)
    {
        if(neighbors[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbors.len(); index++)
    {
        if(neighbors[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_>();
        ent_->parent = this;
        neighbors.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbors.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::Neighbors_()
    :
    system_id{YType::str, "system-id"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State>())
    , default_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric>())
    , delay_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric>())
    , expense_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric>())
    , error_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric>())
{
    state->parent = this;
    default_metric->parent = this;
    delay_metric->parent = this;
    expense_metric->parent = this;
    error_metric->parent = this;

    yang_name = "neighbors"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::~Neighbors_()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (delay_metric !=  nullptr && delay_metric->has_data())
	|| (expense_metric !=  nullptr && expense_metric->has_data())
	|| (error_metric !=  nullptr && error_metric->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (delay_metric !=  nullptr && delay_metric->has_operation())
	|| (expense_metric !=  nullptr && expense_metric->has_operation())
	|| (error_metric !=  nullptr && error_metric->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    ADD_KEY_TOKEN(system_id, "system-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State>();
        }
        return state;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "delay-metric")
    {
        if(delay_metric == nullptr)
        {
            delay_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric>();
        }
        return delay_metric;
    }

    if(child_yang_name == "expense-metric")
    {
        if(expense_metric == nullptr)
        {
            expense_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric>();
        }
        return expense_metric;
    }

    if(child_yang_name == "error-metric")
    {
        if(error_metric == nullptr)
        {
            error_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric>();
        }
        return error_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(default_metric != nullptr)
    {
        _children["default-metric"] = default_metric;
    }

    if(delay_metric != nullptr)
    {
        _children["delay-metric"] = delay_metric;
    }

    if(expense_metric != nullptr)
    {
        _children["expense-metric"] = expense_metric;
    }

    if(error_metric != nullptr)
    {
        _children["error-metric"] = error_metric;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "default-metric" || name == "delay-metric" || name == "expense-metric" || name == "error-metric" || name == "system-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::State()
    :
    system_id{YType::str, "system-id"}
{

    yang_name = "state"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::DefaultMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State>())
{
    state->parent = this;

    yang_name = "default-metric"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::~DefaultMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::State()
    :
    flags{YType::enumeration, "flags"},
    default_metric{YType::uint8, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::DelayMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State>())
{
    state->parent = this;

    yang_name = "delay-metric"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::~DelayMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "delay-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::PduType::LEVEL_1 {0, "LEVEL_1"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::PduType::LEVEL_2 {1, "LEVEL_2"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::Flags::PARTITION_REPAIR {0, "PARTITION_REPAIR"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::Flags::ATTACHED_ERROR {1, "ATTACHED_ERROR"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::Flags::ATTACHED_EXPENSE {2, "ATTACHED_EXPENSE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::Flags::ATTACHED_DELAY {3, "ATTACHED_DELAY"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::Flags::ATTACHED_DEFAULT {4, "ATTACHED_DEFAULT"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::Flags::OVERLOAD {5, "OVERLOAD"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::Nlpid_::IPV4 {0, "IPV4"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::Nlpid_::IPV6 {1, "IPV6"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::Flags::NUMBERED {0, "NUMBERED"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::Flags::NA {0, "NA"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::Flags::FLOOD {0, "FLOOD"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::Flags::DOWN {1, "DOWN"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::Algorithm::SPF {0, "SPF"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::Algorithm::STRICT_SPF {1, "STRICT_SPF"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::Flags::IPV4_MPLS {0, "IPV4_MPLS"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::Flags::IPV6_MPLS {1, "IPV6_MPLS"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::Flags::IPV6_SR {2, "IPV6_SR"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::Flags::INTERNAL {0, "INTERNAL"};


}
}

