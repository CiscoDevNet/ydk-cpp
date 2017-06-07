
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_prm_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_prm_cfg {

HardwareModuleQosMode::HardwareModuleQosMode()
    :
    nodes(std::make_shared<HardwareModuleQosMode::Nodes>())
{
    nodes->parent = this;

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

const EntityPath HardwareModuleQosMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleQosMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModuleQosMode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleQosMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void HardwareModuleQosMode::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> HardwareModuleQosMode::clone_ptr() const
{
    return std::make_shared<HardwareModuleQosMode>();
}

std::string HardwareModuleQosMode::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleQosMode::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleQosMode::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
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

const EntityPath HardwareModuleQosMode::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleQosMode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModuleQosMode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleQosMode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModuleQosMode::Nodes::set_value(const std::string & value_path, std::string value)
{
}

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
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath HardwareModuleQosMode::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (child_shaping_disable.is_set || is_set(child_shaping_disable.operation)) leaf_name_data.push_back(child_shaping_disable.get_name_leafdata());
    if (lowburst_enable.is_set || is_set(lowburst_enable.operation)) leaf_name_data.push_back(lowburst_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleQosMode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleQosMode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

HardwareModuleTcpMssAdjust::HardwareModuleTcpMssAdjust()
    :
    nodes(std::make_shared<HardwareModuleTcpMssAdjust::Nodes>())
{
    nodes->parent = this;

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

const EntityPath HardwareModuleTcpMssAdjust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleTcpMssAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModuleTcpMssAdjust::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleTcpMssAdjust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void HardwareModuleTcpMssAdjust::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> HardwareModuleTcpMssAdjust::clone_ptr() const
{
    return std::make_shared<HardwareModuleTcpMssAdjust>();
}

std::string HardwareModuleTcpMssAdjust::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleTcpMssAdjust::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleTcpMssAdjust::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
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

const EntityPath HardwareModuleTcpMssAdjust::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleTcpMssAdjust::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModuleTcpMssAdjust::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleTcpMssAdjust::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModuleTcpMssAdjust::Nodes::set_value(const std::string & value_path, std::string value)
{
}

HardwareModuleTcpMssAdjust::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    nps(std::make_shared<HardwareModuleTcpMssAdjust::Nodes::Node::Nps>())
{
    nps->parent = this;

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
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath HardwareModuleTcpMssAdjust::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleTcpMssAdjust::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nps")
    {
        if(nps == nullptr)
        {
            nps = std::make_shared<HardwareModuleTcpMssAdjust::Nodes::Node::Nps>();
        }
        return nps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleTcpMssAdjust::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nps != nullptr)
    {
        children["nps"] = nps;
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

const EntityPath HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nps' in Cisco_IOS_XR_asr9k_prm_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np")
    {
        for(auto const & c : np)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np>();
        c->parent = this;
        np.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleTcpMssAdjust::Nodes::Node::Nps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : np)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModuleTcpMssAdjust::Nodes::Node::Nps::set_value(const std::string & value_path, std::string value)
{
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
    path_buffer << "np" <<"[np-id='" <<np_id <<"']";

    return path_buffer.str();

}

const EntityPath HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Np' in Cisco_IOS_XR_asr9k_prm_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (np_id.is_set || is_set(np_id.operation)) leaf_name_data.push_back(np_id.get_name_leafdata());
    if (adjust_value.is_set || is_set(adjust_value.operation)) leaf_name_data.push_back(adjust_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

HardwareModuleLoadBalance::HardwareModuleLoadBalance()
    :
    bundle(std::make_shared<HardwareModuleLoadBalance::Bundle>())
{
    bundle->parent = this;

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

const EntityPath HardwareModuleLoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<HardwareModuleLoadBalance::Bundle>();
        }
        return bundle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle != nullptr)
    {
        children["bundle"] = bundle;
    }

    return children;
}

void HardwareModuleLoadBalance::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> HardwareModuleLoadBalance::clone_ptr() const
{
    return std::make_shared<HardwareModuleLoadBalance>();
}

std::string HardwareModuleLoadBalance::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleLoadBalance::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleLoadBalance::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

HardwareModuleLoadBalance::Bundle::Bundle()
    :
    l2_service(std::make_shared<HardwareModuleLoadBalance::Bundle::L2Service>())
{
    l2_service->parent = this;

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

const EntityPath HardwareModuleLoadBalance::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-load-balance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleLoadBalance::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-service")
    {
        if(l2_service == nullptr)
        {
            l2_service = std::make_shared<HardwareModuleLoadBalance::Bundle::L2Service>();
        }
        return l2_service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleLoadBalance::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_service != nullptr)
    {
        children["l2-service"] = l2_service;
    }

    return children;
}

void HardwareModuleLoadBalance::Bundle::set_value(const std::string & value_path, std::string value)
{
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

const EntityPath HardwareModuleLoadBalance::Bundle::L2Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-load-balance/bundle/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_parameters.is_set || is_set(l3_parameters.operation)) leaf_name_data.push_back(l3_parameters.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleLoadBalance::Bundle::L2Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleLoadBalance::Bundle::L2Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HardwareModuleLoadBalance::Bundle::L2Service::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l3-parameters")
    {
        l3_parameters = value;
    }
}

HardwareModuleTcam::HardwareModuleTcam()
    :
    global_profile{YType::enumeration, "global-profile"}
    	,
    nodes(std::make_shared<HardwareModuleTcam::Nodes>())
{
    nodes->parent = this;

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

const EntityPath HardwareModuleTcam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_profile.is_set || is_set(global_profile.operation)) leaf_name_data.push_back(global_profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModuleTcam::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
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

std::shared_ptr<Entity> HardwareModuleTcam::clone_ptr() const
{
    return std::make_shared<HardwareModuleTcam>();
}

std::string HardwareModuleTcam::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleTcam::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleTcam::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
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

const EntityPath HardwareModuleTcam::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleTcam::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModuleTcam::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleTcam::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModuleTcam::Nodes::set_value(const std::string & value_path, std::string value)
{
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
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath HardwareModuleTcam::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleTcam::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleTcam::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

HardwareModuleEfd::HardwareModuleEfd()
    :
    node_all(std::make_shared<HardwareModuleEfd::NodeAll>())
	,nodes(std::make_shared<HardwareModuleEfd::Nodes>())
{
    node_all->parent = this;

    nodes->parent = this;

    yang_name = "hardware-module-efd"; yang_parent_name = "Cisco-IOS-XR-asr9k-prm-cfg";
}

HardwareModuleEfd::~HardwareModuleEfd()
{
}

bool HardwareModuleEfd::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleEfd::has_operation() const
{
    return is_set(operation)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleEfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd";

    return path_buffer.str();

}

const EntityPath HardwareModuleEfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<HardwareModuleEfd::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModuleEfd::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void HardwareModuleEfd::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> HardwareModuleEfd::clone_ptr() const
{
    return std::make_shared<HardwareModuleEfd>();
}

std::string HardwareModuleEfd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleEfd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleEfd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

HardwareModuleEfd::NodeAll::NodeAll()
    :
    enable{YType::empty, "enable"},
    mode{YType::enumeration, "mode"}
    	,
    ip_precedence(nullptr) // presence node
	,mpls_exp(nullptr) // presence node
	,vlan_cos(nullptr) // presence node
{
    yang_name = "node-all"; yang_parent_name = "hardware-module-efd";
}

HardwareModuleEfd::NodeAll::~NodeAll()
{
}

bool HardwareModuleEfd::NodeAll::has_data() const
{
    return enable.is_set
	|| mode.is_set
	|| (ip_precedence !=  nullptr && ip_precedence->has_data())
	|| (mpls_exp !=  nullptr && mpls_exp->has_data())
	|| (vlan_cos !=  nullptr && vlan_cos->has_data());
}

bool HardwareModuleEfd::NodeAll::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(mode.operation)
	|| (ip_precedence !=  nullptr && ip_precedence->has_operation())
	|| (mpls_exp !=  nullptr && mpls_exp->has_operation())
	|| (vlan_cos !=  nullptr && vlan_cos->has_operation());
}

std::string HardwareModuleEfd::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";

    return path_buffer.str();

}

const EntityPath HardwareModuleEfd::NodeAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-precedence")
    {
        if(ip_precedence == nullptr)
        {
            ip_precedence = std::make_shared<HardwareModuleEfd::NodeAll::IpPrecedence>();
        }
        return ip_precedence;
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp == nullptr)
        {
            mpls_exp = std::make_shared<HardwareModuleEfd::NodeAll::MplsExp>();
        }
        return mpls_exp;
    }

    if(child_yang_name == "vlan-cos")
    {
        if(vlan_cos == nullptr)
        {
            vlan_cos = std::make_shared<HardwareModuleEfd::NodeAll::VlanCos>();
        }
        return vlan_cos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_precedence != nullptr)
    {
        children["ip-precedence"] = ip_precedence;
    }

    if(mpls_exp != nullptr)
    {
        children["mpls-exp"] = mpls_exp;
    }

    if(vlan_cos != nullptr)
    {
        children["vlan-cos"] = vlan_cos;
    }

    return children;
}

void HardwareModuleEfd::NodeAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

HardwareModuleEfd::NodeAll::IpPrecedence::IpPrecedence()
    :
    operation_{YType::enumeration, "operation"},
    precedence{YType::uint32, "precedence"}
{
    yang_name = "ip-precedence"; yang_parent_name = "node-all";
}

HardwareModuleEfd::NodeAll::IpPrecedence::~IpPrecedence()
{
}

bool HardwareModuleEfd::NodeAll::IpPrecedence::has_data() const
{
    return operation_.is_set
	|| precedence.is_set;
}

bool HardwareModuleEfd::NodeAll::IpPrecedence::has_operation() const
{
    return is_set(operation)
	|| is_set(operation_.operation)
	|| is_set(precedence.operation);
}

std::string HardwareModuleEfd::NodeAll::IpPrecedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-precedence";

    return path_buffer.str();

}

const EntityPath HardwareModuleEfd::NodeAll::IpPrecedence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/node-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::NodeAll::IpPrecedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::NodeAll::IpPrecedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HardwareModuleEfd::NodeAll::IpPrecedence::set_value(const std::string & value_path, std::string value)
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

HardwareModuleEfd::NodeAll::VlanCos::VlanCos()
    :
    cos{YType::uint32, "cos"},
    operation_{YType::enumeration, "operation"}
{
    yang_name = "vlan-cos"; yang_parent_name = "node-all";
}

HardwareModuleEfd::NodeAll::VlanCos::~VlanCos()
{
}

bool HardwareModuleEfd::NodeAll::VlanCos::has_data() const
{
    return cos.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::NodeAll::VlanCos::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(operation_.operation);
}

std::string HardwareModuleEfd::NodeAll::VlanCos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-cos";

    return path_buffer.str();

}

const EntityPath HardwareModuleEfd::NodeAll::VlanCos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/node-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::NodeAll::VlanCos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::NodeAll::VlanCos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HardwareModuleEfd::NodeAll::VlanCos::set_value(const std::string & value_path, std::string value)
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

HardwareModuleEfd::NodeAll::MplsExp::MplsExp()
    :
    exp{YType::uint32, "exp"},
    operation_{YType::enumeration, "operation"}
{
    yang_name = "mpls-exp"; yang_parent_name = "node-all";
}

HardwareModuleEfd::NodeAll::MplsExp::~MplsExp()
{
}

bool HardwareModuleEfd::NodeAll::MplsExp::has_data() const
{
    return exp.is_set
	|| operation_.is_set;
}

bool HardwareModuleEfd::NodeAll::MplsExp::has_operation() const
{
    return is_set(operation)
	|| is_set(exp.operation)
	|| is_set(operation_.operation);
}

std::string HardwareModuleEfd::NodeAll::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";

    return path_buffer.str();

}

const EntityPath HardwareModuleEfd::NodeAll::MplsExp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/node-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.operation)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::NodeAll::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::NodeAll::MplsExp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HardwareModuleEfd::NodeAll::MplsExp::set_value(const std::string & value_path, std::string value)
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

const EntityPath HardwareModuleEfd::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModuleEfd::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModuleEfd::Nodes::set_value(const std::string & value_path, std::string value)
{
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
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath HardwareModuleEfd::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-precedence")
    {
        if(ip_precedence == nullptr)
        {
            ip_precedence = std::make_shared<HardwareModuleEfd::Nodes::Node::IpPrecedence>();
        }
        return ip_precedence;
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp == nullptr)
        {
            mpls_exp = std::make_shared<HardwareModuleEfd::Nodes::Node::MplsExp>();
        }
        return mpls_exp;
    }

    if(child_yang_name == "vlan-cos")
    {
        if(vlan_cos == nullptr)
        {
            vlan_cos = std::make_shared<HardwareModuleEfd::Nodes::Node::VlanCos>();
        }
        return vlan_cos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_precedence != nullptr)
    {
        children["ip-precedence"] = ip_precedence;
    }

    if(mpls_exp != nullptr)
    {
        children["mpls-exp"] = mpls_exp;
    }

    if(vlan_cos != nullptr)
    {
        children["vlan-cos"] = vlan_cos;
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

const EntityPath HardwareModuleEfd::Nodes::Node::IpPrecedence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpPrecedence' in Cisco_IOS_XR_asr9k_prm_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::Nodes::Node::IpPrecedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::Nodes::Node::IpPrecedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath HardwareModuleEfd::Nodes::Node::VlanCos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanCos' in Cisco_IOS_XR_asr9k_prm_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::Nodes::Node::VlanCos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::Nodes::Node::VlanCos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath HardwareModuleEfd::Nodes::Node::MplsExp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExp' in Cisco_IOS_XR_asr9k_prm_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.operation)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HardwareModuleEfd::Nodes::Node::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleEfd::Nodes::Node::MplsExp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const Enum::YLeaf Asr9KEfdModeEnum::only_outer_encap {0, "only-outer-encap"};
const Enum::YLeaf Asr9KEfdModeEnum::include_inner_encap {1, "include-inner-encap"};

const Enum::YLeaf Asr9KEfdOperationEnum::less_than {2, "less-than"};
const Enum::YLeaf Asr9KEfdOperationEnum::greater_than_or_equal {3, "greater-than-or-equal"};

const Enum::YLeaf PrmTcamProfileEnum::profile0 {0, "profile0"};
const Enum::YLeaf PrmTcamProfileEnum::profile1 {1, "profile1"};
const Enum::YLeaf PrmTcamProfileEnum::profile2 {2, "profile2"};


}
}

