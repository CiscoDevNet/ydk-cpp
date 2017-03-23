
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_atm_vcm_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_atm_vcm_oper {

AtmVcm::AtmVcm()
    :
    nodes(std::make_shared<AtmVcm::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "atm-vcm"; yang_parent_name = "Cisco-IOS-XR-atm-vcm-oper";
}

AtmVcm::~AtmVcm()
{
}

bool AtmVcm::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool AtmVcm::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string AtmVcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-atm-vcm-oper:atm-vcm";

    return path_buffer.str();

}

EntityPath AtmVcm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<AtmVcm::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void AtmVcm::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> AtmVcm::clone_ptr() const
{
    return std::make_shared<AtmVcm>();
}

std::string AtmVcm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AtmVcm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AtmVcm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

AtmVcm::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "atm-vcm";
}

AtmVcm::Nodes::~Nodes()
{
}

bool AtmVcm::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool AtmVcm::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmVcm::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-atm-vcm-oper:atm-vcm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AtmVcm::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AtmVcm::Nodes::set_value(const std::string & value_path, std::string value)
{
}

AtmVcm::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    cell_packs(std::make_shared<AtmVcm::Nodes::Node::CellPacks>())
	,class_links(std::make_shared<AtmVcm::Nodes::Node::ClassLinks>())
	,interfaces(std::make_shared<AtmVcm::Nodes::Node::Interfaces>())
	,pvps(std::make_shared<AtmVcm::Nodes::Node::Pvps>())
	,vcs(std::make_shared<AtmVcm::Nodes::Node::Vcs>())
	,vp_tunnels(std::make_shared<AtmVcm::Nodes::Node::VpTunnels>())
{
    cell_packs->parent = this;
    children["cell-packs"] = cell_packs;

    class_links->parent = this;
    children["class-links"] = class_links;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    pvps->parent = this;
    children["pvps"] = pvps;

    vcs->parent = this;
    children["vcs"] = vcs;

    vp_tunnels->parent = this;
    children["vp-tunnels"] = vp_tunnels;

    yang_name = "node"; yang_parent_name = "nodes";
}

AtmVcm::Nodes::Node::~Node()
{
}

bool AtmVcm::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (cell_packs !=  nullptr && cell_packs->has_data())
	|| (class_links !=  nullptr && class_links->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (pvps !=  nullptr && pvps->has_data())
	|| (vcs !=  nullptr && vcs->has_data())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_data());
}

bool AtmVcm::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (cell_packs !=  nullptr && cell_packs->has_operation())
	|| (class_links !=  nullptr && class_links->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (pvps !=  nullptr && pvps->has_operation())
	|| (vcs !=  nullptr && vcs->has_operation())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_operation());
}

std::string AtmVcm::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-atm-vcm-oper:atm-vcm/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> AtmVcm::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cell-packs")
    {
        if(cell_packs != nullptr)
        {
            children["cell-packs"] = cell_packs;
        }
        else
        {
            cell_packs = std::make_shared<AtmVcm::Nodes::Node::CellPacks>();
            cell_packs->parent = this;
            children["cell-packs"] = cell_packs;
        }
        return children.at("cell-packs");
    }

    if(child_yang_name == "class-links")
    {
        if(class_links != nullptr)
        {
            children["class-links"] = class_links;
        }
        else
        {
            class_links = std::make_shared<AtmVcm::Nodes::Node::ClassLinks>();
            class_links->parent = this;
            children["class-links"] = class_links;
        }
        return children.at("class-links");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<AtmVcm::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "pvps")
    {
        if(pvps != nullptr)
        {
            children["pvps"] = pvps;
        }
        else
        {
            pvps = std::make_shared<AtmVcm::Nodes::Node::Pvps>();
            pvps->parent = this;
            children["pvps"] = pvps;
        }
        return children.at("pvps");
    }

    if(child_yang_name == "vcs")
    {
        if(vcs != nullptr)
        {
            children["vcs"] = vcs;
        }
        else
        {
            vcs = std::make_shared<AtmVcm::Nodes::Node::Vcs>();
            vcs->parent = this;
            children["vcs"] = vcs;
        }
        return children.at("vcs");
    }

    if(child_yang_name == "vp-tunnels")
    {
        if(vp_tunnels != nullptr)
        {
            children["vp-tunnels"] = vp_tunnels;
        }
        else
        {
            vp_tunnels = std::make_shared<AtmVcm::Nodes::Node::VpTunnels>();
            vp_tunnels->parent = this;
            children["vp-tunnels"] = vp_tunnels;
        }
        return children.at("vp-tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::get_children()
{
    if(children.find("cell-packs") == children.end())
    {
        if(cell_packs != nullptr)
        {
            children["cell-packs"] = cell_packs;
        }
    }

    if(children.find("class-links") == children.end())
    {
        if(class_links != nullptr)
        {
            children["class-links"] = class_links;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("pvps") == children.end())
    {
        if(pvps != nullptr)
        {
            children["pvps"] = pvps;
        }
    }

    if(children.find("vcs") == children.end())
    {
        if(vcs != nullptr)
        {
            children["vcs"] = vcs;
        }
    }

    if(children.find("vp-tunnels") == children.end())
    {
        if(vp_tunnels != nullptr)
        {
            children["vp-tunnels"] = vp_tunnels;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

AtmVcm::Nodes::Node::Vcs::Vcs()
{
    yang_name = "vcs"; yang_parent_name = "node";
}

AtmVcm::Nodes::Node::Vcs::~Vcs()
{
}

bool AtmVcm::Nodes::Node::Vcs::has_data() const
{
    for (std::size_t index=0; index<vc.size(); index++)
    {
        if(vc[index]->has_data())
            return true;
    }
    return false;
}

bool AtmVcm::Nodes::Node::Vcs::has_operation() const
{
    for (std::size_t index=0; index<vc.size(); index++)
    {
        if(vc[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmVcm::Nodes::Node::Vcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vcs";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::Vcs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vcs' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::Vcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vc")
    {
        for(auto const & c : vc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AtmVcm::Nodes::Node::Vcs::Vc>();
        c->parent = this;
        vc.push_back(std::move(c));
        children[segment_path] = vc.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::Vcs::get_children()
{
    for (auto const & c : vc)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::Vcs::set_value(const std::string & value_path, std::string value)
{
}

AtmVcm::Nodes::Node::Vcs::Vc::Vc()
    :
    interface_name{YType::str, "interface-name"},
    amin_status{YType::boolean, "amin-status"},
    burst_rate{YType::uint32, "burst-rate"},
    encaps_inherit_level{YType::enumeration, "encaps-inherit-level"},
    encapsulation{YType::enumeration, "encapsulation"},
    internal_state{YType::enumeration, "internal-state"},
    last_state_change_time{YType::uint32, "last-state-change-time"},
    main_interface{YType::str, "main-interface"},
    oper_status{YType::boolean, "oper-status"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    qos_inherit_level{YType::enumeration, "qos-inherit-level"},
    receive_mtu{YType::uint32, "receive-mtu"},
    shape{YType::enumeration, "shape"},
    sub_interface{YType::str, "sub-interface"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    test_mode{YType::enumeration, "test-mode"},
    transmit_mtu{YType::uint32, "transmit-mtu"},
    type{YType::enumeration, "type"},
    vc_interface{YType::str, "vc-interface"},
    vc_on_p2p_sub_interface{YType::boolean, "vc-on-p2p-sub-interface"},
    vc_onvp_tunnel{YType::boolean, "vc-onvp-tunnel"},
    vci{YType::uint32, "vci"},
    vci_xr{YType::uint16, "vci-xr"},
    vpi{YType::uint32, "vpi"},
    vpi_xr{YType::uint16, "vpi-xr"}
    	,
    cell_packing_data(std::make_shared<AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData>())
{
    cell_packing_data->parent = this;
    children["cell-packing-data"] = cell_packing_data;

    yang_name = "vc"; yang_parent_name = "vcs";
}

AtmVcm::Nodes::Node::Vcs::Vc::~Vc()
{
}

bool AtmVcm::Nodes::Node::Vcs::Vc::has_data() const
{
    return interface_name.is_set
	|| amin_status.is_set
	|| burst_rate.is_set
	|| encaps_inherit_level.is_set
	|| encapsulation.is_set
	|| internal_state.is_set
	|| last_state_change_time.is_set
	|| main_interface.is_set
	|| oper_status.is_set
	|| peak_cell_rate.is_set
	|| qos_inherit_level.is_set
	|| receive_mtu.is_set
	|| shape.is_set
	|| sub_interface.is_set
	|| sustained_cell_rate.is_set
	|| test_mode.is_set
	|| transmit_mtu.is_set
	|| type.is_set
	|| vc_interface.is_set
	|| vc_on_p2p_sub_interface.is_set
	|| vc_onvp_tunnel.is_set
	|| vci.is_set
	|| vci_xr.is_set
	|| vpi.is_set
	|| vpi_xr.is_set
	|| (cell_packing_data !=  nullptr && cell_packing_data->has_data());
}

bool AtmVcm::Nodes::Node::Vcs::Vc::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(amin_status.operation)
	|| is_set(burst_rate.operation)
	|| is_set(encaps_inherit_level.operation)
	|| is_set(encapsulation.operation)
	|| is_set(internal_state.operation)
	|| is_set(last_state_change_time.operation)
	|| is_set(main_interface.operation)
	|| is_set(oper_status.operation)
	|| is_set(peak_cell_rate.operation)
	|| is_set(qos_inherit_level.operation)
	|| is_set(receive_mtu.operation)
	|| is_set(shape.operation)
	|| is_set(sub_interface.operation)
	|| is_set(sustained_cell_rate.operation)
	|| is_set(test_mode.operation)
	|| is_set(transmit_mtu.operation)
	|| is_set(type.operation)
	|| is_set(vc_interface.operation)
	|| is_set(vc_on_p2p_sub_interface.operation)
	|| is_set(vc_onvp_tunnel.operation)
	|| is_set(vci.operation)
	|| is_set(vci_xr.operation)
	|| is_set(vpi.operation)
	|| is_set(vpi_xr.operation)
	|| (cell_packing_data !=  nullptr && cell_packing_data->has_operation());
}

std::string AtmVcm::Nodes::Node::Vcs::Vc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vc" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::Vcs::Vc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vc' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (amin_status.is_set || is_set(amin_status.operation)) leaf_name_data.push_back(amin_status.get_name_leafdata());
    if (burst_rate.is_set || is_set(burst_rate.operation)) leaf_name_data.push_back(burst_rate.get_name_leafdata());
    if (encaps_inherit_level.is_set || is_set(encaps_inherit_level.operation)) leaf_name_data.push_back(encaps_inherit_level.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (internal_state.is_set || is_set(internal_state.operation)) leaf_name_data.push_back(internal_state.get_name_leafdata());
    if (last_state_change_time.is_set || is_set(last_state_change_time.operation)) leaf_name_data.push_back(last_state_change_time.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.operation)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (qos_inherit_level.is_set || is_set(qos_inherit_level.operation)) leaf_name_data.push_back(qos_inherit_level.get_name_leafdata());
    if (receive_mtu.is_set || is_set(receive_mtu.operation)) leaf_name_data.push_back(receive_mtu.get_name_leafdata());
    if (shape.is_set || is_set(shape.operation)) leaf_name_data.push_back(shape.get_name_leafdata());
    if (sub_interface.is_set || is_set(sub_interface.operation)) leaf_name_data.push_back(sub_interface.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.operation)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.operation)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (transmit_mtu.is_set || is_set(transmit_mtu.operation)) leaf_name_data.push_back(transmit_mtu.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vc_interface.is_set || is_set(vc_interface.operation)) leaf_name_data.push_back(vc_interface.get_name_leafdata());
    if (vc_on_p2p_sub_interface.is_set || is_set(vc_on_p2p_sub_interface.operation)) leaf_name_data.push_back(vc_on_p2p_sub_interface.get_name_leafdata());
    if (vc_onvp_tunnel.is_set || is_set(vc_onvp_tunnel.operation)) leaf_name_data.push_back(vc_onvp_tunnel.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vci_xr.is_set || is_set(vci_xr.operation)) leaf_name_data.push_back(vci_xr.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vpi_xr.is_set || is_set(vpi_xr.operation)) leaf_name_data.push_back(vpi_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::Vcs::Vc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cell-packing-data")
    {
        if(cell_packing_data != nullptr)
        {
            children["cell-packing-data"] = cell_packing_data;
        }
        else
        {
            cell_packing_data = std::make_shared<AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData>();
            cell_packing_data->parent = this;
            children["cell-packing-data"] = cell_packing_data;
        }
        return children.at("cell-packing-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::Vcs::Vc::get_children()
{
    if(children.find("cell-packing-data") == children.end())
    {
        if(cell_packing_data != nullptr)
        {
            children["cell-packing-data"] = cell_packing_data;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::Vcs::Vc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "amin-status")
    {
        amin_status = value;
    }
    if(value_path == "burst-rate")
    {
        burst_rate = value;
    }
    if(value_path == "encaps-inherit-level")
    {
        encaps_inherit_level = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "internal-state")
    {
        internal_state = value;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
    }
    if(value_path == "qos-inherit-level")
    {
        qos_inherit_level = value;
    }
    if(value_path == "receive-mtu")
    {
        receive_mtu = value;
    }
    if(value_path == "shape")
    {
        shape = value;
    }
    if(value_path == "sub-interface")
    {
        sub_interface = value;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
    }
    if(value_path == "transmit-mtu")
    {
        transmit_mtu = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "vc-interface")
    {
        vc_interface = value;
    }
    if(value_path == "vc-on-p2p-sub-interface")
    {
        vc_on_p2p_sub_interface = value;
    }
    if(value_path == "vc-onvp-tunnel")
    {
        vc_onvp_tunnel = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vci-xr")
    {
        vci_xr = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "vpi-xr")
    {
        vpi_xr = value;
    }
}

AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData::CellPackingData()
    :
    local_max_cells_packed_per_packet{YType::uint16, "local-max-cells-packed-per-packet"},
    max_cell_packed_timeout{YType::uint16, "max-cell-packed-timeout"},
    negotiated_max_cells_packed_per_packet{YType::uint16, "negotiated-max-cells-packed-per-packet"}
{
    yang_name = "cell-packing-data"; yang_parent_name = "vc";
}

AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData::~CellPackingData()
{
}

bool AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData::has_data() const
{
    return local_max_cells_packed_per_packet.is_set
	|| max_cell_packed_timeout.is_set
	|| negotiated_max_cells_packed_per_packet.is_set;
}

bool AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_max_cells_packed_per_packet.operation)
	|| is_set(max_cell_packed_timeout.operation)
	|| is_set(negotiated_max_cells_packed_per_packet.operation);
}

std::string AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing-data";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPackingData' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_max_cells_packed_per_packet.is_set || is_set(local_max_cells_packed_per_packet.operation)) leaf_name_data.push_back(local_max_cells_packed_per_packet.get_name_leafdata());
    if (max_cell_packed_timeout.is_set || is_set(max_cell_packed_timeout.operation)) leaf_name_data.push_back(max_cell_packed_timeout.get_name_leafdata());
    if (negotiated_max_cells_packed_per_packet.is_set || is_set(negotiated_max_cells_packed_per_packet.operation)) leaf_name_data.push_back(negotiated_max_cells_packed_per_packet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-max-cells-packed-per-packet")
    {
        local_max_cells_packed_per_packet = value;
    }
    if(value_path == "max-cell-packed-timeout")
    {
        max_cell_packed_timeout = value;
    }
    if(value_path == "negotiated-max-cells-packed-per-packet")
    {
        negotiated_max_cells_packed_per_packet = value;
    }
}

AtmVcm::Nodes::Node::CellPacks::CellPacks()
{
    yang_name = "cell-packs"; yang_parent_name = "node";
}

AtmVcm::Nodes::Node::CellPacks::~CellPacks()
{
}

bool AtmVcm::Nodes::Node::CellPacks::has_data() const
{
    for (std::size_t index=0; index<cell_pack.size(); index++)
    {
        if(cell_pack[index]->has_data())
            return true;
    }
    return false;
}

bool AtmVcm::Nodes::Node::CellPacks::has_operation() const
{
    for (std::size_t index=0; index<cell_pack.size(); index++)
    {
        if(cell_pack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmVcm::Nodes::Node::CellPacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packs";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::CellPacks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPacks' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::CellPacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cell-pack")
    {
        for(auto const & c : cell_pack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AtmVcm::Nodes::Node::CellPacks::CellPack>();
        c->parent = this;
        cell_pack.push_back(std::move(c));
        children[segment_path] = cell_pack.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::CellPacks::get_children()
{
    for (auto const & c : cell_pack)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::CellPacks::set_value(const std::string & value_path, std::string value)
{
}

AtmVcm::Nodes::Node::CellPacks::CellPack::CellPack()
    :
    cell_packing_mode{YType::enumeration, "cell-packing-mode"},
    interface_name{YType::str, "interface-name"},
    pci{YType::int32, "pci"},
    received_average_cells_packets{YType::uint64, "received-average-cells-packets"},
    sent_cells_packets{YType::uint64, "sent-cells-packets"},
    sub_interface_name{YType::str, "sub-interface-name"},
    vci{YType::uint32, "vci"},
    vpi{YType::uint32, "vpi"}
    	,
    cell_packing(std::make_shared<AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking>())
{
    cell_packing->parent = this;
    children["cell-packing"] = cell_packing;

    yang_name = "cell-pack"; yang_parent_name = "cell-packs";
}

AtmVcm::Nodes::Node::CellPacks::CellPack::~CellPack()
{
}

bool AtmVcm::Nodes::Node::CellPacks::CellPack::has_data() const
{
    return cell_packing_mode.is_set
	|| interface_name.is_set
	|| pci.is_set
	|| received_average_cells_packets.is_set
	|| sent_cells_packets.is_set
	|| sub_interface_name.is_set
	|| vci.is_set
	|| vpi.is_set
	|| (cell_packing !=  nullptr && cell_packing->has_data());
}

bool AtmVcm::Nodes::Node::CellPacks::CellPack::has_operation() const
{
    return is_set(operation)
	|| is_set(cell_packing_mode.operation)
	|| is_set(interface_name.operation)
	|| is_set(pci.operation)
	|| is_set(received_average_cells_packets.operation)
	|| is_set(sent_cells_packets.operation)
	|| is_set(sub_interface_name.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation)
	|| (cell_packing !=  nullptr && cell_packing->has_operation());
}

std::string AtmVcm::Nodes::Node::CellPacks::CellPack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-pack";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::CellPacks::CellPack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPack' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_mode.is_set || is_set(cell_packing_mode.operation)) leaf_name_data.push_back(cell_packing_mode.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pci.is_set || is_set(pci.operation)) leaf_name_data.push_back(pci.get_name_leafdata());
    if (received_average_cells_packets.is_set || is_set(received_average_cells_packets.operation)) leaf_name_data.push_back(received_average_cells_packets.get_name_leafdata());
    if (sent_cells_packets.is_set || is_set(sent_cells_packets.operation)) leaf_name_data.push_back(sent_cells_packets.get_name_leafdata());
    if (sub_interface_name.is_set || is_set(sub_interface_name.operation)) leaf_name_data.push_back(sub_interface_name.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::CellPacks::CellPack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cell-packing")
    {
        if(cell_packing != nullptr)
        {
            children["cell-packing"] = cell_packing;
        }
        else
        {
            cell_packing = std::make_shared<AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking>();
            cell_packing->parent = this;
            children["cell-packing"] = cell_packing;
        }
        return children.at("cell-packing");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::CellPacks::CellPack::get_children()
{
    if(children.find("cell-packing") == children.end())
    {
        if(cell_packing != nullptr)
        {
            children["cell-packing"] = cell_packing;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::CellPacks::CellPack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cell-packing-mode")
    {
        cell_packing_mode = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "pci")
    {
        pci = value;
    }
    if(value_path == "received-average-cells-packets")
    {
        received_average_cells_packets = value;
    }
    if(value_path == "sent-cells-packets")
    {
        sent_cells_packets = value;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
}

AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking::CellPacking()
    :
    local_max_cells_packed_per_packet{YType::uint16, "local-max-cells-packed-per-packet"},
    max_cell_packed_timeout{YType::uint16, "max-cell-packed-timeout"},
    negotiated_max_cells_packed_per_packet{YType::uint16, "negotiated-max-cells-packed-per-packet"}
{
    yang_name = "cell-packing"; yang_parent_name = "cell-pack";
}

AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking::~CellPacking()
{
}

bool AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking::has_data() const
{
    return local_max_cells_packed_per_packet.is_set
	|| max_cell_packed_timeout.is_set
	|| negotiated_max_cells_packed_per_packet.is_set;
}

bool AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking::has_operation() const
{
    return is_set(operation)
	|| is_set(local_max_cells_packed_per_packet.operation)
	|| is_set(max_cell_packed_timeout.operation)
	|| is_set(negotiated_max_cells_packed_per_packet.operation);
}

std::string AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPacking' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_max_cells_packed_per_packet.is_set || is_set(local_max_cells_packed_per_packet.operation)) leaf_name_data.push_back(local_max_cells_packed_per_packet.get_name_leafdata());
    if (max_cell_packed_timeout.is_set || is_set(max_cell_packed_timeout.operation)) leaf_name_data.push_back(max_cell_packed_timeout.get_name_leafdata());
    if (negotiated_max_cells_packed_per_packet.is_set || is_set(negotiated_max_cells_packed_per_packet.operation)) leaf_name_data.push_back(negotiated_max_cells_packed_per_packet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-max-cells-packed-per-packet")
    {
        local_max_cells_packed_per_packet = value;
    }
    if(value_path == "max-cell-packed-timeout")
    {
        max_cell_packed_timeout = value;
    }
    if(value_path == "negotiated-max-cells-packed-per-packet")
    {
        negotiated_max_cells_packed_per_packet = value;
    }
}

AtmVcm::Nodes::Node::Pvps::Pvps()
{
    yang_name = "pvps"; yang_parent_name = "node";
}

AtmVcm::Nodes::Node::Pvps::~Pvps()
{
}

bool AtmVcm::Nodes::Node::Pvps::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return false;
}

bool AtmVcm::Nodes::Node::Pvps::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmVcm::Nodes::Node::Pvps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvps";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::Pvps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvps' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::Pvps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AtmVcm::Nodes::Node::Pvps::Pvp>();
        c->parent = this;
        pvp.push_back(std::move(c));
        children[segment_path] = pvp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::Pvps::get_children()
{
    for (auto const & c : pvp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::Pvps::set_value(const std::string & value_path, std::string value)
{
}

AtmVcm::Nodes::Node::Pvps::Pvp::Pvp()
    :
    interface_name{YType::str, "interface-name"},
    amin_status{YType::boolean, "amin-status"},
    burst_rate{YType::uint32, "burst-rate"},
    encaps_inherit_level{YType::enumeration, "encaps-inherit-level"},
    encapsulation{YType::enumeration, "encapsulation"},
    internal_state{YType::enumeration, "internal-state"},
    last_state_change_time{YType::uint32, "last-state-change-time"},
    main_interface{YType::str, "main-interface"},
    oper_status{YType::boolean, "oper-status"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    qos_inherit_level{YType::enumeration, "qos-inherit-level"},
    receive_mtu{YType::uint32, "receive-mtu"},
    shape{YType::enumeration, "shape"},
    sub_interface{YType::str, "sub-interface"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    test_mode{YType::enumeration, "test-mode"},
    transmit_mtu{YType::uint32, "transmit-mtu"},
    type{YType::enumeration, "type"},
    vc_interface{YType::str, "vc-interface"},
    vc_on_p2p_sub_interface{YType::boolean, "vc-on-p2p-sub-interface"},
    vc_onvp_tunnel{YType::boolean, "vc-onvp-tunnel"},
    vci_xr{YType::uint16, "vci-xr"},
    vpi{YType::int32, "vpi"},
    vpi_xr{YType::uint16, "vpi-xr"}
    	,
    cell_packing_data(std::make_shared<AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData>())
{
    cell_packing_data->parent = this;
    children["cell-packing-data"] = cell_packing_data;

    yang_name = "pvp"; yang_parent_name = "pvps";
}

AtmVcm::Nodes::Node::Pvps::Pvp::~Pvp()
{
}

bool AtmVcm::Nodes::Node::Pvps::Pvp::has_data() const
{
    return interface_name.is_set
	|| amin_status.is_set
	|| burst_rate.is_set
	|| encaps_inherit_level.is_set
	|| encapsulation.is_set
	|| internal_state.is_set
	|| last_state_change_time.is_set
	|| main_interface.is_set
	|| oper_status.is_set
	|| peak_cell_rate.is_set
	|| qos_inherit_level.is_set
	|| receive_mtu.is_set
	|| shape.is_set
	|| sub_interface.is_set
	|| sustained_cell_rate.is_set
	|| test_mode.is_set
	|| transmit_mtu.is_set
	|| type.is_set
	|| vc_interface.is_set
	|| vc_on_p2p_sub_interface.is_set
	|| vc_onvp_tunnel.is_set
	|| vci_xr.is_set
	|| vpi.is_set
	|| vpi_xr.is_set
	|| (cell_packing_data !=  nullptr && cell_packing_data->has_data());
}

bool AtmVcm::Nodes::Node::Pvps::Pvp::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(amin_status.operation)
	|| is_set(burst_rate.operation)
	|| is_set(encaps_inherit_level.operation)
	|| is_set(encapsulation.operation)
	|| is_set(internal_state.operation)
	|| is_set(last_state_change_time.operation)
	|| is_set(main_interface.operation)
	|| is_set(oper_status.operation)
	|| is_set(peak_cell_rate.operation)
	|| is_set(qos_inherit_level.operation)
	|| is_set(receive_mtu.operation)
	|| is_set(shape.operation)
	|| is_set(sub_interface.operation)
	|| is_set(sustained_cell_rate.operation)
	|| is_set(test_mode.operation)
	|| is_set(transmit_mtu.operation)
	|| is_set(type.operation)
	|| is_set(vc_interface.operation)
	|| is_set(vc_on_p2p_sub_interface.operation)
	|| is_set(vc_onvp_tunnel.operation)
	|| is_set(vci_xr.operation)
	|| is_set(vpi.operation)
	|| is_set(vpi_xr.operation)
	|| (cell_packing_data !=  nullptr && cell_packing_data->has_operation());
}

std::string AtmVcm::Nodes::Node::Pvps::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::Pvps::Pvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvp' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (amin_status.is_set || is_set(amin_status.operation)) leaf_name_data.push_back(amin_status.get_name_leafdata());
    if (burst_rate.is_set || is_set(burst_rate.operation)) leaf_name_data.push_back(burst_rate.get_name_leafdata());
    if (encaps_inherit_level.is_set || is_set(encaps_inherit_level.operation)) leaf_name_data.push_back(encaps_inherit_level.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (internal_state.is_set || is_set(internal_state.operation)) leaf_name_data.push_back(internal_state.get_name_leafdata());
    if (last_state_change_time.is_set || is_set(last_state_change_time.operation)) leaf_name_data.push_back(last_state_change_time.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.operation)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (qos_inherit_level.is_set || is_set(qos_inherit_level.operation)) leaf_name_data.push_back(qos_inherit_level.get_name_leafdata());
    if (receive_mtu.is_set || is_set(receive_mtu.operation)) leaf_name_data.push_back(receive_mtu.get_name_leafdata());
    if (shape.is_set || is_set(shape.operation)) leaf_name_data.push_back(shape.get_name_leafdata());
    if (sub_interface.is_set || is_set(sub_interface.operation)) leaf_name_data.push_back(sub_interface.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.operation)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.operation)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (transmit_mtu.is_set || is_set(transmit_mtu.operation)) leaf_name_data.push_back(transmit_mtu.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vc_interface.is_set || is_set(vc_interface.operation)) leaf_name_data.push_back(vc_interface.get_name_leafdata());
    if (vc_on_p2p_sub_interface.is_set || is_set(vc_on_p2p_sub_interface.operation)) leaf_name_data.push_back(vc_on_p2p_sub_interface.get_name_leafdata());
    if (vc_onvp_tunnel.is_set || is_set(vc_onvp_tunnel.operation)) leaf_name_data.push_back(vc_onvp_tunnel.get_name_leafdata());
    if (vci_xr.is_set || is_set(vci_xr.operation)) leaf_name_data.push_back(vci_xr.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vpi_xr.is_set || is_set(vpi_xr.operation)) leaf_name_data.push_back(vpi_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::Pvps::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cell-packing-data")
    {
        if(cell_packing_data != nullptr)
        {
            children["cell-packing-data"] = cell_packing_data;
        }
        else
        {
            cell_packing_data = std::make_shared<AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData>();
            cell_packing_data->parent = this;
            children["cell-packing-data"] = cell_packing_data;
        }
        return children.at("cell-packing-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::Pvps::Pvp::get_children()
{
    if(children.find("cell-packing-data") == children.end())
    {
        if(cell_packing_data != nullptr)
        {
            children["cell-packing-data"] = cell_packing_data;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::Pvps::Pvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "amin-status")
    {
        amin_status = value;
    }
    if(value_path == "burst-rate")
    {
        burst_rate = value;
    }
    if(value_path == "encaps-inherit-level")
    {
        encaps_inherit_level = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "internal-state")
    {
        internal_state = value;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
    }
    if(value_path == "qos-inherit-level")
    {
        qos_inherit_level = value;
    }
    if(value_path == "receive-mtu")
    {
        receive_mtu = value;
    }
    if(value_path == "shape")
    {
        shape = value;
    }
    if(value_path == "sub-interface")
    {
        sub_interface = value;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
    }
    if(value_path == "transmit-mtu")
    {
        transmit_mtu = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "vc-interface")
    {
        vc_interface = value;
    }
    if(value_path == "vc-on-p2p-sub-interface")
    {
        vc_on_p2p_sub_interface = value;
    }
    if(value_path == "vc-onvp-tunnel")
    {
        vc_onvp_tunnel = value;
    }
    if(value_path == "vci-xr")
    {
        vci_xr = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "vpi-xr")
    {
        vpi_xr = value;
    }
}

AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData::CellPackingData()
    :
    local_max_cells_packed_per_packet{YType::uint16, "local-max-cells-packed-per-packet"},
    max_cell_packed_timeout{YType::uint16, "max-cell-packed-timeout"},
    negotiated_max_cells_packed_per_packet{YType::uint16, "negotiated-max-cells-packed-per-packet"}
{
    yang_name = "cell-packing-data"; yang_parent_name = "pvp";
}

AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData::~CellPackingData()
{
}

bool AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData::has_data() const
{
    return local_max_cells_packed_per_packet.is_set
	|| max_cell_packed_timeout.is_set
	|| negotiated_max_cells_packed_per_packet.is_set;
}

bool AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_max_cells_packed_per_packet.operation)
	|| is_set(max_cell_packed_timeout.operation)
	|| is_set(negotiated_max_cells_packed_per_packet.operation);
}

std::string AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing-data";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPackingData' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_max_cells_packed_per_packet.is_set || is_set(local_max_cells_packed_per_packet.operation)) leaf_name_data.push_back(local_max_cells_packed_per_packet.get_name_leafdata());
    if (max_cell_packed_timeout.is_set || is_set(max_cell_packed_timeout.operation)) leaf_name_data.push_back(max_cell_packed_timeout.get_name_leafdata());
    if (negotiated_max_cells_packed_per_packet.is_set || is_set(negotiated_max_cells_packed_per_packet.operation)) leaf_name_data.push_back(negotiated_max_cells_packed_per_packet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-max-cells-packed-per-packet")
    {
        local_max_cells_packed_per_packet = value;
    }
    if(value_path == "max-cell-packed-timeout")
    {
        max_cell_packed_timeout = value;
    }
    if(value_path == "negotiated-max-cells-packed-per-packet")
    {
        negotiated_max_cells_packed_per_packet = value;
    }
}

AtmVcm::Nodes::Node::ClassLinks::ClassLinks()
{
    yang_name = "class-links"; yang_parent_name = "node";
}

AtmVcm::Nodes::Node::ClassLinks::~ClassLinks()
{
}

bool AtmVcm::Nodes::Node::ClassLinks::has_data() const
{
    for (std::size_t index=0; index<class_link.size(); index++)
    {
        if(class_link[index]->has_data())
            return true;
    }
    return false;
}

bool AtmVcm::Nodes::Node::ClassLinks::has_operation() const
{
    for (std::size_t index=0; index<class_link.size(); index++)
    {
        if(class_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmVcm::Nodes::Node::ClassLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-links";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::ClassLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassLinks' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::ClassLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-link")
    {
        for(auto const & c : class_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink>();
        c->parent = this;
        class_link.push_back(std::move(c));
        children[segment_path] = class_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::ClassLinks::get_children()
{
    for (auto const & c : class_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::ClassLinks::set_value(const std::string & value_path, std::string value)
{
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::ClassLink()
    :
    vpi{YType::int32, "vpi"},
    sub_interface_name{YType::str, "sub-interface-name"},
    vci{YType::int32, "vci"}
    	,
    oam_config(std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig>())
	,vc_class_not_supported(std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported>())
{
    oam_config->parent = this;
    children["oam-config"] = oam_config;

    vc_class_not_supported->parent = this;
    children["vc-class-not-supported"] = vc_class_not_supported;

    yang_name = "class-link"; yang_parent_name = "class-links";
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::~ClassLink()
{
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::has_data() const
{
    return vpi.is_set
	|| sub_interface_name.is_set
	|| vci.is_set
	|| (oam_config !=  nullptr && oam_config->has_data())
	|| (vc_class_not_supported !=  nullptr && vc_class_not_supported->has_data());
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::has_operation() const
{
    return is_set(operation)
	|| is_set(vpi.operation)
	|| is_set(sub_interface_name.operation)
	|| is_set(vci.operation)
	|| (oam_config !=  nullptr && oam_config->has_operation())
	|| (vc_class_not_supported !=  nullptr && vc_class_not_supported->has_operation());
}

std::string AtmVcm::Nodes::Node::ClassLinks::ClassLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-link" <<"[vpi='" <<vpi <<"']";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::ClassLinks::ClassLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassLink' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (sub_interface_name.is_set || is_set(sub_interface_name.operation)) leaf_name_data.push_back(sub_interface_name.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::ClassLinks::ClassLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oam-config")
    {
        if(oam_config != nullptr)
        {
            children["oam-config"] = oam_config;
        }
        else
        {
            oam_config = std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig>();
            oam_config->parent = this;
            children["oam-config"] = oam_config;
        }
        return children.at("oam-config");
    }

    if(child_yang_name == "vc-class-not-supported")
    {
        if(vc_class_not_supported != nullptr)
        {
            children["vc-class-not-supported"] = vc_class_not_supported;
        }
        else
        {
            vc_class_not_supported = std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported>();
            vc_class_not_supported->parent = this;
            children["vc-class-not-supported"] = vc_class_not_supported;
        }
        return children.at("vc-class-not-supported");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::ClassLinks::ClassLink::get_children()
{
    if(children.find("oam-config") == children.end())
    {
        if(oam_config != nullptr)
        {
            children["oam-config"] = oam_config;
        }
    }

    if(children.find("vc-class-not-supported") == children.end())
    {
        if(vc_class_not_supported != nullptr)
        {
            children["vc-class-not-supported"] = vc_class_not_supported;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::ClassLinks::ClassLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported::VcClassNotSupported()
    :
    encapsulation_not_supported{YType::enumeration, "encapsulation-not-supported"},
    not_supported_inherit_level{YType::enumeration, "not-supported-inherit-level"}
{
    yang_name = "vc-class-not-supported"; yang_parent_name = "class-link";
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported::~VcClassNotSupported()
{
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported::has_data() const
{
    return encapsulation_not_supported.is_set
	|| not_supported_inherit_level.is_set;
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation_not_supported.operation)
	|| is_set(not_supported_inherit_level.operation);
}

std::string AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vc-class-not-supported";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VcClassNotSupported' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_not_supported.is_set || is_set(encapsulation_not_supported.operation)) leaf_name_data.push_back(encapsulation_not_supported.get_name_leafdata());
    if (not_supported_inherit_level.is_set || is_set(not_supported_inherit_level.operation)) leaf_name_data.push_back(not_supported_inherit_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-not-supported")
    {
        encapsulation_not_supported = value;
    }
    if(value_path == "not-supported-inherit-level")
    {
        not_supported_inherit_level = value;
    }
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamConfig()
    :
    ais_rdi(std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi>())
	,class_link_encapsulation(std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation>())
	,class_link_shaping(std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping>())
	,oam_pvc(std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc>())
	,oam_retry(std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry>())
{
    ais_rdi->parent = this;
    children["ais-rdi"] = ais_rdi;

    class_link_encapsulation->parent = this;
    children["class-link-encapsulation"] = class_link_encapsulation;

    class_link_shaping->parent = this;
    children["class-link-shaping"] = class_link_shaping;

    oam_pvc->parent = this;
    children["oam-pvc"] = oam_pvc;

    oam_retry->parent = this;
    children["oam-retry"] = oam_retry;

    yang_name = "oam-config"; yang_parent_name = "class-link";
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::~OamConfig()
{
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::has_data() const
{
    return (ais_rdi !=  nullptr && ais_rdi->has_data())
	|| (class_link_encapsulation !=  nullptr && class_link_encapsulation->has_data())
	|| (class_link_shaping !=  nullptr && class_link_shaping->has_data())
	|| (oam_pvc !=  nullptr && oam_pvc->has_data())
	|| (oam_retry !=  nullptr && oam_retry->has_data());
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::has_operation() const
{
    return is_set(operation)
	|| (ais_rdi !=  nullptr && ais_rdi->has_operation())
	|| (class_link_encapsulation !=  nullptr && class_link_encapsulation->has_operation())
	|| (class_link_shaping !=  nullptr && class_link_shaping->has_operation())
	|| (oam_pvc !=  nullptr && oam_pvc->has_operation())
	|| (oam_retry !=  nullptr && oam_retry->has_operation());
}

std::string AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-config";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OamConfig' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ais-rdi")
    {
        if(ais_rdi != nullptr)
        {
            children["ais-rdi"] = ais_rdi;
        }
        else
        {
            ais_rdi = std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi>();
            ais_rdi->parent = this;
            children["ais-rdi"] = ais_rdi;
        }
        return children.at("ais-rdi");
    }

    if(child_yang_name == "class-link-encapsulation")
    {
        if(class_link_encapsulation != nullptr)
        {
            children["class-link-encapsulation"] = class_link_encapsulation;
        }
        else
        {
            class_link_encapsulation = std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation>();
            class_link_encapsulation->parent = this;
            children["class-link-encapsulation"] = class_link_encapsulation;
        }
        return children.at("class-link-encapsulation");
    }

    if(child_yang_name == "class-link-shaping")
    {
        if(class_link_shaping != nullptr)
        {
            children["class-link-shaping"] = class_link_shaping;
        }
        else
        {
            class_link_shaping = std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping>();
            class_link_shaping->parent = this;
            children["class-link-shaping"] = class_link_shaping;
        }
        return children.at("class-link-shaping");
    }

    if(child_yang_name == "oam-pvc")
    {
        if(oam_pvc != nullptr)
        {
            children["oam-pvc"] = oam_pvc;
        }
        else
        {
            oam_pvc = std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc>();
            oam_pvc->parent = this;
            children["oam-pvc"] = oam_pvc;
        }
        return children.at("oam-pvc");
    }

    if(child_yang_name == "oam-retry")
    {
        if(oam_retry != nullptr)
        {
            children["oam-retry"] = oam_retry;
        }
        else
        {
            oam_retry = std::make_shared<AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry>();
            oam_retry->parent = this;
            children["oam-retry"] = oam_retry;
        }
        return children.at("oam-retry");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::get_children()
{
    if(children.find("ais-rdi") == children.end())
    {
        if(ais_rdi != nullptr)
        {
            children["ais-rdi"] = ais_rdi;
        }
    }

    if(children.find("class-link-encapsulation") == children.end())
    {
        if(class_link_encapsulation != nullptr)
        {
            children["class-link-encapsulation"] = class_link_encapsulation;
        }
    }

    if(children.find("class-link-shaping") == children.end())
    {
        if(class_link_shaping != nullptr)
        {
            children["class-link-shaping"] = class_link_shaping;
        }
    }

    if(children.find("oam-pvc") == children.end())
    {
        if(oam_pvc != nullptr)
        {
            children["oam-pvc"] = oam_pvc;
        }
    }

    if(children.find("oam-retry") == children.end())
    {
        if(oam_retry != nullptr)
        {
            children["oam-retry"] = oam_retry;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::set_value(const std::string & value_path, std::string value)
{
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping::ClassLinkShaping()
    :
    average_output_rate{YType::uint32, "average-output-rate"},
    burst_output_rate{YType::uint32, "burst-output-rate"},
    peak_output_rate{YType::uint32, "peak-output-rate"},
    shaping_inherit_level{YType::enumeration, "shaping-inherit-level"},
    shaping_type{YType::enumeration, "shaping-type"}
{
    yang_name = "class-link-shaping"; yang_parent_name = "oam-config";
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping::~ClassLinkShaping()
{
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping::has_data() const
{
    return average_output_rate.is_set
	|| burst_output_rate.is_set
	|| peak_output_rate.is_set
	|| shaping_inherit_level.is_set
	|| shaping_type.is_set;
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping::has_operation() const
{
    return is_set(operation)
	|| is_set(average_output_rate.operation)
	|| is_set(burst_output_rate.operation)
	|| is_set(peak_output_rate.operation)
	|| is_set(shaping_inherit_level.operation)
	|| is_set(shaping_type.operation);
}

std::string AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-link-shaping";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassLinkShaping' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_output_rate.is_set || is_set(average_output_rate.operation)) leaf_name_data.push_back(average_output_rate.get_name_leafdata());
    if (burst_output_rate.is_set || is_set(burst_output_rate.operation)) leaf_name_data.push_back(burst_output_rate.get_name_leafdata());
    if (peak_output_rate.is_set || is_set(peak_output_rate.operation)) leaf_name_data.push_back(peak_output_rate.get_name_leafdata());
    if (shaping_inherit_level.is_set || is_set(shaping_inherit_level.operation)) leaf_name_data.push_back(shaping_inherit_level.get_name_leafdata());
    if (shaping_type.is_set || is_set(shaping_type.operation)) leaf_name_data.push_back(shaping_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-output-rate")
    {
        average_output_rate = value;
    }
    if(value_path == "burst-output-rate")
    {
        burst_output_rate = value;
    }
    if(value_path == "peak-output-rate")
    {
        peak_output_rate = value;
    }
    if(value_path == "shaping-inherit-level")
    {
        shaping_inherit_level = value;
    }
    if(value_path == "shaping-type")
    {
        shaping_type = value;
    }
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation::ClassLinkEncapsulation()
    :
    encapsulation_inherit_level{YType::enumeration, "encapsulation-inherit-level"},
    encapsulation_type{YType::enumeration, "encapsulation-type"}
{
    yang_name = "class-link-encapsulation"; yang_parent_name = "oam-config";
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation::~ClassLinkEncapsulation()
{
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation::has_data() const
{
    return encapsulation_inherit_level.is_set
	|| encapsulation_type.is_set;
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation_inherit_level.operation)
	|| is_set(encapsulation_type.operation);
}

std::string AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-link-encapsulation";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassLinkEncapsulation' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_inherit_level.is_set || is_set(encapsulation_inherit_level.operation)) leaf_name_data.push_back(encapsulation_inherit_level.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-inherit-level")
    {
        encapsulation_inherit_level = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc::OamPvc()
    :
    ais_rdi_failure{YType::boolean, "ais-rdi-failure"},
    keep_vc_up{YType::boolean, "keep-vc-up"},
    manage_inherit_level{YType::enumeration, "manage-inherit-level"},
    manage_level{YType::enumeration, "manage-level"},
    pvc_frequency{YType::uint32, "pvc-frequency"}
{
    yang_name = "oam-pvc"; yang_parent_name = "oam-config";
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc::~OamPvc()
{
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc::has_data() const
{
    return ais_rdi_failure.is_set
	|| keep_vc_up.is_set
	|| manage_inherit_level.is_set
	|| manage_level.is_set
	|| pvc_frequency.is_set;
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc::has_operation() const
{
    return is_set(operation)
	|| is_set(ais_rdi_failure.operation)
	|| is_set(keep_vc_up.operation)
	|| is_set(manage_inherit_level.operation)
	|| is_set(manage_level.operation)
	|| is_set(pvc_frequency.operation);
}

std::string AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-pvc";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OamPvc' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_rdi_failure.is_set || is_set(ais_rdi_failure.operation)) leaf_name_data.push_back(ais_rdi_failure.get_name_leafdata());
    if (keep_vc_up.is_set || is_set(keep_vc_up.operation)) leaf_name_data.push_back(keep_vc_up.get_name_leafdata());
    if (manage_inherit_level.is_set || is_set(manage_inherit_level.operation)) leaf_name_data.push_back(manage_inherit_level.get_name_leafdata());
    if (manage_level.is_set || is_set(manage_level.operation)) leaf_name_data.push_back(manage_level.get_name_leafdata());
    if (pvc_frequency.is_set || is_set(pvc_frequency.operation)) leaf_name_data.push_back(pvc_frequency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais-rdi-failure")
    {
        ais_rdi_failure = value;
    }
    if(value_path == "keep-vc-up")
    {
        keep_vc_up = value;
    }
    if(value_path == "manage-inherit-level")
    {
        manage_inherit_level = value;
    }
    if(value_path == "manage-level")
    {
        manage_level = value;
    }
    if(value_path == "pvc-frequency")
    {
        pvc_frequency = value;
    }
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry::OamRetry()
    :
    down_count{YType::uint32, "down-count"},
    retry_frequency{YType::uint32, "retry-frequency"},
    retry_inherit_level{YType::enumeration, "retry-inherit-level"},
    retry_up_count{YType::uint32, "retry-up-count"}
{
    yang_name = "oam-retry"; yang_parent_name = "oam-config";
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry::~OamRetry()
{
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry::has_data() const
{
    return down_count.is_set
	|| retry_frequency.is_set
	|| retry_inherit_level.is_set
	|| retry_up_count.is_set;
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_frequency.operation)
	|| is_set(retry_inherit_level.operation)
	|| is_set(retry_up_count.operation);
}

std::string AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-retry";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OamRetry' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_frequency.is_set || is_set(retry_frequency.operation)) leaf_name_data.push_back(retry_frequency.get_name_leafdata());
    if (retry_inherit_level.is_set || is_set(retry_inherit_level.operation)) leaf_name_data.push_back(retry_inherit_level.get_name_leafdata());
    if (retry_up_count.is_set || is_set(retry_up_count.operation)) leaf_name_data.push_back(retry_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-frequency")
    {
        retry_frequency = value;
    }
    if(value_path == "retry-inherit-level")
    {
        retry_inherit_level = value;
    }
    if(value_path == "retry-up-count")
    {
        retry_up_count = value;
    }
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi::AisRdi()
    :
    ais_rdi_inherit_level{YType::enumeration, "ais-rdi-inherit-level"},
    ais_rdi_up_count{YType::uint32, "ais-rdi-up-count"},
    ais_rdi_up_time{YType::uint32, "ais-rdi-up-time"}
{
    yang_name = "ais-rdi"; yang_parent_name = "oam-config";
}

AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi::~AisRdi()
{
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi::has_data() const
{
    return ais_rdi_inherit_level.is_set
	|| ais_rdi_up_count.is_set
	|| ais_rdi_up_time.is_set;
}

bool AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi::has_operation() const
{
    return is_set(operation)
	|| is_set(ais_rdi_inherit_level.operation)
	|| is_set(ais_rdi_up_count.operation)
	|| is_set(ais_rdi_up_time.operation);
}

std::string AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais-rdi";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AisRdi' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_rdi_inherit_level.is_set || is_set(ais_rdi_inherit_level.operation)) leaf_name_data.push_back(ais_rdi_inherit_level.get_name_leafdata());
    if (ais_rdi_up_count.is_set || is_set(ais_rdi_up_count.operation)) leaf_name_data.push_back(ais_rdi_up_count.get_name_leafdata());
    if (ais_rdi_up_time.is_set || is_set(ais_rdi_up_time.operation)) leaf_name_data.push_back(ais_rdi_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais-rdi-inherit-level")
    {
        ais_rdi_inherit_level = value;
    }
    if(value_path == "ais-rdi-up-count")
    {
        ais_rdi_up_count = value;
    }
    if(value_path == "ais-rdi-up-time")
    {
        ais_rdi_up_time = value;
    }
}

AtmVcm::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

AtmVcm::Nodes::Node::Interfaces::~Interfaces()
{
}

bool AtmVcm::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool AtmVcm::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmVcm::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AtmVcm::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

AtmVcm::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configured_layer2pv_cs{YType::uint32, "configured-layer2pv-cs"},
    configured_layer2pv_ps{YType::uint32, "configured-layer2pv-ps"},
    configured_layer3pv_cs{YType::uint32, "configured-layer3pv-cs"},
    configured_layer3vp_tunnels{YType::uint32, "configured-layer3vp-tunnels"},
    currently_failing_layer2pv_cs{YType::uint32, "currently-failing-layer2pv-cs"},
    currently_failing_layer2pv_ps{YType::uint32, "currently-failing-layer2pv-ps"},
    currently_failing_layer3pv_cs{YType::uint32, "currently-failing-layer3pv-cs"},
    currently_failing_layer3vp_tunnels{YType::uint32, "currently-failing-layer3vp-tunnels"},
    ilmi_vci{YType::uint32, "ilmi-vci"},
    ilmi_vpi{YType::uint32, "ilmi-vpi"},
    l2_cell_packing_count{YType::uint16, "l2-cell-packing-count"},
    main_interface{YType::str, "main-interface"},
    port_type{YType::enumeration, "port-type"},
    pvc_failures{YType::uint32, "pvc-failures"},
    pvc_failures_trap_enable{YType::boolean, "pvc-failures-trap-enable"},
    pvc_notification_interval{YType::uint32, "pvc-notification-interval"}
    	,
    cell_packing_data(std::make_shared<AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData>())
{
    cell_packing_data->parent = this;
    children["cell-packing-data"] = cell_packing_data;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

AtmVcm::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool AtmVcm::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| configured_layer2pv_cs.is_set
	|| configured_layer2pv_ps.is_set
	|| configured_layer3pv_cs.is_set
	|| configured_layer3vp_tunnels.is_set
	|| currently_failing_layer2pv_cs.is_set
	|| currently_failing_layer2pv_ps.is_set
	|| currently_failing_layer3pv_cs.is_set
	|| currently_failing_layer3vp_tunnels.is_set
	|| ilmi_vci.is_set
	|| ilmi_vpi.is_set
	|| l2_cell_packing_count.is_set
	|| main_interface.is_set
	|| port_type.is_set
	|| pvc_failures.is_set
	|| pvc_failures_trap_enable.is_set
	|| pvc_notification_interval.is_set
	|| (cell_packing_data !=  nullptr && cell_packing_data->has_data());
}

bool AtmVcm::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configured_layer2pv_cs.operation)
	|| is_set(configured_layer2pv_ps.operation)
	|| is_set(configured_layer3pv_cs.operation)
	|| is_set(configured_layer3vp_tunnels.operation)
	|| is_set(currently_failing_layer2pv_cs.operation)
	|| is_set(currently_failing_layer2pv_ps.operation)
	|| is_set(currently_failing_layer3pv_cs.operation)
	|| is_set(currently_failing_layer3vp_tunnels.operation)
	|| is_set(ilmi_vci.operation)
	|| is_set(ilmi_vpi.operation)
	|| is_set(l2_cell_packing_count.operation)
	|| is_set(main_interface.operation)
	|| is_set(port_type.operation)
	|| is_set(pvc_failures.operation)
	|| is_set(pvc_failures_trap_enable.operation)
	|| is_set(pvc_notification_interval.operation)
	|| (cell_packing_data !=  nullptr && cell_packing_data->has_operation());
}

std::string AtmVcm::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configured_layer2pv_cs.is_set || is_set(configured_layer2pv_cs.operation)) leaf_name_data.push_back(configured_layer2pv_cs.get_name_leafdata());
    if (configured_layer2pv_ps.is_set || is_set(configured_layer2pv_ps.operation)) leaf_name_data.push_back(configured_layer2pv_ps.get_name_leafdata());
    if (configured_layer3pv_cs.is_set || is_set(configured_layer3pv_cs.operation)) leaf_name_data.push_back(configured_layer3pv_cs.get_name_leafdata());
    if (configured_layer3vp_tunnels.is_set || is_set(configured_layer3vp_tunnels.operation)) leaf_name_data.push_back(configured_layer3vp_tunnels.get_name_leafdata());
    if (currently_failing_layer2pv_cs.is_set || is_set(currently_failing_layer2pv_cs.operation)) leaf_name_data.push_back(currently_failing_layer2pv_cs.get_name_leafdata());
    if (currently_failing_layer2pv_ps.is_set || is_set(currently_failing_layer2pv_ps.operation)) leaf_name_data.push_back(currently_failing_layer2pv_ps.get_name_leafdata());
    if (currently_failing_layer3pv_cs.is_set || is_set(currently_failing_layer3pv_cs.operation)) leaf_name_data.push_back(currently_failing_layer3pv_cs.get_name_leafdata());
    if (currently_failing_layer3vp_tunnels.is_set || is_set(currently_failing_layer3vp_tunnels.operation)) leaf_name_data.push_back(currently_failing_layer3vp_tunnels.get_name_leafdata());
    if (ilmi_vci.is_set || is_set(ilmi_vci.operation)) leaf_name_data.push_back(ilmi_vci.get_name_leafdata());
    if (ilmi_vpi.is_set || is_set(ilmi_vpi.operation)) leaf_name_data.push_back(ilmi_vpi.get_name_leafdata());
    if (l2_cell_packing_count.is_set || is_set(l2_cell_packing_count.operation)) leaf_name_data.push_back(l2_cell_packing_count.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (pvc_failures.is_set || is_set(pvc_failures.operation)) leaf_name_data.push_back(pvc_failures.get_name_leafdata());
    if (pvc_failures_trap_enable.is_set || is_set(pvc_failures_trap_enable.operation)) leaf_name_data.push_back(pvc_failures_trap_enable.get_name_leafdata());
    if (pvc_notification_interval.is_set || is_set(pvc_notification_interval.operation)) leaf_name_data.push_back(pvc_notification_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cell-packing-data")
    {
        if(cell_packing_data != nullptr)
        {
            children["cell-packing-data"] = cell_packing_data;
        }
        else
        {
            cell_packing_data = std::make_shared<AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData>();
            cell_packing_data->parent = this;
            children["cell-packing-data"] = cell_packing_data;
        }
        return children.at("cell-packing-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::Interfaces::Interface::get_children()
{
    if(children.find("cell-packing-data") == children.end())
    {
        if(cell_packing_data != nullptr)
        {
            children["cell-packing-data"] = cell_packing_data;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configured-layer2pv-cs")
    {
        configured_layer2pv_cs = value;
    }
    if(value_path == "configured-layer2pv-ps")
    {
        configured_layer2pv_ps = value;
    }
    if(value_path == "configured-layer3pv-cs")
    {
        configured_layer3pv_cs = value;
    }
    if(value_path == "configured-layer3vp-tunnels")
    {
        configured_layer3vp_tunnels = value;
    }
    if(value_path == "currently-failing-layer2pv-cs")
    {
        currently_failing_layer2pv_cs = value;
    }
    if(value_path == "currently-failing-layer2pv-ps")
    {
        currently_failing_layer2pv_ps = value;
    }
    if(value_path == "currently-failing-layer3pv-cs")
    {
        currently_failing_layer3pv_cs = value;
    }
    if(value_path == "currently-failing-layer3vp-tunnels")
    {
        currently_failing_layer3vp_tunnels = value;
    }
    if(value_path == "ilmi-vci")
    {
        ilmi_vci = value;
    }
    if(value_path == "ilmi-vpi")
    {
        ilmi_vpi = value;
    }
    if(value_path == "l2-cell-packing-count")
    {
        l2_cell_packing_count = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "pvc-failures")
    {
        pvc_failures = value;
    }
    if(value_path == "pvc-failures-trap-enable")
    {
        pvc_failures_trap_enable = value;
    }
    if(value_path == "pvc-notification-interval")
    {
        pvc_notification_interval = value;
    }
}

AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData::CellPackingData()
    :
    local_max_cells_packed_per_packet{YType::uint16, "local-max-cells-packed-per-packet"},
    max_cell_packed_timeout{YType::uint16, "max-cell-packed-timeout"},
    negotiated_max_cells_packed_per_packet{YType::uint16, "negotiated-max-cells-packed-per-packet"}
{
    yang_name = "cell-packing-data"; yang_parent_name = "interface";
}

AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData::~CellPackingData()
{
}

bool AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData::has_data() const
{
    return local_max_cells_packed_per_packet.is_set
	|| max_cell_packed_timeout.is_set
	|| negotiated_max_cells_packed_per_packet.is_set;
}

bool AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_max_cells_packed_per_packet.operation)
	|| is_set(max_cell_packed_timeout.operation)
	|| is_set(negotiated_max_cells_packed_per_packet.operation);
}

std::string AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing-data";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPackingData' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_max_cells_packed_per_packet.is_set || is_set(local_max_cells_packed_per_packet.operation)) leaf_name_data.push_back(local_max_cells_packed_per_packet.get_name_leafdata());
    if (max_cell_packed_timeout.is_set || is_set(max_cell_packed_timeout.operation)) leaf_name_data.push_back(max_cell_packed_timeout.get_name_leafdata());
    if (negotiated_max_cells_packed_per_packet.is_set || is_set(negotiated_max_cells_packed_per_packet.operation)) leaf_name_data.push_back(negotiated_max_cells_packed_per_packet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-max-cells-packed-per-packet")
    {
        local_max_cells_packed_per_packet = value;
    }
    if(value_path == "max-cell-packed-timeout")
    {
        max_cell_packed_timeout = value;
    }
    if(value_path == "negotiated-max-cells-packed-per-packet")
    {
        negotiated_max_cells_packed_per_packet = value;
    }
}

AtmVcm::Nodes::Node::VpTunnels::VpTunnels()
{
    yang_name = "vp-tunnels"; yang_parent_name = "node";
}

AtmVcm::Nodes::Node::VpTunnels::~VpTunnels()
{
}

bool AtmVcm::Nodes::Node::VpTunnels::has_data() const
{
    for (std::size_t index=0; index<vp_tunnel.size(); index++)
    {
        if(vp_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool AtmVcm::Nodes::Node::VpTunnels::has_operation() const
{
    for (std::size_t index=0; index<vp_tunnel.size(); index++)
    {
        if(vp_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmVcm::Nodes::Node::VpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnels";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::VpTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpTunnels' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::VpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vp-tunnel")
    {
        for(auto const & c : vp_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AtmVcm::Nodes::Node::VpTunnels::VpTunnel>();
        c->parent = this;
        vp_tunnel.push_back(std::move(c));
        children[segment_path] = vp_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::VpTunnels::get_children()
{
    for (auto const & c : vp_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AtmVcm::Nodes::Node::VpTunnels::set_value(const std::string & value_path, std::string value)
{
}

AtmVcm::Nodes::Node::VpTunnels::VpTunnel::VpTunnel()
    :
    interface_name{YType::str, "interface-name"},
    amin_status{YType::boolean, "amin-status"},
    burst_rate{YType::uint32, "burst-rate"},
    data_vc_count{YType::uint32, "data-vc-count"},
    f4oam_enabled{YType::boolean, "f4oam-enabled"},
    internal_state{YType::enumeration, "internal-state"},
    last_vp_state_change_time{YType::uint32, "last-vp-state-change-time"},
    main_interface{YType::str, "main-interface"},
    oper_status{YType::boolean, "oper-status"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    shape{YType::enumeration, "shape"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    vp_interface{YType::str, "vp-interface"},
    vpi{YType::int32, "vpi"},
    vpi_xr{YType::uint16, "vpi-xr"}
{
    yang_name = "vp-tunnel"; yang_parent_name = "vp-tunnels";
}

AtmVcm::Nodes::Node::VpTunnels::VpTunnel::~VpTunnel()
{
}

bool AtmVcm::Nodes::Node::VpTunnels::VpTunnel::has_data() const
{
    return interface_name.is_set
	|| amin_status.is_set
	|| burst_rate.is_set
	|| data_vc_count.is_set
	|| f4oam_enabled.is_set
	|| internal_state.is_set
	|| last_vp_state_change_time.is_set
	|| main_interface.is_set
	|| oper_status.is_set
	|| peak_cell_rate.is_set
	|| shape.is_set
	|| sustained_cell_rate.is_set
	|| vp_interface.is_set
	|| vpi.is_set
	|| vpi_xr.is_set;
}

bool AtmVcm::Nodes::Node::VpTunnels::VpTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(amin_status.operation)
	|| is_set(burst_rate.operation)
	|| is_set(data_vc_count.operation)
	|| is_set(f4oam_enabled.operation)
	|| is_set(internal_state.operation)
	|| is_set(last_vp_state_change_time.operation)
	|| is_set(main_interface.operation)
	|| is_set(oper_status.operation)
	|| is_set(peak_cell_rate.operation)
	|| is_set(shape.operation)
	|| is_set(sustained_cell_rate.operation)
	|| is_set(vp_interface.operation)
	|| is_set(vpi.operation)
	|| is_set(vpi_xr.operation);
}

std::string AtmVcm::Nodes::Node::VpTunnels::VpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnel" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath AtmVcm::Nodes::Node::VpTunnels::VpTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpTunnel' in Cisco_IOS_XR_atm_vcm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (amin_status.is_set || is_set(amin_status.operation)) leaf_name_data.push_back(amin_status.get_name_leafdata());
    if (burst_rate.is_set || is_set(burst_rate.operation)) leaf_name_data.push_back(burst_rate.get_name_leafdata());
    if (data_vc_count.is_set || is_set(data_vc_count.operation)) leaf_name_data.push_back(data_vc_count.get_name_leafdata());
    if (f4oam_enabled.is_set || is_set(f4oam_enabled.operation)) leaf_name_data.push_back(f4oam_enabled.get_name_leafdata());
    if (internal_state.is_set || is_set(internal_state.operation)) leaf_name_data.push_back(internal_state.get_name_leafdata());
    if (last_vp_state_change_time.is_set || is_set(last_vp_state_change_time.operation)) leaf_name_data.push_back(last_vp_state_change_time.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.operation)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (shape.is_set || is_set(shape.operation)) leaf_name_data.push_back(shape.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.operation)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (vp_interface.is_set || is_set(vp_interface.operation)) leaf_name_data.push_back(vp_interface.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vpi_xr.is_set || is_set(vpi_xr.operation)) leaf_name_data.push_back(vpi_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmVcm::Nodes::Node::VpTunnels::VpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AtmVcm::Nodes::Node::VpTunnels::VpTunnel::get_children()
{
    return children;
}

void AtmVcm::Nodes::Node::VpTunnels::VpTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "amin-status")
    {
        amin_status = value;
    }
    if(value_path == "burst-rate")
    {
        burst_rate = value;
    }
    if(value_path == "data-vc-count")
    {
        data_vc_count = value;
    }
    if(value_path == "f4oam-enabled")
    {
        f4oam_enabled = value;
    }
    if(value_path == "internal-state")
    {
        internal_state = value;
    }
    if(value_path == "last-vp-state-change-time")
    {
        last_vp_state_change_time = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
    }
    if(value_path == "shape")
    {
        shape = value;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
    }
    if(value_path == "vp-interface")
    {
        vp_interface = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "vpi-xr")
    {
        vpi_xr = value;
    }
}

const Enum::YLeaf VcEnum::layer3_vc {0, "layer3-vc"};
const Enum::YLeaf VcEnum::layer2_vc {1, "layer2-vc"};
const Enum::YLeaf VcEnum::layer2_vp {2, "layer2-vp"};
const Enum::YLeaf VcEnum::vc_type_unknown {3, "vc-type-unknown"};

const Enum::YLeaf VcEncapEnum::ilmi {1, "ilmi"};
const Enum::YLeaf VcEncapEnum::qsaal {2, "qsaal"};
const Enum::YLeaf VcEncapEnum::snap {3, "snap"};
const Enum::YLeaf VcEncapEnum::mux {4, "mux"};
const Enum::YLeaf VcEncapEnum::nlpid {5, "nlpid"};
const Enum::YLeaf VcEncapEnum::f4oam {6, "f4oam"};
const Enum::YLeaf VcEncapEnum::aal0 {7, "aal0"};
const Enum::YLeaf VcEncapEnum::aal5 {8, "aal5"};
const Enum::YLeaf VcEncapEnum::encap_unknown {9, "encap-unknown"};

const Enum::YLeaf VcManageLevelEnum::manage {1, "manage"};
const Enum::YLeaf VcManageLevelEnum::not_managed {2, "not-managed"};

const Enum::YLeaf VcTestModeEnum::test_mode_none {1, "test-mode-none"};
const Enum::YLeaf VcTestModeEnum::loop {2, "loop"};
const Enum::YLeaf VcTestModeEnum::reserved {3, "reserved"};

const Enum::YLeaf VpTrafShapingEnum::vp_cbr {1, "vp-cbr"};
const Enum::YLeaf VpTrafShapingEnum::vp_vbr_nrt {2, "vp-vbr-nrt"};
const Enum::YLeaf VpTrafShapingEnum::vp_vbr_rt {3, "vp-vbr-rt"};
const Enum::YLeaf VpTrafShapingEnum::vp_abr {4, "vp-abr"};
const Enum::YLeaf VpTrafShapingEnum::vp_ubr_plus {5, "vp-ubr-plus"};
const Enum::YLeaf VpTrafShapingEnum::vp_ubr {6, "vp-ubr"};
const Enum::YLeaf VpTrafShapingEnum::vp_traf_shaping_unknown {7, "vp-traf-shaping-unknown"};

const Enum::YLeaf VcStateEnum::initialized {0, "initialized"};
const Enum::YLeaf VcStateEnum::modifying {1, "modifying"};
const Enum::YLeaf VcStateEnum::modified {2, "modified"};
const Enum::YLeaf VcStateEnum::activating {3, "activating"};
const Enum::YLeaf VcStateEnum::activated {4, "activated"};
const Enum::YLeaf VcStateEnum::not_verified {5, "not-verified"};
const Enum::YLeaf VcStateEnum::ready {6, "ready"};
const Enum::YLeaf VcStateEnum::deactivating {7, "deactivating"};
const Enum::YLeaf VcStateEnum::inactive {8, "inactive"};
const Enum::YLeaf VcStateEnum::deleting {9, "deleting"};
const Enum::YLeaf VcStateEnum::deleted {10, "deleted"};
const Enum::YLeaf VcStateEnum::state_unknown {11, "state-unknown"};

const Enum::YLeaf ClassLinkOamInheritLevelEnum::vc_configured_onvc {0, "vc-configured-onvc"};
const Enum::YLeaf ClassLinkOamInheritLevelEnum::vc_class_onvc {1, "vc-class-onvc"};
const Enum::YLeaf ClassLinkOamInheritLevelEnum::vc_class_on_sub_interface {2, "vc-class-on-sub-interface"};
const Enum::YLeaf ClassLinkOamInheritLevelEnum::vc_class_on_main_interface {3, "vc-class-on-main-interface"};
const Enum::YLeaf ClassLinkOamInheritLevelEnum::vc_global_default {4, "vc-global-default"};
const Enum::YLeaf ClassLinkOamInheritLevelEnum::vc_inherit_level_unknown {5, "vc-inherit-level-unknown"};

const Enum::YLeaf VpStateEnum::vp_initialized {0, "vp-initialized"};
const Enum::YLeaf VpStateEnum::vp_modifying {1, "vp-modifying"};
const Enum::YLeaf VpStateEnum::vp_ready {2, "vp-ready"};
const Enum::YLeaf VpStateEnum::vp_mgd_down {3, "vp-mgd-down"};
const Enum::YLeaf VpStateEnum::vp_deleting {4, "vp-deleting"};
const Enum::YLeaf VpStateEnum::vp_deleted {5, "vp-deleted"};
const Enum::YLeaf VpStateEnum::vp_state_unknown {6, "vp-state-unknown"};

const Enum::YLeaf VcTrafShapingEnum::cbr {1, "cbr"};
const Enum::YLeaf VcTrafShapingEnum::vbr_nrt {2, "vbr-nrt"};
const Enum::YLeaf VcTrafShapingEnum::vbr_rt {3, "vbr-rt"};
const Enum::YLeaf VcTrafShapingEnum::abr {4, "abr"};
const Enum::YLeaf VcTrafShapingEnum::ubr_plus {5, "ubr-plus"};
const Enum::YLeaf VcTrafShapingEnum::ubr {6, "ubr"};
const Enum::YLeaf VcTrafShapingEnum::traf_shaping_unknown {7, "traf-shaping-unknown"};

const Enum::YLeaf VcCellPackingModeEnum::vp {1, "vp"};
const Enum::YLeaf VcCellPackingModeEnum::vc {2, "vc"};
const Enum::YLeaf VcCellPackingModeEnum::port_mode {3, "port-mode"};

const Enum::YLeaf VcmPortEnum::port_type_layer_2 {0, "port-type-layer-2"};
const Enum::YLeaf VcmPortEnum::port_type_layer_3 {1, "port-type-layer-3"};
const Enum::YLeaf VcmPortEnum::port_type_unknown {3, "port-type-unknown"};

const Enum::YLeaf VcInheritLevelEnum::directly_configured_onvc {0, "directly-configured-onvc"};
const Enum::YLeaf VcInheritLevelEnum::vc_class_configured_onvc {1, "vc-class-configured-onvc"};
const Enum::YLeaf VcInheritLevelEnum::vc_class_configured_on_sub_interface {2, "vc-class-configured-on-sub-interface"};
const Enum::YLeaf VcInheritLevelEnum::vc_class_configured_on_main_interface {3, "vc-class-configured-on-main-interface"};
const Enum::YLeaf VcInheritLevelEnum::global_default {4, "global-default"};
const Enum::YLeaf VcInheritLevelEnum::unknown {5, "unknown"};
const Enum::YLeaf VcInheritLevelEnum::not_supported {6, "not-supported"};


}
}

