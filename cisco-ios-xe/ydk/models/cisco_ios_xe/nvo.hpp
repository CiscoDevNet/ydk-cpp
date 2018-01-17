#ifndef _NVO_
#define _NVO_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace nvo {

class OverlayEncapType : public virtual ydk::Identity
{
    public:
        OverlayEncapType();
        ~OverlayEncapType();


}; // OverlayEncapType

class NvoInstances : public ydk::Entity
{
    public:
        NvoInstances();
        ~NvoInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class NvoInstance; //type: NvoInstances::NvoInstance

        std::vector<std::shared_ptr<cisco_ios_xe::nvo::NvoInstances::NvoInstance> > nvo_instance;
        
}; // NvoInstances


class NvoInstances::NvoInstance : public ydk::Entity
{
    public:
        NvoInstance();
        ~NvoInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nvo_id; //type: uint16
        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf source_interface;
        ydk::YLeaf overlay_encapsulation; //type: OverlayEncapType
        class VirtualNetwork; //type: NvoInstances::NvoInstance::VirtualNetwork

        std::vector<std::shared_ptr<cisco_ios_xe::nvo::NvoInstances::NvoInstance::VirtualNetwork> > virtual_network;
        
}; // NvoInstances::NvoInstance


class NvoInstances::NvoInstance::VirtualNetwork : public ydk::Entity
{
    public:
        VirtualNetwork();
        ~VirtualNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vni_start; //type: uint32
        ydk::YLeaf vni_end; //type: uint32
        ydk::YLeaf end_host_discovery; //type: EndHostDiscovery
        //type: string (refers to ietf::ietf_routing::Routing::RoutingInstance::name)
        ydk::YLeaf routing_instance;
        ydk::YLeaf suppress_arp; //type: empty
        ydk::YLeaf bgp; //type: empty
        class Peers; //type: NvoInstances::NvoInstance::VirtualNetwork::Peers
        class Multicast; //type: NvoInstances::NvoInstance::VirtualNetwork::Multicast

        std::vector<std::shared_ptr<cisco_ios_xe::nvo::NvoInstances::NvoInstance::VirtualNetwork::Peers> > peers;
        std::shared_ptr<cisco_ios_xe::nvo::NvoInstances::NvoInstance::VirtualNetwork::Multicast> multicast;
                class EndHostDiscovery;

}; // NvoInstances::NvoInstance::VirtualNetwork


class NvoInstances::NvoInstance::VirtualNetwork::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_ip; //type: string

}; // NvoInstances::NvoInstance::VirtualNetwork::Peers


class NvoInstances::NvoInstance::VirtualNetwork::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_group_min; //type: string
        ydk::YLeaf multicast_group_max; //type: string

}; // NvoInstances::NvoInstance::VirtualNetwork::Multicast

class VxlanType : public cisco_ios_xe::nvo::OverlayEncapType, virtual ydk::Identity
{
    public:
        VxlanType();
        ~VxlanType();


}; // VxlanType

class NvgreType : public cisco_ios_xe::nvo::OverlayEncapType, virtual ydk::Identity
{
    public:
        NvgreType();
        ~NvgreType();


}; // NvgreType

class NvoInstances::NvoInstance::VirtualNetwork::EndHostDiscovery : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flood_and_learn;
        static const ydk::Enum::YLeaf bgp;

};


}
}

#endif /* _NVO_ */

