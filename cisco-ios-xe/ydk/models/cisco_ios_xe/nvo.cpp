
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "nvo.hpp"

namespace ydk {
namespace nvo {

OverlayEncapTypeIdentity::OverlayEncapTypeIdentity()
     : Identity("nvo:overlay-encap-type")
{
}

OverlayEncapTypeIdentity::~OverlayEncapTypeIdentity()
{
}

NvoInstances::NvoInstances()
{
    yang_name = "nvo-instances"; yang_parent_name = "nvo";
}

NvoInstances::~NvoInstances()
{
}

bool NvoInstances::has_data() const
{
    for (std::size_t index=0; index<nvo_instance.size(); index++)
    {
        if(nvo_instance[index]->has_data())
            return true;
    }
    return false;
}

bool NvoInstances::has_operation() const
{
    for (std::size_t index=0; index<nvo_instance.size(); index++)
    {
        if(nvo_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvoInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nvo:nvo-instances";

    return path_buffer.str();

}

const EntityPath NvoInstances::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> NvoInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nvo-instance")
    {
        for(auto const & c : nvo_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvoInstances::NvoInstance>();
        c->parent = this;
        nvo_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvoInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nvo_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvoInstances::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> NvoInstances::clone_ptr() const
{
    return std::make_shared<NvoInstances>();
}

std::string NvoInstances::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string NvoInstances::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NvoInstances::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

NvoInstances::NvoInstance::NvoInstance()
    :
    nvo_id{YType::uint16, "nvo-id"},
    overlay_encapsulation{YType::identityref, "overlay-encapsulation"},
    source_interface{YType::str, "source-interface"}
{
    yang_name = "nvo-instance"; yang_parent_name = "nvo-instances";
}

NvoInstances::NvoInstance::~NvoInstance()
{
}

bool NvoInstances::NvoInstance::has_data() const
{
    for (std::size_t index=0; index<virtual_network.size(); index++)
    {
        if(virtual_network[index]->has_data())
            return true;
    }
    return nvo_id.is_set
	|| overlay_encapsulation.is_set
	|| source_interface.is_set;
}

bool NvoInstances::NvoInstance::has_operation() const
{
    for (std::size_t index=0; index<virtual_network.size(); index++)
    {
        if(virtual_network[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nvo_id.operation)
	|| is_set(overlay_encapsulation.operation)
	|| is_set(source_interface.operation);
}

std::string NvoInstances::NvoInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nvo-instance" <<"[nvo-id='" <<nvo_id <<"']";

    return path_buffer.str();

}

const EntityPath NvoInstances::NvoInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "nvo:nvo-instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nvo_id.is_set || is_set(nvo_id.operation)) leaf_name_data.push_back(nvo_id.get_name_leafdata());
    if (overlay_encapsulation.is_set || is_set(overlay_encapsulation.operation)) leaf_name_data.push_back(overlay_encapsulation.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvoInstances::NvoInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-network")
    {
        for(auto const & c : virtual_network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvoInstances::NvoInstance::VirtualNetwork>();
        c->parent = this;
        virtual_network.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvoInstances::NvoInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_network)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvoInstances::NvoInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nvo-id")
    {
        nvo_id = value;
    }
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

NvoInstances::NvoInstance::VirtualNetwork::VirtualNetwork()
    :
    vni_start{YType::uint32, "vni-start"},
    vni_end{YType::uint32, "vni-end"},
    bgp{YType::empty, "bgp"},
    end_host_discovery{YType::enumeration, "end-host-discovery"},
    routing_instance{YType::str, "routing-instance"},
    suppress_arp{YType::empty, "suppress-arp"}
    	,
    multicast(std::make_shared<NvoInstances::NvoInstance::VirtualNetwork::Multicast>())
{
    multicast->parent = this;

    yang_name = "virtual-network"; yang_parent_name = "nvo-instance";
}

NvoInstances::NvoInstance::VirtualNetwork::~VirtualNetwork()
{
}

bool NvoInstances::NvoInstance::VirtualNetwork::has_data() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return vni_start.is_set
	|| vni_end.is_set
	|| bgp.is_set
	|| end_host_discovery.is_set
	|| routing_instance.is_set
	|| suppress_arp.is_set
	|| (multicast !=  nullptr && multicast->has_data());
}

bool NvoInstances::NvoInstance::VirtualNetwork::has_operation() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vni_start.operation)
	|| is_set(vni_end.operation)
	|| is_set(bgp.operation)
	|| is_set(end_host_discovery.operation)
	|| is_set(routing_instance.operation)
	|| is_set(suppress_arp.operation)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string NvoInstances::NvoInstance::VirtualNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-network" <<"[vni-start='" <<vni_start <<"']" <<"[vni-end='" <<vni_end <<"']";

    return path_buffer.str();

}

const EntityPath NvoInstances::NvoInstance::VirtualNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualNetwork' in nvo cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni_start.is_set || is_set(vni_start.operation)) leaf_name_data.push_back(vni_start.get_name_leafdata());
    if (vni_end.is_set || is_set(vni_end.operation)) leaf_name_data.push_back(vni_end.get_name_leafdata());
    if (bgp.is_set || is_set(bgp.operation)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (end_host_discovery.is_set || is_set(end_host_discovery.operation)) leaf_name_data.push_back(end_host_discovery.get_name_leafdata());
    if (routing_instance.is_set || is_set(routing_instance.operation)) leaf_name_data.push_back(routing_instance.get_name_leafdata());
    if (suppress_arp.is_set || is_set(suppress_arp.operation)) leaf_name_data.push_back(suppress_arp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvoInstances::NvoInstance::VirtualNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<NvoInstances::NvoInstance::VirtualNetwork::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "peers")
    {
        for(auto const & c : peers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvoInstances::NvoInstance::VirtualNetwork::Peers>();
        c->parent = this;
        peers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvoInstances::NvoInstance::VirtualNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    for (auto const & c : peers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvoInstances::NvoInstance::VirtualNetwork::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vni-start")
    {
        vni_start = value;
    }
    if(value_path == "vni-end")
    {
        vni_end = value;
    }
    if(value_path == "bgp")
    {
        bgp = value;
    }
    if(value_path == "end-host-discovery")
    {
        end_host_discovery = value;
    }
    if(value_path == "routing-instance")
    {
        routing_instance = value;
    }
    if(value_path == "suppress-arp")
    {
        suppress_arp = value;
    }
}

NvoInstances::NvoInstance::VirtualNetwork::Peers::Peers()
    :
    peer_ip{YType::str, "peer-ip"}
{
    yang_name = "peers"; yang_parent_name = "virtual-network";
}

NvoInstances::NvoInstance::VirtualNetwork::Peers::~Peers()
{
}

bool NvoInstances::NvoInstance::VirtualNetwork::Peers::has_data() const
{
    return peer_ip.is_set;
}

bool NvoInstances::NvoInstance::VirtualNetwork::Peers::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_ip.operation);
}

std::string NvoInstances::NvoInstance::VirtualNetwork::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers" <<"[peer-ip='" <<peer_ip <<"']";

    return path_buffer.str();

}

const EntityPath NvoInstances::NvoInstance::VirtualNetwork::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in nvo cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_ip.is_set || is_set(peer_ip.operation)) leaf_name_data.push_back(peer_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvoInstances::NvoInstance::VirtualNetwork::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvoInstances::NvoInstance::VirtualNetwork::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvoInstances::NvoInstance::VirtualNetwork::Peers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-ip")
    {
        peer_ip = value;
    }
}

NvoInstances::NvoInstance::VirtualNetwork::Multicast::Multicast()
    :
    multicast_group_max{YType::str, "multicast-group-max"},
    multicast_group_min{YType::str, "multicast-group-min"}
{
    yang_name = "multicast"; yang_parent_name = "virtual-network";
}

NvoInstances::NvoInstance::VirtualNetwork::Multicast::~Multicast()
{
}

bool NvoInstances::NvoInstance::VirtualNetwork::Multicast::has_data() const
{
    return multicast_group_max.is_set
	|| multicast_group_min.is_set;
}

bool NvoInstances::NvoInstance::VirtualNetwork::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast_group_max.operation)
	|| is_set(multicast_group_min.operation);
}

std::string NvoInstances::NvoInstance::VirtualNetwork::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath NvoInstances::NvoInstance::VirtualNetwork::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in nvo cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_group_max.is_set || is_set(multicast_group_max.operation)) leaf_name_data.push_back(multicast_group_max.get_name_leafdata());
    if (multicast_group_min.is_set || is_set(multicast_group_min.operation)) leaf_name_data.push_back(multicast_group_min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvoInstances::NvoInstance::VirtualNetwork::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvoInstances::NvoInstance::VirtualNetwork::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvoInstances::NvoInstance::VirtualNetwork::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-group-max")
    {
        multicast_group_max = value;
    }
    if(value_path == "multicast-group-min")
    {
        multicast_group_min = value;
    }
}

NvgreTypeIdentity::NvgreTypeIdentity()
     : Identity("nvo:nvgre-type")
{
}

NvgreTypeIdentity::~NvgreTypeIdentity()
{
}

VxlanTypeIdentity::VxlanTypeIdentity()
     : Identity("nvo:vxlan-type")
{
}

VxlanTypeIdentity::~VxlanTypeIdentity()
{
}

const Enum::YLeaf NvoInstances::NvoInstance::VirtualNetwork::EndHostDiscoveryEnum::flood_and_learn {0, "flood-and-learn"};
const Enum::YLeaf NvoInstances::NvoInstance::VirtualNetwork::EndHostDiscoveryEnum::bgp {1, "bgp"};


}
}

