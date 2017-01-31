
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_asr9k_prm_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_prm_cfg {

HardwareModuleQosMode::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"},
	 child_shaping_disable{YType::empty, "child-shaping-disable"},
	 lowburst_enable{YType::empty, "lowburst-enable"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

HardwareModuleQosMode::Nodes::Node::~Node()
{
}

bool HardwareModuleQosMode::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| child_shaping_disable.is_set
	|| lowburst_enable.is_set;
}

bool HardwareModuleQosMode::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(child_shaping_disable.operation)
	|| is_set(lowburst_enable.operation);
}

std::string HardwareModuleQosMode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModuleQosMode::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (child_shaping_disable.is_set || is_set(child_shaping_disable.operation)) leaf_name_data.push_back(child_shaping_disable.get_name_leafdata());
    if (lowburst_enable.is_set || is_set(lowburst_enable.operation)) leaf_name_data.push_back(lowburst_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleQosMode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModuleQosMode::Nodes::Node::get_children()
{
    return children;
}

void HardwareModuleQosMode::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "child-shaping-disable")
    {
        child_shaping_disable = value;
    }
    if(value_path == "lowburst-enable")
    {
        lowburst_enable = value;
    }
}

HardwareModuleQosMode::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "hardware-module-qos-mode";
}

HardwareModuleQosMode::Nodes::~Nodes()
{
}

bool HardwareModuleQosMode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleQosMode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleQosMode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath HardwareModuleQosMode::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleQosMode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleQosMode::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleQosMode::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModuleQosMode::Nodes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleQosMode::HardwareModuleQosMode()
    :
    nodes(std::make_unique<HardwareModuleQosMode::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "hardware-module-qos-mode"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg";
}

HardwareModuleQosMode::~HardwareModuleQosMode()
{
}

bool HardwareModuleQosMode::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleQosMode::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleQosMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode";

    return path_buffer.str();

}

EntityPath HardwareModuleQosMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleQosMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<HardwareModuleQosMode::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleQosMode::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void HardwareModuleQosMode::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HardwareModuleQosMode::clone_ptr()
{
    return std::make_unique<HardwareModuleQosMode>();
}
HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::Np()
    :
    	np_id{YType::uint32, "np-id"},
	 adjust_value{YType::uint32, "adjust-value"}
{
    yang_name = "np"; yang_parent_name = "nps";
}

HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::~Np()
{
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::has_data() const
{
    return np_id.is_set
	|| adjust_value.is_set;
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::has_operation() const
{
    return is_set(operation)
	|| is_set(np_id.operation)
	|| is_set(adjust_value.operation);
}

std::string HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np" <<"[np-id='" <<np_id.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (np_id.is_set || is_set(np_id.operation)) leaf_name_data.push_back(np_id.get_name_leafdata());
    if (adjust_value.is_set || is_set(adjust_value.operation)) leaf_name_data.push_back(adjust_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_children()
{
    return children;
}

void HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "np-id")
    {
        np_id = value;
    }
    if(value_path == "adjust-value")
    {
        adjust_value = value;
    }
}

HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Nps()
{
    yang_name = "nps"; yang_parent_name = "node";
}

HardwareModuleTcpMssAdjust::Nodes::Node::Nps::~Nps()
{
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::has_data() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::Nps::has_operation() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nps";

    return path_buffer.str();

}

EntityPath HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "np")
    {
        for(auto const & c : np)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np>();
        c->parent = this;
        np.push_back(std::move(c));
        children[segment_path] = np.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_children()
{
    for (auto const & c : np)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModuleTcpMssAdjust::Nodes::Node::Nps::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleTcpMssAdjust::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    nps(std::make_unique<HardwareModuleTcpMssAdjust::Nodes::Node::Nps>())
{
    nps->parent = this;
    children["nps"] = nps.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

HardwareModuleTcpMssAdjust::Nodes::Node::~Node()
{
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (nps !=  nullptr && nps->has_data());
}

bool HardwareModuleTcpMssAdjust::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (nps !=  nullptr && nps->has_operation());
}

std::string HardwareModuleTcpMssAdjust::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModuleTcpMssAdjust::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleTcpMssAdjust::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nps")
    {
        if(nps != nullptr)
        {
            children["nps"] = nps.get();
        }
        else
        {
            nps = std::make_unique<HardwareModuleTcpMssAdjust::Nodes::Node::Nps>();
            nps->parent = this;
            children["nps"] = nps.get();
        }
        return children.at("nps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleTcpMssAdjust::Nodes::Node::get_children()
{
    if(children.find("nps") == children.end())
    {
        if(nps != nullptr)
        {
            children["nps"] = nps.get();
        }
    }

    return children;
}

void HardwareModuleTcpMssAdjust::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

HardwareModuleTcpMssAdjust::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "hardware-module-tcp-mss-adjust";
}

HardwareModuleTcpMssAdjust::Nodes::~Nodes()
{
}

bool HardwareModuleTcpMssAdjust::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleTcpMssAdjust::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleTcpMssAdjust::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath HardwareModuleTcpMssAdjust::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleTcpMssAdjust::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleTcpMssAdjust::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleTcpMssAdjust::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModuleTcpMssAdjust::Nodes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleTcpMssAdjust::HardwareModuleTcpMssAdjust()
    :
    nodes(std::make_unique<HardwareModuleTcpMssAdjust::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "hardware-module-tcp-mss-adjust"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg";
}

HardwareModuleTcpMssAdjust::~HardwareModuleTcpMssAdjust()
{
}

bool HardwareModuleTcpMssAdjust::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleTcpMssAdjust::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleTcpMssAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust";

    return path_buffer.str();

}

EntityPath HardwareModuleTcpMssAdjust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleTcpMssAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<HardwareModuleTcpMssAdjust::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleTcpMssAdjust::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void HardwareModuleTcpMssAdjust::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HardwareModuleTcpMssAdjust::clone_ptr()
{
    return std::make_unique<HardwareModuleTcpMssAdjust>();
}
HardwareModuleLoadBalance::Bundle::L2Service::L2Service()
    :
    	l3_parameters{YType::empty, "l3-parameters"}
{
    yang_name = "l2-service"; yang_parent_name = "bundle";
}

HardwareModuleLoadBalance::Bundle::L2Service::~L2Service()
{
}

bool HardwareModuleLoadBalance::Bundle::L2Service::has_data() const
{
    return l3_parameters.is_set;
}

bool HardwareModuleLoadBalance::Bundle::L2Service::has_operation() const
{
    return is_set(operation)
	|| is_set(l3_parameters.operation);
}

std::string HardwareModuleLoadBalance::Bundle::L2Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-service";

    return path_buffer.str();

}

EntityPath HardwareModuleLoadBalance::Bundle::L2Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-load-balance/bundle/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_parameters.is_set || is_set(l3_parameters.operation)) leaf_name_data.push_back(l3_parameters.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleLoadBalance::Bundle::L2Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModuleLoadBalance::Bundle::L2Service::get_children()
{
    return children;
}

void HardwareModuleLoadBalance::Bundle::L2Service::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l3-parameters")
    {
        l3_parameters = value;
    }
}

HardwareModuleLoadBalance::Bundle::Bundle()
    :
    l2_service(std::make_unique<HardwareModuleLoadBalance::Bundle::L2Service>())
{
    l2_service->parent = this;
    children["l2-service"] = l2_service.get();

    yang_name = "bundle"; yang_parent_name = "hardware-module-load-balance";
}

HardwareModuleLoadBalance::Bundle::~Bundle()
{
}

bool HardwareModuleLoadBalance::Bundle::has_data() const
{
    return (l2_service !=  nullptr && l2_service->has_data());
}

bool HardwareModuleLoadBalance::Bundle::has_operation() const
{
    return is_set(operation)
	|| (l2_service !=  nullptr && l2_service->has_operation());
}

std::string HardwareModuleLoadBalance::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";

    return path_buffer.str();

}

EntityPath HardwareModuleLoadBalance::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-load-balance/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleLoadBalance::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2-service")
    {
        if(l2_service != nullptr)
        {
            children["l2-service"] = l2_service.get();
        }
        else
        {
            l2_service = std::make_unique<HardwareModuleLoadBalance::Bundle::L2Service>();
            l2_service->parent = this;
            children["l2-service"] = l2_service.get();
        }
        return children.at("l2-service");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleLoadBalance::Bundle::get_children()
{
    if(children.find("l2-service") == children.end())
    {
        if(l2_service != nullptr)
        {
            children["l2-service"] = l2_service.get();
        }
    }

    return children;
}

void HardwareModuleLoadBalance::Bundle::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleLoadBalance::HardwareModuleLoadBalance()
    :
    bundle(std::make_unique<HardwareModuleLoadBalance::Bundle>())
{
    bundle->parent = this;
    children["bundle"] = bundle.get();

    yang_name = "hardware-module-load-balance"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg";
}

HardwareModuleLoadBalance::~HardwareModuleLoadBalance()
{
}

bool HardwareModuleLoadBalance::has_data() const
{
    return (bundle !=  nullptr && bundle->has_data());
}

bool HardwareModuleLoadBalance::has_operation() const
{
    return is_set(operation)
	|| (bundle !=  nullptr && bundle->has_operation());
}

std::string HardwareModuleLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-load-balance";

    return path_buffer.str();

}

EntityPath HardwareModuleLoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle")
    {
        if(bundle != nullptr)
        {
            children["bundle"] = bundle.get();
        }
        else
        {
            bundle = std::make_unique<HardwareModuleLoadBalance::Bundle>();
            bundle->parent = this;
            children["bundle"] = bundle.get();
        }
        return children.at("bundle");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleLoadBalance::get_children()
{
    if(children.find("bundle") == children.end())
    {
        if(bundle != nullptr)
        {
            children["bundle"] = bundle.get();
        }
    }

    return children;
}

void HardwareModuleLoadBalance::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HardwareModuleLoadBalance::clone_ptr()
{
    return std::make_unique<HardwareModuleLoadBalance>();
}
HardwareModuleTcam::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"},
	 profile{YType::enumeration, "profile"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

HardwareModuleTcam::Nodes::Node::~Node()
{
}

bool HardwareModuleTcam::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| profile.is_set;
}

bool HardwareModuleTcam::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(profile.operation);
}

std::string HardwareModuleTcam::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModuleTcam::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleTcam::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModuleTcam::Nodes::Node::get_children()
{
    return children;
}

void HardwareModuleTcam::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "profile")
    {
        profile = value;
    }
}

HardwareModuleTcam::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "hardware-module-tcam";
}

HardwareModuleTcam::Nodes::~Nodes()
{
}

bool HardwareModuleTcam::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleTcam::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleTcam::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath HardwareModuleTcam::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleTcam::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleTcam::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleTcam::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModuleTcam::Nodes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleTcam::HardwareModuleTcam()
    :
    	global_profile{YType::enumeration, "global-profile"}
    	,
    nodes(std::make_unique<HardwareModuleTcam::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "hardware-module-tcam"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg";
}

HardwareModuleTcam::~HardwareModuleTcam()
{
}

bool HardwareModuleTcam::has_data() const
{
    return global_profile.is_set
	|| (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleTcam::has_operation() const
{
    return is_set(operation)
	|| is_set(global_profile.operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam";

    return path_buffer.str();

}

EntityPath HardwareModuleTcam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_profile.is_set || is_set(global_profile.operation)) leaf_name_data.push_back(global_profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<HardwareModuleTcam::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleTcam::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void HardwareModuleTcam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-profile")
    {
        global_profile = value;
    }
}

std::unique_ptr<Entity> HardwareModuleTcam::clone_ptr()
{
    return std::make_unique<HardwareModuleTcam>();
}
HardwareModuleEfd::Nodes::Node::IpPrecedence::IpPrecedence()
    :
    	operation_{YType::enumeration, "operation"},
	 precedence{YType::uint32, "precedence"}
{
    yang_name = "ip-precedence"; yang_parent_name = "node";
}

HardwareModuleEfd::Nodes::Node::IpPrecedence::~IpPrecedence()
{
}

bool HardwareModuleEfd::Nodes::Node::IpPrecedence::has_data() const
{
    return operation_.is_set
	|| precedence.is_set;
}

bool HardwareModuleEfd::Nodes::Node::IpPrecedence::has_operation() const
{
    return is_set(operation)
	|| is_set(operation_.operation)
	|| is_set(precedence.operation);
}

std::string HardwareModuleEfd::Nodes::Node::IpPrecedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-precedence";

    return path_buffer.str();

}

EntityPath HardwareModuleEfd::Nodes::Node::IpPrecedence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleEfd::Nodes::Node::IpPrecedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModuleEfd::Nodes::Node::IpPrecedence::get_children()
{
    return children;
}

void HardwareModuleEfd::Nodes::Node::IpPrecedence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operation")
    {
        operation_ = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
}

HardwareModuleEfd::Nodes::Node::VlanCos::VlanCos()
    :
    	cos{YType::uint32, "cos"},
	 operation_{YType::enumeration, "operation"}
{
    yang_name = "vlan-cos"; yang_parent_name = "node";
}

HardwareModuleEfd::Nodes::Node::VlanCos::~VlanCos()
{
}

bool HardwareModuleEfd::Nodes::Node::VlanCos::has_data() const
{
    return cos.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::Nodes::Node::VlanCos::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(operation_.operation);
}

std::string HardwareModuleEfd::Nodes::Node::VlanCos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-cos";

    return path_buffer.str();

}

EntityPath HardwareModuleEfd::Nodes::Node::VlanCos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleEfd::Nodes::Node::VlanCos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModuleEfd::Nodes::Node::VlanCos::get_children()
{
    return children;
}

void HardwareModuleEfd::Nodes::Node::VlanCos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "operation")
    {
        operation_ = value;
    }
}

HardwareModuleEfd::Nodes::Node::MplsExp::MplsExp()
    :
    	exp{YType::uint32, "exp"},
	 operation_{YType::enumeration, "operation"}
{
    yang_name = "mpls-exp"; yang_parent_name = "node";
}

HardwareModuleEfd::Nodes::Node::MplsExp::~MplsExp()
{
}

bool HardwareModuleEfd::Nodes::Node::MplsExp::has_data() const
{
    return exp.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::Nodes::Node::MplsExp::has_operation() const
{
    return is_set(operation)
	|| is_set(exp.operation)
	|| is_set(operation_.operation);
}

std::string HardwareModuleEfd::Nodes::Node::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";

    return path_buffer.str();

}

EntityPath HardwareModuleEfd::Nodes::Node::MplsExp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.operation)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleEfd::Nodes::Node::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HardwareModuleEfd::Nodes::Node::MplsExp::get_children()
{
    return children;
}

void HardwareModuleEfd::Nodes::Node::MplsExp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exp")
    {
        exp = value;
    }
    if(value_path == "operation")
    {
        operation_ = value;
    }
}

HardwareModuleEfd::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"},
	 enable{YType::empty, "enable"},
	 mode{YType::enumeration, "mode"}
    	,
    ip_precedence(nullptr) // presence node
	,mpls_exp(nullptr) // presence node
	,vlan_cos(nullptr) // presence node
{
    yang_name = "node"; yang_parent_name = "nodes";
}

HardwareModuleEfd::Nodes::Node::~Node()
{
}

bool HardwareModuleEfd::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| enable.is_set
	|| mode.is_set
	|| (ip_precedence !=  nullptr && ip_precedence->has_data())
	|| (mpls_exp !=  nullptr && mpls_exp->has_data())
	|| (vlan_cos !=  nullptr && vlan_cos->has_data());
}

bool HardwareModuleEfd::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(enable.operation)
	|| is_set(mode.operation)
	|| (ip_precedence !=  nullptr && ip_precedence->has_operation())
	|| (mpls_exp !=  nullptr && mpls_exp->has_operation())
	|| (vlan_cos !=  nullptr && vlan_cos->has_operation());
}

std::string HardwareModuleEfd::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath HardwareModuleEfd::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleEfd::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-precedence")
    {
        if(ip_precedence != nullptr)
        {
            children["ip-precedence"] = ip_precedence.get();
        }
        else
        {
            ip_precedence = std::make_unique<HardwareModuleEfd::Nodes::Node::IpPrecedence>();
            ip_precedence->parent = this;
            children["ip-precedence"] = ip_precedence.get();
        }
        return children.at("ip-precedence");
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp != nullptr)
        {
            children["mpls-exp"] = mpls_exp.get();
        }
        else
        {
            mpls_exp = std::make_unique<HardwareModuleEfd::Nodes::Node::MplsExp>();
            mpls_exp->parent = this;
            children["mpls-exp"] = mpls_exp.get();
        }
        return children.at("mpls-exp");
    }

    if(child_yang_name == "vlan-cos")
    {
        if(vlan_cos != nullptr)
        {
            children["vlan-cos"] = vlan_cos.get();
        }
        else
        {
            vlan_cos = std::make_unique<HardwareModuleEfd::Nodes::Node::VlanCos>();
            vlan_cos->parent = this;
            children["vlan-cos"] = vlan_cos.get();
        }
        return children.at("vlan-cos");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleEfd::Nodes::Node::get_children()
{
    if(children.find("ip-precedence") == children.end())
    {
        if(ip_precedence != nullptr)
        {
            children["ip-precedence"] = ip_precedence.get();
        }
    }

    if(children.find("mpls-exp") == children.end())
    {
        if(mpls_exp != nullptr)
        {
            children["mpls-exp"] = mpls_exp.get();
        }
    }

    if(children.find("vlan-cos") == children.end())
    {
        if(vlan_cos != nullptr)
        {
            children["vlan-cos"] = vlan_cos.get();
        }
    }

    return children;
}

void HardwareModuleEfd::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

HardwareModuleEfd::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "hardware-module-efd";
}

HardwareModuleEfd::Nodes::~Nodes()
{
}

bool HardwareModuleEfd::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleEfd::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HardwareModuleEfd::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath HardwareModuleEfd::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleEfd::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HardwareModuleEfd::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleEfd::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HardwareModuleEfd::Nodes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleEfd::HardwareModuleEfd()
    :
    nodes(std::make_unique<HardwareModuleEfd::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "hardware-module-efd"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg";
}

HardwareModuleEfd::~HardwareModuleEfd()
{
}

bool HardwareModuleEfd::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleEfd::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleEfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd";

    return path_buffer.str();

}

EntityPath HardwareModuleEfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HardwareModuleEfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<HardwareModuleEfd::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HardwareModuleEfd::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void HardwareModuleEfd::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HardwareModuleEfd::clone_ptr()
{
    return std::make_unique<HardwareModuleEfd>();
}

const Enum::YLeaf Asr9KEfdModeEnum::only_outer_encap {0, "only-outer-encap"};
const Enum::YLeaf Asr9KEfdModeEnum::include_inner_encap {1, "include-inner-encap"};

const Enum::YLeaf Asr9KEfdOperationEnum::less_than {2, "less-than"};
const Enum::YLeaf Asr9KEfdOperationEnum::greater_than_or_equal {3, "greater-than-or-equal"};

const Enum::YLeaf PrmTcamProfileEnum::profile0 {0, "profile0"};
const Enum::YLeaf PrmTcamProfileEnum::profile1 {1, "profile1"};
const Enum::YLeaf PrmTcamProfileEnum::profile2 {2, "profile2"};


}
}

