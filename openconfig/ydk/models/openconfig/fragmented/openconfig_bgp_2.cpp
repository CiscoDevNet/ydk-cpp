
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_2.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_bgp {

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::L2vpnEvpn()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-evpn"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::~L2vpnEvpn()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}


}
}

