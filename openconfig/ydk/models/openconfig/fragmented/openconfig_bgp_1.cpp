
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_1.hpp"
#include "openconfig_bgp_2.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_bgp {

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>())
    , config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State>())
{
    prefix_limit->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::~Ipv6Unicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::Ipv4LabeledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv4-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::~Ipv4LabeledUnicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::Ipv6LabeledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv6-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::~Ipv6LabeledUnicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::L3vpnIpv4Unicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::~L3vpnIpv4Unicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::L3vpnIpv6Unicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::~L3vpnIpv6Unicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::L3vpnIpv4Multicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::~L3vpnIpv4Multicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::L3vpnIpv6Multicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::~L3vpnIpv6Multicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::L2vpnVpls()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-vpls"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::~L2vpnVpls()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::L2vpnEvpn()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-evpn"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::~L2vpnEvpn()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State>())
    , ebgp(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>())
{
    config->parent = this;
    state->parent = this;
    ebgp->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::~UseMultiplePaths()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State>();
        }
        return state;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::get_children() const
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

    if(ebgp != nullptr)
    {
        _children["ebgp"] = ebgp;
    }

    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ebgp")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>())
    , state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_children() const
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

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroups()
    :
    peer_group(this, {"peer_group_name"})
{

    yang_name = "peer-groups"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

Bgp::PeerGroups::~PeerGroups()
{
}

bool Bgp::PeerGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_group.len(); index++)
    {
        if(peer_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::PeerGroups::has_operation() const
{
    for (std::size_t index=0; index<peer_group.len(); index++)
    {
        if(peer_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::PeerGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::PeerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-group")
    {
        auto ent_ = std::make_shared<Bgp::PeerGroups::PeerGroup>();
        ent_->parent = this;
        peer_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::PeerGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::PeerGroup()
    :
    peer_group_name{YType::str, "peer-group-name"}
        ,
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::State>())
    , timers(std::make_shared<Bgp::PeerGroups::PeerGroup::Timers>())
    , transport(std::make_shared<Bgp::PeerGroups::PeerGroup::Transport>())
    , error_handling(std::make_shared<Bgp::PeerGroups::PeerGroup::ErrorHandling>())
    , graceful_restart(std::make_shared<Bgp::PeerGroups::PeerGroup::GracefulRestart>())
    , logging_options(std::make_shared<Bgp::PeerGroups::PeerGroup::LoggingOptions>())
    , ebgp_multihop(std::make_shared<Bgp::PeerGroups::PeerGroup::EbgpMultihop>())
    , route_reflector(std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector>())
    , as_path_options(std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions>())
    , add_paths(std::make_shared<Bgp::PeerGroups::PeerGroup::AddPaths>())
    , use_multiple_paths(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths>())
    , apply_policy(std::make_shared<Bgp::PeerGroups::PeerGroup::ApplyPolicy>())
    , afi_safis(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis>())
{
    config->parent = this;
    state->parent = this;
    timers->parent = this;
    transport->parent = this;
    error_handling->parent = this;
    graceful_restart->parent = this;
    logging_options->parent = this;
    ebgp_multihop->parent = this;
    route_reflector->parent = this;
    as_path_options->parent = this;
    add_paths->parent = this;
    use_multiple_paths->parent = this;
    apply_policy->parent = this;
    afi_safis->parent = this;

    yang_name = "peer-group"; yang_parent_name = "peer-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Bgp::PeerGroups::PeerGroup::~PeerGroup()
{
}

bool Bgp::PeerGroups::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    return peer_group_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (error_handling !=  nullptr && error_handling->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (logging_options !=  nullptr && logging_options->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (route_reflector !=  nullptr && route_reflector->has_data())
	|| (as_path_options !=  nullptr && as_path_options->has_data())
	|| (add_paths !=  nullptr && add_paths->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data())
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (afi_safis !=  nullptr && afi_safis->has_data());
}

bool Bgp::PeerGroups::PeerGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (error_handling !=  nullptr && error_handling->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (logging_options !=  nullptr && logging_options->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (route_reflector !=  nullptr && route_reflector->has_operation())
	|| (as_path_options !=  nullptr && as_path_options->has_operation())
	|| (add_paths !=  nullptr && add_paths->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation())
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (afi_safis !=  nullptr && afi_safis->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/peer-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::PeerGroups::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    ADD_KEY_TOKEN(peer_group_name, "peer-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.yfilter)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::State>();
        }
        return state;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::PeerGroups::PeerGroup::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Bgp::PeerGroups::PeerGroup::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "error-handling")
    {
        if(error_handling == nullptr)
        {
            error_handling = std::make_shared<Bgp::PeerGroups::PeerGroup::ErrorHandling>();
        }
        return error_handling;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Bgp::PeerGroups::PeerGroup::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "logging-options")
    {
        if(logging_options == nullptr)
        {
            logging_options = std::make_shared<Bgp::PeerGroups::PeerGroup::LoggingOptions>();
        }
        return logging_options;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::PeerGroups::PeerGroup::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "route-reflector")
    {
        if(route_reflector == nullptr)
        {
            route_reflector = std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector>();
        }
        return route_reflector;
    }

    if(child_yang_name == "as-path-options")
    {
        if(as_path_options == nullptr)
        {
            as_path_options = std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions>();
        }
        return as_path_options;
    }

    if(child_yang_name == "add-paths")
    {
        if(add_paths == nullptr)
        {
            add_paths = std::make_shared<Bgp::PeerGroups::PeerGroup::AddPaths>();
        }
        return add_paths;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<Bgp::PeerGroups::PeerGroup::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "afi-safis")
    {
        if(afi_safis == nullptr)
        {
            afi_safis = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis>();
        }
        return afi_safis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::get_children() const
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

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(error_handling != nullptr)
    {
        _children["error-handling"] = error_handling;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(logging_options != nullptr)
    {
        _children["logging-options"] = logging_options;
    }

    if(ebgp_multihop != nullptr)
    {
        _children["ebgp-multihop"] = ebgp_multihop;
    }

    if(route_reflector != nullptr)
    {
        _children["route-reflector"] = route_reflector;
    }

    if(as_path_options != nullptr)
    {
        _children["as-path-options"] = as_path_options;
    }

    if(add_paths != nullptr)
    {
        _children["add-paths"] = add_paths;
    }

    if(use_multiple_paths != nullptr)
    {
        _children["use-multiple-paths"] = use_multiple_paths;
    }

    if(apply_policy != nullptr)
    {
        _children["apply-policy"] = apply_policy;
    }

    if(afi_safis != nullptr)
    {
        _children["afi-safis"] = afi_safis;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
        peer_group_name.value_namespace = name_space;
        peer_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "timers" || name == "transport" || name == "error-handling" || name == "graceful-restart" || name == "logging-options" || name == "ebgp-multihop" || name == "route-reflector" || name == "as-path-options" || name == "add-paths" || name == "use-multiple-paths" || name == "apply-policy" || name == "afi-safis" || name == "peer-group-name")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::Config::Config()
    :
    peer_group_name{YType::str, "peer-group-name"},
    peer_as{YType::uint32, "peer-as"},
    local_as{YType::uint32, "local-as"},
    peer_type{YType::enumeration, "peer-type"},
    auth_password{YType::str, "auth-password"},
    remove_private_as{YType::identityref, "remove-private-as"},
    route_flap_damping{YType::boolean, "route-flap-damping"},
    send_community{YType::enumeration, "send-community"},
    description{YType::str, "description"}
{

    yang_name = "config"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::Config::has_data() const
{
    if (is_presence_container) return true;
    return peer_group_name.is_set
	|| peer_as.is_set
	|| local_as.is_set
	|| peer_type.is_set
	|| auth_password.is_set
	|| remove_private_as.is_set
	|| route_flap_damping.is_set
	|| send_community.is_set
	|| description.is_set;
}

bool Bgp::PeerGroups::PeerGroup::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group_name.yfilter)
	|| ydk::is_set(peer_as.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(peer_type.yfilter)
	|| ydk::is_set(auth_password.yfilter)
	|| ydk::is_set(remove_private_as.yfilter)
	|| ydk::is_set(route_flap_damping.yfilter)
	|| ydk::is_set(send_community.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.yfilter)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());
    if (peer_as.is_set || is_set(peer_as.yfilter)) leaf_name_data.push_back(peer_as.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (peer_type.is_set || is_set(peer_type.yfilter)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.yfilter)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_flap_damping.is_set || is_set(route_flap_damping.yfilter)) leaf_name_data.push_back(route_flap_damping.get_name_leafdata());
    if (send_community.is_set || is_set(send_community.yfilter)) leaf_name_data.push_back(send_community.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
        peer_group_name.value_namespace = name_space;
        peer_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-as")
    {
        peer_as = value;
        peer_as.value_namespace = name_space;
        peer_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-type")
    {
        peer_type = value;
        peer_type.value_namespace = name_space;
        peer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
        remove_private_as.value_namespace = name_space;
        remove_private_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping = value;
        route_flap_damping.value_namespace = name_space;
        route_flap_damping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community")
    {
        send_community = value;
        send_community.value_namespace = name_space;
        send_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name.yfilter = yfilter;
    }
    if(value_path == "peer-as")
    {
        peer_as.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "peer-type")
    {
        peer_type.yfilter = yfilter;
    }
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as.yfilter = yfilter;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping.yfilter = yfilter;
    }
    if(value_path == "send-community")
    {
        send_community.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group-name" || name == "peer-as" || name == "local-as" || name == "peer-type" || name == "auth-password" || name == "remove-private-as" || name == "route-flap-damping" || name == "send-community" || name == "description")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::State::State()
    :
    peer_group_name{YType::str, "peer-group-name"},
    peer_as{YType::uint32, "peer-as"},
    local_as{YType::uint32, "local-as"},
    peer_type{YType::enumeration, "peer-type"},
    auth_password{YType::str, "auth-password"},
    remove_private_as{YType::identityref, "remove-private-as"},
    route_flap_damping{YType::boolean, "route-flap-damping"},
    send_community{YType::enumeration, "send-community"},
    description{YType::str, "description"},
    total_paths{YType::uint32, "total-paths"},
    total_prefixes{YType::uint32, "total-prefixes"}
{

    yang_name = "state"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::State::has_data() const
{
    if (is_presence_container) return true;
    return peer_group_name.is_set
	|| peer_as.is_set
	|| local_as.is_set
	|| peer_type.is_set
	|| auth_password.is_set
	|| remove_private_as.is_set
	|| route_flap_damping.is_set
	|| send_community.is_set
	|| description.is_set
	|| total_paths.is_set
	|| total_prefixes.is_set;
}

bool Bgp::PeerGroups::PeerGroup::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group_name.yfilter)
	|| ydk::is_set(peer_as.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(peer_type.yfilter)
	|| ydk::is_set(auth_password.yfilter)
	|| ydk::is_set(remove_private_as.yfilter)
	|| ydk::is_set(route_flap_damping.yfilter)
	|| ydk::is_set(send_community.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_prefixes.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.yfilter)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());
    if (peer_as.is_set || is_set(peer_as.yfilter)) leaf_name_data.push_back(peer_as.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (peer_type.is_set || is_set(peer_type.yfilter)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.yfilter)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_flap_damping.is_set || is_set(route_flap_damping.yfilter)) leaf_name_data.push_back(route_flap_damping.get_name_leafdata());
    if (send_community.is_set || is_set(send_community.yfilter)) leaf_name_data.push_back(send_community.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
        peer_group_name.value_namespace = name_space;
        peer_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-as")
    {
        peer_as = value;
        peer_as.value_namespace = name_space;
        peer_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-type")
    {
        peer_type = value;
        peer_type.value_namespace = name_space;
        peer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
        remove_private_as.value_namespace = name_space;
        remove_private_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping = value;
        route_flap_damping.value_namespace = name_space;
        route_flap_damping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community")
    {
        send_community = value;
        send_community.value_namespace = name_space;
        send_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
        total_prefixes.value_namespace = name_space;
        total_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name.yfilter = yfilter;
    }
    if(value_path == "peer-as")
    {
        peer_as.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "peer-type")
    {
        peer_type.yfilter = yfilter;
    }
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as.yfilter = yfilter;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping.yfilter = yfilter;
    }
    if(value_path == "send-community")
    {
        send_community.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group-name" || name == "peer-as" || name == "local-as" || name == "peer-type" || name == "auth-password" || name == "remove-private-as" || name == "route-flap-damping" || name == "send-community" || name == "description" || name == "total-paths" || name == "total-prefixes")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::Timers::Timers()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::Timers::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::Timers::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "timers"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::Timers::~Timers()
{
}

bool Bgp::PeerGroups::PeerGroup::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::Timers::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::Timers::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::Timers::get_children() const
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

void Bgp::PeerGroups::PeerGroup::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::Timers::Config::Config()
    :
    connect_retry{YType::str, "connect-retry"},
    hold_time{YType::str, "hold-time"},
    keepalive_interval{YType::str, "keepalive-interval"},
    minimum_advertisement_interval{YType::str, "minimum-advertisement-interval"}
{

    yang_name = "config"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::Timers::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::Timers::Config::has_data() const
{
    if (is_presence_container) return true;
    return connect_retry.is_set
	|| hold_time.is_set
	|| keepalive_interval.is_set
	|| minimum_advertisement_interval.is_set;
}

bool Bgp::PeerGroups::PeerGroup::Timers::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connect_retry.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(minimum_advertisement_interval.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::Timers::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::Timers::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_retry.is_set || is_set(connect_retry.yfilter)) leaf_name_data.push_back(connect_retry.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_advertisement_interval.is_set || is_set(minimum_advertisement_interval.yfilter)) leaf_name_data.push_back(minimum_advertisement_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::Timers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::Timers::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::Timers::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-retry")
    {
        connect_retry = value;
        connect_retry.value_namespace = name_space;
        connect_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval = value;
        minimum_advertisement_interval.value_namespace = name_space;
        minimum_advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::Timers::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-retry")
    {
        connect_retry.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::Timers::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect-retry" || name == "hold-time" || name == "keepalive-interval" || name == "minimum-advertisement-interval")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::Timers::State::State()
    :
    connect_retry{YType::str, "connect-retry"},
    hold_time{YType::str, "hold-time"},
    keepalive_interval{YType::str, "keepalive-interval"},
    minimum_advertisement_interval{YType::str, "minimum-advertisement-interval"}
{

    yang_name = "state"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::Timers::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::Timers::State::has_data() const
{
    if (is_presence_container) return true;
    return connect_retry.is_set
	|| hold_time.is_set
	|| keepalive_interval.is_set
	|| minimum_advertisement_interval.is_set;
}

bool Bgp::PeerGroups::PeerGroup::Timers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connect_retry.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(minimum_advertisement_interval.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::Timers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::Timers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_retry.is_set || is_set(connect_retry.yfilter)) leaf_name_data.push_back(connect_retry.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_advertisement_interval.is_set || is_set(minimum_advertisement_interval.yfilter)) leaf_name_data.push_back(minimum_advertisement_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::Timers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::Timers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::Timers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-retry")
    {
        connect_retry = value;
        connect_retry.value_namespace = name_space;
        connect_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval = value;
        minimum_advertisement_interval.value_namespace = name_space;
        minimum_advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::Timers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-retry")
    {
        connect_retry.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::Timers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect-retry" || name == "hold-time" || name == "keepalive-interval" || name == "minimum-advertisement-interval")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::Transport::Transport()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::Transport::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::Transport::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "transport"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::Transport::~Transport()
{
}

bool Bgp::PeerGroups::PeerGroup::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::Transport::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::Transport::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::Transport::get_children() const
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

void Bgp::PeerGroups::PeerGroup::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::Transport::Config::Config()
    :
    tcp_mss{YType::uint16, "tcp-mss"},
    mtu_discovery{YType::boolean, "mtu-discovery"},
    passive_mode{YType::boolean, "passive-mode"},
    local_address{YType::str, "local-address"}
{

    yang_name = "config"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::Transport::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::Transport::Config::has_data() const
{
    if (is_presence_container) return true;
    return tcp_mss.is_set
	|| mtu_discovery.is_set
	|| passive_mode.is_set
	|| local_address.is_set;
}

bool Bgp::PeerGroups::PeerGroup::Transport::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_mss.yfilter)
	|| ydk::is_set(mtu_discovery.yfilter)
	|| ydk::is_set(passive_mode.yfilter)
	|| ydk::is_set(local_address.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::Transport::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::Transport::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_mss.is_set || is_set(tcp_mss.yfilter)) leaf_name_data.push_back(tcp_mss.get_name_leafdata());
    if (mtu_discovery.is_set || is_set(mtu_discovery.yfilter)) leaf_name_data.push_back(mtu_discovery.get_name_leafdata());
    if (passive_mode.is_set || is_set(passive_mode.yfilter)) leaf_name_data.push_back(passive_mode.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::Transport::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::Transport::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::Transport::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss = value;
        tcp_mss.value_namespace = name_space;
        tcp_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery = value;
        mtu_discovery.value_namespace = name_space;
        mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-mode")
    {
        passive_mode = value;
        passive_mode.value_namespace = name_space;
        passive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::Transport::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss.yfilter = yfilter;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery.yfilter = yfilter;
    }
    if(value_path == "passive-mode")
    {
        passive_mode.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::Transport::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-mss" || name == "mtu-discovery" || name == "passive-mode" || name == "local-address")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::Transport::State::State()
    :
    tcp_mss{YType::uint16, "tcp-mss"},
    mtu_discovery{YType::boolean, "mtu-discovery"},
    passive_mode{YType::boolean, "passive-mode"},
    local_address{YType::str, "local-address"}
{

    yang_name = "state"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::Transport::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::Transport::State::has_data() const
{
    if (is_presence_container) return true;
    return tcp_mss.is_set
	|| mtu_discovery.is_set
	|| passive_mode.is_set
	|| local_address.is_set;
}

bool Bgp::PeerGroups::PeerGroup::Transport::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_mss.yfilter)
	|| ydk::is_set(mtu_discovery.yfilter)
	|| ydk::is_set(passive_mode.yfilter)
	|| ydk::is_set(local_address.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::Transport::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::Transport::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_mss.is_set || is_set(tcp_mss.yfilter)) leaf_name_data.push_back(tcp_mss.get_name_leafdata());
    if (mtu_discovery.is_set || is_set(mtu_discovery.yfilter)) leaf_name_data.push_back(mtu_discovery.get_name_leafdata());
    if (passive_mode.is_set || is_set(passive_mode.yfilter)) leaf_name_data.push_back(passive_mode.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::Transport::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::Transport::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::Transport::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss = value;
        tcp_mss.value_namespace = name_space;
        tcp_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery = value;
        mtu_discovery.value_namespace = name_space;
        mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-mode")
    {
        passive_mode = value;
        passive_mode.value_namespace = name_space;
        passive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::Transport::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss.yfilter = yfilter;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery.yfilter = yfilter;
    }
    if(value_path == "passive-mode")
    {
        passive_mode.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::Transport::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-mss" || name == "mtu-discovery" || name == "passive-mode" || name == "local-address")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::ErrorHandling::ErrorHandling()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::ErrorHandling::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::ErrorHandling::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "error-handling"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::ErrorHandling::~ErrorHandling()
{
}

bool Bgp::PeerGroups::PeerGroup::ErrorHandling::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::ErrorHandling::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::ErrorHandling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-handling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::ErrorHandling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::ErrorHandling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::ErrorHandling::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::ErrorHandling::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::ErrorHandling::get_children() const
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

void Bgp::PeerGroups::PeerGroup::ErrorHandling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::ErrorHandling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::ErrorHandling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::Config()
    :
    treat_as_withdraw{YType::boolean, "treat-as-withdraw"}
{

    yang_name = "config"; yang_parent_name = "error-handling"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::has_data() const
{
    if (is_presence_container) return true;
    return treat_as_withdraw.is_set;
}

bool Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(treat_as_withdraw.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (treat_as_withdraw.is_set || is_set(treat_as_withdraw.yfilter)) leaf_name_data.push_back(treat_as_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw = value;
        treat_as_withdraw.value_namespace = name_space;
        treat_as_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "treat-as-withdraw")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::ErrorHandling::State::State()
    :
    treat_as_withdraw{YType::boolean, "treat-as-withdraw"}
{

    yang_name = "state"; yang_parent_name = "error-handling"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::ErrorHandling::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::ErrorHandling::State::has_data() const
{
    if (is_presence_container) return true;
    return treat_as_withdraw.is_set;
}

bool Bgp::PeerGroups::PeerGroup::ErrorHandling::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(treat_as_withdraw.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::ErrorHandling::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::ErrorHandling::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (treat_as_withdraw.is_set || is_set(treat_as_withdraw.yfilter)) leaf_name_data.push_back(treat_as_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::ErrorHandling::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::ErrorHandling::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::ErrorHandling::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw = value;
        treat_as_withdraw.value_namespace = name_space;
        treat_as_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::ErrorHandling::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::ErrorHandling::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "treat-as-withdraw")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::GracefulRestart::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::GracefulRestart::~GracefulRestart()
{
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::GracefulRestart::get_children() const
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

void Bgp::PeerGroups::PeerGroup::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set;
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
        stale_routes_time.value_namespace = name_space;
        stale_routes_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::GracefulRestart::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set;
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
        stale_routes_time.value_namespace = name_space;
        stale_routes_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::LoggingOptions::LoggingOptions()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::LoggingOptions::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::LoggingOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "logging-options"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::LoggingOptions::~LoggingOptions()
{
}

bool Bgp::PeerGroups::PeerGroup::LoggingOptions::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::LoggingOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::LoggingOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::LoggingOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::LoggingOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::LoggingOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::LoggingOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::LoggingOptions::get_children() const
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

void Bgp::PeerGroups::PeerGroup::LoggingOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::LoggingOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::LoggingOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::Config()
    :
    log_neighbor_state_changes{YType::boolean, "log-neighbor-state-changes"}
{

    yang_name = "config"; yang_parent_name = "logging-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::has_data() const
{
    if (is_presence_container) return true;
    return log_neighbor_state_changes.is_set;
}

bool Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_neighbor_state_changes.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_neighbor_state_changes.is_set || is_set(log_neighbor_state_changes.yfilter)) leaf_name_data.push_back(log_neighbor_state_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes = value;
        log_neighbor_state_changes.value_namespace = name_space;
        log_neighbor_state_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-neighbor-state-changes")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::LoggingOptions::State::State()
    :
    log_neighbor_state_changes{YType::boolean, "log-neighbor-state-changes"}
{

    yang_name = "state"; yang_parent_name = "logging-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::LoggingOptions::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::LoggingOptions::State::has_data() const
{
    if (is_presence_container) return true;
    return log_neighbor_state_changes.is_set;
}

bool Bgp::PeerGroups::PeerGroup::LoggingOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_neighbor_state_changes.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::LoggingOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::LoggingOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_neighbor_state_changes.is_set || is_set(log_neighbor_state_changes.yfilter)) leaf_name_data.push_back(log_neighbor_state_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::LoggingOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::LoggingOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::LoggingOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes = value;
        log_neighbor_state_changes.value_namespace = name_space;
        log_neighbor_state_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::LoggingOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::LoggingOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-neighbor-state-changes")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::EbgpMultihop::EbgpMultihop()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::EbgpMultihop::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp-multihop"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::PeerGroups::PeerGroup::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::EbgpMultihop::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::EbgpMultihop::get_children() const
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

void Bgp::PeerGroups::PeerGroup::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    multihop_ttl{YType::uint8, "multihop-ttl"}
{

    yang_name = "config"; yang_parent_name = "ebgp-multihop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| multihop_ttl.is_set;
}

bool Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(multihop_ttl.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (multihop_ttl.is_set || is_set(multihop_ttl.yfilter)) leaf_name_data.push_back(multihop_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl = value;
        multihop_ttl.value_namespace = name_space;
        multihop_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "multihop-ttl")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::State()
    :
    enabled{YType::boolean, "enabled"},
    multihop_ttl{YType::uint8, "multihop-ttl"}
{

    yang_name = "state"; yang_parent_name = "ebgp-multihop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| multihop_ttl.is_set;
}

bool Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(multihop_ttl.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (multihop_ttl.is_set || is_set(multihop_ttl.yfilter)) leaf_name_data.push_back(multihop_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl = value;
        multihop_ttl.value_namespace = name_space;
        multihop_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "multihop-ttl")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::RouteReflector::RouteReflector()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-reflector"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::RouteReflector::~RouteReflector()
{
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::RouteReflector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-reflector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::RouteReflector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::RouteReflector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::RouteReflector::get_children() const
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

void Bgp::PeerGroups::PeerGroup::RouteReflector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::RouteReflector::Config::Config()
    :
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    route_reflector_client{YType::boolean, "route-reflector-client"}
{

    yang_name = "config"; yang_parent_name = "route-reflector"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::RouteReflector::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::Config::has_data() const
{
    if (is_presence_container) return true;
    return route_reflector_cluster_id.is_set
	|| route_reflector_client.is_set;
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::RouteReflector::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::RouteReflector::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::RouteReflector::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::RouteReflector::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-reflector-cluster-id" || name == "route-reflector-client")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::RouteReflector::State::State()
    :
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    route_reflector_client{YType::boolean, "route-reflector-client"}
{

    yang_name = "state"; yang_parent_name = "route-reflector"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::RouteReflector::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::State::has_data() const
{
    if (is_presence_container) return true;
    return route_reflector_cluster_id.is_set
	|| route_reflector_client.is_set;
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::RouteReflector::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::RouteReflector::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::RouteReflector::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::RouteReflector::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-reflector-cluster-id" || name == "route-reflector-client")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::AsPathOptions()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "as-path-options"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::~AsPathOptions()
{
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AsPathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AsPathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AsPathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AsPathOptions::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AsPathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::Config()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{

    yang_name = "config"; yang_parent_name = "as-path-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::has_data() const
{
    if (is_presence_container) return true;
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_own_as.yfilter)
	|| ydk::is_set(replace_peer_as.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_own_as.is_set || is_set(allow_own_as.yfilter)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.yfilter)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as = value;
        allow_own_as.value_namespace = name_space;
        allow_own_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as = value;
        replace_peer_as.value_namespace = name_space;
        replace_peer_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as.yfilter = yfilter;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-own-as" || name == "replace-peer-as")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::State::State()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{

    yang_name = "state"; yang_parent_name = "as-path-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::State::has_data() const
{
    if (is_presence_container) return true;
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_own_as.yfilter)
	|| ydk::is_set(replace_peer_as.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AsPathOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AsPathOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_own_as.is_set || is_set(allow_own_as.yfilter)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.yfilter)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AsPathOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AsPathOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as = value;
        allow_own_as.value_namespace = name_space;
        allow_own_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as = value;
        replace_peer_as.value_namespace = name_space;
        replace_peer_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as.yfilter = yfilter;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-own-as" || name == "replace-peer-as")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AddPaths::AddPaths()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AddPaths::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AddPaths::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "add-paths"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AddPaths::~AddPaths()
{
}

bool Bgp::PeerGroups::PeerGroup::AddPaths::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AddPaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AddPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AddPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AddPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AddPaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AddPaths::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AddPaths::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AddPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AddPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AddPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AddPaths::Config::Config()
    :
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"},
    eligible_prefix_policy{YType::str, "eligible-prefix-policy"}
{

    yang_name = "config"; yang_parent_name = "add-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AddPaths::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AddPaths::Config::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| send_max.is_set
	|| eligible_prefix_policy.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AddPaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send_max.yfilter)
	|| ydk::is_set(eligible_prefix_policy.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AddPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AddPaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.yfilter)) leaf_name_data.push_back(send_max.get_name_leafdata());
    if (eligible_prefix_policy.is_set || is_set(eligible_prefix_policy.yfilter)) leaf_name_data.push_back(eligible_prefix_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AddPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AddPaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AddPaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-max")
    {
        send_max = value;
        send_max.value_namespace = name_space;
        send_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy = value;
        eligible_prefix_policy.value_namespace = name_space;
        eligible_prefix_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AddPaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send-max")
    {
        send_max.yfilter = yfilter;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AddPaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send-max" || name == "eligible-prefix-policy")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AddPaths::State::State()
    :
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"},
    eligible_prefix_policy{YType::str, "eligible-prefix-policy"}
{

    yang_name = "state"; yang_parent_name = "add-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AddPaths::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AddPaths::State::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| send_max.is_set
	|| eligible_prefix_policy.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AddPaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send_max.yfilter)
	|| ydk::is_set(eligible_prefix_policy.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AddPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AddPaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.yfilter)) leaf_name_data.push_back(send_max.get_name_leafdata());
    if (eligible_prefix_policy.is_set || is_set(eligible_prefix_policy.yfilter)) leaf_name_data.push_back(eligible_prefix_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AddPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AddPaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AddPaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-max")
    {
        send_max = value;
        send_max.value_namespace = name_space;
        send_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy = value;
        eligible_prefix_policy.value_namespace = name_space;
        eligible_prefix_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AddPaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send-max")
    {
        send_max.yfilter = yfilter;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AddPaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send-max" || name == "eligible-prefix-policy")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State>())
    , ebgp(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp>())
    , ibgp(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp>())
{
    config->parent = this;
    state->parent = this;
    ebgp->parent = this;
    ibgp->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::~UseMultiplePaths()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data());
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State>();
        }
        return state;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp>();
        }
        return ibgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::get_children() const
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

    if(ebgp != nullptr)
    {
        _children["ebgp"] = ebgp;
    }

    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ebgp" || name == "ibgp")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::get_children() const
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

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::get_children() const
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

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::has_data() const
{
    if (is_presence_container) return true;
    return maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::has_data() const
{
    if (is_presence_container) return true;
    return maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::ApplyPolicy::~ApplyPolicy()
{
}

bool Bgp::PeerGroups::PeerGroup::ApplyPolicy::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::ApplyPolicy::get_children() const
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

void Bgp::PeerGroups::PeerGroup::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::Config()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::State()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafis()
    :
    afi_safi(this, {"afi_safi_name"})
{

    yang_name = "afi-safis"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::~AfiSafis()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afi_safi.len(); index++)
    {
        if(afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::has_operation() const
{
    for (std::size_t index=0; index<afi_safi.len(); index++)
    {
        if(afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi")
    {
        auto ent_ = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi>();
        ent_->parent = this;
        afi_safi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : afi_safi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"}
        ,
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State>())
    , graceful_restart(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart>())
    , route_selection_options(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions>())
    , use_multiple_paths(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths>())
    , apply_policy(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy>())
    , ipv4_unicast(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast>())
    , ipv6_unicast(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast>())
    , ipv4_labeled_unicast(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast>())
    , ipv6_labeled_unicast(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast>())
    , l3vpn_ipv4_unicast(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast>())
    , l3vpn_ipv6_unicast(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast>())
    , l3vpn_ipv4_multicast(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast>())
    , l3vpn_ipv6_multicast(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast>())
    , l2vpn_vpls(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls>())
    , l2vpn_evpn(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn>())
{
    config->parent = this;
    state->parent = this;
    graceful_restart->parent = this;
    route_selection_options->parent = this;
    use_multiple_paths->parent = this;
    apply_policy->parent = this;
    ipv4_unicast->parent = this;
    ipv6_unicast->parent = this;
    ipv4_labeled_unicast->parent = this;
    ipv6_labeled_unicast->parent = this;
    l3vpn_ipv4_unicast->parent = this;
    l3vpn_ipv6_unicast->parent = this;
    l3vpn_ipv4_multicast->parent = this;
    l3vpn_ipv6_multicast->parent = this;
    l2vpn_vpls->parent = this;
    l2vpn_evpn->parent = this;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::~AfiSafi()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (route_selection_options !=  nullptr && route_selection_options->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data())
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_data())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_data())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_data())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_data())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_data())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_data())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_data())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (route_selection_options !=  nullptr && route_selection_options->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation())
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_operation())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_operation())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_operation())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_operation())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_operation())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_operation())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_operation())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi";
    ADD_KEY_TOKEN(afi_safi_name, "afi-safi-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State>();
        }
        return state;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "route-selection-options")
    {
        if(route_selection_options == nullptr)
        {
            route_selection_options = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions>();
        }
        return route_selection_options;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    if(child_yang_name == "ipv4-labeled-unicast")
    {
        if(ipv4_labeled_unicast == nullptr)
        {
            ipv4_labeled_unicast = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast>();
        }
        return ipv4_labeled_unicast;
    }

    if(child_yang_name == "ipv6-labeled-unicast")
    {
        if(ipv6_labeled_unicast == nullptr)
        {
            ipv6_labeled_unicast = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast>();
        }
        return ipv6_labeled_unicast;
    }

    if(child_yang_name == "l3vpn-ipv4-unicast")
    {
        if(l3vpn_ipv4_unicast == nullptr)
        {
            l3vpn_ipv4_unicast = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast>();
        }
        return l3vpn_ipv4_unicast;
    }

    if(child_yang_name == "l3vpn-ipv6-unicast")
    {
        if(l3vpn_ipv6_unicast == nullptr)
        {
            l3vpn_ipv6_unicast = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast>();
        }
        return l3vpn_ipv6_unicast;
    }

    if(child_yang_name == "l3vpn-ipv4-multicast")
    {
        if(l3vpn_ipv4_multicast == nullptr)
        {
            l3vpn_ipv4_multicast = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast>();
        }
        return l3vpn_ipv4_multicast;
    }

    if(child_yang_name == "l3vpn-ipv6-multicast")
    {
        if(l3vpn_ipv6_multicast == nullptr)
        {
            l3vpn_ipv6_multicast = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast>();
        }
        return l3vpn_ipv6_multicast;
    }

    if(child_yang_name == "l2vpn-vpls")
    {
        if(l2vpn_vpls == nullptr)
        {
            l2vpn_vpls = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls>();
        }
        return l2vpn_vpls;
    }

    if(child_yang_name == "l2vpn-evpn")
    {
        if(l2vpn_evpn == nullptr)
        {
            l2vpn_evpn = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn>();
        }
        return l2vpn_evpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::get_children() const
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

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(route_selection_options != nullptr)
    {
        _children["route-selection-options"] = route_selection_options;
    }

    if(use_multiple_paths != nullptr)
    {
        _children["use-multiple-paths"] = use_multiple_paths;
    }

    if(apply_policy != nullptr)
    {
        _children["apply-policy"] = apply_policy;
    }

    if(ipv4_unicast != nullptr)
    {
        _children["ipv4-unicast"] = ipv4_unicast;
    }

    if(ipv6_unicast != nullptr)
    {
        _children["ipv6-unicast"] = ipv6_unicast;
    }

    if(ipv4_labeled_unicast != nullptr)
    {
        _children["ipv4-labeled-unicast"] = ipv4_labeled_unicast;
    }

    if(ipv6_labeled_unicast != nullptr)
    {
        _children["ipv6-labeled-unicast"] = ipv6_labeled_unicast;
    }

    if(l3vpn_ipv4_unicast != nullptr)
    {
        _children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
    }

    if(l3vpn_ipv6_unicast != nullptr)
    {
        _children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
    }

    if(l3vpn_ipv4_multicast != nullptr)
    {
        _children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
    }

    if(l3vpn_ipv6_multicast != nullptr)
    {
        _children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
    }

    if(l2vpn_vpls != nullptr)
    {
        _children["l2vpn-vpls"] = l2vpn_vpls;
    }

    if(l2vpn_evpn != nullptr)
    {
        _children["l2vpn-evpn"] = l2vpn_evpn;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "graceful-restart" || name == "route-selection-options" || name == "use-multiple-paths" || name == "apply-policy" || name == "ipv4-unicast" || name == "ipv6-unicast" || name == "ipv4-labeled-unicast" || name == "ipv6-labeled-unicast" || name == "l3vpn-ipv4-unicast" || name == "l3vpn-ipv6-unicast" || name == "l3vpn-ipv4-multicast" || name == "l3vpn-ipv6-multicast" || name == "l2vpn-vpls" || name == "l2vpn-evpn" || name == "afi-safi-name")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::Config()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::State()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::~GracefulRestart()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::RouteSelectionOptions()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-selection-options"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::~RouteSelectionOptions()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-selection-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::Config()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "config"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_data() const
{
    if (is_presence_container) return true;
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::State()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "state"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_data() const
{
    if (is_presence_container) return true;
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State>())
    , ebgp(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>())
    , ibgp(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>())
{
    config->parent = this;
    state->parent = this;
    ebgp->parent = this;
    ibgp->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::~UseMultiplePaths()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State>();
        }
        return state;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>();
        }
        return ibgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::get_children() const
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

    if(ebgp != nullptr)
    {
        _children["ebgp"] = ebgp;
    }

    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ebgp" || name == "ibgp")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_data() const
{
    if (is_presence_container) return true;
    return maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_data() const
{
    if (is_presence_container) return true;
    return maximum_paths.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::~ApplyPolicy()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::Config()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::State()
    :
    import_policy{YType::str, "import-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    default_export_policy{YType::enumeration, "default-export-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_import_policy.is_set
	|| default_export_policy.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(default_export_policy.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());
    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());

    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy" || name == "default-import-policy" || name == "export-policy" || name == "default-export-policy")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>())
    , config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State>())
{
    prefix_limit->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::~Ipv4Unicast()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>())
    , config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State>())
{
    prefix_limit->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::~Ipv6Unicast()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::Ipv4LabeledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv4-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::~Ipv4LabeledUnicast()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::Ipv6LabeledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv6-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::~Ipv6LabeledUnicast()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::L3vpnIpv4Unicast()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::~L3vpnIpv4Unicast()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::L3vpnIpv6Unicast()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::~L3vpnIpv6Unicast()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::L3vpnIpv4Multicast()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::~L3vpnIpv4Multicast()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::L3vpnIpv6Multicast()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::~L3vpnIpv6Multicast()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::L2vpnVpls()
    :
    prefix_limit(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-vpls"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::~L2vpnVpls()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config>())
    , state(std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}


}
}

