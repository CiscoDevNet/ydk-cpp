
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_mpls_1.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_mpls {

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::State()
    :
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    use_cspf{YType::boolean, "use-cspf"},
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    path_computation_server{YType::str, "path-computation-server"},
    explicit_path_name{YType::str, "explicit-path-name"},
    preference{YType::uint8, "preference"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    retry_timer{YType::uint16, "retry-timer"},
    associated_rsvp_session{YType::str, "associated-rsvp-session"}
{

    yang_name = "state"; yang_parent_name = "p2p-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path_computation_method.is_set
	|| use_cspf.is_set
	|| cspf_tiebreaker.is_set
	|| path_computation_server.is_set
	|| explicit_path_name.is_set
	|| preference.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| retry_timer.is_set
	|| associated_rsvp_session.is_set;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(use_cspf.yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(associated_rsvp_session.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());
    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (associated_rsvp_session.is_set || is_set(associated_rsvp_session.yfilter)) leaf_name_data.push_back(associated_rsvp_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associated-rsvp-session")
    {
        associated_rsvp_session = value;
        associated_rsvp_session.value_namespace = name_space;
        associated_rsvp_session.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "associated-rsvp-session")
    {
        associated_rsvp_session.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path-computation-method" || name == "use-cspf" || name == "cspf-tiebreaker" || name == "path-computation-server" || name == "explicit-path-name" || name == "preference" || name == "setup-priority" || name == "hold-priority" || name == "retry-timer" || name == "associated-rsvp-session")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::AdminGroups()
    :
    config(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config>())
    , state(std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "admin-groups"; yang_parent_name = "p2p-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::~AdminGroups()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::get_children() const
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

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::Config()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "config"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::~Config()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::State()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "state"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::~State()
{
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::UnconstrainedPath()
    :
    path_setup_protocol(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol>())
{
    path_setup_protocol->parent = this;

    yang_name = "unconstrained-path"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::UnconstrainedPath::~UnconstrainedPath()
{
}

bool Mpls::Lsps::UnconstrainedPath::has_data() const
{
    if (is_presence_container) return true;
    return (path_setup_protocol !=  nullptr && path_setup_protocol->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::has_operation() const
{
    return is_set(yfilter)
	|| (path_setup_protocol !=  nullptr && path_setup_protocol->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unconstrained-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-setup-protocol")
    {
        if(path_setup_protocol == nullptr)
        {
            path_setup_protocol = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol>();
        }
        return path_setup_protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_setup_protocol != nullptr)
    {
        children["path-setup-protocol"] = path_setup_protocol;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-setup-protocol")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::PathSetupProtocol()
    :
    ldp(std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp>())
{
    ldp->parent = this;

    yang_name = "path-setup-protocol"; yang_parent_name = "unconstrained-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::~PathSetupProtocol()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_data() const
{
    if (is_presence_container) return true;
    return (ldp !=  nullptr && ldp->has_data());
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setup-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp")
        return true;
    return false;
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Ldp()
{

    yang_name = "ldp"; yang_parent_name = "path-setup-protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::~Ldp()
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_operation() const
{
    return is_set(yfilter);
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/unconstrained-path/path-setup-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsps()
    :
    static_lsp(this, {"name"})
{

    yang_name = "static-lsps"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::StaticLsps::~StaticLsps()
{
}

bool Mpls::Lsps::StaticLsps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_lsp.len(); index++)
    {
        if(static_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool Mpls::Lsps::StaticLsps::has_operation() const
{
    for (std::size_t index=0; index<static_lsp.len(); index++)
    {
        if(static_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpls::Lsps::StaticLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::StaticLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-lsp")
    {
        auto c = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp>();
        c->parent = this;
        static_lsp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : static_lsp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mpls::Lsps::StaticLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::StaticLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::StaticLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-lsp")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::StaticLsp()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Config>())
    , state(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::State>())
    , ingress(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Ingress>())
    , transit(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Transit>())
    , egress(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Egress>())
{
    config->parent = this;
    state->parent = this;
    ingress->parent = this;
    transit->parent = this;
    egress->parent = this;

    yang_name = "static-lsp"; yang_parent_name = "static-lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

Mpls::Lsps::StaticLsps::StaticLsp::~StaticLsp()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ingress !=  nullptr && ingress->has_data())
	|| (transit !=  nullptr && transit->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool Mpls::Lsps::StaticLsps::StaticLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (transit !=  nullptr && transit->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-mpls:mpls/lsps/static-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-lsp";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::State>();
        }
        return state;
    }

    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "transit")
    {
        if(transit == nullptr)
        {
            transit = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Transit>();
        }
        return transit;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::get_children() const
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

    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    if(transit != nullptr)
    {
        children["transit"] = transit;
    }

    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    return children;
}

void Mpls::Lsps::StaticLsps::StaticLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::StaticLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::StaticLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ingress" || name == "transit" || name == "egress" || name == "name")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Config::Config()
    :
    name{YType::str, "name"}
{

    yang_name = "config"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Config::~Config()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::StaticLsps::StaticLsp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::StaticLsp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::State::State()
    :
    name{YType::str, "name"}
{

    yang_name = "state"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::State::~State()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Mpls::Lsps::StaticLsps::StaticLsp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::StaticLsps::StaticLsp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::StaticLsp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::StaticLsp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Ingress()
    :
    config(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config>())
    , state(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ingress"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Ingress::~Ingress()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Ingress::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Ingress::get_children() const
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

void Mpls::Lsps::StaticLsps::StaticLsp::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::StaticLsps::StaticLsp::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::Config()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "config"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::~Config()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::State()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "state"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::~State()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Transit::Transit()
    :
    config(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config>())
    , state(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Transit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "transit"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Transit::~Transit()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Transit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Transit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Transit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Transit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Transit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Transit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Transit::get_children() const
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

void Mpls::Lsps::StaticLsps::StaticLsp::Transit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::StaticLsps::StaticLsp::Transit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Transit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::Config()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "config"; yang_parent_name = "transit"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::~Config()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::State()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "state"; yang_parent_name = "transit"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::~State()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Egress::Egress()
    :
    config(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config>())
    , state(std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Egress::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "egress"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Egress::~Egress()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Egress::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Egress::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Mpls::Lsps::StaticLsps::StaticLsp::Egress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Egress::get_children() const
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

void Mpls::Lsps::StaticLsps::StaticLsp::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpls::Lsps::StaticLsps::StaticLsp::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::Config()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "config"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::~Config()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::State()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "state"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true; 
}

Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::~State()
{
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}


}
}

