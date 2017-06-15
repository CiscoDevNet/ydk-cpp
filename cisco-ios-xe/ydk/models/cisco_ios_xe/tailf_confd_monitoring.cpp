
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_confd_monitoring.hpp"

namespace ydk {
namespace tailf_confd_monitoring {

ConfdState::ConfdState()
    :
    daemon_status{YType::enumeration, "daemon-status"},
    epoll{YType::boolean, "epoll"},
    read_only_mode{YType::empty, "read-only-mode"},
    upgrade_mode{YType::empty, "upgrade-mode"},
    version{YType::str, "version"}
    	,
    cli_(nullptr) // presence node
	,ha_(nullptr) // presence node
	,internal_(std::make_shared<ConfdState::Internal>())
	,loaded_data_models_(std::make_shared<ConfdState::LoadedDataModels>())
	,netconf_(nullptr) // presence node
	,rest_(nullptr) // presence node
	,smp_(nullptr) // presence node
	,snmp_(nullptr) // presence node
	,webui_(nullptr) // presence node
{
    internal_->parent = this;

    loaded_data_models_->parent = this;

    yang_name = "confd-state"; yang_parent_name = "tailf-confd-monitoring";
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
	|| (cli_ !=  nullptr && cli_->has_data())
	|| (ha_ !=  nullptr && ha_->has_data())
	|| (internal_ !=  nullptr && internal_->has_data())
	|| (loaded_data_models_ !=  nullptr && loaded_data_models_->has_data())
	|| (netconf_ !=  nullptr && netconf_->has_data())
	|| (rest_ !=  nullptr && rest_->has_data())
	|| (smp_ !=  nullptr && smp_->has_data())
	|| (snmp_ !=  nullptr && snmp_->has_data())
	|| (webui_ !=  nullptr && webui_->has_data());
}

bool ConfdState::has_operation() const
{
    return is_set(operation)
	|| is_set(daemon_status.operation)
	|| is_set(epoll.operation)
	|| is_set(read_only_mode.operation)
	|| is_set(upgrade_mode.operation)
	|| is_set(version.operation)
	|| (cli_ !=  nullptr && cli_->has_operation())
	|| (ha_ !=  nullptr && ha_->has_operation())
	|| (internal_ !=  nullptr && internal_->has_operation())
	|| (loaded_data_models_ !=  nullptr && loaded_data_models_->has_operation())
	|| (netconf_ !=  nullptr && netconf_->has_operation())
	|| (rest_ !=  nullptr && rest_->has_operation())
	|| (smp_ !=  nullptr && smp_->has_operation())
	|| (snmp_ !=  nullptr && snmp_->has_operation())
	|| (webui_ !=  nullptr && webui_->has_operation());
}

std::string ConfdState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-confd-monitoring:confd-state";

    return path_buffer.str();

}

const EntityPath ConfdState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (daemon_status.is_set || is_set(daemon_status.operation)) leaf_name_data.push_back(daemon_status.get_name_leafdata());
    if (epoll.is_set || is_set(epoll.operation)) leaf_name_data.push_back(epoll.get_name_leafdata());
    if (read_only_mode.is_set || is_set(read_only_mode.operation)) leaf_name_data.push_back(read_only_mode.get_name_leafdata());
    if (upgrade_mode.is_set || is_set(upgrade_mode.operation)) leaf_name_data.push_back(upgrade_mode.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cli")
    {
        if(cli_ == nullptr)
        {
            cli_ = std::make_shared<ConfdState::Cli>();
        }
        return cli_;
    }

    if(child_yang_name == "ha")
    {
        if(ha_ == nullptr)
        {
            ha_ = std::make_shared<ConfdState::Ha>();
        }
        return ha_;
    }

    if(child_yang_name == "internal")
    {
        if(internal_ == nullptr)
        {
            internal_ = std::make_shared<ConfdState::Internal>();
        }
        return internal_;
    }

    if(child_yang_name == "loaded-data-models")
    {
        if(loaded_data_models_ == nullptr)
        {
            loaded_data_models_ = std::make_shared<ConfdState::LoadedDataModels>();
        }
        return loaded_data_models_;
    }

    if(child_yang_name == "netconf")
    {
        if(netconf_ == nullptr)
        {
            netconf_ = std::make_shared<ConfdState::Netconf>();
        }
        return netconf_;
    }

    if(child_yang_name == "rest")
    {
        if(rest_ == nullptr)
        {
            rest_ = std::make_shared<ConfdState::Rest>();
        }
        return rest_;
    }

    if(child_yang_name == "smp")
    {
        if(smp_ == nullptr)
        {
            smp_ = std::make_shared<ConfdState::Smp>();
        }
        return smp_;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp_ == nullptr)
        {
            snmp_ = std::make_shared<ConfdState::Snmp>();
        }
        return snmp_;
    }

    if(child_yang_name == "webui")
    {
        if(webui_ == nullptr)
        {
            webui_ = std::make_shared<ConfdState::Webui>();
        }
        return webui_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cli_ != nullptr)
    {
        children["cli"] = cli_;
    }

    if(ha_ != nullptr)
    {
        children["ha"] = ha_;
    }

    if(internal_ != nullptr)
    {
        children["internal"] = internal_;
    }

    if(loaded_data_models_ != nullptr)
    {
        children["loaded-data-models"] = loaded_data_models_;
    }

    if(netconf_ != nullptr)
    {
        children["netconf"] = netconf_;
    }

    if(rest_ != nullptr)
    {
        children["rest"] = rest_;
    }

    if(smp_ != nullptr)
    {
        children["smp"] = smp_;
    }

    if(snmp_ != nullptr)
    {
        children["snmp"] = snmp_;
    }

    if(webui_ != nullptr)
    {
        children["webui"] = webui_;
    }

    return children;
}

void ConfdState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "daemon-status")
    {
        daemon_status = value;
    }
    if(value_path == "epoll")
    {
        epoll = value;
    }
    if(value_path == "read-only-mode")
    {
        read_only_mode = value;
    }
    if(value_path == "upgrade-mode")
    {
        upgrade_mode = value;
    }
    if(value_path == "version")
    {
        version = value;
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

ConfdState::Smp::Smp()
    :
    number_of_threads{YType::uint16, "number-of-threads"}
{
    yang_name = "smp"; yang_parent_name = "confd-state";
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
    return is_set(operation)
	|| is_set(number_of_threads.operation);
}

std::string ConfdState::Smp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smp";

    return path_buffer.str();

}

const EntityPath ConfdState::Smp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_threads.is_set || is_set(number_of_threads.operation)) leaf_name_data.push_back(number_of_threads.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Smp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-of-threads")
    {
        number_of_threads = value;
    }
}

ConfdState::Ha::Ha()
    :
    connected_slave{YType::str, "connected-slave"},
    master_node_id{YType::str, "master-node-id"},
    mode{YType::enumeration, "mode"},
    node_id{YType::str, "node-id"},
    pending_slave{YType::str, "pending-slave"}
{
    yang_name = "ha"; yang_parent_name = "confd-state";
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : pending_slave.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(connected_slave.operation)
	|| is_set(master_node_id.operation)
	|| is_set(mode.operation)
	|| is_set(node_id.operation)
	|| is_set(pending_slave.operation);
}

std::string ConfdState::Ha::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha";

    return path_buffer.str();

}

const EntityPath ConfdState::Ha::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_node_id.is_set || is_set(master_node_id.operation)) leaf_name_data.push_back(master_node_id.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());

    auto connected_slave_name_datas = connected_slave.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), connected_slave_name_datas.begin(), connected_slave_name_datas.end());
    auto pending_slave_name_datas = pending_slave.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pending_slave_name_datas.begin(), pending_slave_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Ha::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected-slave")
    {
        connected_slave.append(value);
    }
    if(value_path == "master-node-id")
    {
        master_node_id = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "pending-slave")
    {
        pending_slave.append(value);
    }
}

ConfdState::LoadedDataModels::LoadedDataModels()
{
    yang_name = "loaded-data-models"; yang_parent_name = "confd-state";
}

ConfdState::LoadedDataModels::~LoadedDataModels()
{
}

bool ConfdState::LoadedDataModels::has_data() const
{
    for (std::size_t index=0; index<data_model_.size(); index++)
    {
        if(data_model_[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::LoadedDataModels::has_operation() const
{
    for (std::size_t index=0; index<data_model_.size(); index++)
    {
        if(data_model_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ConfdState::LoadedDataModels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loaded-data-models";

    return path_buffer.str();

}

const EntityPath ConfdState::LoadedDataModels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::LoadedDataModels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-model")
    {
        for(auto const & c : data_model_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::LoadedDataModels::DataModel>();
        c->parent = this;
        data_model_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::LoadedDataModels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : data_model_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::LoadedDataModels::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "data-model"; yang_parent_name = "loaded-data-models";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(exported_to.operation)
	|| is_set(exported_to_all.operation)
	|| is_set(namespace_.operation)
	|| is_set(prefix.operation)
	|| is_set(revision.operation);
}

std::string ConfdState::LoadedDataModels::DataModel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-model" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::LoadedDataModels::DataModel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/loaded-data-models/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (exported_to_all.is_set || is_set(exported_to_all.operation)) leaf_name_data.push_back(exported_to_all.get_name_leafdata());
    if (namespace_.is_set || is_set(namespace_.operation)) leaf_name_data.push_back(namespace_.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (revision.is_set || is_set(revision.operation)) leaf_name_data.push_back(revision.get_name_leafdata());

    auto exported_to_name_datas = exported_to.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exported_to_name_datas.begin(), exported_to_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::LoadedDataModels::DataModel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "exported-to")
    {
        exported_to.append(value);
    }
    if(value_path == "exported-to-all")
    {
        exported_to_all = value;
    }
    if(value_path == "namespace")
    {
        namespace_ = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "revision")
    {
        revision = value;
    }
}

ConfdState::Netconf::Netconf()
    :
    listen_(std::make_shared<ConfdState::Netconf::Listen>())
{
    listen_->parent = this;

    yang_name = "netconf"; yang_parent_name = "confd-state";
}

ConfdState::Netconf::~Netconf()
{
}

bool ConfdState::Netconf::has_data() const
{
    return (listen_ !=  nullptr && listen_->has_data());
}

bool ConfdState::Netconf::has_operation() const
{
    return is_set(operation)
	|| (listen_ !=  nullptr && listen_->has_operation());
}

std::string ConfdState::Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf";

    return path_buffer.str();

}

const EntityPath ConfdState::Netconf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen_ == nullptr)
        {
            listen_ = std::make_shared<ConfdState::Netconf::Listen>();
        }
        return listen_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen_ != nullptr)
    {
        children["listen"] = listen_;
    }

    return children;
}

void ConfdState::Netconf::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Netconf::Listen::Listen()
{
    yang_name = "listen"; yang_parent_name = "netconf";
}

ConfdState::Netconf::Listen::~Listen()
{
}

bool ConfdState::Netconf::Listen::has_data() const
{
    for (std::size_t index=0; index<ssh_.size(); index++)
    {
        if(ssh_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tcp_.size(); index++)
    {
        if(tcp_[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Netconf::Listen::has_operation() const
{
    for (std::size_t index=0; index<ssh_.size(); index++)
    {
        if(ssh_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tcp_.size(); index++)
    {
        if(tcp_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ConfdState::Netconf::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";

    return path_buffer.str();

}

const EntityPath ConfdState::Netconf::Listen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/netconf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Netconf::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssh")
    {
        for(auto const & c : ssh_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Netconf::Listen::Ssh>();
        c->parent = this;
        ssh_.push_back(c);
        return c;
    }

    if(child_yang_name == "tcp")
    {
        for(auto const & c : tcp_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Netconf::Listen::Tcp>();
        c->parent = this;
        tcp_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Netconf::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssh_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tcp_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Netconf::Listen::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Netconf::Listen::Tcp::Tcp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "tcp"; yang_parent_name = "listen";
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
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string ConfdState::Netconf::Listen::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath ConfdState::Netconf::Listen::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/netconf/listen/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Netconf::Listen::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

ConfdState::Netconf::Listen::Ssh::Ssh()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "ssh"; yang_parent_name = "listen";
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
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string ConfdState::Netconf::Listen::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

const EntityPath ConfdState::Netconf::Listen::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/netconf/listen/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Netconf::Listen::Ssh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

ConfdState::Cli::Cli()
    :
    listen_(std::make_shared<ConfdState::Cli::Listen>())
{
    listen_->parent = this;

    yang_name = "cli"; yang_parent_name = "confd-state";
}

ConfdState::Cli::~Cli()
{
}

bool ConfdState::Cli::has_data() const
{
    return (listen_ !=  nullptr && listen_->has_data());
}

bool ConfdState::Cli::has_operation() const
{
    return is_set(operation)
	|| (listen_ !=  nullptr && listen_->has_operation());
}

std::string ConfdState::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";

    return path_buffer.str();

}

const EntityPath ConfdState::Cli::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen_ == nullptr)
        {
            listen_ = std::make_shared<ConfdState::Cli::Listen>();
        }
        return listen_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen_ != nullptr)
    {
        children["listen"] = listen_;
    }

    return children;
}

void ConfdState::Cli::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Cli::Listen::Listen()
{
    yang_name = "listen"; yang_parent_name = "cli";
}

ConfdState::Cli::Listen::~Listen()
{
}

bool ConfdState::Cli::Listen::has_data() const
{
    for (std::size_t index=0; index<ssh_.size(); index++)
    {
        if(ssh_[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Cli::Listen::has_operation() const
{
    for (std::size_t index=0; index<ssh_.size(); index++)
    {
        if(ssh_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ConfdState::Cli::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";

    return path_buffer.str();

}

const EntityPath ConfdState::Cli::Listen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/cli/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Cli::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssh")
    {
        for(auto const & c : ssh_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Cli::Listen::Ssh>();
        c->parent = this;
        ssh_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Cli::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssh_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Cli::Listen::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Cli::Listen::Ssh::Ssh()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "ssh"; yang_parent_name = "listen";
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
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string ConfdState::Cli::Listen::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

const EntityPath ConfdState::Cli::Listen::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/cli/listen/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Cli::Listen::Ssh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

ConfdState::Webui::Webui()
    :
    listen_(std::make_shared<ConfdState::Webui::Listen>())
{
    listen_->parent = this;

    yang_name = "webui"; yang_parent_name = "confd-state";
}

ConfdState::Webui::~Webui()
{
}

bool ConfdState::Webui::has_data() const
{
    return (listen_ !=  nullptr && listen_->has_data());
}

bool ConfdState::Webui::has_operation() const
{
    return is_set(operation)
	|| (listen_ !=  nullptr && listen_->has_operation());
}

std::string ConfdState::Webui::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webui";

    return path_buffer.str();

}

const EntityPath ConfdState::Webui::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Webui::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen_ == nullptr)
        {
            listen_ = std::make_shared<ConfdState::Webui::Listen>();
        }
        return listen_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Webui::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen_ != nullptr)
    {
        children["listen"] = listen_;
    }

    return children;
}

void ConfdState::Webui::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Webui::Listen::Listen()
{
    yang_name = "listen"; yang_parent_name = "webui";
}

ConfdState::Webui::Listen::~Listen()
{
}

bool ConfdState::Webui::Listen::has_data() const
{
    for (std::size_t index=0; index<ssl_.size(); index++)
    {
        if(ssl_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tcp_.size(); index++)
    {
        if(tcp_[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Webui::Listen::has_operation() const
{
    for (std::size_t index=0; index<ssl_.size(); index++)
    {
        if(ssl_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tcp_.size(); index++)
    {
        if(tcp_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ConfdState::Webui::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";

    return path_buffer.str();

}

const EntityPath ConfdState::Webui::Listen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/webui/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Webui::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssl")
    {
        for(auto const & c : ssl_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Webui::Listen::Ssl>();
        c->parent = this;
        ssl_.push_back(c);
        return c;
    }

    if(child_yang_name == "tcp")
    {
        for(auto const & c : tcp_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Webui::Listen::Tcp>();
        c->parent = this;
        tcp_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Webui::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssl_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tcp_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Webui::Listen::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Webui::Listen::Tcp::Tcp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "tcp"; yang_parent_name = "listen";
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
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string ConfdState::Webui::Listen::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath ConfdState::Webui::Listen::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/webui/listen/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Webui::Listen::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

ConfdState::Webui::Listen::Ssl::Ssl()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "ssl"; yang_parent_name = "listen";
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
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string ConfdState::Webui::Listen::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";

    return path_buffer.str();

}

const EntityPath ConfdState::Webui::Listen::Ssl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/webui/listen/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Webui::Listen::Ssl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

ConfdState::Rest::Rest()
    :
    listen_(std::make_shared<ConfdState::Rest::Listen>())
{
    listen_->parent = this;

    yang_name = "rest"; yang_parent_name = "confd-state";
}

ConfdState::Rest::~Rest()
{
}

bool ConfdState::Rest::has_data() const
{
    return (listen_ !=  nullptr && listen_->has_data());
}

bool ConfdState::Rest::has_operation() const
{
    return is_set(operation)
	|| (listen_ !=  nullptr && listen_->has_operation());
}

std::string ConfdState::Rest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rest";

    return path_buffer.str();

}

const EntityPath ConfdState::Rest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Rest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen_ == nullptr)
        {
            listen_ = std::make_shared<ConfdState::Rest::Listen>();
        }
        return listen_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Rest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen_ != nullptr)
    {
        children["listen"] = listen_;
    }

    return children;
}

void ConfdState::Rest::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Rest::Listen::Listen()
{
    yang_name = "listen"; yang_parent_name = "rest";
}

ConfdState::Rest::Listen::~Listen()
{
}

bool ConfdState::Rest::Listen::has_data() const
{
    for (std::size_t index=0; index<ssl_.size(); index++)
    {
        if(ssl_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tcp_.size(); index++)
    {
        if(tcp_[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Rest::Listen::has_operation() const
{
    for (std::size_t index=0; index<ssl_.size(); index++)
    {
        if(ssl_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tcp_.size(); index++)
    {
        if(tcp_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ConfdState::Rest::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";

    return path_buffer.str();

}

const EntityPath ConfdState::Rest::Listen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/rest/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Rest::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssl")
    {
        for(auto const & c : ssl_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Rest::Listen::Ssl>();
        c->parent = this;
        ssl_.push_back(c);
        return c;
    }

    if(child_yang_name == "tcp")
    {
        for(auto const & c : tcp_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Rest::Listen::Tcp>();
        c->parent = this;
        tcp_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Rest::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssl_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tcp_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Rest::Listen::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Rest::Listen::Tcp::Tcp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "tcp"; yang_parent_name = "listen";
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
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string ConfdState::Rest::Listen::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath ConfdState::Rest::Listen::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/rest/listen/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Rest::Listen::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

ConfdState::Rest::Listen::Ssl::Ssl()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "ssl"; yang_parent_name = "listen";
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
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string ConfdState::Rest::Listen::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";

    return path_buffer.str();

}

const EntityPath ConfdState::Rest::Listen::Ssl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/rest/listen/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Rest::Listen::Ssl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

ConfdState::Snmp::Snmp()
    :
    engine_id{YType::str, "engine-id"},
    mib{YType::str, "mib"}
    	,
    listen_(std::make_shared<ConfdState::Snmp::Listen>())
	,version_(std::make_shared<ConfdState::Snmp::Version>())
{
    listen_->parent = this;

    version_->parent = this;

    yang_name = "snmp"; yang_parent_name = "confd-state";
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
	|| (listen_ !=  nullptr && listen_->has_data())
	|| (version_ !=  nullptr && version_->has_data());
}

bool ConfdState::Snmp::has_operation() const
{
    for (auto const & leaf : mib.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(engine_id.operation)
	|| is_set(mib.operation)
	|| (listen_ !=  nullptr && listen_->has_operation())
	|| (version_ !=  nullptr && version_->has_operation());
}

std::string ConfdState::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath ConfdState::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (engine_id.is_set || is_set(engine_id.operation)) leaf_name_data.push_back(engine_id.get_name_leafdata());

    auto mib_name_datas = mib.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_name_datas.begin(), mib_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listen")
    {
        if(listen_ == nullptr)
        {
            listen_ = std::make_shared<ConfdState::Snmp::Listen>();
        }
        return listen_;
    }

    if(child_yang_name == "version")
    {
        if(version_ == nullptr)
        {
            version_ = std::make_shared<ConfdState::Snmp::Version>();
        }
        return version_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(listen_ != nullptr)
    {
        children["listen"] = listen_;
    }

    if(version_ != nullptr)
    {
        children["version"] = version_;
    }

    return children;
}

void ConfdState::Snmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "engine-id")
    {
        engine_id = value;
    }
    if(value_path == "mib")
    {
        mib.append(value);
    }
}

ConfdState::Snmp::Listen::Listen()
{
    yang_name = "listen"; yang_parent_name = "snmp";
}

ConfdState::Snmp::Listen::~Listen()
{
}

bool ConfdState::Snmp::Listen::has_data() const
{
    for (std::size_t index=0; index<udp_.size(); index++)
    {
        if(udp_[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Snmp::Listen::has_operation() const
{
    for (std::size_t index=0; index<udp_.size(); index++)
    {
        if(udp_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ConfdState::Snmp::Listen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listen";

    return path_buffer.str();

}

const EntityPath ConfdState::Snmp::Listen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Snmp::Listen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        for(auto const & c : udp_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Snmp::Listen::Udp>();
        c->parent = this;
        udp_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Snmp::Listen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udp_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Snmp::Listen::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Snmp::Listen::Udp::Udp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "udp"; yang_parent_name = "listen";
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
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string ConfdState::Snmp::Listen::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath ConfdState::Snmp::Listen::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/snmp/listen/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Snmp::Listen::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

ConfdState::Snmp::Version::Version()
    :
    v1{YType::empty, "v1"},
    v2c{YType::empty, "v2c"},
    v3{YType::empty, "v3"}
{
    yang_name = "version"; yang_parent_name = "snmp";
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
    return is_set(operation)
	|| is_set(v1.operation)
	|| is_set(v2c.operation)
	|| is_set(v3.operation);
}

std::string ConfdState::Snmp::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";

    return path_buffer.str();

}

const EntityPath ConfdState::Snmp::Version::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v1.is_set || is_set(v1.operation)) leaf_name_data.push_back(v1.get_name_leafdata());
    if (v2c.is_set || is_set(v2c.operation)) leaf_name_data.push_back(v2c.get_name_leafdata());
    if (v3.is_set || is_set(v3.operation)) leaf_name_data.push_back(v3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Snmp::Version::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "v1")
    {
        v1 = value;
    }
    if(value_path == "v2c")
    {
        v2c = value;
    }
    if(value_path == "v3")
    {
        v3 = value;
    }
}

ConfdState::Internal::Internal()
    :
    callpoints_(std::make_shared<ConfdState::Internal::Callpoints>())
	,cdb_(std::make_shared<ConfdState::Internal::Cdb>())
{
    callpoints_->parent = this;

    cdb_->parent = this;

    yang_name = "internal"; yang_parent_name = "confd-state";
}

ConfdState::Internal::~Internal()
{
}

bool ConfdState::Internal::has_data() const
{
    return (callpoints_ !=  nullptr && callpoints_->has_data())
	|| (cdb_ !=  nullptr && cdb_->has_data());
}

bool ConfdState::Internal::has_operation() const
{
    return is_set(operation)
	|| (callpoints_ !=  nullptr && callpoints_->has_operation())
	|| (cdb_ !=  nullptr && cdb_->has_operation());
}

std::string ConfdState::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callpoints")
    {
        if(callpoints_ == nullptr)
        {
            callpoints_ = std::make_shared<ConfdState::Internal::Callpoints>();
        }
        return callpoints_;
    }

    if(child_yang_name == "cdb")
    {
        if(cdb_ == nullptr)
        {
            cdb_ = std::make_shared<ConfdState::Internal::Cdb>();
        }
        return cdb_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(callpoints_ != nullptr)
    {
        children["callpoints"] = callpoints_;
    }

    if(cdb_ != nullptr)
    {
        children["cdb"] = cdb_;
    }

    return children;
}

void ConfdState::Internal::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Internal::Callpoints::Callpoints()
    :
    authentication_callback_(nullptr) // presence node
	,authorization_callbacks_(nullptr) // presence node
{
    yang_name = "callpoints"; yang_parent_name = "internal";
}

ConfdState::Internal::Callpoints::~Callpoints()
{
}

bool ConfdState::Internal::Callpoints::has_data() const
{
    for (std::size_t index=0; index<actionpoint_.size(); index++)
    {
        if(actionpoint_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<callpoint_.size(); index++)
    {
        if(callpoint_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<error_formatting_callback_.size(); index++)
    {
        if(error_formatting_callback_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<notification_stream_replay_.size(); index++)
    {
        if(notification_stream_replay_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<snmp_inform_callback_.size(); index++)
    {
        if(snmp_inform_callback_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<snmp_notification_subscription_.size(); index++)
    {
        if(snmp_notification_subscription_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<typepoint_.size(); index++)
    {
        if(typepoint_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<validationpoint_.size(); index++)
    {
        if(validationpoint_[index]->has_data())
            return true;
    }
    return (authentication_callback_ !=  nullptr && authentication_callback_->has_data())
	|| (authorization_callbacks_ !=  nullptr && authorization_callbacks_->has_data());
}

bool ConfdState::Internal::Callpoints::has_operation() const
{
    for (std::size_t index=0; index<actionpoint_.size(); index++)
    {
        if(actionpoint_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<callpoint_.size(); index++)
    {
        if(callpoint_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<error_formatting_callback_.size(); index++)
    {
        if(error_formatting_callback_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<notification_stream_replay_.size(); index++)
    {
        if(notification_stream_replay_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<snmp_inform_callback_.size(); index++)
    {
        if(snmp_inform_callback_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<snmp_notification_subscription_.size(); index++)
    {
        if(snmp_notification_subscription_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<typepoint_.size(); index++)
    {
        if(typepoint_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<validationpoint_.size(); index++)
    {
        if(validationpoint_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (authentication_callback_ !=  nullptr && authentication_callback_->has_operation())
	|| (authorization_callbacks_ !=  nullptr && authorization_callbacks_->has_operation());
}

std::string ConfdState::Internal::Callpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callpoints";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actionpoint")
    {
        for(auto const & c : actionpoint_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint>();
        c->parent = this;
        actionpoint_.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication-callback")
    {
        if(authentication_callback_ == nullptr)
        {
            authentication_callback_ = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback>();
        }
        return authentication_callback_;
    }

    if(child_yang_name == "authorization-callbacks")
    {
        if(authorization_callbacks_ == nullptr)
        {
            authorization_callbacks_ = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks>();
        }
        return authorization_callbacks_;
    }

    if(child_yang_name == "callpoint")
    {
        for(auto const & c : callpoint_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Callpoint>();
        c->parent = this;
        callpoint_.push_back(c);
        return c;
    }

    if(child_yang_name == "error-formatting-callback")
    {
        for(auto const & c : error_formatting_callback_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback>();
        c->parent = this;
        error_formatting_callback_.push_back(c);
        return c;
    }

    if(child_yang_name == "notification-stream-replay")
    {
        for(auto const & c : notification_stream_replay_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay>();
        c->parent = this;
        notification_stream_replay_.push_back(c);
        return c;
    }

    if(child_yang_name == "snmp-inform-callback")
    {
        for(auto const & c : snmp_inform_callback_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback>();
        c->parent = this;
        snmp_inform_callback_.push_back(c);
        return c;
    }

    if(child_yang_name == "snmp-notification-subscription")
    {
        for(auto const & c : snmp_notification_subscription_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription>();
        c->parent = this;
        snmp_notification_subscription_.push_back(c);
        return c;
    }

    if(child_yang_name == "typepoint")
    {
        for(auto const & c : typepoint_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Typepoint>();
        c->parent = this;
        typepoint_.push_back(c);
        return c;
    }

    if(child_yang_name == "validationpoint")
    {
        for(auto const & c : validationpoint_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint>();
        c->parent = this;
        validationpoint_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : actionpoint_)
    {
        children[c->get_segment_path()] = c;
    }

    if(authentication_callback_ != nullptr)
    {
        children["authentication-callback"] = authentication_callback_;
    }

    if(authorization_callbacks_ != nullptr)
    {
        children["authorization-callbacks"] = authorization_callbacks_;
    }

    for (auto const & c : callpoint_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : error_formatting_callback_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : notification_stream_replay_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : snmp_inform_callback_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : snmp_notification_subscription_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : typepoint_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : validationpoint_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Internal::Callpoints::Callpoint::Callpoint()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Daemon>())
{
    daemon_->parent = this;

    yang_name = "callpoint"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::Callpoint::~Callpoint()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::Callpoint::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::Callpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callpoint" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Callpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Callpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Callpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Callpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

ConfdState::Internal::Callpoints::Callpoint::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "callpoint";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::Callpoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Callpoint::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::Callpoint::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::Callpoint::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "callpoint";
}

ConfdState::Internal::Callpoints::Callpoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::Callpoint::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::Callpoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Callpoint::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Callpoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::Callpoint::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Callpoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Callpoint::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::Validationpoint::Validationpoint()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Daemon>())
{
    daemon_->parent = this;

    yang_name = "validationpoint"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::Validationpoint::~Validationpoint()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::Validationpoint::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::Validationpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validationpoint" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Validationpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Validationpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Validationpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Validationpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

ConfdState::Internal::Callpoints::Validationpoint::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "validationpoint";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Validationpoint::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::Validationpoint::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::Validationpoint::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "validationpoint";
}

ConfdState::Internal::Callpoints::Validationpoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::Validationpoint::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::Validationpoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Validationpoint::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Validationpoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Validationpoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Validationpoint::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::Actionpoint::Actionpoint()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Daemon>())
{
    daemon_->parent = this;

    yang_name = "actionpoint"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::Actionpoint::~Actionpoint()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::Actionpoint::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::Actionpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actionpoint" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Actionpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Actionpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Actionpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Actionpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

ConfdState::Internal::Callpoints::Actionpoint::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "actionpoint";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Actionpoint::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::Actionpoint::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::Actionpoint::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "actionpoint";
}

ConfdState::Internal::Callpoints::Actionpoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::Actionpoint::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::Actionpoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Actionpoint::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Actionpoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Actionpoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Actionpoint::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::SnmpInformCallback::SnmpInformCallback()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon>())
{
    daemon_->parent = this;

    yang_name = "snmp-inform-callback"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::SnmpInformCallback::~SnmpInformCallback()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-inform-callback" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::SnmpInformCallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "snmp-inform-callback";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "snmp-inform-callback";
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpInformCallback::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpInformCallback::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::SnmpNotificationSubscription()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon>())
{
    daemon_->parent = this;

    yang_name = "snmp-notification-subscription"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::~SnmpNotificationSubscription()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-notification-subscription" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "snmp-notification-subscription";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "snmp-notification-subscription";
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::ErrorFormattingCallback()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon>())
{
    daemon_->parent = this;

    yang_name = "error-formatting-callback"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::~ErrorFormattingCallback()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-formatting-callback" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "error-formatting-callback";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "error-formatting-callback";
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::Typepoint::Typepoint()
    :
    id{YType::str, "id"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Daemon>())
{
    daemon_->parent = this;

    yang_name = "typepoint"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::Typepoint::~Typepoint()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return id.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::Typepoint::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::Typepoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "typepoint" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Typepoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Typepoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Typepoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Typepoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

ConfdState::Internal::Callpoints::Typepoint::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "typepoint";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::Typepoint::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Typepoint::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::Typepoint::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::Typepoint::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "typepoint";
}

ConfdState::Internal::Callpoints::Typepoint::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::Typepoint::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::Typepoint::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Typepoint::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::Typepoint::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::Typepoint::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::Typepoint::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::Typepoint::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::NotificationStreamReplay()
    :
    name{YType::str, "name"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"},
    replay_support{YType::enumeration, "replay-support"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon>())
{
    daemon_->parent = this;

    yang_name = "notification-stream-replay"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::~NotificationStreamReplay()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return name.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| replay_support.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| is_set(replay_support.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-stream-replay" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::NotificationStreamReplay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (replay_support.is_set || is_set(replay_support.operation)) leaf_name_data.push_back(replay_support.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "replay-support")
    {
        replay_support = value;
    }
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "notification-stream-replay";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "notification-stream-replay";
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daemon' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::AuthenticationCallback::AuthenticationCallback()
    :
    enabled{YType::boolean, "enabled"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon>())
{
    daemon_->parent = this;

    yang_name = "authentication-callback"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::AuthenticationCallback::~AuthenticationCallback()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return enabled.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-callback";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::AuthenticationCallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "authentication-callback";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authentication-callback/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "authentication-callback";
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::AuthenticationCallback::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authentication-callback/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthenticationCallback::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authentication-callback/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::AuthorizationCallbacks()
    :
    enabled{YType::boolean, "enabled"},
    error{YType::enumeration, "error"},
    file{YType::str, "file"},
    path{YType::str, "path"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon>())
{
    daemon_->parent = this;

    yang_name = "authorization-callbacks"; yang_parent_name = "callpoints";
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::~AuthorizationCallbacks()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::has_data() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_data())
            return true;
    }
    return enabled.is_set
	|| error.is_set
	|| file.is_set
	|| path.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::has_operation() const
{
    for (std::size_t index=0; index<range_.size(); index++)
    {
        if(range_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(error.operation)
	|| is_set(file.operation)
	|| is_set(path.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-callbacks";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon>();
        }
        return daemon_;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range>();
        c->parent = this;
        range_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    for (auto const & c : range_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "authorization-callbacks";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authorization-callbacks/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Range()
    :
    default_{YType::empty, "default"},
    lower{YType::str, "lower"},
    upper{YType::str, "upper"}
    	,
    daemon_(std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon>())
{
    daemon_->parent = this;

    yang_name = "range"; yang_parent_name = "authorization-callbacks";
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::~Range()
{
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::has_data() const
{
    return default_.is_set
	|| lower.is_set
	|| upper.is_set
	|| (daemon_ !=  nullptr && daemon_->has_data());
}

bool ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation)
	|| (daemon_ !=  nullptr && daemon_->has_operation());
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authorization-callbacks/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daemon")
    {
        if(daemon_ == nullptr)
        {
            daemon_ = std::make_shared<ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon>();
        }
        return daemon_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daemon_ != nullptr)
    {
        children["daemon"] = daemon_;
    }

    return children;
}

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::Daemon()
    :
    error{YType::enumeration, "error"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "daemon"; yang_parent_name = "range";
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
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daemon";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/callpoints/authorization-callbacks/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

ConfdState::Internal::Cdb::Cdb()
{
    yang_name = "cdb"; yang_parent_name = "internal";
}

ConfdState::Internal::Cdb::~Cdb()
{
}

bool ConfdState::Internal::Cdb::has_data() const
{
    for (std::size_t index=0; index<client_.size(); index++)
    {
        if(client_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<datastore_.size(); index++)
    {
        if(datastore_[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Internal::Cdb::has_operation() const
{
    for (std::size_t index=0; index<client_.size(); index++)
    {
        if(client_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<datastore_.size(); index++)
    {
        if(datastore_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ConfdState::Internal::Cdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdb";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Cdb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Client>();
        c->parent = this;
        client_.push_back(c);
        return c;
    }

    if(child_yang_name == "datastore")
    {
        for(auto const & c : datastore_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Datastore>();
        c->parent = this;
        datastore_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : datastore_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Cdb::set_value(const std::string & value_path, std::string value)
{
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
    pending_subscription_sync_(nullptr) // presence node
{
    yang_name = "datastore"; yang_parent_name = "cdb";
}

ConfdState::Internal::Cdb::Datastore::~Datastore()
{
}

bool ConfdState::Internal::Cdb::Datastore::has_data() const
{
    for (std::size_t index=0; index<pending_notification_queue_.size(); index++)
    {
        if(pending_notification_queue_[index]->has_data())
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
	|| (pending_subscription_sync_ !=  nullptr && pending_subscription_sync_->has_data());
}

bool ConfdState::Internal::Cdb::Datastore::has_operation() const
{
    for (std::size_t index=0; index<pending_notification_queue_.size(); index++)
    {
        if(pending_notification_queue_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(disk_size.operation)
	|| is_set(filename.operation)
	|| is_set(ram_size.operation)
	|| is_set(read_locks.operation)
	|| is_set(subscription_lock_set.operation)
	|| is_set(transaction_id.operation)
	|| is_set(waiting_for_replication_sync.operation)
	|| is_set(write_lock_set.operation)
	|| is_set(write_queue.operation)
	|| (pending_subscription_sync_ !=  nullptr && pending_subscription_sync_->has_operation());
}

std::string ConfdState::Internal::Cdb::Datastore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastore" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Cdb::Datastore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/cdb/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (disk_size.is_set || is_set(disk_size.operation)) leaf_name_data.push_back(disk_size.get_name_leafdata());
    if (filename.is_set || is_set(filename.operation)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (ram_size.is_set || is_set(ram_size.operation)) leaf_name_data.push_back(ram_size.get_name_leafdata());
    if (read_locks.is_set || is_set(read_locks.operation)) leaf_name_data.push_back(read_locks.get_name_leafdata());
    if (subscription_lock_set.is_set || is_set(subscription_lock_set.operation)) leaf_name_data.push_back(subscription_lock_set.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.operation)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (waiting_for_replication_sync.is_set || is_set(waiting_for_replication_sync.operation)) leaf_name_data.push_back(waiting_for_replication_sync.get_name_leafdata());
    if (write_lock_set.is_set || is_set(write_lock_set.operation)) leaf_name_data.push_back(write_lock_set.get_name_leafdata());
    if (write_queue.is_set || is_set(write_queue.operation)) leaf_name_data.push_back(write_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Datastore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pending-notification-queue")
    {
        for(auto const & c : pending_notification_queue_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue>();
        c->parent = this;
        pending_notification_queue_.push_back(c);
        return c;
    }

    if(child_yang_name == "pending-subscription-sync")
    {
        if(pending_subscription_sync_ == nullptr)
        {
            pending_subscription_sync_ = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync>();
        }
        return pending_subscription_sync_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Datastore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pending_notification_queue_)
    {
        children[c->get_segment_path()] = c;
    }

    if(pending_subscription_sync_ != nullptr)
    {
        children["pending-subscription-sync"] = pending_subscription_sync_;
    }

    return children;
}

void ConfdState::Internal::Cdb::Datastore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "disk-size")
    {
        disk_size = value;
    }
    if(value_path == "filename")
    {
        filename = value;
    }
    if(value_path == "ram-size")
    {
        ram_size = value;
    }
    if(value_path == "read-locks")
    {
        read_locks = value;
    }
    if(value_path == "subscription-lock-set")
    {
        subscription_lock_set = value;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
    }
    if(value_path == "waiting-for-replication-sync")
    {
        waiting_for_replication_sync = value;
    }
    if(value_path == "write-lock-set")
    {
        write_lock_set = value;
    }
    if(value_path == "write-queue")
    {
        write_queue = value;
    }
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::PendingSubscriptionSync()
    :
    priority{YType::int32, "priority"},
    time_remaining{YType::str, "time-remaining"}
{
    yang_name = "pending-subscription-sync"; yang_parent_name = "datastore";
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::~PendingSubscriptionSync()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::has_data() const
{
    for (std::size_t index=0; index<notification_.size(); index++)
    {
        if(notification_[index]->has_data())
            return true;
    }
    return priority.is_set
	|| time_remaining.is_set;
}

bool ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::has_operation() const
{
    for (std::size_t index=0; index<notification_.size(); index++)
    {
        if(notification_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(priority.operation)
	|| is_set(time_remaining.operation);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-subscription-sync";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PendingSubscriptionSync' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.operation)) leaf_name_data.push_back(time_remaining.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        for(auto const & c : notification_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification>();
        c->parent = this;
        notification_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : notification_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
    }
}

ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::Notification()
    :
    client_name{YType::str, "client-name"},
    subscription_ids{YType::uint32, "subscription-ids"}
{
    yang_name = "notification"; yang_parent_name = "pending-subscription-sync";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(client_name.operation)
	|| is_set(subscription_ids.operation);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Notification' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());

    auto subscription_ids_name_datas = subscription_ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), subscription_ids_name_datas.begin(), subscription_ids_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::Notification::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.append(value);
    }
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::PendingNotificationQueue()
{
    yang_name = "pending-notification-queue"; yang_parent_name = "datastore";
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::~PendingNotificationQueue()
{
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::has_data() const
{
    for (std::size_t index=0; index<notification_.size(); index++)
    {
        if(notification_[index]->has_data())
            return true;
    }
    return false;
}

bool ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::has_operation() const
{
    for (std::size_t index=0; index<notification_.size(); index++)
    {
        if(notification_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-notification-queue";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PendingNotificationQueue' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        for(auto const & c : notification_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification>();
        c->parent = this;
        notification_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : notification_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::set_value(const std::string & value_path, std::string value)
{
}

ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::Notification()
    :
    client_name{YType::str, "client-name"},
    priority{YType::int32, "priority"},
    subscription_ids{YType::uint32, "subscription-ids"}
{
    yang_name = "notification"; yang_parent_name = "pending-notification-queue";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(client_name.operation)
	|| is_set(priority.operation)
	|| is_set(subscription_ids.operation);
}

std::string ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Notification' in tailf_confd_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());

    auto subscription_ids_name_datas = subscription_ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), subscription_ids_name_datas.begin(), subscription_ids_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Cdb::Datastore::PendingNotificationQueue::Notification::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "subscription-ids")
    {
        subscription_ids.append(value);
    }
}

ConfdState::Internal::Cdb::Client::Client()
    :
    datastore{YType::str, "datastore"},
    info{YType::str, "info"},
    lock{YType::enumeration, "lock"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"}
{
    yang_name = "client"; yang_parent_name = "cdb";
}

ConfdState::Internal::Cdb::Client::~Client()
{
}

bool ConfdState::Internal::Cdb::Client::has_data() const
{
    for (std::size_t index=0; index<subscription_.size(); index++)
    {
        if(subscription_[index]->has_data())
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
    for (std::size_t index=0; index<subscription_.size(); index++)
    {
        if(subscription_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(datastore.operation)
	|| is_set(info.operation)
	|| is_set(lock.operation)
	|| is_set(name.operation)
	|| is_set(type.operation);
}

std::string ConfdState::Internal::Cdb::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Cdb::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/cdb/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (datastore.is_set || is_set(datastore.operation)) leaf_name_data.push_back(datastore.get_name_leafdata());
    if (info.is_set || is_set(info.operation)) leaf_name_data.push_back(info.get_name_leafdata());
    if (lock.is_set || is_set(lock.operation)) leaf_name_data.push_back(lock.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ConfdState::Internal::Cdb::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        for(auto const & c : subscription_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ConfdState::Internal::Cdb::Client::Subscription>();
        c->parent = this;
        subscription_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ConfdState::Internal::Cdb::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscription_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ConfdState::Internal::Cdb::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "datastore")
    {
        datastore = value;
    }
    if(value_path == "info")
    {
        info = value;
    }
    if(value_path == "lock")
    {
        lock = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
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
    yang_name = "subscription"; yang_parent_name = "client";
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
    return is_set(operation)
	|| is_set(datastore.operation)
	|| is_set(error.operation)
	|| is_set(id.operation)
	|| is_set(path.operation)
	|| is_set(priority.operation)
	|| is_set(twophase.operation);
}

std::string ConfdState::Internal::Cdb::Client::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";

    return path_buffer.str();

}

const EntityPath ConfdState::Internal::Cdb::Client::Subscription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-confd-monitoring:confd-state/internal/cdb/client/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (datastore.is_set || is_set(datastore.operation)) leaf_name_data.push_back(datastore.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (twophase.is_set || is_set(twophase.operation)) leaf_name_data.push_back(twophase.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ConfdState::Internal::Cdb::Client::Subscription::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "datastore")
    {
        datastore = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "twophase")
    {
        twophase = value;
    }
}

const Enum::YLeaf ConfdState::DaemonStatusEnum::starting {0, "starting"};
const Enum::YLeaf ConfdState::DaemonStatusEnum::phase0 {1, "phase0"};
const Enum::YLeaf ConfdState::DaemonStatusEnum::phase1 {2, "phase1"};
const Enum::YLeaf ConfdState::DaemonStatusEnum::started {3, "started"};
const Enum::YLeaf ConfdState::DaemonStatusEnum::stopping {4, "stopping"};

const Enum::YLeaf ConfdState::Ha::ModeEnum::none {0, "none"};
const Enum::YLeaf ConfdState::Ha::ModeEnum::slave {1, "slave"};
const Enum::YLeaf ConfdState::Ha::ModeEnum::master {2, "master"};
const Enum::YLeaf ConfdState::Ha::ModeEnum::relay_slave {3, "relay-slave"};

const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedToEnum::netconf {0, "netconf"};
const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedToEnum::cli {1, "cli"};
const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedToEnum::webui {2, "webui"};
const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedToEnum::rest {3, "rest"};
const Enum::YLeaf ConfdState::LoadedDataModels::DataModel::ExportedToEnum::snmp {4, "snmp"};

const Enum::YLeaf ConfdState::Internal::DatastoreNameEnum::running {0, "running"};
const Enum::YLeaf ConfdState::Internal::DatastoreNameEnum::startup {1, "startup"};
const Enum::YLeaf ConfdState::Internal::DatastoreNameEnum::operational {2, "operational"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Callpoint::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Validationpoint::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Actionpoint::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpInformCallback::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::SnmpNotificationSubscription::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::ErrorFormattingCallback::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::Typepoint::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupportEnum::none {0, "none"};
const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupportEnum::builtin {1, "builtin"};
const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ReplaySupportEnum::external {2, "external"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::NotificationStreamReplay::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthenticationCallback::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::ErrorEnum::NOT_REGISTERED {0, "NOT-REGISTERED"};
const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::ErrorEnum::UNKNOWN {1, "UNKNOWN"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Callpoints::AuthorizationCallbacks::Range::Daemon::ErrorEnum::PENDING {0, "PENDING"};

const Enum::YLeaf ConfdState::Internal::Cdb::Datastore::PendingSubscriptionSync::TimeRemainingEnum::infinity {0, "infinity"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::TypeEnum::inactive {0, "inactive"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::TypeEnum::client {1, "client"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::TypeEnum::subscriber {2, "subscriber"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::TypeEnum::waiting {3, "waiting"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::DatastoreEnum::pre_commit_running {9, "pre_commit_running"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::LockEnum::read {0, "read"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::LockEnum::subscription {1, "subscription"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::LockEnum::pending_read {2, "pending-read"};
const Enum::YLeaf ConfdState::Internal::Cdb::Client::LockEnum::pending_subscription {3, "pending-subscription"};

const Enum::YLeaf ConfdState::Internal::Cdb::Client::Subscription::ErrorEnum::PENDING {0, "PENDING"};


}
}

