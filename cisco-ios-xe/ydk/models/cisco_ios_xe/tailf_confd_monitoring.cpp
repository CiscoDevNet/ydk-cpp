
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_confd_monitoring.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace tailf_confd_monitoring {

ConfdState::ConfdState()
    :
    daemon_status{YType::enumeration, "daemon-status"},
    epoll{YType::boolean, "epoll"},
    read_only_mode{YType::empty, "read-only-mode"},
    upgrade_mode{YType::empty, "upgrade-mode"},
    version{YType::str, "version"}
    	,
    cli(nullptr) // presence node
	,ha(nullptr) // presence node
	,internal(std::make_shared<ConfdState::Internal>())
	,loaded_data_models(std::make_shared<ConfdState::LoadedDataModels>())
	,netconf(nullptr) // presence node
	,rest(nullptr) // presence node
	,smp(nullptr) // presence node
	,snmp(nullptr) // presence node
	,webui(nullptr) // presence node
{
    internal->parent = this;
    loaded_data_models->parent = this;

    yang_name = "confd-state"; yang_parent_name = "tailf-confd-monitoring"; is_top_level_class = true; has_list_ancestor = false;
}

ConfdState::~ConfdState()
{
}

bool ConfdState::has_data() const
{
    return daemon_status.is_set
	|| epoll.is_set
	|| read_only_mode.is_set
	|| upgrade_mode.is_set
	|| version.is_set
	|| (cli !=  nullptr && cli->has_data())
	|| (ha !=  nullptr && ha->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (loaded_data_models !=  nullptr && loaded_data_models->has_data())
	|| (netconf !=  nullptr && netconf->has_data())
	|| (rest !=  nullptr && rest->has_data())
	|| (smp !=  nullptr && smp->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (webui !=  nullptr && webui->has_data());
}

bool ConfdState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(daemon_status.yfilter)
	|| ydk::is_set(epoll.yfilter)
	|| ydk::is_set(read_only_mode.yfilter)
	|| ydk::is_set(upgrade_mode.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (cli !=  nullptr && cli->has_operation())
	|| (ha !=  nullptr && ha->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (loaded_data_models !=  nullptr && loaded_data_models->has_operation())
	|| (netconf !=  nullptr && netconf->has_operation())
	|| (rest !=  nullptr && rest->has_operation())
	|| (smp !=  nullptr && smp->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (webui !=  nullptr && webui->has_operation());
}

std::string ConfdState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (daemon_status.is_set || is_set(daemon_status.yfilter)) leaf_name_data.push_back(daemon_status.get_name_leafdata());
    if (epoll.is_set || is_set(epoll.yfilter)) leaf_name_data.push_back(epoll.get_name_leafdata());
    if (read_only_mode.is_set || is_set(read_only_mode.yfilter)) leaf_name_data.push_back(read_only_mode.get_name_leafdata());
    if (upgrade_mode.is_set || is_set(upgrade_mode.yfilter)) leaf_name_data.push_back(upgrade_mode.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cli")
    {
        if(cli == nullptr)
        {
            cli = std::make_shared<ConfdState::Cli>();
        }
        return cli;
    }

    if(child_yang_name == "ha")
    {
        if(ha == nullptr)
        {
            ha = std::make_shared<ConfdState::Ha>();
        }
        return ha;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<ConfdState::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "loaded-data-models")
    {
        if(loaded_data_models == nullptr)
        {
            loaded_data_models = std::make_shared<ConfdState::LoadedDataModels>();
        }
        return loaded_data_models;
    }

    if(child_yang_name == "netconf")
    {
        if(netconf == nullptr)
        {
            netconf = std::make_shared<ConfdState::Netconf>();
        }
        return netconf;
    }

    if(child_yang_name == "rest")
    {
        if(rest == nullptr)
        {
            rest = std::make_shared<ConfdState::Rest>();
        }
        return rest;
    }

    if(child_yang_name == "smp")
    {
        if(smp == nullptr)
        {
            smp = std::make_shared<ConfdState::Smp>();
        }
        return smp;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<ConfdState::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "webui")
    {
        if(webui == nullptr)
        {
            webui = std::make_shared<ConfdState::Webui>();
        }
        return webui;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cli != nullptr)
    {
        children["cli"] = cli;
    }

    if(ha != nullptr)
    {
        children["ha"] = ha;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(loaded_data_models != nullptr)
    {
        children["loaded-data-models"] = loaded_data_models;
    }

    if(netconf != nullptr)
    {
        children["netconf"] = netconf;
    }

    if(rest != nullptr)
    {
        children["rest"] = rest;
    }

    if(smp != nullptr)
    {
        children["smp"] = smp;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(webui != nullptr)
    {
        children["webui"] = webui;
    }

    return children;
}

void ConfdState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "daemon-status")
    {
        daemon_status = value;
        daemon_status.value_namespace = name_space;
        daemon_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epoll")
    {
        epoll = value;
        epoll.value_namespace = name_space;
        epoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-only-mode")
    {
        read_only_mode = value;
        read_only_mode.value_namespace = name_space;
        read_only_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgrade-mode")
    {
        upgrade_mode = value;
        upgrade_mode.value_namespace = name_space;
        upgrade_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "daemon-status")
    {
        daemon_status.yfilter = yfilter;
    }
    if(value_path == "epoll")
    {
        epoll.yfilter = yfilter;
    }
    if(value_path == "read-only-mode")
    {
        read_only_mode.yfilter = yfilter;
    }
    if(value_path == "upgrade-mode")
    {
        upgrade_mode.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> ConfdState::clone_ptr() const
{
    return std::make_shared<ConfdState>();
}

std::string ConfdState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ConfdState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ConfdState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ConfdState::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ConfdState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cli" || name == "ha" || name == "internal" || name == "loaded-data-models" || name == "netconf" || name == "rest" || name == "smp" || name == "snmp" || name == "webui" || name == "daemon-status" || name == "epoll" || name == "read-only-mode" || name == "upgrade-mode" || name == "version")
        return true;
    return false;
}

ConfdState::Cli::Cli()
    :
    listen(std::make_shared<ConfdState::Cli::Listen>())
{
    listen->parent = this;

    yang_name = "cli"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Cli::~Cli()
{
}

bool ConfdState::Cli::has_data() const
{
    return (listen !=  nullptr && listen->has_data());
}

bool ConfdState::Cli::has_operation() const
{
    return is_set(yfilter)
	|| (listen !=  nullptr && listen->has_operation());
}

std::string ConfdState::Cli::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Cli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<ConfdState::Cli::Listen>();
        }
        return listen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen != nullptr)
    {
        children["listen"] = listen;
    }

    return children;
}

void ConfdState::Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listen")
        return true;
    return false;
}

ConfdState::Cli::Listen::Listen()
{

    yang_name = "listen"; yang_parent_name = "cli"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Cli::Listen::~Listen()
{
}

bool ConfdState::Cli::Listen::has_data() const
{
    for (std::size_t index=0; index<ssh.size(); index++)
    {
        if(ssh[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Cli::Listen::has_operation() const
{
    for (std::size_t index=0; index<ssh.size(); index++)
    {
        if(ssh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Cli::Listen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/cli/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Cli::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Cli::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Cli::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssh")
    {
        for(auto const & c : ssh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Cli::Listen::Ssh>();
        c->parent = this;
        ssh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Cli::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Cli::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Cli::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Cli::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssh")
        return true;
    return false;
}

ConfdState::Cli::Listen::Ssh::Ssh()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "ssh"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Cli::Listen::Ssh::~Ssh()
{
}

bool ConfdState::Cli::Listen::Ssh::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Cli::Listen::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Cli::Listen::Ssh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/cli/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Cli::Listen::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Cli::Listen::Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Cli::Listen::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Cli::Listen::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Cli::Listen::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Cli::Listen::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Cli::Listen::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Ha::Ha()
    :
    connected_slave{YType::str, "connected-slave"},
    master_node_id{YType::str, "master-node-id"},
    mode{YType::enumeration, "mode"},
    node_id{YType::str, "node-id"},
    pending_slave{YType::str, "pending-slave"}
{

    yang_name = "ha"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Ha::~Ha()
{
}

bool ConfdState::Ha::has_data() const
{
    for (auto const & leaf : connected_slave.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pending_slave.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return master_node_id.is_set
	|| mode.is_set
	|| node_id.is_set;
}

bool ConfdState::Ha::has_operation() const
{
    for (auto const & leaf : connected_slave.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pending_slave.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(connected_slave.yfilter)
	|| ydk::is_set(master_node_id.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(pending_slave.yfilter);
}

std::string ConfdState::Ha::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Ha::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Ha::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_node_id.is_set || is_set(master_node_id.yfilter)) leaf_name_data.push_back(master_node_id.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    auto connected_slave_name_datas = connected_slave.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), connected_slave_name_datas.begin(), connected_slave_name_datas.end());
    auto pending_slave_name_datas = pending_slave.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pending_slave_name_datas.begin(), pending_slave_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Ha::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Ha::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Ha::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected-slave")
    {
        connected_slave.append(value);
    }
    if(value_path == "master-node-id")
    {
        master_node_id = value;
        master_node_id.value_namespace = name_space;
        master_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-slave")
    {
        pending_slave.append(value);
    }
}

void ConfdState::Ha::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected-slave")
    {
        connected_slave.yfilter = yfilter;
    }
    if(value_path == "master-node-id")
    {
        master_node_id.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "pending-slave")
    {
        pending_slave.yfilter = yfilter;
    }
}

bool ConfdState::Ha::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-slave" || name == "master-node-id" || name == "mode" || name == "node-id" || name == "pending-slave")
        return true;
    return false;
}

ConfdState::Internal::Internal()
    :
    callpoints(std::make_shared<ConfdState::Internal::Callpoints>())
	,cdb(std::make_shared<ConfdState::Internal::Cdb>())
{
    callpoints->parent = this;
    cdb->parent = this;

    yang_name = "internal"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::~Internal()
{
}

bool ConfdState::Internal::has_data() const
{
    return (callpoints !=  nullptr && callpoints->has_data())
	|| (cdb !=  nullptr && cdb->has_data());
}

bool ConfdState::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (callpoints !=  nullptr && callpoints->has_operation())
	|| (cdb !=  nullptr && cdb->has_operation());
}

std::string ConfdState::Internal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callpoints")
    {
        if(callpoints == nullptr)
        {
            callpoints = std::make_shared<ConfdState::Internal::Callpoints>();
        }
        return callpoints;
    }

    if(child_yang_name == "cdb")
    {
        if(cdb == nullptr)
        {
            cdb = std::make_shared<ConfdState::Internal::Cdb>();
        }
        return cdb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(callpoints != nullptr)
    {
        children["callpoints"] = callpoints;
    }

    if(cdb != nullptr)
    {
        children["cdb"] = cdb;
    }

    return children;
}

void ConfdState::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callpoints" || name == "cdb")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoints()
    :
    authentication_callback(nullptr) // presence node
	,authorization_callbacks(nullptr) // presence node
{

    yang_name = "callpoints"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::~Callpoints()
{
}

bool ConfdState::Internal::Callpoints::has_data() const
{
    for (std::size_t index=0; index<actionpoint.size(); index++)
    {
        if(actionpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<callpoint.size(); index++)
    {
        if(callpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<error_formatting_callback.size(); index++)
    {
        if(error_formatting_callback[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<notification_stream_replay.size(); index++)
    {
        if(notification_stream_replay[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<snmp_inform_callback.size(); index++)
    {
        if(snmp_inform_callback[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<snmp_notification_subscription.size(); index++)
    {
        if(snmp_notification_subscription[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<typepoint.size(); index++)
    {
        if(typepoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<validationpoint.size(); index++)
    {
        if(validationpoint[index]->has_data())
            return true;
    }
    return (authentication_callback !=  nullptr && authentication_callback->has_data())
	|| (authorization_callbacks !=  nullptr && authorization_callbacks->has_data());
}

bool ConfdState::Internal::Callpoints::has_operation() const
{
    for (std::size_t index=0; index<actionpoint.size(); index++)
    {
        if(actionpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<callpoint.size(); index++)
    {
        if(callpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<error_formatting_callback.size(); index++)
    {
        if(error_formatting_callback[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<notification_stream_replay.size(); index++)
    {
        if(notification_stream_replay[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<snmp_inform_callback.size(); index++)
    {
        if(snmp_inform_callback[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<snmp_notification_subscription.size(); index++)
    {
        if(snmp_notification_subscription[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<typepoint.size(); index++)
    {
        if(typepoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<validationpoint.size(); index++)
    {
        if(validationpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (authentication_callback !=  nullptr && authentication_callback->has_operation())
	|| (authorization_callbacks !=  nullptr && authorization_callbacks->has_operation());
}

std::string ConfdState::Internal::Callpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actionpoint")
    {
        for(auto const & c : actionpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint>();
        c->parent = this;
        actionpoint.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication-callback")
    {
        if(authentication_callback == nullptr)
        {
            authentication_callback = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback>();
        }
        return authentication_callback;
    }

    if(child_yang_name == "authorization-callbacks")
    {
        if(authorization_callbacks == nullptr)
        {
            authorization_callbacks = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks>();
        }
        return authorization_callbacks;
    }

    if(child_yang_name == "callpoint")
    {
        for(auto const & c : callpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Callpoint>();
        c->parent = this;
        callpoint.push_back(c);
        return c;
    }

    if(child_yang_name == "error-formatting-callback")
    {
        for(auto const & c : error_formatting_callback)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback>();
        c->parent = this;
        error_formatting_callback.push_back(c);
        return c;
    }

    if(child_yang_name == "notification-stream-replay")
    {
        for(auto const & c : notification_stream_replay)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay>();
        c->parent = this;
        notification_stream_replay.push_back(c);
        return c;
    }

    if(child_yang_name == "snmp-inform-callback")
    {
        for(auto const & c : snmp_inform_callback)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback>();
        c->parent = this;
        snmp_inform_callback.push_back(c);
        return c;
    }

    if(child_yang_name == "snmp-notification-subscription")
    {
        for(auto const & c : snmp_notification_subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription>();
        c->parent = this;
        snmp_notification_subscription.push_back(c);
        return c;
    }

    if(child_yang_name == "typepoint")
    {
        for(auto const & c : typepoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Typepoint>();
        c->parent = this;
        typepoint.push_back(c);
        return c;
    }

    if(child_yang_name == "validationpoint")
    {
        for(auto const & c : validationpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint>();
        c->parent = this;
        validationpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : actionpoint)
    {
        children[c->get_segment_path()] = c;
    }

    if(authentication_callback != nullptr)
    {
        children["authentication-callback"] = authentication_callback;
    }

    if(authorization_callbacks != nullptr)
    {
        children["authorization-callbacks"] = authorization_callbacks;
    }

    for (auto const & c : callpoint)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : error_formatting_callback)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : notification_stream_replay)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : snmp_inform_callback)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : snmp_notification_subscription)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : typepoint)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : validationpoint)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Internal::Callpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Internal::Callpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actionpoint" || name == "authentication-callback" || name == "authorization-callbacks" || name == "callpoint" || name == "error-formatting-callback" || name == "notification-stream-replay" || name == "snmp-inform-callback" || name == "snmp-notification-subscription" || name == "typepoint" || name == "validationpoint")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Actionpoint::Actionpoint()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Daemon>())
{
    daemon->parent = this;

    yang_name = "actionpoint"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::Actionpoint::~Actionpoint()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Actionpoint::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Actionpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::Actionpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actionpoint" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Actionpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Actionpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Actionpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Actionpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Actionpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Actionpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "error" || name == "file" || name == "path")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Actionpoint::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "actionpoint"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Actionpoint::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::Actionpoint::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::Actionpoint::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Actionpoint::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Actionpoint::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Actionpoint::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "actionpoint"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Actionpoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Actionpoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Actionpoint::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Actionpoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Actionpoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Actionpoint::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Actionpoint::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::AuthenticationCallback()
    :
    enabled{YType::boolean, "enabled"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon>())
{
    daemon->parent = this;

    yang_name = "authentication-callback"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::~AuthenticationCallback()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return enabled.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-callback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthenticationCallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "enabled" || name == "error" || name == "file" || name == "path")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "authentication-callback"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authentication-callback/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "authentication-callback"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authentication-callback/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authentication-callback/range/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::AuthorizationCallbacks()
    :
    enabled{YType::boolean, "enabled"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon>())
{
    daemon->parent = this;

    yang_name = "authorization-callbacks"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::~AuthorizationCallbacks()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return enabled.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-callbacks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "enabled" || name == "error" || name == "file" || name == "path")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "authorization-callbacks"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authorization-callbacks/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "authorization-callbacks"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authorization-callbacks/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authorization-callbacks/range/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoint::Callpoint()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Daemon>())
{
    daemon->parent = this;

    yang_name = "callpoint"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::Callpoint::~Callpoint()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Callpoint::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Callpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::Callpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callpoint" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Callpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Callpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Callpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Callpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Callpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Callpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "error" || name == "file" || name == "path")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoint::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "callpoint"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Callpoint::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::Callpoint::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::Callpoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Callpoint::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Callpoint::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Callpoint::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::Callpoint::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Callpoint::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Callpoint::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoint::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "callpoint"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Callpoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Callpoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Callpoint::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Callpoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Callpoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Callpoint::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Callpoint::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::ErrorFormattingCallback()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon>())
{
    daemon->parent = this;

    yang_name = "error-formatting-callback"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::~ErrorFormattingCallback()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-formatting-callback" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "error" || name == "file" || name == "path")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "error-formatting-callback"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "error-formatting-callback"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::NotificationStreamReplay()
    :
    name{YType::str, "name"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"},
    replay_support{YType::enumeration, "replay-support"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon>())
{
    daemon->parent = this;

    yang_name = "notification-stream-replay"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::~NotificationStreamReplay()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return name.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| replay_support.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(replay_support.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-stream-replay" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::NotificationStreamReplay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (replay_support.is_set || is_set(replay_support.yfilter)) leaf_name_data.push_back(replay_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-support")
    {
        replay_support = value;
        replay_support.value_namespace = name_space;
        replay_support.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "replay-support")
    {
        replay_support.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "name" || name == "error" || name == "file" || name == "path" || name == "replay-support")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "notification-stream-replay"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "notification-stream-replay"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::SnmpInformCallback()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon>())
{
    daemon->parent = this;

    yang_name = "snmp-inform-callback"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::~SnmpInformCallback()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-inform-callback" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpInformCallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "error" || name == "file" || name == "path")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "snmp-inform-callback"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "snmp-inform-callback"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::SnmpNotificationSubscription()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon>())
{
    daemon->parent = this;

    yang_name = "snmp-notification-subscription"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::~SnmpNotificationSubscription()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-notification-subscription" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "error" || name == "file" || name == "path")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "snmp-notification-subscription"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "snmp-notification-subscription"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Typepoint::Typepoint()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Daemon>())
{
    daemon->parent = this;

    yang_name = "typepoint"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::Typepoint::~Typepoint()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Typepoint::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Typepoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::Typepoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "typepoint" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Typepoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Typepoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Typepoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Typepoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Typepoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Typepoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "error" || name == "file" || name == "path")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Typepoint::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "typepoint"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Typepoint::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::Typepoint::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::Typepoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Typepoint::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Typepoint::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Typepoint::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::Typepoint::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Typepoint::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Typepoint::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Typepoint::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "typepoint"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Typepoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Typepoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Typepoint::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Typepoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Typepoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Typepoint::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Typepoint::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Validationpoint::Validationpoint()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Daemon>())
{
    daemon->parent = this;

    yang_name = "validationpoint"; yang_parent_name = "callpoints"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Callpoints::Validationpoint::~Validationpoint()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Validationpoint::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Validationpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Callpoints::Validationpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validationpoint" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Validationpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Validationpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Daemon>();
        }
        return daemon;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Validationpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Validationpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Validationpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Validationpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "range" || name == "id" || name == "error" || name == "file" || name == "path")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Validationpoint::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "validationpoint"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Validationpoint::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::Validationpoint::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::Validationpoint::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Validationpoint::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Validationpoint::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Validationpoint::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon(std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon>())
{
    daemon->parent = this;

    yang_name = "range"; yang_parent_name = "validationpoint"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Validationpoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon !=  nullptr && daemon->has_data());
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter)
	|| (daemon !=  nullptr && daemon->has_operation());
}

std::string ConfdState::Internal::Callpoints::Validationpoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Validationpoint::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Validationpoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon == nullptr)
        {
            daemon = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon>();
        }
        return daemon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Validationpoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon != nullptr)
    {
        children["daemon"] = daemon;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Validationpoint::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Validationpoint::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daemon" || name == "default" || name == "lower" || name == "upper")
        return true;
    return false;
}

ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "daemon"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::~Daemon()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::has_data() const
{
    return error.is_set
	|| id.is_set
	|| name.is_set;
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "id" || name == "name")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Cdb()
{

    yang_name = "cdb"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Cdb::~Cdb()
{
}

bool ConfdState::Internal::Cdb::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<datastore.size(); index++)
    {
        if(datastore[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Internal::Cdb::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<datastore.size(); index++)
    {
        if(datastore[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Internal::Cdb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Cdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    if(child_yang_name == "datastore")
    {
        for(auto const & c : datastore)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Datastore>();
        c->parent = this;
        datastore.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : datastore)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Cdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Internal::Cdb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Internal::Cdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "datastore")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Client::Client()
    :
    datastore{YType::str, "datastore"},
    info{YType::str, "info"},
    lock{YType::enumeration, "lock"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"}
{

    yang_name = "client"; yang_parent_name = "cdb"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Cdb::Client::~Client()
{
}

bool ConfdState::Internal::Cdb::Client::has_data() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return datastore.is_set
	|| info.is_set
	|| lock.is_set
	|| name.is_set
	|| type.is_set;
}

bool ConfdState::Internal::Cdb::Client::has_operation() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(datastore.yfilter)
	|| ydk::is_set(info.yfilter)
	|| ydk::is_set(lock.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string ConfdState::Internal::Cdb::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/cdb/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Cdb::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (datastore.is_set || is_set(datastore.yfilter)) leaf_name_data.push_back(datastore.get_name_leafdata());
    if (info.is_set || is_set(info.yfilter)) leaf_name_data.push_back(info.get_name_leafdata());
    if (lock.is_set || is_set(lock.yfilter)) leaf_name_data.push_back(lock.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        for(auto const & c : subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Client::Subscription>();
        c->parent = this;
        subscription.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscription)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Cdb::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "datastore")
    {
        datastore = value;
        datastore.value_namespace = name_space;
        datastore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "info")
    {
        info = value;
        info.value_namespace = name_space;
        info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock")
    {
        lock = value;
        lock.value_namespace = name_space;
        lock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Cdb::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "datastore")
    {
        datastore.yfilter = yfilter;
    }
    if(value_path == "info")
    {
        info.yfilter = yfilter;
    }
    if(value_path == "lock")
    {
        lock.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription" || name == "datastore" || name == "info" || name == "lock" || name == "name" || name == "type")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Client::Subscription::Subscription()
    :
    datastore{YType::enumeration, "datastore"},
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    path{YType::str, "path"},
    priority{YType::int32, "priority"},
    twophase{YType::empty, "twophase"}
{

    yang_name = "subscription"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Cdb::Client::Subscription::~Subscription()
{
}

bool ConfdState::Internal::Cdb::Client::Subscription::has_data() const
{
    return datastore.is_set
	|| error.is_set
	|| id.is_set
	|| path.is_set
	|| priority.is_set
	|| twophase.is_set;
}

bool ConfdState::Internal::Cdb::Client::Subscription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(datastore.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(twophase.yfilter);
}

std::string ConfdState::Internal::Cdb::Client::Subscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/cdb/client/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Cdb::Client::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Client::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (datastore.is_set || is_set(datastore.yfilter)) leaf_name_data.push_back(datastore.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (twophase.is_set || is_set(twophase.yfilter)) leaf_name_data.push_back(twophase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Client::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Client::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Cdb::Client::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "datastore")
    {
        datastore = value;
        datastore.value_namespace = name_space;
        datastore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twophase")
    {
        twophase = value;
        twophase.value_namespace = name_space;
        twophase.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Cdb::Client::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "datastore")
    {
        datastore.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "twophase")
    {
        twophase.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Client::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datastore" || name == "error" || name == "id" || name == "path" || name == "priority" || name == "twophase")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::Datastore()
    :
    name{YType::enumeration, "name"},
    disk_size{YType::uint64, "disk-size"},
    filename{YType::str, "filename"},
    ram_size{YType::uint64, "ram-size"},
    read_locks{YType::uint32, "read-locks"},
    subscription_lock_set{YType::boolean, "subscription-lock-set"},
    transaction_id{YType::str, "transaction-id"},
    waiting_for_replication_sync{YType::boolean, "waiting-for-replication-sync"},
    write_lock_set{YType::boolean, "write-lock-set"},
    write_queue{YType::uint32, "write-queue"}
    	,
    pending_subscription_sync(nullptr) // presence node
{

    yang_name = "datastore"; yang_parent_name = "cdb"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Internal::Cdb::Datastore::~Datastore()
{
}

bool ConfdState::Internal::Cdb::Datastore::has_data() const
{
    for (std::size_t index=0; index<pending_notification_queue.size(); index++)
    {
        if(pending_notification_queue[index]->has_data())
            return true;
    }
    return name.is_set
	|| disk_size.is_set
	|| filename.is_set
	|| ram_size.is_set
	|| read_locks.is_set
	|| subscription_lock_set.is_set
	|| transaction_id.is_set
	|| waiting_for_replication_sync.is_set
	|| write_lock_set.is_set
	|| write_queue.is_set
	|| (pending_subscription_sync !=  nullptr && pending_subscription_sync->has_data());
}

bool ConfdState::Internal::Cdb::Datastore::has_operation() const
{
    for (std::size_t index=0; index<pending_notification_queue.size(); index++)
    {
        if(pending_notification_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(disk_size.yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(ram_size.yfilter)
	|| ydk::is_set(read_locks.yfilter)
	|| ydk::is_set(subscription_lock_set.yfilter)
	|| ydk::is_set(transaction_id.yfilter)
	|| ydk::is_set(waiting_for_replication_sync.yfilter)
	|| ydk::is_set(write_lock_set.yfilter)
	|| ydk::is_set(write_queue.yfilter)
	|| (pending_subscription_sync !=  nullptr && pending_subscription_sync->has_operation());
}

std::string ConfdState::Internal::Cdb::Datastore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/internal/cdb/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Internal::Cdb::Datastore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastore" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (disk_size.is_set || is_set(disk_size.yfilter)) leaf_name_data.push_back(disk_size.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (ram_size.is_set || is_set(ram_size.yfilter)) leaf_name_data.push_back(ram_size.get_name_leafdata());
    if (read_locks.is_set || is_set(read_locks.yfilter)) leaf_name_data.push_back(read_locks.get_name_leafdata());
    if (subscription_lock_set.is_set || is_set(subscription_lock_set.yfilter)) leaf_name_data.push_back(subscription_lock_set.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.yfilter)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (waiting_for_replication_sync.is_set || is_set(waiting_for_replication_sync.yfilter)) leaf_name_data.push_back(waiting_for_replication_sync.get_name_leafdata());
    if (write_lock_set.is_set || is_set(write_lock_set.yfilter)) leaf_name_data.push_back(write_lock_set.get_name_leafdata());
    if (write_queue.is_set || is_set(write_queue.yfilter)) leaf_name_data.push_back(write_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Datastore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pending-notification-queue")
    {
        for(auto const & c : pending_notification_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue>();
        c->parent = this;
        pending_notification_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "pending-subscription-sync")
    {
        if(pending_subscription_sync == nullptr)
        {
            pending_subscription_sync = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync>();
        }
        return pending_subscription_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Datastore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pending_notification_queue)
    {
        children[c->get_segment_path()] = c;
    }

    if(pending_subscription_sync != nullptr)
    {
        children["pending-subscription-sync"] = pending_subscription_sync;
    }

    return children;
}

void ConfdState::Internal::Cdb::Datastore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disk-size")
    {
        disk_size = value;
        disk_size.value_namespace = name_space;
        disk_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ram-size")
    {
        ram_size = value;
        ram_size.value_namespace = name_space;
        ram_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-locks")
    {
        read_locks = value;
        read_locks.value_namespace = name_space;
        read_locks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-lock-set")
    {
        subscription_lock_set = value;
        subscription_lock_set.value_namespace = name_space;
        subscription_lock_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
        transaction_id.value_namespace = name_space;
        transaction_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-for-replication-sync")
    {
        waiting_for_replication_sync = value;
        waiting_for_replication_sync.value_namespace = name_space;
        waiting_for_replication_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-lock-set")
    {
        write_lock_set = value;
        write_lock_set.value_namespace = name_space;
        write_lock_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-queue")
    {
        write_queue = value;
        write_queue.value_namespace = name_space;
        write_queue.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Cdb::Datastore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "disk-size")
    {
        disk_size.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "ram-size")
    {
        ram_size.yfilter = yfilter;
    }
    if(value_path == "read-locks")
    {
        read_locks.yfilter = yfilter;
    }
    if(value_path == "subscription-lock-set")
    {
        subscription_lock_set.yfilter = yfilter;
    }
    if(value_path == "transaction-id")
    {
        transaction_id.yfilter = yfilter;
    }
    if(value_path == "waiting-for-replication-sync")
    {
        waiting_for_replication_sync.yfilter = yfilter;
    }
    if(value_path == "write-lock-set")
    {
        write_lock_set.yfilter = yfilter;
    }
    if(value_path == "write-queue")
    {
        write_queue.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Datastore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-notification-queue" || name == "pending-subscription-sync" || name == "name" || name == "disk-size" || name == "filename" || name == "ram-size" || name == "read-locks" || name == "subscription-lock-set" || name == "transaction-id" || name == "waiting-for-replication-sync" || name == "write-lock-set" || name == "write-queue")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::PendingNotificationQueue()
{

    yang_name = "pending-notification-queue"; yang_parent_name = "datastore"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::~PendingNotificationQueue()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::has_data() const
{
    for (std::size_t index=0; index<notification.size(); index++)
    {
        if(notification[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::has_operation() const
{
    for (std::size_t index=0; index<notification.size(); index++)
    {
        if(notification[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-notification-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        for(auto const & c : notification)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification>();
        c->parent = this;
        notification.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : notification)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::Notification()
    :
    client_name{YType::str, "client-name"},
    priority{YType::int32, "priority"},
    subscription_ids{YType::uint32, "subscription-ids"}
{

    yang_name = "notification"; yang_parent_name = "pending-notification-queue"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::~Notification()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::has_data() const
{
    for (auto const & leaf : subscription_ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return client_name.is_set
	|| priority.is_set;
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::has_operation() const
{
    for (auto const & leaf : subscription_ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(subscription_ids.yfilter);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    auto subscription_ids_name_datas = subscription_ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), subscription_ids_name_datas.begin(), subscription_ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.append(value);
    }
}

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-name" || name == "priority" || name == "subscription-ids")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::PendingSubscriptionSync()
    :
    priority{YType::int32, "priority"},
    time_remaining{YType::str, "time-remaining"}
{

    yang_name = "pending-subscription-sync"; yang_parent_name = "datastore"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::~PendingSubscriptionSync()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::has_data() const
{
    for (std::size_t index=0; index<notification.size(); index++)
    {
        if(notification[index]->has_data())
            return true;
    }
    return priority.is_set
	|| time_remaining.is_set;
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::has_operation() const
{
    for (std::size_t index=0; index<notification.size(); index++)
    {
        if(notification[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_remaining.yfilter);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-subscription-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        for(auto const & c : notification)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification>();
        c->parent = this;
        notification.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : notification)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification" || name == "priority" || name == "time-remaining")
        return true;
    return false;
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::Notification()
    :
    client_name{YType::str, "client-name"},
    subscription_ids{YType::uint32, "subscription-ids"}
{

    yang_name = "notification"; yang_parent_name = "pending-subscription-sync"; is_top_level_class = false; has_list_ancestor = true;
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::~Notification()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::has_data() const
{
    for (auto const & leaf : subscription_ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return client_name.is_set;
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::has_operation() const
{
    for (auto const & leaf : subscription_ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(subscription_ids.yfilter);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    auto subscription_ids_name_datas = subscription_ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), subscription_ids_name_datas.begin(), subscription_ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.append(value);
    }
}

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.yfilter = yfilter;
    }
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-name" || name == "subscription-ids")
        return true;
    return false;
}

ConfdState::LoadedDataModels::LoadedDataModels()
{

    yang_name = "loaded-data-models"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::LoadedDataModels::~LoadedDataModels()
{
}

bool ConfdState::LoadedDataModels::has_data() const
{
    for (std::size_t index=0; index<data_model.size(); index++)
    {
        if(data_model[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::LoadedDataModels::has_operation() const
{
    for (std::size_t index=0; index<data_model.size(); index++)
    {
        if(data_model[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::LoadedDataModels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::LoadedDataModels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loaded-data-models";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::LoadedDataModels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::LoadedDataModels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-model")
    {
        for(auto const & c : data_model)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::LoadedDataModels::DataModel>();
        c->parent = this;
        data_model.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::LoadedDataModels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : data_model)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::LoadedDataModels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::LoadedDataModels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::LoadedDataModels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-model")
        return true;
    return false;
}

ConfdState::LoadedDataModels::DataModel::DataModel()
    :
    name{YType::str, "name"},
    exported_to{YType::str, "exported-to"},
    exported_to_all{YType::empty, "exported-to-all"},
    namespace_{YType::str, "namespace"},
    prefix{YType::str, "prefix"},
    revision{YType::str, "revision"}
{

    yang_name = "data-model"; yang_parent_name = "loaded-data-models"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::LoadedDataModels::DataModel::~DataModel()
{
}

bool ConfdState::LoadedDataModels::DataModel::has_data() const
{
    for (auto const & leaf : exported_to.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| exported_to_all.is_set
	|| namespace_.is_set
	|| prefix.is_set
	|| revision.is_set;
}

bool ConfdState::LoadedDataModels::DataModel::has_operation() const
{
    for (auto const & leaf : exported_to.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(exported_to.yfilter)
	|| ydk::is_set(exported_to_all.yfilter)
	|| ydk::is_set(namespace_.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(revision.yfilter);
}

std::string ConfdState::LoadedDataModels::DataModel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/loaded-data-models/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::LoadedDataModels::DataModel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-model" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::LoadedDataModels::DataModel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (exported_to_all.is_set || is_set(exported_to_all.yfilter)) leaf_name_data.push_back(exported_to_all.get_name_leafdata());
    if (namespace_.is_set || is_set(namespace_.yfilter)) leaf_name_data.push_back(namespace_.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());

    auto exported_to_name_datas = exported_to.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exported_to_name_datas.begin(), exported_to_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::LoadedDataModels::DataModel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::LoadedDataModels::DataModel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::LoadedDataModels::DataModel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exported-to")
    {
        exported_to.append(value);
    }
    if(value_path == "exported-to-all")
    {
        exported_to_all = value;
        exported_to_all.value_namespace = name_space;
        exported_to_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "namespace")
    {
        namespace_ = value;
        namespace_.value_namespace = name_space;
        namespace_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::LoadedDataModels::DataModel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "exported-to")
    {
        exported_to.yfilter = yfilter;
    }
    if(value_path == "exported-to-all")
    {
        exported_to_all.yfilter = yfilter;
    }
    if(value_path == "namespace")
    {
        namespace_.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
}

bool ConfdState::LoadedDataModels::DataModel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "exported-to" || name == "exported-to-all" || name == "namespace" || name == "prefix" || name == "revision")
        return true;
    return false;
}

ConfdState::Netconf::Netconf()
    :
    listen(std::make_shared<ConfdState::Netconf::Listen>())
{
    listen->parent = this;

    yang_name = "netconf"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Netconf::~Netconf()
{
}

bool ConfdState::Netconf::has_data() const
{
    return (listen !=  nullptr && listen->has_data());
}

bool ConfdState::Netconf::has_operation() const
{
    return is_set(yfilter)
	|| (listen !=  nullptr && listen->has_operation());
}

std::string ConfdState::Netconf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Netconf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<ConfdState::Netconf::Listen>();
        }
        return listen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen != nullptr)
    {
        children["listen"] = listen;
    }

    return children;
}

void ConfdState::Netconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Netconf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Netconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listen")
        return true;
    return false;
}

ConfdState::Netconf::Listen::Listen()
{

    yang_name = "listen"; yang_parent_name = "netconf"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Netconf::Listen::~Listen()
{
}

bool ConfdState::Netconf::Listen::has_data() const
{
    for (std::size_t index=0; index<ssh.size(); index++)
    {
        if(ssh[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tcp.size(); index++)
    {
        if(tcp[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Netconf::Listen::has_operation() const
{
    for (std::size_t index=0; index<ssh.size(); index++)
    {
        if(ssh[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tcp.size(); index++)
    {
        if(tcp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Netconf::Listen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/netconf/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Netconf::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Netconf::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Netconf::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssh")
    {
        for(auto const & c : ssh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Netconf::Listen::Ssh>();
        c->parent = this;
        ssh.push_back(c);
        return c;
    }

    if(child_yang_name == "tcp")
    {
        for(auto const & c : tcp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Netconf::Listen::Tcp>();
        c->parent = this;
        tcp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Netconf::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssh)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tcp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Netconf::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Netconf::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Netconf::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssh" || name == "tcp")
        return true;
    return false;
}

ConfdState::Netconf::Listen::Ssh::Ssh()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "ssh"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Netconf::Listen::Ssh::~Ssh()
{
}

bool ConfdState::Netconf::Listen::Ssh::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Netconf::Listen::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Netconf::Listen::Ssh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/netconf/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Netconf::Listen::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Netconf::Listen::Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Netconf::Listen::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Netconf::Listen::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Netconf::Listen::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Netconf::Listen::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Netconf::Listen::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Netconf::Listen::Tcp::Tcp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Netconf::Listen::Tcp::~Tcp()
{
}

bool ConfdState::Netconf::Listen::Tcp::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Netconf::Listen::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Netconf::Listen::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/netconf/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Netconf::Listen::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Netconf::Listen::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Netconf::Listen::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Netconf::Listen::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Netconf::Listen::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Netconf::Listen::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Netconf::Listen::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Rest::Rest()
    :
    listen(std::make_shared<ConfdState::Rest::Listen>())
{
    listen->parent = this;

    yang_name = "rest"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Rest::~Rest()
{
}

bool ConfdState::Rest::has_data() const
{
    return (listen !=  nullptr && listen->has_data());
}

bool ConfdState::Rest::has_operation() const
{
    return is_set(yfilter)
	|| (listen !=  nullptr && listen->has_operation());
}

std::string ConfdState::Rest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Rest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Rest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Rest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<ConfdState::Rest::Listen>();
        }
        return listen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Rest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen != nullptr)
    {
        children["listen"] = listen;
    }

    return children;
}

void ConfdState::Rest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Rest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Rest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listen")
        return true;
    return false;
}

ConfdState::Rest::Listen::Listen()
{

    yang_name = "listen"; yang_parent_name = "rest"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Rest::Listen::~Listen()
{
}

bool ConfdState::Rest::Listen::has_data() const
{
    for (std::size_t index=0; index<ssl.size(); index++)
    {
        if(ssl[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tcp.size(); index++)
    {
        if(tcp[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Rest::Listen::has_operation() const
{
    for (std::size_t index=0; index<ssl.size(); index++)
    {
        if(ssl[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tcp.size(); index++)
    {
        if(tcp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Rest::Listen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/rest/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Rest::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Rest::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Rest::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssl")
    {
        for(auto const & c : ssl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Rest::Listen::Ssl>();
        c->parent = this;
        ssl.push_back(c);
        return c;
    }

    if(child_yang_name == "tcp")
    {
        for(auto const & c : tcp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Rest::Listen::Tcp>();
        c->parent = this;
        tcp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Rest::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssl)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tcp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Rest::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Rest::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Rest::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssl" || name == "tcp")
        return true;
    return false;
}

ConfdState::Rest::Listen::Ssl::Ssl()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "ssl"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Rest::Listen::Ssl::~Ssl()
{
}

bool ConfdState::Rest::Listen::Ssl::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Rest::Listen::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Rest::Listen::Ssl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/rest/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Rest::Listen::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Rest::Listen::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Rest::Listen::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Rest::Listen::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Rest::Listen::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Rest::Listen::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Rest::Listen::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Rest::Listen::Tcp::Tcp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Rest::Listen::Tcp::~Tcp()
{
}

bool ConfdState::Rest::Listen::Tcp::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Rest::Listen::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Rest::Listen::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/rest/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Rest::Listen::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Rest::Listen::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Rest::Listen::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Rest::Listen::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Rest::Listen::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Rest::Listen::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Rest::Listen::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Smp::Smp()
    :
    number_of_threads{YType::uint16, "number-of-threads"}
{

    yang_name = "smp"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Smp::~Smp()
{
}

bool ConfdState::Smp::has_data() const
{
    return number_of_threads.is_set;
}

bool ConfdState::Smp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_threads.yfilter);
}

std::string ConfdState::Smp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Smp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Smp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_threads.is_set || is_set(number_of_threads.yfilter)) leaf_name_data.push_back(number_of_threads.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Smp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Smp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Smp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-threads")
    {
        number_of_threads = value;
        number_of_threads.value_namespace = name_space;
        number_of_threads.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Smp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-threads")
    {
        number_of_threads.yfilter = yfilter;
    }
}

bool ConfdState::Smp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-of-threads")
        return true;
    return false;
}

ConfdState::Snmp::Snmp()
    :
    engine_id{YType::str, "engine-id"},
    mib{YType::str, "mib"}
    	,
    listen(std::make_shared<ConfdState::Snmp::Listen>())
	,version(std::make_shared<ConfdState::Snmp::Version>())
{
    listen->parent = this;
    version->parent = this;

    yang_name = "snmp"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Snmp::~Snmp()
{
}

bool ConfdState::Snmp::has_data() const
{
    for (auto const & leaf : mib.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return engine_id.is_set
	|| (listen !=  nullptr && listen->has_data())
	|| (version !=  nullptr && version->has_data());
}

bool ConfdState::Snmp::has_operation() const
{
    for (auto const & leaf : mib.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(engine_id.yfilter)
	|| ydk::is_set(mib.yfilter)
	|| (listen !=  nullptr && listen->has_operation())
	|| (version !=  nullptr && version->has_operation());
}

std::string ConfdState::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (engine_id.is_set || is_set(engine_id.yfilter)) leaf_name_data.push_back(engine_id.get_name_leafdata());

    auto mib_name_datas = mib.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_name_datas.begin(), mib_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<ConfdState::Snmp::Listen>();
        }
        return listen;
    }

    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<ConfdState::Snmp::Version>();
        }
        return version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen != nullptr)
    {
        children["listen"] = listen;
    }

    if(version != nullptr)
    {
        children["version"] = version;
    }

    return children;
}

void ConfdState::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "engine-id")
    {
        engine_id = value;
        engine_id.value_namespace = name_space;
        engine_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib")
    {
        mib.append(value);
    }
}

void ConfdState::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "engine-id")
    {
        engine_id.yfilter = yfilter;
    }
    if(value_path == "mib")
    {
        mib.yfilter = yfilter;
    }
}

bool ConfdState::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listen" || name == "version" || name == "engine-id" || name == "mib")
        return true;
    return false;
}

ConfdState::Snmp::Listen::Listen()
{

    yang_name = "listen"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Snmp::Listen::~Listen()
{
}

bool ConfdState::Snmp::Listen::has_data() const
{
    for (std::size_t index=0; index<udp.size(); index++)
    {
        if(udp[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Snmp::Listen::has_operation() const
{
    for (std::size_t index=0; index<udp.size(); index++)
    {
        if(udp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Snmp::Listen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Snmp::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Snmp::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Snmp::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        for(auto const & c : udp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Snmp::Listen::Udp>();
        c->parent = this;
        udp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Snmp::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Snmp::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Snmp::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Snmp::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

ConfdState::Snmp::Listen::Udp::Udp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Snmp::Listen::Udp::~Udp()
{
}

bool ConfdState::Snmp::Listen::Udp::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Snmp::Listen::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Snmp::Listen::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/snmp/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Snmp::Listen::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Snmp::Listen::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Snmp::Listen::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Snmp::Listen::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Snmp::Listen::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Snmp::Listen::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Snmp::Listen::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Snmp::Version::Version()
    :
    v1{YType::empty, "v1"},
    v2c{YType::empty, "v2c"},
    v3{YType::empty, "v3"}
{

    yang_name = "version"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Snmp::Version::~Version()
{
}

bool ConfdState::Snmp::Version::has_data() const
{
    return v1.is_set
	|| v2c.is_set
	|| v3.is_set;
}

bool ConfdState::Snmp::Version::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v1.yfilter)
	|| ydk::is_set(v2c.yfilter)
	|| ydk::is_set(v3.yfilter);
}

std::string ConfdState::Snmp::Version::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Snmp::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Snmp::Version::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v1.is_set || is_set(v1.yfilter)) leaf_name_data.push_back(v1.get_name_leafdata());
    if (v2c.is_set || is_set(v2c.yfilter)) leaf_name_data.push_back(v2c.get_name_leafdata());
    if (v3.is_set || is_set(v3.yfilter)) leaf_name_data.push_back(v3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Snmp::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Snmp::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Snmp::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v1")
    {
        v1 = value;
        v1.value_namespace = name_space;
        v1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2c")
    {
        v2c = value;
        v2c.value_namespace = name_space;
        v2c.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3")
    {
        v3 = value;
        v3.value_namespace = name_space;
        v3.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Snmp::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v1")
    {
        v1.yfilter = yfilter;
    }
    if(value_path == "v2c")
    {
        v2c.yfilter = yfilter;
    }
    if(value_path == "v3")
    {
        v3.yfilter = yfilter;
    }
}

bool ConfdState::Snmp::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v1" || name == "v2c" || name == "v3")
        return true;
    return false;
}

ConfdState::Webui::Webui()
    :
    listen(std::make_shared<ConfdState::Webui::Listen>())
{
    listen->parent = this;

    yang_name = "webui"; yang_parent_name = "confd-state"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Webui::~Webui()
{
}

bool ConfdState::Webui::has_data() const
{
    return (listen !=  nullptr && listen->has_data());
}

bool ConfdState::Webui::has_operation() const
{
    return is_set(yfilter)
	|| (listen !=  nullptr && listen->has_operation());
}

std::string ConfdState::Webui::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Webui::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webui";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Webui::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Webui::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen == nullptr)
        {
            listen = std::make_shared<ConfdState::Webui::Listen>();
        }
        return listen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Webui::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen != nullptr)
    {
        children["listen"] = listen;
    }

    return children;
}

void ConfdState::Webui::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Webui::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Webui::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listen")
        return true;
    return false;
}

ConfdState::Webui::Listen::Listen()
{

    yang_name = "listen"; yang_parent_name = "webui"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Webui::Listen::~Listen()
{
}

bool ConfdState::Webui::Listen::has_data() const
{
    for (std::size_t index=0; index<ssl.size(); index++)
    {
        if(ssl[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tcp.size(); index++)
    {
        if(tcp[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Webui::Listen::has_operation() const
{
    for (std::size_t index=0; index<ssl.size(); index++)
    {
        if(ssl[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tcp.size(); index++)
    {
        if(tcp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ConfdState::Webui::Listen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/webui/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Webui::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Webui::Listen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Webui::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssl")
    {
        for(auto const & c : ssl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Webui::Listen::Ssl>();
        c->parent = this;
        ssl.push_back(c);
        return c;
    }

    if(child_yang_name == "tcp")
    {
        for(auto const & c : tcp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Webui::Listen::Tcp>();
        c->parent = this;
        tcp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Webui::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssl)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tcp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Webui::Listen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ConfdState::Webui::Listen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ConfdState::Webui::Listen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssl" || name == "tcp")
        return true;
    return false;
}

ConfdState::Webui::Listen::Ssl::Ssl()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "ssl"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Webui::Listen::Ssl::~Ssl()
{
}

bool ConfdState::Webui::Listen::Ssl::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Webui::Listen::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Webui::Listen::Ssl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/webui/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Webui::Listen::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Webui::Listen::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Webui::Listen::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Webui::Listen::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Webui::Listen::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Webui::Listen::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Webui::Listen::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

ConfdState::Webui::Listen::Tcp::Tcp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "listen"; is_top_level_class = false; has_list_ancestor = false;
}

ConfdState::Webui::Listen::Tcp::~Tcp()
{
}

bool ConfdState::Webui::Listen::Tcp::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool ConfdState::Webui::Listen::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ConfdState::Webui::Listen::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state/webui/listen/" << get_segment_path();
    return path_buffer.str();
}

std::string ConfdState::Webui::Listen::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ConfdState::Webui::Listen::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ConfdState::Webui::Listen::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Webui::Listen::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ConfdState::Webui::Listen::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ConfdState::Webui::Listen::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ConfdState::Webui::Listen::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

const Enum::YLeaf ConfdState::DaemonStatus::starting {0, "starting"};
const Enum::YLeaf ConfdState::DaemonStatus::phase0 {1, "phase0"};
const Enum::YLeaf ConfdState::DaemonStatus::phase1 {2, "phase1"};
const Enum::YLeaf ConfdState::DaemonStatus::started {3, "started"};
const Enum::YLeaf ConfdState::DaemonStatus::stopping {4, "stopping"};

const Enum::YLeaf ConfdState::Ha::Mode::none {0, "none"};
const Enum::YLeaf ConfdState::Ha::Mode::slave {1, "slave"};
const Enum::YLeaf ConfdState::Ha::Mode::master {2, "master"};
const Enum::YLeaf ConfdState::Ha::Mode::relay_slave {3, "relay-slave"};

const Enum::YLeaf ConfdState::Internal::DatastoreName::running {0, "running"};
const Enum::YLeaf ConfdState::Internal::DatastoreName::startup {1, "startup"};
const Enum::YLeaf ConfdState::Internal::DatastoreName::operational {2, "operational"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupport::none {0, "none"};
const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupport::builtin {1, "builtin"};
const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupport::external {2, "external"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Error::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Error::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::Type::inactive {0, "inactive"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Type::client {1, "client"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Type::subscriber {2, "subscriber"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Type::waiting {3, "waiting"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::Datastore::pre_commit_running {9, "pre_commit_running"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::Lock::read {0, "read"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Lock::subscription {1, "subscription"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Lock::pending_read {2, "pending-read"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::Lock::pending_subscription {3, "pending-subscription"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::Subscription::Error::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::TimeRemaining::infinity {0, "infinity"};

const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedTo::netconf {0, "netconf"};
const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedTo::cli {1, "cli"};
const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedTo::webui {2, "webui"};
const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedTo::rest {3, "rest"};
const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedTo::snmp {4, "snmp"};


}
}

