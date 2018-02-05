
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "nvo.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace nvo {

OverlayEncapType::OverlayEncapType()
     : Identity("urn:ietf:params:xml:ns:yang:nvo", "nvo", "nvo:overlay-encap-type")
{

}

OverlayEncapType::~OverlayEncapType()
{
}

NvoInstances::NvoInstances()
{

    yang_name = "nvo-instances"; yang_parent_name = "nvo"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string NvoInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nvo:nvo-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvoInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NvoInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nvo-instance")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : nvo_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NvoInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvoInstances::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> NvoInstances::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool NvoInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nvo-instance")
        return true;
    return false;
}

NvoInstances::NvoInstance::NvoInstance()
    :
    nvo_id{YType::uint16, "nvo-id"},
    source_interface{YType::str, "source-interface"},
    overlay_encapsulation{YType::identityref, "overlay-encapsulation"}
{

    yang_name = "nvo-instance"; yang_parent_name = "nvo-instances"; is_top_level_class = false; has_list_ancestor = false;
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
	|| source_interface.is_set
	|| overlay_encapsulation.is_set;
}

bool NvoInstances::NvoInstance::has_operation() const
{
    for (std::size_t index=0; index<virtual_network.size(); index++)
    {
        if(virtual_network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nvo_id.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(overlay_encapsulation.yfilter);
}

std::string NvoInstances::NvoInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nvo:nvo-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string NvoInstances::NvoInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nvo-instance" <<"[nvo-id='" <<nvo_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvoInstances::NvoInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nvo_id.is_set || is_set(nvo_id.yfilter)) leaf_name_data.push_back(nvo_id.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (overlay_encapsulation.is_set || is_set(overlay_encapsulation.yfilter)) leaf_name_data.push_back(overlay_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NvoInstances::NvoInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-network")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : virtual_network)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NvoInstances::NvoInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nvo-id")
    {
        nvo_id = value;
        nvo_id.value_namespace = name_space;
        nvo_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation = value;
        overlay_encapsulation.value_namespace = name_space;
        overlay_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void NvoInstances::NvoInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nvo-id")
    {
        nvo_id.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation.yfilter = yfilter;
    }
}

bool NvoInstances::NvoInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-network" || name == "nvo-id" || name == "source-interface" || name == "overlay-encapsulation")
        return true;
    return false;
}

NvoInstances::NvoInstance::VirtualNetwork::VirtualNetwork()
    :
    vni_start{YType::uint32, "vni-start"},
    vni_end{YType::uint32, "vni-end"},
    routing_instance{YType::str, "routing-instance"},
    suppress_arp{YType::empty, "suppress-arp"},
    bgp{YType::empty, "bgp"},
    end_host_discovery{YType::enumeration, "end-host-discovery"}
    	,
    multicast(std::make_shared<NvoInstances::NvoInstance::VirtualNetwork::Multicast>())
{
    multicast->parent = this;

    yang_name = "virtual-network"; yang_parent_name = "nvo-instance"; is_top_level_class = false; has_list_ancestor = true;
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
	|| routing_instance.is_set
	|| suppress_arp.is_set
	|| bgp.is_set
	|| end_host_discovery.is_set
	|| (multicast !=  nullptr && multicast->has_data());
}

bool NvoInstances::NvoInstance::VirtualNetwork::has_operation() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vni_start.yfilter)
	|| ydk::is_set(vni_end.yfilter)
	|| ydk::is_set(routing_instance.yfilter)
	|| ydk::is_set(suppress_arp.yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(end_host_discovery.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string NvoInstances::NvoInstance::VirtualNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-network" <<"[vni-start='" <<vni_start <<"']" <<"[vni-end='" <<vni_end <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvoInstances::NvoInstance::VirtualNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni_start.is_set || is_set(vni_start.yfilter)) leaf_name_data.push_back(vni_start.get_name_leafdata());
    if (vni_end.is_set || is_set(vni_end.yfilter)) leaf_name_data.push_back(vni_end.get_name_leafdata());
    if (routing_instance.is_set || is_set(routing_instance.yfilter)) leaf_name_data.push_back(routing_instance.get_name_leafdata());
    if (suppress_arp.is_set || is_set(suppress_arp.yfilter)) leaf_name_data.push_back(suppress_arp.get_name_leafdata());
    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (end_host_discovery.is_set || is_set(end_host_discovery.yfilter)) leaf_name_data.push_back(end_host_discovery.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    count = 0;
    for (auto const & c : peers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NvoInstances::NvoInstance::VirtualNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni-start")
    {
        vni_start = value;
        vni_start.value_namespace = name_space;
        vni_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-end")
    {
        vni_end = value;
        vni_end.value_namespace = name_space;
        vni_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-instance")
    {
        routing_instance = value;
        routing_instance.value_namespace = name_space;
        routing_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-arp")
    {
        suppress_arp = value;
        suppress_arp.value_namespace = name_space;
        suppress_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-host-discovery")
    {
        end_host_discovery = value;
        end_host_discovery.value_namespace = name_space;
        end_host_discovery.value_namespace_prefix = name_space_prefix;
    }
}

void NvoInstances::NvoInstance::VirtualNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni-start")
    {
        vni_start.yfilter = yfilter;
    }
    if(value_path == "vni-end")
    {
        vni_end.yfilter = yfilter;
    }
    if(value_path == "routing-instance")
    {
        routing_instance.yfilter = yfilter;
    }
    if(value_path == "suppress-arp")
    {
        suppress_arp.yfilter = yfilter;
    }
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "end-host-discovery")
    {
        end_host_discovery.yfilter = yfilter;
    }
}

bool NvoInstances::NvoInstance::VirtualNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "peers" || name == "vni-start" || name == "vni-end" || name == "routing-instance" || name == "suppress-arp" || name == "bgp" || name == "end-host-discovery")
        return true;
    return false;
}

NvoInstances::NvoInstance::VirtualNetwork::Multicast::Multicast()
    :
    multicast_group_min{YType::str, "multicast-group-min"},
    multicast_group_max{YType::str, "multicast-group-max"}
{

    yang_name = "multicast"; yang_parent_name = "virtual-network"; is_top_level_class = false; has_list_ancestor = true;
}

NvoInstances::NvoInstance::VirtualNetwork::Multicast::~Multicast()
{
}

bool NvoInstances::NvoInstance::VirtualNetwork::Multicast::has_data() const
{
    return multicast_group_min.is_set
	|| multicast_group_max.is_set;
}

bool NvoInstances::NvoInstance::VirtualNetwork::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_group_min.yfilter)
	|| ydk::is_set(multicast_group_max.yfilter);
}

std::string NvoInstances::NvoInstance::VirtualNetwork::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvoInstances::NvoInstance::VirtualNetwork::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_group_min.is_set || is_set(multicast_group_min.yfilter)) leaf_name_data.push_back(multicast_group_min.get_name_leafdata());
    if (multicast_group_max.is_set || is_set(multicast_group_max.yfilter)) leaf_name_data.push_back(multicast_group_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NvoInstances::NvoInstance::VirtualNetwork::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvoInstances::NvoInstance::VirtualNetwork::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NvoInstances::NvoInstance::VirtualNetwork::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-group-min")
    {
        multicast_group_min = value;
        multicast_group_min.value_namespace = name_space;
        multicast_group_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-group-max")
    {
        multicast_group_max = value;
        multicast_group_max.value_namespace = name_space;
        multicast_group_max.value_namespace_prefix = name_space_prefix;
    }
}

void NvoInstances::NvoInstance::VirtualNetwork::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-group-min")
    {
        multicast_group_min.yfilter = yfilter;
    }
    if(value_path == "multicast-group-max")
    {
        multicast_group_max.yfilter = yfilter;
    }
}

bool NvoInstances::NvoInstance::VirtualNetwork::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-group-min" || name == "multicast-group-max")
        return true;
    return false;
}

NvoInstances::NvoInstance::VirtualNetwork::Peers::Peers()
    :
    peer_ip{YType::str, "peer-ip"}
{

    yang_name = "peers"; yang_parent_name = "virtual-network"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(peer_ip.yfilter);
}

std::string NvoInstances::NvoInstance::VirtualNetwork::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers" <<"[peer-ip='" <<peer_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvoInstances::NvoInstance::VirtualNetwork::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_ip.is_set || is_set(peer_ip.yfilter)) leaf_name_data.push_back(peer_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NvoInstances::NvoInstance::VirtualNetwork::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvoInstances::NvoInstance::VirtualNetwork::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NvoInstances::NvoInstance::VirtualNetwork::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-ip")
    {
        peer_ip = value;
        peer_ip.value_namespace = name_space;
        peer_ip.value_namespace_prefix = name_space_prefix;
    }
}

void NvoInstances::NvoInstance::VirtualNetwork::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-ip")
    {
        peer_ip.yfilter = yfilter;
    }
}

bool NvoInstances::NvoInstance::VirtualNetwork::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-ip")
        return true;
    return false;
}

VxlanType::VxlanType()
     : Identity("urn:ietf:params:xml:ns:yang:nvo", "nvo", "nvo:vxlan-type")
{

}

VxlanType::~VxlanType()
{
}

NvgreType::NvgreType()
     : Identity("urn:ietf:params:xml:ns:yang:nvo", "nvo", "nvo:nvgre-type")
{

}

NvgreType::~NvgreType()
{
}

const Enum::YLeaf NvoInstances::NvoInstance::VirtualNetwork::EndHostDiscovery::flood_and_learn {0, "flood-and-learn"};
const Enum::YLeaf NvoInstances::NvoInstance::VirtualNetwork::EndHostDiscovery::bgp {1, "bgp"};


}
}

