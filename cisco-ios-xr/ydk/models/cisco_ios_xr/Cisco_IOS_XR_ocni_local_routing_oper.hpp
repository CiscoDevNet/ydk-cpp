#ifndef _CISCO_IOS_XR_OCNI_LOCAL_ROUTING_OPER_
#define _CISCO_IOS_XR_OCNI_LOCAL_ROUTING_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ocni_local_routing_oper {

class Ocni : public ydk::Entity
{
    public:
        Ocni();
        ~Ocni();

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

        class Vrfipv4; //type: Ocni::Vrfipv4
        class Vrfipv6; //type: Ocni::Vrfipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4> vrfipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6> vrfipv6;
        
}; // Ocni


class Ocni::Vrfipv4 : public ydk::Entity
{
    public:
        Vrfipv4();
        ~Vrfipv4();

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

        class NetworkInstances; //type: Ocni::Vrfipv4::NetworkInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4::NetworkInstances> network_instances;
        
}; // Ocni::Vrfipv4


class Ocni::Vrfipv4::NetworkInstances : public ydk::Entity
{
    public:
        NetworkInstances();
        ~NetworkInstances();

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

        class NetworkInstance; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance

        ydk::YList network_instance;
        
}; // Ocni::Vrfipv4::NetworkInstances


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance : public ydk::Entity
{
    public:
        NetworkInstance();
        ~NetworkInstance();

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

        ydk::YLeaf name; //type: string
        class Protocols; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols> protocols;
        
}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol

        ydk::YList protocol;
        
}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf name; //type: string
        class State; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State
        class StaticRoutes; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes> static_routes;
        
}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf default_metric; //type: uint32

}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes : public ydk::Entity
{
    public:
        StaticRoutes();
        ~StaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticRoute; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute

        ydk::YList static_route;
        
}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute : public ydk::Entity
{
    public:
        StaticRoute();
        ~StaticRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        class NextHops; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops
        class StaticRoutesState; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops> next_hops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState> static_routes_state;
        
}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops : public ydk::Entity
{
    public:
        NextHops();
        ~NextHops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHop; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop

        ydk::YList next_hop;
        
}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: string
        class State; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State
        class InterfaceRef; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef> interface_ref;
        
}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State> state;
        
}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf subinterface; //type: uint32

}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State


class Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState : public ydk::Entity
{
    public:
        StaticRoutesState();
        ~StaticRoutesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf set_tag; //type: string

}; // Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState


class Ocni::Vrfipv6 : public ydk::Entity
{
    public:
        Vrfipv6();
        ~Vrfipv6();

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

        class NetworkInstances; //type: Ocni::Vrfipv6::NetworkInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6::NetworkInstances> network_instances;
        
}; // Ocni::Vrfipv6


class Ocni::Vrfipv6::NetworkInstances : public ydk::Entity
{
    public:
        NetworkInstances();
        ~NetworkInstances();

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

        class NetworkInstance; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance

        ydk::YList network_instance;
        
}; // Ocni::Vrfipv6::NetworkInstances


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance : public ydk::Entity
{
    public:
        NetworkInstance();
        ~NetworkInstance();

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

        ydk::YLeaf name; //type: string
        class Protocols; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols> protocols;
        
}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol

        ydk::YList protocol;
        
}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf name; //type: string
        class State; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State
        class StaticRoutes; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes> static_routes;
        
}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf default_metric; //type: uint32

}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes : public ydk::Entity
{
    public:
        StaticRoutes();
        ~StaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticRoute; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute

        ydk::YList static_route;
        
}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute : public ydk::Entity
{
    public:
        StaticRoute();
        ~StaticRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        class NextHops; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops
        class StaticRoutesState; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops> next_hops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState> static_routes_state;
        
}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops : public ydk::Entity
{
    public:
        NextHops();
        ~NextHops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHop; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop

        ydk::YList next_hop;
        
}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: string
        class State; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State
        class InterfaceRef; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef> interface_ref;
        
}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ocni_local_routing_oper::Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State> state;
        
}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf subinterface; //type: uint32

}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State


class Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState : public ydk::Entity
{
    public:
        StaticRoutesState();
        ~StaticRoutesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf set_tag; //type: string

}; // Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState


}
}

#endif /* _CISCO_IOS_XR_OCNI_LOCAL_ROUTING_OPER_ */

