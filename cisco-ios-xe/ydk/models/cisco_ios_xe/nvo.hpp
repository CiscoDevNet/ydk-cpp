#ifndef _NVO_
#define _NVO_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace nvo {

class OverlayEncapTypeIdentity : public virtual Identity
{
    public:
        OverlayEncapTypeIdentity();
        ~OverlayEncapTypeIdentity();


}; // OverlayEncapTypeIdentity

class NvoInstances : public Entity
{
    public:
        NvoInstances();
        ~NvoInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class NvoInstance; //type: NvoInstances::NvoInstance

        std::vector<std::shared_ptr<nvo::NvoInstances::NvoInstance> > nvo_instance;
        
}; // NvoInstances


class NvoInstances::NvoInstance : public Entity
{
    public:
        NvoInstance();
        ~NvoInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nvo_id; //type: uint16
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf source_interface;
        YLeaf overlay_encapsulation; //type: OverlayEncapTypeIdentity
        class VirtualNetwork; //type: NvoInstances::NvoInstance::VirtualNetwork

        std::vector<std::shared_ptr<nvo::NvoInstances::NvoInstance::VirtualNetwork> > virtual_network;
        
}; // NvoInstances::NvoInstance


class NvoInstances::NvoInstance::VirtualNetwork : public Entity
{
    public:
        VirtualNetwork();
        ~VirtualNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vni_start; //type: uint32
        YLeaf vni_end; //type: uint32
        YLeaf suppress_arp; //type: empty
        YLeaf bgp; //type: empty
        YLeaf end_host_discovery; //type: EndHostDiscoveryEnum
        //type: string (refers to ietf_routing::Routing::RoutingInstance::name)
        YLeaf routing_instance;
        class Peers; //type: NvoInstances::NvoInstance::VirtualNetwork::Peers
        class Multicast; //type: NvoInstances::NvoInstance::VirtualNetwork::Multicast

        std::shared_ptr<nvo::NvoInstances::NvoInstance::VirtualNetwork::Multicast> multicast;
        std::vector<std::shared_ptr<nvo::NvoInstances::NvoInstance::VirtualNetwork::Peers> > peers;
                class EndHostDiscoveryEnum;

}; // NvoInstances::NvoInstance::VirtualNetwork


class NvoInstances::NvoInstance::VirtualNetwork::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_ip; //type: string

}; // NvoInstances::NvoInstance::VirtualNetwork::Peers


class NvoInstances::NvoInstance::VirtualNetwork::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast_group_min; //type: string
        YLeaf multicast_group_max; //type: string

}; // NvoInstances::NvoInstance::VirtualNetwork::Multicast

class NvgreTypeIdentity : public nvo::OverlayEncapTypeIdentity, virtual Identity
{
    public:
        NvgreTypeIdentity();
        ~NvgreTypeIdentity();


}; // NvgreTypeIdentity

class VxlanTypeIdentity : public nvo::OverlayEncapTypeIdentity, virtual Identity
{
    public:
        VxlanTypeIdentity();
        ~VxlanTypeIdentity();


}; // VxlanTypeIdentity

class NvoInstances::NvoInstance::VirtualNetwork::EndHostDiscoveryEnum : public Enum
{
    public:
        static const Enum::YLeaf flood_and_learn;
        static const Enum::YLeaf bgp;

};


}
}

#endif /* _NVO_ */

