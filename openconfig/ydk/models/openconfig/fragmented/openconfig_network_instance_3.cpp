
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_network_instance_3.hpp"
#include "openconfig_network_instance_4.hpp"
#include "openconfig_network_instance_5.hpp"
#include "openconfig_network_instance_6.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_network_instance {

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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp_ldp_sync != nullptr)
    {
        children["igp-ldp-sync"] = igp_ldp_sync;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Mpls::IgpLdpSync::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "igp-shortcuts"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::~IgpShortcuts()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::has_data() const
{
    for (std::size_t index=0; index<afi.size(); index++)
    {
        if(afi[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::has_operation() const
{
    for (std::size_t index=0; index<afi.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi>();
        c->parent = this;
        afi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : afi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State>())
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
    path_buffer << "afi" <<"[afi-name='" <<afi_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::IgpShortcuts::Afi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "afi-safi"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::~AfiSafi()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State>())
	,multi_topology(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology>())
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
    path_buffer << "af" <<"[afi-name='" <<afi_name <<"']" <<"[safi-name='" <<safi_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(multi_topology != nullptr)
    {
        children["multi-topology"] = multi_topology;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafi::Af::MultiTopology::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,level2_to_level1(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(level1_to_level2 != nullptr)
    {
        children["level1-to-level2"] = level1_to_level2;
    }

    if(level2_to_level1 != nullptr)
    {
        children["level2-to-level1"] = level2_to_level1;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "levels"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::~Levels()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::has_data() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::has_operation() const
{
    for (std::size_t index=0; index<level.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level>();
        c->parent = this;
        level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : level)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State>())
	,system_level_counters(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters>())
	,link_state_database(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase>())
	,traffic_engineering(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering>())
	,route_preference(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference>())
	,authentication(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Authentication>())
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
    path_buffer << "level" <<"[level-number='" <<level_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_number.is_set || is_set(level_number.yfilter)) leaf_name_data.push_back(level_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(system_level_counters != nullptr)
    {
        children["system-level-counters"] = system_level_counters;
    }

    if(link_state_database != nullptr)
    {
        children["link-state-database"] = link_state_database;
    }

    if(traffic_engineering != nullptr)
    {
        children["traffic-engineering"] = traffic_engineering;
    }

    if(route_preference != nullptr)
    {
        children["route-preference"] = route_preference;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "link-state-database"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::~LinkStateDatabase()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,tlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs>())
	,undefined_tlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::UndefinedTlvs>())
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
    path_buffer << "lsp" <<"[lsp-id='" <<lsp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(tlvs != nullptr)
    {
        children["tlvs"] = tlvs;
    }

    if(undefined_tlvs != nullptr)
    {
        children["undefined-tlvs"] = undefined_tlvs;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "tlvs"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::~Tlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,area_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress>())
	,lsp_buffer_size(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize>())
	,nlpid(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid>())
	,hostname(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname>())
	,ipv4_interface_addresses(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses>())
	,ipv6_interface_addresses(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses>())
	,ipv4_te_router_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId>())
	,ipv6_te_router_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId>())
	,instance_ids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds>())
	,ipv4_srlgs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs>())
	,ipv6_srlgs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs>())
	,purge_oi(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi>())
	,router_capabilities(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities>())
	,is_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability>())
	,ipv4_internal_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability>())
	,ipv4_external_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability>())
	,authentication(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication>())
	,extended_is_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability>())
	,extended_ipv4_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability>())
	,ipv6_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability>())
	,multi_topology(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology>())
	,isis_neighbor_attribute(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute>())
	,is_alias_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsAliasId>())
	,mt_isn(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsn>())
	,mt_isis_neighbor_attribute(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIsisNeighborAttribute>())
	,mt_ipv4_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv4Reachability>())
	,mt_ipv6_reachability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MtIpv6Reachability>())
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
    path_buffer << "tlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(area_address != nullptr)
    {
        children["area-address"] = area_address;
    }

    if(lsp_buffer_size != nullptr)
    {
        children["lsp-buffer-size"] = lsp_buffer_size;
    }

    if(nlpid != nullptr)
    {
        children["nlpid"] = nlpid;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(ipv4_interface_addresses != nullptr)
    {
        children["ipv4-interface-addresses"] = ipv4_interface_addresses;
    }

    if(ipv6_interface_addresses != nullptr)
    {
        children["ipv6-interface-addresses"] = ipv6_interface_addresses;
    }

    if(ipv4_te_router_id != nullptr)
    {
        children["ipv4-te-router-id"] = ipv4_te_router_id;
    }

    if(ipv6_te_router_id != nullptr)
    {
        children["ipv6-te-router-id"] = ipv6_te_router_id;
    }

    if(instance_ids != nullptr)
    {
        children["instance-ids"] = instance_ids;
    }

    if(ipv4_srlgs != nullptr)
    {
        children["ipv4-srlgs"] = ipv4_srlgs;
    }

    if(ipv6_srlgs != nullptr)
    {
        children["ipv6-srlgs"] = ipv6_srlgs;
    }

    if(purge_oi != nullptr)
    {
        children["purge-oi"] = purge_oi;
    }

    if(router_capabilities != nullptr)
    {
        children["router-capabilities"] = router_capabilities;
    }

    if(is_reachability != nullptr)
    {
        children["is-reachability"] = is_reachability;
    }

    if(ipv4_internal_reachability != nullptr)
    {
        children["ipv4-internal-reachability"] = ipv4_internal_reachability;
    }

    if(ipv4_external_reachability != nullptr)
    {
        children["ipv4-external-reachability"] = ipv4_external_reachability;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(extended_is_reachability != nullptr)
    {
        children["extended-is-reachability"] = extended_is_reachability;
    }

    if(extended_ipv4_reachability != nullptr)
    {
        children["extended-ipv4-reachability"] = extended_ipv4_reachability;
    }

    if(ipv6_reachability != nullptr)
    {
        children["ipv6-reachability"] = ipv6_reachability;
    }

    if(multi_topology != nullptr)
    {
        children["multi-topology"] = multi_topology;
    }

    if(isis_neighbor_attribute != nullptr)
    {
        children["isis-neighbor-attribute"] = isis_neighbor_attribute;
    }

    if(is_alias_id != nullptr)
    {
        children["is-alias-id"] = is_alias_id;
    }

    if(mt_isn != nullptr)
    {
        children["mt-isn"] = mt_isn;
    }

    if(mt_isis_neighbor_attribute != nullptr)
    {
        children["mt-isis-neighbor-attribute"] = mt_isis_neighbor_attribute;
    }

    if(mt_ipv4_reachability != nullptr)
    {
        children["mt-ipv4-reachability"] = mt_ipv4_reachability;
    }

    if(mt_ipv6_reachability != nullptr)
    {
        children["mt-ipv6-reachability"] = mt_ipv6_reachability;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::AreaAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::LspBufferSize::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Nlpid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Hostname::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InterfaceAddresses::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6InterfaceAddresses::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4TeRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6TeRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "instance-ids"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::~InstanceIds()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::has_data() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "instance-id" <<"[instance-id='" <<instance_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::InstanceIds::InstanceId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "ipv4-srlgs"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::~Ipv4Srlgs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::has_data() const
{
    for (std::size_t index=0; index<ipv4_srlg.size(); index++)
    {
        if(ipv4_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::has_operation() const
{
    for (std::size_t index=0; index<ipv4_srlg.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-srlg")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg>();
        c->parent = this;
        ipv4_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4_srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "ipv4-srlg" <<"[instance-number='" <<instance_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4Srlgs::Ipv4Srlg::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "ipv6-srlgs"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::~Ipv6Srlgs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::has_data() const
{
    for (std::size_t index=0; index<ipv6_srlg.size(); index++)
    {
        if(ipv6_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_srlg.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-srlg")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg>();
        c->parent = this;
        ipv6_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv6_srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "ipv6-srlg" <<"[instance-number='" <<instance_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Srlgs::Ipv6Srlg::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::PurgeOi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "router-capabilities"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::~RouterCapabilities()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::has_data() const
{
    for (std::size_t index=0; index<router_capability.size(); index++)
    {
        if(router_capability[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::has_operation() const
{
    for (std::size_t index=0; index<router_capability.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-capability")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability>();
        c->parent = this;
        router_capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : router_capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs>())
	,undefined_subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs>())
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
    path_buffer << "router-capability" <<"[instance-number='" <<instance_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(subtlvs != nullptr)
    {
        children["subtlvs"] = subtlvs;
    }

    if(undefined_subtlvs != nullptr)
    {
        children["undefined-subtlvs"] = undefined_subtlvs;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "subtlvs"; yang_parent_name = "router-capability"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::~Subtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::has_data() const
{
    for (std::size_t index=0; index<subtlv.size(); index++)
    {
        if(subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::has_operation() const
{
    for (std::size_t index=0; index<subtlv.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlv")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv>();
        c->parent = this;
        subtlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subtlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,segment_routing_algorithms(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms>())
	,segment_routing_capability(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability>())
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
    path_buffer << "subtlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(segment_routing_algorithms != nullptr)
    {
        children["segment-routing-algorithms"] = segment_routing_algorithms;
    }

    if(segment_routing_capability != nullptr)
    {
        children["segment-routing-capability"] = segment_routing_capability;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "segment-routing-algorithms"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::~SegmentRoutingAlgorithms()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::has_data() const
{
    for (std::size_t index=0; index<segment_routing_algorithm.size(); index++)
    {
        if(segment_routing_algorithm[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_algorithm.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-algorithm")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm>();
        c->parent = this;
        segment_routing_algorithm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : segment_routing_algorithm)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "segment-routing-algorithm" <<"[algorithm='" <<algorithm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,srgb_descriptors(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors>())
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(srgb_descriptors != nullptr)
    {
        children["srgb-descriptors"] = srgb_descriptors;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "srgb-descriptors"; yang_parent_name = "segment-routing-capability"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::~SrgbDescriptors()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::has_data() const
{
    for (std::size_t index=0; index<srgb_descriptor.size(); index++)
    {
        if(srgb_descriptor[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::has_operation() const
{
    for (std::size_t index=0; index<srgb_descriptor.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srgb-descriptor")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor>();
        c->parent = this;
        srgb_descriptor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : srgb_descriptor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "undefined-subtlvs"; yang_parent_name = "router-capability"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::~UndefinedSubtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::has_data() const
{
    for (std::size_t index=0; index<undefined_subtlv.size(); index++)
    {
        if(undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<undefined_subtlv.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "undefined-subtlv")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv>();
        c->parent = this;
        undefined_subtlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : undefined_subtlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "undefined-subtlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
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
{

    yang_name = "neighbors"; yang_parent_name = "is-reachability"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::~Neighbors()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbors.size(); index++)
    {
        if(neighbors[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbors.size(); index++)
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_>();
        c->parent = this;
        neighbors.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbors)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
	,default_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric>())
	,delay_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric>())
	,expense_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric>())
	,error_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric>())
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
    path_buffer << "neighbors" <<"[system-id='" <<system_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(delay_metric != nullptr)
    {
        children["delay-metric"] = delay_metric;
    }

    if(expense_metric != nullptr)
    {
        children["expense-metric"] = expense_metric;
    }

    if(error_metric != nullptr)
    {
        children["error-metric"] = error_metric;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
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

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::DelayMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::ExpenseMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State>())
{
    state->parent = this;

    yang_name = "expense-metric"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::~ExpenseMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expense-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "expense-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::has_data() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::ErrorMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State>())
{
    state->parent = this;

    yang_name = "error-metric"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::~ErrorMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "error-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::has_data() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Ipv4InternalReachability()
    :
    prefixes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes>())
{
    prefixes->parent = this;

    yang_name = "ipv4-internal-reachability"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::~Ipv4InternalReachability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::has_data() const
{
    return (prefixes !=  nullptr && prefixes->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-internal-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes>();
        }
        return prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes()
{

    yang_name = "prefixes"; yang_parent_name = "ipv4-internal-reachability"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::~Prefixes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::Prefixes_()
    :
    prefix{YType::str, "prefix"}
    	,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State>())
	,default_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric>())
	,delay_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric>())
	,expense_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric>())
	,error_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric>())
{
    state->parent = this;
    default_metric->parent = this;
    delay_metric->parent = this;
    expense_metric->parent = this;
    error_metric->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::~Prefixes_()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::has_data() const
{
    return prefix.is_set
	|| (state !=  nullptr && state->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (delay_metric !=  nullptr && delay_metric->has_data())
	|| (expense_metric !=  nullptr && expense_metric->has_data())
	|| (error_metric !=  nullptr && error_metric->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (delay_metric !=  nullptr && delay_metric->has_operation())
	|| (expense_metric !=  nullptr && expense_metric->has_operation())
	|| (error_metric !=  nullptr && error_metric->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State>();
        }
        return state;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "delay-metric")
    {
        if(delay_metric == nullptr)
        {
            delay_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric>();
        }
        return delay_metric;
    }

    if(child_yang_name == "expense-metric")
    {
        if(expense_metric == nullptr)
        {
            expense_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric>();
        }
        return expense_metric;
    }

    if(child_yang_name == "error-metric")
    {
        if(error_metric == nullptr)
        {
            error_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric>();
        }
        return error_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(delay_metric != nullptr)
    {
        children["delay-metric"] = delay_metric;
    }

    if(expense_metric != nullptr)
    {
        children["expense-metric"] = expense_metric;
    }

    if(error_metric != nullptr)
    {
        children["error-metric"] = error_metric;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "default-metric" || name == "delay-metric" || name == "expense-metric" || name == "error-metric" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::State()
    :
    up_down{YType::boolean, "up-down"},
    prefix{YType::str, "prefix"}
{

    yang_name = "state"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::has_data() const
{
    return up_down.is_set
	|| prefix.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::DefaultMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State>())
{
    state->parent = this;

    yang_name = "default-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::~DefaultMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::State()
    :
    flags{YType::enumeration, "flags"},
    default_metric{YType::uint8, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_data() const
{
    return flags.is_set
	|| default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::DelayMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State>())
{
    state->parent = this;

    yang_name = "delay-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::~DelayMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "delay-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_data() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::ExpenseMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State>())
{
    state->parent = this;

    yang_name = "expense-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::~ExpenseMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expense-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "expense-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_data() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::ErrorMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State>())
{
    state->parent = this;

    yang_name = "error-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::~ErrorMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "error-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_data() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Ipv4ExternalReachability()
    :
    prefixes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes>())
{
    prefixes->parent = this;

    yang_name = "ipv4-external-reachability"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::~Ipv4ExternalReachability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::has_data() const
{
    return (prefixes !=  nullptr && prefixes->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-external-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes>();
        }
        return prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes()
{

    yang_name = "prefixes"; yang_parent_name = "ipv4-external-reachability"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::~Prefixes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::Prefixes_()
    :
    prefix{YType::str, "prefix"}
    	,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State>())
	,default_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric>())
	,delay_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric>())
	,expense_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric>())
	,error_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric>())
{
    state->parent = this;
    default_metric->parent = this;
    delay_metric->parent = this;
    expense_metric->parent = this;
    error_metric->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::~Prefixes_()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::has_data() const
{
    return prefix.is_set
	|| (state !=  nullptr && state->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (delay_metric !=  nullptr && delay_metric->has_data())
	|| (expense_metric !=  nullptr && expense_metric->has_data())
	|| (error_metric !=  nullptr && error_metric->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (delay_metric !=  nullptr && delay_metric->has_operation())
	|| (expense_metric !=  nullptr && expense_metric->has_operation())
	|| (error_metric !=  nullptr && error_metric->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State>();
        }
        return state;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "delay-metric")
    {
        if(delay_metric == nullptr)
        {
            delay_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric>();
        }
        return delay_metric;
    }

    if(child_yang_name == "expense-metric")
    {
        if(expense_metric == nullptr)
        {
            expense_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric>();
        }
        return expense_metric;
    }

    if(child_yang_name == "error-metric")
    {
        if(error_metric == nullptr)
        {
            error_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric>();
        }
        return error_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(delay_metric != nullptr)
    {
        children["delay-metric"] = delay_metric;
    }

    if(expense_metric != nullptr)
    {
        children["expense-metric"] = expense_metric;
    }

    if(error_metric != nullptr)
    {
        children["error-metric"] = error_metric;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "default-metric" || name == "delay-metric" || name == "expense-metric" || name == "error-metric" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::State()
    :
    up_down{YType::boolean, "up-down"},
    prefix{YType::str, "prefix"}
{

    yang_name = "state"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::has_data() const
{
    return up_down.is_set
	|| prefix.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::DefaultMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State>())
{
    state->parent = this;

    yang_name = "default-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::~DefaultMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::State()
    :
    flags{YType::enumeration, "flags"},
    default_metric{YType::uint8, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_data() const
{
    return flags.is_set
	|| default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::DelayMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State>())
{
    state->parent = this;

    yang_name = "delay-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::~DelayMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "delay-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_data() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::ExpenseMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State>())
{
    state->parent = this;

    yang_name = "expense-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::~ExpenseMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expense-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "expense-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_data() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::ErrorMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State>())
{
    state->parent = this;

    yang_name = "error-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::~ErrorMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "error-metric"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_data() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::Authentication()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State>())
{
    state->parent = this;

    yang_name = "authentication"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::~Authentication()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::State()
    :
    crypto_type{YType::enumeration, "crypto-type"},
    authentication_key{YType::str, "authentication-key"}
{

    yang_name = "state"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::has_data() const
{
    return crypto_type.is_set
	|| authentication_key.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crypto_type.yfilter)
	|| ydk::is_set(authentication_key.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crypto_type.is_set || is_set(crypto_type.yfilter)) leaf_name_data.push_back(crypto_type.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crypto-type")
    {
        crypto_type = value;
        crypto_type.value_namespace = name_space;
        crypto_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crypto-type")
    {
        crypto_type.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto-type" || name == "authentication-key")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::ExtendedIsReachability()
    :
    neighbors(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors>())
{
    neighbors->parent = this;

    yang_name = "extended-is-reachability"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::~ExtendedIsReachability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::has_data() const
{
    return (neighbors !=  nullptr && neighbors->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-is-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "extended-is-reachability"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::~Neighbors()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbors.size(); index++)
    {
        if(neighbors[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbors.size(); index++)
    {
        if(neighbors[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_>();
        c->parent = this;
        neighbors.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbors)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Neighbors_()
    :
    system_id{YType::str, "system-id"}
    	,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State>())
	,subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs>())
	,undefined_subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs>())
{
    state->parent = this;
    subtlvs->parent = this;
    undefined_subtlvs->parent = this;

    yang_name = "neighbors"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::~Neighbors_()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::has_data() const
{
    return system_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (subtlvs !=  nullptr && subtlvs->has_data())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (subtlvs !=  nullptr && subtlvs->has_operation())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors" <<"[system-id='" <<system_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State>();
        }
        return state;
    }

    if(child_yang_name == "subtlvs")
    {
        if(subtlvs == nullptr)
        {
            subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs>();
        }
        return subtlvs;
    }

    if(child_yang_name == "undefined-subtlvs")
    {
        if(undefined_subtlvs == nullptr)
        {
            undefined_subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs>();
        }
        return undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(subtlvs != nullptr)
    {
        children["subtlvs"] = subtlvs;
    }

    if(undefined_subtlvs != nullptr)
    {
        children["undefined-subtlvs"] = undefined_subtlvs;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "subtlvs" || name == "undefined-subtlvs" || name == "system-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::State()
    :
    system_id{YType::str, "system-id"},
    metric{YType::uint32, "metric"}
{

    yang_name = "state"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::has_data() const
{
    return system_id.is_set
	|| metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlvs()
{

    yang_name = "subtlvs"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::~Subtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::has_data() const
{
    for (std::size_t index=0; index<subtlv.size(); index++)
    {
        if(subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::has_operation() const
{
    for (std::size_t index=0; index<subtlv.size(); index++)
    {
        if(subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlv")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv>();
        c->parent = this;
        subtlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subtlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Subtlv()
    :
    type{YType::identityref, "type"}
    	,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State>())
	,admin_group(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup>())
	,ipv4_interface_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress>())
	,ipv4_neighbor_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress>())
	,max_link_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth>())
	,max_reservable_link_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth>())
	,unreserved_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth>())
	,ipv6_interface_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress>())
	,ipv6_neighbor_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress>())
	,extended_admin_group(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup>())
	,te_default_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric>())
	,link_attributes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes>())
	,link_protection_type(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType>())
	,bandwidth_constraints(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints>())
	,unconstrained_lsp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp>())
	,adjacency_sids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids>())
	,lan_adjacency_sids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids>())
	,link_delay(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay>())
	,min_max_link_delay(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay>())
	,link_delay_variation(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation>())
	,link_loss(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss>())
	,residual_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth>())
	,available_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth>())
	,utilized_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth>())
{
    state->parent = this;
    admin_group->parent = this;
    ipv4_interface_address->parent = this;
    ipv4_neighbor_address->parent = this;
    max_link_bandwidth->parent = this;
    max_reservable_link_bandwidth->parent = this;
    unreserved_bandwidth->parent = this;
    ipv6_interface_address->parent = this;
    ipv6_neighbor_address->parent = this;
    extended_admin_group->parent = this;
    te_default_metric->parent = this;
    link_attributes->parent = this;
    link_protection_type->parent = this;
    bandwidth_constraints->parent = this;
    unconstrained_lsp->parent = this;
    adjacency_sids->parent = this;
    lan_adjacency_sids->parent = this;
    link_delay->parent = this;
    min_max_link_delay->parent = this;
    link_delay_variation->parent = this;
    link_loss->parent = this;
    residual_bandwidth->parent = this;
    available_bandwidth->parent = this;
    utilized_bandwidth->parent = this;

    yang_name = "subtlv"; yang_parent_name = "subtlvs"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::~Subtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::has_data() const
{
    return type.is_set
	|| (state !=  nullptr && state->has_data())
	|| (admin_group !=  nullptr && admin_group->has_data())
	|| (ipv4_interface_address !=  nullptr && ipv4_interface_address->has_data())
	|| (ipv4_neighbor_address !=  nullptr && ipv4_neighbor_address->has_data())
	|| (max_link_bandwidth !=  nullptr && max_link_bandwidth->has_data())
	|| (max_reservable_link_bandwidth !=  nullptr && max_reservable_link_bandwidth->has_data())
	|| (unreserved_bandwidth !=  nullptr && unreserved_bandwidth->has_data())
	|| (ipv6_interface_address !=  nullptr && ipv6_interface_address->has_data())
	|| (ipv6_neighbor_address !=  nullptr && ipv6_neighbor_address->has_data())
	|| (extended_admin_group !=  nullptr && extended_admin_group->has_data())
	|| (te_default_metric !=  nullptr && te_default_metric->has_data())
	|| (link_attributes !=  nullptr && link_attributes->has_data())
	|| (link_protection_type !=  nullptr && link_protection_type->has_data())
	|| (bandwidth_constraints !=  nullptr && bandwidth_constraints->has_data())
	|| (unconstrained_lsp !=  nullptr && unconstrained_lsp->has_data())
	|| (adjacency_sids !=  nullptr && adjacency_sids->has_data())
	|| (lan_adjacency_sids !=  nullptr && lan_adjacency_sids->has_data())
	|| (link_delay !=  nullptr && link_delay->has_data())
	|| (min_max_link_delay !=  nullptr && min_max_link_delay->has_data())
	|| (link_delay_variation !=  nullptr && link_delay_variation->has_data())
	|| (link_loss !=  nullptr && link_loss->has_data())
	|| (residual_bandwidth !=  nullptr && residual_bandwidth->has_data())
	|| (available_bandwidth !=  nullptr && available_bandwidth->has_data())
	|| (utilized_bandwidth !=  nullptr && utilized_bandwidth->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (admin_group !=  nullptr && admin_group->has_operation())
	|| (ipv4_interface_address !=  nullptr && ipv4_interface_address->has_operation())
	|| (ipv4_neighbor_address !=  nullptr && ipv4_neighbor_address->has_operation())
	|| (max_link_bandwidth !=  nullptr && max_link_bandwidth->has_operation())
	|| (max_reservable_link_bandwidth !=  nullptr && max_reservable_link_bandwidth->has_operation())
	|| (unreserved_bandwidth !=  nullptr && unreserved_bandwidth->has_operation())
	|| (ipv6_interface_address !=  nullptr && ipv6_interface_address->has_operation())
	|| (ipv6_neighbor_address !=  nullptr && ipv6_neighbor_address->has_operation())
	|| (extended_admin_group !=  nullptr && extended_admin_group->has_operation())
	|| (te_default_metric !=  nullptr && te_default_metric->has_operation())
	|| (link_attributes !=  nullptr && link_attributes->has_operation())
	|| (link_protection_type !=  nullptr && link_protection_type->has_operation())
	|| (bandwidth_constraints !=  nullptr && bandwidth_constraints->has_operation())
	|| (unconstrained_lsp !=  nullptr && unconstrained_lsp->has_operation())
	|| (adjacency_sids !=  nullptr && adjacency_sids->has_operation())
	|| (lan_adjacency_sids !=  nullptr && lan_adjacency_sids->has_operation())
	|| (link_delay !=  nullptr && link_delay->has_operation())
	|| (min_max_link_delay !=  nullptr && min_max_link_delay->has_operation())
	|| (link_delay_variation !=  nullptr && link_delay_variation->has_operation())
	|| (link_loss !=  nullptr && link_loss->has_operation())
	|| (residual_bandwidth !=  nullptr && residual_bandwidth->has_operation())
	|| (available_bandwidth !=  nullptr && available_bandwidth->has_operation())
	|| (utilized_bandwidth !=  nullptr && utilized_bandwidth->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State>();
        }
        return state;
    }

    if(child_yang_name == "admin-group")
    {
        if(admin_group == nullptr)
        {
            admin_group = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup>();
        }
        return admin_group;
    }

    if(child_yang_name == "ipv4-interface-address")
    {
        if(ipv4_interface_address == nullptr)
        {
            ipv4_interface_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress>();
        }
        return ipv4_interface_address;
    }

    if(child_yang_name == "ipv4-neighbor-address")
    {
        if(ipv4_neighbor_address == nullptr)
        {
            ipv4_neighbor_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress>();
        }
        return ipv4_neighbor_address;
    }

    if(child_yang_name == "max-link-bandwidth")
    {
        if(max_link_bandwidth == nullptr)
        {
            max_link_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth>();
        }
        return max_link_bandwidth;
    }

    if(child_yang_name == "max-reservable-link-bandwidth")
    {
        if(max_reservable_link_bandwidth == nullptr)
        {
            max_reservable_link_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth>();
        }
        return max_reservable_link_bandwidth;
    }

    if(child_yang_name == "unreserved-bandwidth")
    {
        if(unreserved_bandwidth == nullptr)
        {
            unreserved_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth>();
        }
        return unreserved_bandwidth;
    }

    if(child_yang_name == "ipv6-interface-address")
    {
        if(ipv6_interface_address == nullptr)
        {
            ipv6_interface_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress>();
        }
        return ipv6_interface_address;
    }

    if(child_yang_name == "ipv6-neighbor-address")
    {
        if(ipv6_neighbor_address == nullptr)
        {
            ipv6_neighbor_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress>();
        }
        return ipv6_neighbor_address;
    }

    if(child_yang_name == "extended-admin-group")
    {
        if(extended_admin_group == nullptr)
        {
            extended_admin_group = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup>();
        }
        return extended_admin_group;
    }

    if(child_yang_name == "te-default-metric")
    {
        if(te_default_metric == nullptr)
        {
            te_default_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric>();
        }
        return te_default_metric;
    }

    if(child_yang_name == "link-attributes")
    {
        if(link_attributes == nullptr)
        {
            link_attributes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes>();
        }
        return link_attributes;
    }

    if(child_yang_name == "link-protection-type")
    {
        if(link_protection_type == nullptr)
        {
            link_protection_type = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType>();
        }
        return link_protection_type;
    }

    if(child_yang_name == "bandwidth-constraints")
    {
        if(bandwidth_constraints == nullptr)
        {
            bandwidth_constraints = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints>();
        }
        return bandwidth_constraints;
    }

    if(child_yang_name == "unconstrained-lsp")
    {
        if(unconstrained_lsp == nullptr)
        {
            unconstrained_lsp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp>();
        }
        return unconstrained_lsp;
    }

    if(child_yang_name == "adjacency-sids")
    {
        if(adjacency_sids == nullptr)
        {
            adjacency_sids = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids>();
        }
        return adjacency_sids;
    }

    if(child_yang_name == "lan-adjacency-sids")
    {
        if(lan_adjacency_sids == nullptr)
        {
            lan_adjacency_sids = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids>();
        }
        return lan_adjacency_sids;
    }

    if(child_yang_name == "link-delay")
    {
        if(link_delay == nullptr)
        {
            link_delay = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay>();
        }
        return link_delay;
    }

    if(child_yang_name == "min-max-link-delay")
    {
        if(min_max_link_delay == nullptr)
        {
            min_max_link_delay = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay>();
        }
        return min_max_link_delay;
    }

    if(child_yang_name == "link-delay-variation")
    {
        if(link_delay_variation == nullptr)
        {
            link_delay_variation = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation>();
        }
        return link_delay_variation;
    }

    if(child_yang_name == "link-loss")
    {
        if(link_loss == nullptr)
        {
            link_loss = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss>();
        }
        return link_loss;
    }

    if(child_yang_name == "residual-bandwidth")
    {
        if(residual_bandwidth == nullptr)
        {
            residual_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth>();
        }
        return residual_bandwidth;
    }

    if(child_yang_name == "available-bandwidth")
    {
        if(available_bandwidth == nullptr)
        {
            available_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth>();
        }
        return available_bandwidth;
    }

    if(child_yang_name == "utilized-bandwidth")
    {
        if(utilized_bandwidth == nullptr)
        {
            utilized_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth>();
        }
        return utilized_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(admin_group != nullptr)
    {
        children["admin-group"] = admin_group;
    }

    if(ipv4_interface_address != nullptr)
    {
        children["ipv4-interface-address"] = ipv4_interface_address;
    }

    if(ipv4_neighbor_address != nullptr)
    {
        children["ipv4-neighbor-address"] = ipv4_neighbor_address;
    }

    if(max_link_bandwidth != nullptr)
    {
        children["max-link-bandwidth"] = max_link_bandwidth;
    }

    if(max_reservable_link_bandwidth != nullptr)
    {
        children["max-reservable-link-bandwidth"] = max_reservable_link_bandwidth;
    }

    if(unreserved_bandwidth != nullptr)
    {
        children["unreserved-bandwidth"] = unreserved_bandwidth;
    }

    if(ipv6_interface_address != nullptr)
    {
        children["ipv6-interface-address"] = ipv6_interface_address;
    }

    if(ipv6_neighbor_address != nullptr)
    {
        children["ipv6-neighbor-address"] = ipv6_neighbor_address;
    }

    if(extended_admin_group != nullptr)
    {
        children["extended-admin-group"] = extended_admin_group;
    }

    if(te_default_metric != nullptr)
    {
        children["te-default-metric"] = te_default_metric;
    }

    if(link_attributes != nullptr)
    {
        children["link-attributes"] = link_attributes;
    }

    if(link_protection_type != nullptr)
    {
        children["link-protection-type"] = link_protection_type;
    }

    if(bandwidth_constraints != nullptr)
    {
        children["bandwidth-constraints"] = bandwidth_constraints;
    }

    if(unconstrained_lsp != nullptr)
    {
        children["unconstrained-lsp"] = unconstrained_lsp;
    }

    if(adjacency_sids != nullptr)
    {
        children["adjacency-sids"] = adjacency_sids;
    }

    if(lan_adjacency_sids != nullptr)
    {
        children["lan-adjacency-sids"] = lan_adjacency_sids;
    }

    if(link_delay != nullptr)
    {
        children["link-delay"] = link_delay;
    }

    if(min_max_link_delay != nullptr)
    {
        children["min-max-link-delay"] = min_max_link_delay;
    }

    if(link_delay_variation != nullptr)
    {
        children["link-delay-variation"] = link_delay_variation;
    }

    if(link_loss != nullptr)
    {
        children["link-loss"] = link_loss;
    }

    if(residual_bandwidth != nullptr)
    {
        children["residual-bandwidth"] = residual_bandwidth;
    }

    if(available_bandwidth != nullptr)
    {
        children["available-bandwidth"] = available_bandwidth;
    }

    if(utilized_bandwidth != nullptr)
    {
        children["utilized-bandwidth"] = utilized_bandwidth;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "admin-group" || name == "ipv4-interface-address" || name == "ipv4-neighbor-address" || name == "max-link-bandwidth" || name == "max-reservable-link-bandwidth" || name == "unreserved-bandwidth" || name == "ipv6-interface-address" || name == "ipv6-neighbor-address" || name == "extended-admin-group" || name == "te-default-metric" || name == "link-attributes" || name == "link-protection-type" || name == "bandwidth-constraints" || name == "unconstrained-lsp" || name == "adjacency-sids" || name == "lan-adjacency-sids" || name == "link-delay" || name == "min-max-link-delay" || name == "link-delay-variation" || name == "link-loss" || name == "residual-bandwidth" || name == "available-bandwidth" || name == "utilized-bandwidth" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::State()
    :
    type{YType::identityref, "type"}
{

    yang_name = "state"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::has_data() const
{
    return type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::AdminGroup()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State>())
{
    state->parent = this;

    yang_name = "admin-group"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::~AdminGroup()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::State()
    :
    admin_group{YType::uint32, "admin-group"}
{

    yang_name = "state"; yang_parent_name = "admin-group"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::has_data() const
{
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::has_operation() const
{
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::Ipv4InterfaceAddress()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State>())
{
    state->parent = this;

    yang_name = "ipv4-interface-address"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::~Ipv4InterfaceAddress()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::State()
    :
    ipv4_interface_address{YType::str, "ipv4-interface-address"}
{

    yang_name = "state"; yang_parent_name = "ipv4-interface-address"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::has_data() const
{
    for (auto const & leaf : ipv4_interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::has_operation() const
{
    for (auto const & leaf : ipv4_interface_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_interface_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_interface_address_name_datas = ipv4_interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_interface_address_name_datas.begin(), ipv4_interface_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-interface-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::Ipv4NeighborAddress()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State>())
{
    state->parent = this;

    yang_name = "ipv4-neighbor-address"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::~Ipv4NeighborAddress()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::State()
    :
    ipv4_neighbor_address{YType::str, "ipv4-neighbor-address"}
{

    yang_name = "state"; yang_parent_name = "ipv4-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::has_data() const
{
    for (auto const & leaf : ipv4_neighbor_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::has_operation() const
{
    for (auto const & leaf : ipv4_neighbor_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_neighbor_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_neighbor_address_name_datas = ipv4_neighbor_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_neighbor_address_name_datas.begin(), ipv4_neighbor_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-neighbor-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::MaxLinkBandwidth()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State>())
{
    state->parent = this;

    yang_name = "max-link-bandwidth"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::~MaxLinkBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-link-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::State()
    :
    max_link_bandwidth{YType::str, "max-link-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "max-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::has_data() const
{
    return max_link_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_link_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_link_bandwidth.is_set || is_set(max_link_bandwidth.yfilter)) leaf_name_data.push_back(max_link_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-link-bandwidth")
    {
        max_link_bandwidth = value;
        max_link_bandwidth.value_namespace = name_space;
        max_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-link-bandwidth")
    {
        max_link_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-link-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::MaxReservableLinkBandwidth()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State>())
{
    state->parent = this;

    yang_name = "max-reservable-link-bandwidth"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::~MaxReservableLinkBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-reservable-link-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::State()
    :
    max_reservable_link_bandwidth{YType::str, "max-reservable-link-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "max-reservable-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::has_data() const
{
    return max_reservable_link_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_reservable_link_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_reservable_link_bandwidth.is_set || is_set(max_reservable_link_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_link_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-reservable-link-bandwidth")
    {
        max_reservable_link_bandwidth = value;
        max_reservable_link_bandwidth.value_namespace = name_space;
        max_reservable_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-reservable-link-bandwidth")
    {
        max_reservable_link_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reservable-link-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::UnreservedBandwidth()
{

    yang_name = "unreserved-bandwidth"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::~UnreservedBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::has_data() const
{
    for (std::size_t index=0; index<setup_priority.size(); index++)
    {
        if(setup_priority[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::has_operation() const
{
    for (std::size_t index=0; index<setup_priority.size(); index++)
    {
        if(setup_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreserved-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "setup-priority")
    {
        auto c = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority>();
        c->parent = this;
        setup_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : setup_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::SetupPriority()
    :
    priority{YType::str, "priority"}
    	,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State>())
{
    state->parent = this;

    yang_name = "setup-priority"; yang_parent_name = "unreserved-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::~SetupPriority()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::has_data() const
{
    return priority.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setup-priority" <<"[priority='" <<priority <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "priority")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::State()
    :
    priority{YType::uint8, "priority"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "setup-priority"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::has_data() const
{
    return priority.is_set
	|| unreserved_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "unreserved-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::Ipv6InterfaceAddress()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State>())
{
    state->parent = this;

    yang_name = "ipv6-interface-address"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::~Ipv6InterfaceAddress()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::State()
    :
    ipv6_interface_address{YType::str, "ipv6-interface-address"}
{

    yang_name = "state"; yang_parent_name = "ipv6-interface-address"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::has_data() const
{
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::has_operation() const
{
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_interface_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_interface_address_name_datas = ipv6_interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_interface_address_name_datas.begin(), ipv6_interface_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-interface-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::Ipv6NeighborAddress()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State>())
{
    state->parent = this;

    yang_name = "ipv6-neighbor-address"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::~Ipv6NeighborAddress()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::State()
    :
    ipv6_neighbor_address{YType::str, "ipv6-neighbor-address"}
{

    yang_name = "state"; yang_parent_name = "ipv6-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::has_data() const
{
    for (auto const & leaf : ipv6_neighbor_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::has_operation() const
{
    for (auto const & leaf : ipv6_neighbor_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_neighbor_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_neighbor_address_name_datas = ipv6_neighbor_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_neighbor_address_name_datas.begin(), ipv6_neighbor_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-neighbor-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::ExtendedAdminGroup()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State>())
{
    state->parent = this;

    yang_name = "extended-admin-group"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::~ExtendedAdminGroup()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::State()
    :
    extended_admin_group{YType::uint32, "extended-admin-group"}
{

    yang_name = "state"; yang_parent_name = "extended-admin-group"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::has_data() const
{
    for (auto const & leaf : extended_admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::has_operation() const
{
    for (auto const & leaf : extended_admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto extended_admin_group_name_datas = extended_admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_admin_group_name_datas.begin(), extended_admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-group")
    {
        extended_admin_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-group")
    {
        extended_admin_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-admin-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::TeDefaultMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State>())
{
    state->parent = this;

    yang_name = "te-default-metric"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::~TeDefaultMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
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

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::Flags::INTERNAL {0, "INTERNAL"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::Flags::INTERNAL {0, "INTERNAL"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::CryptoType::HMAC_MD5 {0, "HMAC_MD5"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::CryptoType::CLEARTEXT {1, "CLEARTEXT"};


}
}

