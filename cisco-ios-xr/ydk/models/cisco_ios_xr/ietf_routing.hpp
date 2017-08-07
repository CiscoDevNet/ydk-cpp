#ifndef _IETF_ROUTING_
#define _IETF_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace ietf_routing {

class RoutingProtocol : public virtual ydk::Identity
{
    public:
        RoutingProtocol();
        ~RoutingProtocol();


}; // RoutingProtocol

class RoutingInstance : public virtual ydk::Identity
{
    public:
        RoutingInstance();
        ~RoutingInstance();


}; // RoutingInstance

class AddressFamily : public virtual ydk::Identity
{
    public:
        AddressFamily();
        ~AddressFamily();


}; // AddressFamily

class RoutingState : public ydk::Entity
{
    public:
        RoutingState();
        ~RoutingState();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class RoutingInstance; //type: RoutingState::RoutingInstance

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance> > routing_instance;
        
}; // RoutingState


class RoutingState::RoutingInstance : public ydk::Entity
{
    public:
        RoutingInstance();
        ~RoutingInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: RoutingInstance
        ydk::YLeaf router_id; //type: string
        class Interfaces; //type: RoutingState::RoutingInstance::Interfaces
        class RoutingProtocols; //type: RoutingState::RoutingInstance::RoutingProtocols
        class Ribs; //type: RoutingState::RoutingInstance::Ribs

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Interfaces> interfaces;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs> ribs;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols> routing_protocols;
        
}; // RoutingState::RoutingInstance


class RoutingState::RoutingInstance::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
        ydk::YLeafList interface;

}; // RoutingState::RoutingInstance::Interfaces


class RoutingState::RoutingInstance::RoutingProtocols : public ydk::Entity
{
    public:
        RoutingProtocols();
        ~RoutingProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoutingProtocol; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol> > routing_protocol;
        
}; // RoutingState::RoutingInstance::RoutingProtocols


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol : public ydk::Entity
{
    public:
        RoutingProtocol();
        ~RoutingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RoutingProtocol
        ydk::YLeaf name; //type: string
        class Ospf; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf> ospf;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_mode; //type: OperationMode
        class Instance; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance> > instance;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: AddressFamily
        ydk::YLeaf router_id; //type: string
        class Area; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area
        class AsScopeLsas; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area> > area;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas> > as_scope_lsas;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: one of string, uint32
        class Interfaces; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces
        class AreaScopeLsas; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas> > area_scope_lsas;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces> > interfaces;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf network_type; //type: NetworkType
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf node_flag; //type: boolean
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf transmit_delay; //type: uint16
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf lls; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf bfd; //type: boolean
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf state; //type: string
        ydk::YLeaf hello_timer; //type: uint32
        ydk::YLeaf wait_timer; //type: uint32
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        class MultiArea; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea
        class StaticNeighbors; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors
        class FastReroute; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute
        class TtlSecurity; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity
        class Authentication; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication
        class Neighbor; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor
        class LinkScopeLsas; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication> authentication;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute> fast_reroute;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas> > link_scope_lsas;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea> multi_area;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor> > neighbor;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors> static_neighbors;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology> > topology;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity> ttl_security;
                class NetworkType;

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multi_area_id; //type: one of string, uint32
        ydk::YLeaf cost; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors : public ydk::Entity
{
    public:
        StaticNeighbors();
        ~StaticNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor> > neighbor;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint16
        ydk::YLeaf priority; //type: uint8

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lfa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa> lfa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa : public ydk::Entity
{
    public:
        Lfa();
        ~Lfa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf candidate_disabled; //type: boolean
        ydk::YLeaf enabled; //type: boolean
        class RemoteLfa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa> remote_lfa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hops; //type: uint8

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa; //type: string
        //type: string (refers to ietf_key_chain::KeyChains::name)
        ydk::YLeaf key_chain;
        ydk::YLeaf key; //type: string
        class CryptoAlgorithm; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm> crypto_algorithm;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm : public ydk::Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hmac_sha1_12; //type: empty
        ydk::YLeaf hmac_sha1_20; //type: empty
        ydk::YLeaf md5; //type: empty
        ydk::YLeaf sha_1; //type: empty
        ydk::YLeaf hmac_sha_1; //type: empty
        ydk::YLeaf hmac_sha_256; //type: empty
        ydk::YLeaf hmac_sha_384; //type: empty
        ydk::YLeaf hmac_sha_512; //type: empty

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf state; //type: NbrStateType

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas : public ydk::Entity
{
    public:
        LinkScopeLsas();
        ~LinkScopeLsas();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint8
        class LinkScopeLsa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa> > link_scope_lsa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa : public ydk::Entity
{
    public:
        LinkScopeLsa();
        ~LinkScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: one of string, uint32
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf decoded_completed; //type: boolean
        ydk::YLeaf raw_data; //type: string
        class Ospfv2; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2
        class Ospfv3; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2> ospfv2;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3> ospfv3;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2 : public ydk::Entity
{
    public:
        Ospfv2();
        ~Ospfv2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: Options
        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf opaque_type; //type: uint8
        ydk::YLeaf opaque_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body : public ydk::Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Router; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router
        class Network; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network
        class Summary; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary
        class External; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External
        class Opaque; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External> external;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network> network;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque> opaque;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router> router;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary> summary;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf num_of_links; //type: uint16
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: one of string, uint32
        ydk::YLeaf type; //type: uint8
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        ydk::YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External : public ydk::Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque : public ydk::Entity
{
    public:
        Opaque();
        ~Opaque();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UnknownTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv
        class RouterAddressTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv
        class LinkTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv> link_tlv;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv> router_address_tlv;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv> > unknown_tlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv : public ydk::Entity
{
    public:
        RouterAddressTlv();
        ~RouterAddressTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_address; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv : public ydk::Entity
{
    public:
        LinkTlv();
        ~LinkTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: uint8
        ydk::YLeaf link_id; //type: string
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf max_bandwidth; //type: decimal64
        ydk::YLeaf max_reservable_bandwidth; //type: decimal64
        ydk::YLeaf unreserved_bandwidth; //type: decimal64
        ydk::YLeaf admin_group; //type: uint32
        ydk::YLeafList local_if_ipv4_addr; //type: list of  string
        ydk::YLeafList local_remote_ipv4_addr; //type: list of  string
        class UnknownSubtlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv> > unknown_subtlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv : public ydk::Entity
{
    public:
        UnknownSubtlv();
        ~UnknownSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf options; //type: Options

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body : public ydk::Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Router; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router
        class Network; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network
        class InterAreaPrefix; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix
        class InterAreaRouter; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter
        class AsExternal; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal
        class Nssa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link
        class IntraAreaPrefix; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal> as_external;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix> inter_area_prefix;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter> inter_area_router;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix> intra_area_prefix;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link> link;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network> network;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa> nssa;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router> router;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf options; //type: Options
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint32
        ydk::YLeaf neighbor_router_id; //type: string
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: Options
        ydk::YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix : public ydk::Entity
{
    public:
        InterAreaPrefix();
        ~InterAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter : public ydk::Entity
{
    public:
        InterAreaRouter();
        ~InterAreaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: Options
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf destination_router_id; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal : public ydk::Entity
{
    public:
        AsExternal();
        ~AsExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_priority; //type: uint8
        ydk::YLeaf options; //type: Options
        ydk::YLeaf link_local_interface_address; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint32
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix : public ydk::Entity
{
    public:
        IntraAreaPrefix();
        ~IntraAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf referenced_link_state_id; //type: uint32
        ydk::YLeaf referenced_adv_router; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint16
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string
        ydk::YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_routing::Routing::RoutingInstance::Ribs::Rib::name)
        ydk::YLeaf name;

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas : public ydk::Entity
{
    public:
        AreaScopeLsas();
        ~AreaScopeLsas();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint8
        class AreaScopeLsa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa> > area_scope_lsa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa : public ydk::Entity
{
    public:
        AreaScopeLsa();
        ~AreaScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: one of string, uint32
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf decoded_completed; //type: boolean
        ydk::YLeaf raw_data; //type: string
        class Ospfv2; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2
        class Ospfv3; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2> ospfv2;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3> ospfv3;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2 : public ydk::Entity
{
    public:
        Ospfv2();
        ~Ospfv2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: Options
        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf opaque_type; //type: uint8
        ydk::YLeaf opaque_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body : public ydk::Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Router; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router
        class Network; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network
        class Summary; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary
        class External; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External
        class Opaque; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External> external;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network> network;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque> opaque;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router> router;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary> summary;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf num_of_links; //type: uint16
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: one of string, uint32
        ydk::YLeaf type; //type: uint8
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        ydk::YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External : public ydk::Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque : public ydk::Entity
{
    public:
        Opaque();
        ~Opaque();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UnknownTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv
        class RouterAddressTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv
        class LinkTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv> link_tlv;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv> router_address_tlv;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv> > unknown_tlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv : public ydk::Entity
{
    public:
        RouterAddressTlv();
        ~RouterAddressTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_address; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv : public ydk::Entity
{
    public:
        LinkTlv();
        ~LinkTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: uint8
        ydk::YLeaf link_id; //type: string
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf max_bandwidth; //type: decimal64
        ydk::YLeaf max_reservable_bandwidth; //type: decimal64
        ydk::YLeaf unreserved_bandwidth; //type: decimal64
        ydk::YLeaf admin_group; //type: uint32
        ydk::YLeafList local_if_ipv4_addr; //type: list of  string
        ydk::YLeafList local_remote_ipv4_addr; //type: list of  string
        class UnknownSubtlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv> > unknown_subtlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv : public ydk::Entity
{
    public:
        UnknownSubtlv();
        ~UnknownSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf options; //type: Options

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body : public ydk::Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Router; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router
        class Network; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network
        class InterAreaPrefix; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix
        class InterAreaRouter; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter
        class AsExternal; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal
        class Nssa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link
        class IntraAreaPrefix; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal> as_external;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix> inter_area_prefix;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter> inter_area_router;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix> intra_area_prefix;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link> link;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network> network;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa> nssa;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router> router;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf options; //type: Options
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint32
        ydk::YLeaf neighbor_router_id; //type: string
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: Options
        ydk::YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix : public ydk::Entity
{
    public:
        InterAreaPrefix();
        ~InterAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter : public ydk::Entity
{
    public:
        InterAreaRouter();
        ~InterAreaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: Options
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf destination_router_id; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal : public ydk::Entity
{
    public:
        AsExternal();
        ~AsExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_priority; //type: uint8
        ydk::YLeaf options; //type: Options
        ydk::YLeaf link_local_interface_address; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint32
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix : public ydk::Entity
{
    public:
        IntraAreaPrefix();
        ~IntraAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf referenced_link_state_id; //type: uint32
        ydk::YLeaf referenced_adv_router; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint16
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string
        ydk::YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas : public ydk::Entity
{
    public:
        AsScopeLsas();
        ~AsScopeLsas();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint8
        class AsScopeLsa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa> > as_scope_lsa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa : public ydk::Entity
{
    public:
        AsScopeLsa();
        ~AsScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: one of string, uint32
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf decoded_completed; //type: boolean
        ydk::YLeaf raw_data; //type: string
        class Ospfv2; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2
        class Ospfv3; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2> ospfv2;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3> ospfv3;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2 : public ydk::Entity
{
    public:
        Ospfv2();
        ~Ospfv2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: Options
        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf opaque_type; //type: uint8
        ydk::YLeaf opaque_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body : public ydk::Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Router; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router
        class Network; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network
        class Summary; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary
        class External; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External
        class Opaque; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External> external;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network> network;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque> opaque;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router> router;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary> summary;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf num_of_links; //type: uint16
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: one of string, uint32
        ydk::YLeaf type; //type: uint8
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        ydk::YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External : public ydk::Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque : public ydk::Entity
{
    public:
        Opaque();
        ~Opaque();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UnknownTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv
        class RouterAddressTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv
        class LinkTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv> link_tlv;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv> router_address_tlv;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv> > unknown_tlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv : public ydk::Entity
{
    public:
        RouterAddressTlv();
        ~RouterAddressTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_address; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv : public ydk::Entity
{
    public:
        LinkTlv();
        ~LinkTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: uint8
        ydk::YLeaf link_id; //type: string
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf max_bandwidth; //type: decimal64
        ydk::YLeaf max_reservable_bandwidth; //type: decimal64
        ydk::YLeaf unreserved_bandwidth; //type: decimal64
        ydk::YLeaf admin_group; //type: uint32
        ydk::YLeafList local_if_ipv4_addr; //type: list of  string
        ydk::YLeafList local_remote_ipv4_addr; //type: list of  string
        class UnknownSubtlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv> > unknown_subtlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv : public ydk::Entity
{
    public:
        UnknownSubtlv();
        ~UnknownSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf options; //type: Options

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body : public ydk::Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Router; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router
        class Network; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network
        class InterAreaPrefix; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix
        class InterAreaRouter; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter
        class AsExternal; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal
        class Nssa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link
        class IntraAreaPrefix; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal> as_external;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix> inter_area_prefix;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter> inter_area_router;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix> intra_area_prefix;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link> link;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network> network;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa> nssa;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router> router;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf options; //type: Options
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint32
        ydk::YLeaf neighbor_router_id; //type: string
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: Options
        ydk::YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix : public ydk::Entity
{
    public:
        InterAreaPrefix();
        ~InterAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter : public ydk::Entity
{
    public:
        InterAreaRouter();
        ~InterAreaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: Options
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf destination_router_id; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal : public ydk::Entity
{
    public:
        AsExternal();
        ~AsExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf flags; //type: Flags
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_priority; //type: uint8
        ydk::YLeaf options; //type: Options
        ydk::YLeaf link_local_interface_address; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint32
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix : public ydk::Entity
{
    public:
        IntraAreaPrefix();
        ~IntraAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf referenced_link_state_id; //type: uint32
        ydk::YLeaf referenced_adv_router; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint16
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string
        ydk::YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_routing::Routing::RoutingInstance::Ribs::Rib::name)
        ydk::YLeaf name;
        class Area; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area> > area;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: one of string, uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area


class RoutingState::RoutingInstance::Ribs : public ydk::Entity
{
    public:
        Ribs();
        ~Ribs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rib; //type: RoutingState::RoutingInstance::Ribs::Rib

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs::Rib> > rib;
        
}; // RoutingState::RoutingInstance::Ribs


class RoutingState::RoutingInstance::Ribs::Rib : public ydk::Entity
{
    public:
        Rib();
        ~Rib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address_family; //type: AddressFamily
        ydk::YLeaf default_rib; //type: boolean
        class Routes; //type: RoutingState::RoutingInstance::Ribs::Rib::Routes

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs::Rib::Routes> routes;
        
}; // RoutingState::RoutingInstance::Ribs::Rib


class RoutingState::RoutingInstance::Ribs::Rib::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: RoutingState::RoutingInstance::Ribs::Rib::Routes::Route

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs::Rib::Routes::Route> > route;
        
}; // RoutingState::RoutingInstance::Ribs::Rib::Routes


class RoutingState::RoutingInstance::Ribs::Rib::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf route_preference; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf source_protocol; //type: RoutingProtocol
        ydk::YLeaf active; //type: empty
        ydk::YLeaf last_updated; //type: string
        ydk::YLeaf update_source; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf route_type; //type: RouteType
        class NextHop; //type: RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop> next_hop;
                class RouteType;

}; // RoutingState::RoutingInstance::Ribs::Rib::Routes::Route


class RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf special_next_hop; //type: SpecialNextHop
        class SpecialNextHop;

}; // RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop

class Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class RoutingInstance; //type: Routing::RoutingInstance

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance> > routing_instance;
        
}; // Routing


class Routing::RoutingInstance : public ydk::Entity
{
    public:
        RoutingInstance();
        ~RoutingInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: RoutingInstance
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf description; //type: string
        class Interfaces; //type: Routing::RoutingInstance::Interfaces
        class RoutingProtocols; //type: Routing::RoutingInstance::RoutingProtocols
        class Ribs; //type: Routing::RoutingInstance::Ribs

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::Interfaces> interfaces;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::Ribs> ribs;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols> routing_protocols;
        
}; // Routing::RoutingInstance


class Routing::RoutingInstance::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeafList interface;

}; // Routing::RoutingInstance::Interfaces


class Routing::RoutingInstance::RoutingProtocols : public ydk::Entity
{
    public:
        RoutingProtocols();
        ~RoutingProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoutingProtocol; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol> > routing_protocol;
        
}; // Routing::RoutingInstance::RoutingProtocols


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol : public ydk::Entity
{
    public:
        RoutingProtocol();
        ~RoutingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RoutingProtocol
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        class StaticRoutes; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes
        class Ospf; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf> ospf;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes> static_routes;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes : public ydk::Entity
{
    public:
        StaticRoutes();
        ~StaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4
        class Ipv6; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4> ipv4;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6> ipv6;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route> > route;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf description; //type: string
        class NextHop; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop> next_hop;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf special_next_hop; //type: SpecialNextHop
        ydk::YLeaf next_hop_address; //type: string
        class SpecialNextHop;

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route> > route;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf description; //type: string
        class NextHop; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop> next_hop;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf special_next_hop; //type: SpecialNextHop
        ydk::YLeaf next_hop_address; //type: string
        class SpecialNextHop;

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_mode; //type: OperationMode
        class AllInstancesInherit; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit
        class Instance; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit> all_instances_inherit;
        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance> > instance;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit : public ydk::Entity
{
    public:
        AllInstancesInherit();
        ~AllInstancesInherit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Area; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area
        class Interface; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area> area;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface> interface;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: AddressFamily
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf enable; //type: boolean
        class AdminDistance; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance
        class Nsr; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr
        class GracefulRestart; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart
        class AutoCost; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost
        class SpfControl; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl
        class DatabaseControl; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl
        class ReloadControl; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl
        class Mpls; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls
        class FastReroute; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute
        class AllAreasInherit; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit
        class Area; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area
        class Topology; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance> admin_distance;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit> all_areas_inherit;
        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area> > area;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost> auto_cost;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl> database_control;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute> fast_reroute;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart> graceful_restart;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls> mpls;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr> nsr;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl> reload_control;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl> spf_control;
        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology> > topology;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance : public ydk::Entity
{
    public:
        AdminDistance();
        ~AdminDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intra_area; //type: uint8
        ydk::YLeaf inter_area; //type: uint8
        ydk::YLeaf internal; //type: uint8
        ydk::YLeaf external; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf helper_enable; //type: boolean
        ydk::YLeaf restart_interval; //type: uint16
        ydk::YLeaf helper_strict_lsa_checking; //type: boolean

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost : public ydk::Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf reference_bandwidth; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl : public ydk::Entity
{
    public:
        SpfControl();
        ~SpfControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf paths; //type: uint16

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl : public ydk::Entity
{
    public:
        DatabaseControl();
        ~DatabaseControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_lsa; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl : public ydk::Entity
{
    public:
        ReloadControl();
        ~ReloadControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeRid; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid
        class Ldp; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp> ldp;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid> te_rid;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid : public ydk::Entity
{
    public:
        TeRid();
        ~TeRid();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf router_id; //type: string

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_sync; //type: boolean
        ydk::YLeaf autoconfig; //type: boolean

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lfa; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa> lfa;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa : public ydk::Entity
{
    public:
        Lfa();
        ~Lfa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit : public ydk::Entity
{
    public:
        AllAreasInherit();
        ~AllAreasInherit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Area; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area
        class Interface; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area> area;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface> interface;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: one of string, uint32
        ydk::YLeaf area_type; //type: AreaType
        ydk::YLeaf summary; //type: boolean
        ydk::YLeaf default_cost; //type: uint32
        class Range; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range
        class AllInterfacesInherit; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit
        class VirtualLink; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink
        class ShamLink; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink
        class Interface; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit> all_interfaces_inherit;
        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface> > interface;
        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range> > range;
        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink> > sham_link;
        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink> > virtual_link;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf advertise; //type: boolean
        ydk::YLeaf cost; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit : public ydk::Entity
{
    public:
        AllInterfacesInherit();
        ~AllInterfacesInherit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface> interface;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf transmit_delay; //type: uint16
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf lls; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf bfd; //type: boolean
        ydk::YLeaf enable; //type: boolean
        class TtlSecurity; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity
        class Authentication; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication> authentication;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity> ttl_security;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hops; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa; //type: string
        //type: string (refers to ietf_key_chain::KeyChains::name)
        ydk::YLeaf key_chain;
        ydk::YLeaf key; //type: string
        class CryptoAlgorithm; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm> crypto_algorithm;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm : public ydk::Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hmac_sha1_12; //type: empty
        ydk::YLeaf hmac_sha1_20; //type: empty
        ydk::YLeaf md5; //type: empty
        ydk::YLeaf sha_1; //type: empty
        ydk::YLeaf hmac_sha_1; //type: empty
        ydk::YLeaf hmac_sha_256; //type: empty
        ydk::YLeaf hmac_sha_384; //type: empty
        ydk::YLeaf hmac_sha_512; //type: empty

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink : public ydk::Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf transmit_delay; //type: uint16
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf lls; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf bfd; //type: boolean
        ydk::YLeaf enable; //type: boolean
        class TtlSecurity; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity
        class Authentication; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication> authentication;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity> ttl_security;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hops; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa; //type: string
        //type: string (refers to ietf_key_chain::KeyChains::name)
        ydk::YLeaf key_chain;
        ydk::YLeaf key; //type: string
        class CryptoAlgorithm; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm> crypto_algorithm;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm : public ydk::Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hmac_sha1_12; //type: empty
        ydk::YLeaf hmac_sha1_20; //type: empty
        ydk::YLeaf md5; //type: empty
        ydk::YLeaf sha_1; //type: empty
        ydk::YLeaf hmac_sha_1; //type: empty
        ydk::YLeaf hmac_sha_256; //type: empty
        ydk::YLeaf hmac_sha_384; //type: empty
        ydk::YLeaf hmac_sha_512; //type: empty

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf network_type; //type: NetworkType
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf node_flag; //type: boolean
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf transmit_delay; //type: uint16
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf lls; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf bfd; //type: boolean
        ydk::YLeaf enable; //type: boolean
        class MultiArea; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea
        class StaticNeighbors; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors
        class FastReroute; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute
        class TtlSecurity; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity
        class Authentication; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication
        class Topology; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication> authentication;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute> fast_reroute;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea> multi_area;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors> static_neighbors;
        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology> > topology;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity> ttl_security;
                class NetworkType;

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multi_area_id; //type: one of string, uint32
        ydk::YLeaf cost; //type: uint16

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors : public ydk::Entity
{
    public:
        StaticNeighbors();
        ~StaticNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor> > neighbor;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint16
        ydk::YLeaf priority; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lfa; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa> lfa;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa : public ydk::Entity
{
    public:
        Lfa();
        ~Lfa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf candidate_disabled; //type: boolean
        ydk::YLeaf enabled; //type: boolean
        class RemoteLfa; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa> remote_lfa;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hops; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa; //type: string
        //type: string (refers to ietf_key_chain::KeyChains::name)
        ydk::YLeaf key_chain;
        ydk::YLeaf key; //type: string
        class CryptoAlgorithm; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm> crypto_algorithm;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm : public ydk::Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hmac_sha1_12; //type: empty
        ydk::YLeaf hmac_sha1_20; //type: empty
        ydk::YLeaf md5; //type: empty
        ydk::YLeaf sha_1; //type: empty
        ydk::YLeaf hmac_sha_1; //type: empty
        ydk::YLeaf hmac_sha_256; //type: empty
        ydk::YLeaf hmac_sha_384; //type: empty
        ydk::YLeaf hmac_sha_512; //type: empty

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_routing::Routing::RoutingInstance::Ribs::Rib::name)
        ydk::YLeaf name;
        ydk::YLeaf cost; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_routing::Routing::RoutingInstance::Ribs::Rib::name)
        ydk::YLeaf name;
        class Area; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area> > area;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: one of string, uint32
        ydk::YLeaf area_type; //type: AreaType
        ydk::YLeaf summary; //type: boolean
        ydk::YLeaf default_cost; //type: uint32
        class Range; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range> > range;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf advertise; //type: boolean
        ydk::YLeaf cost; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range


class Routing::RoutingInstance::Ribs : public ydk::Entity
{
    public:
        Ribs();
        ~Ribs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rib; //type: Routing::RoutingInstance::Ribs::Rib

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::Ribs::Rib> > rib;
        
}; // Routing::RoutingInstance::Ribs


class Routing::RoutingInstance::Ribs::Rib : public ydk::Entity
{
    public:
        Rib();
        ~Rib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address_family; //type: AddressFamily
        ydk::YLeaf description; //type: string

}; // Routing::RoutingInstance::Ribs::Rib

class FibRoute : public ydk::Entity
{
    public:
        FibRoute();
        ~FibRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Input; //type: FibRoute::Input
        class Output; //type: FibRoute::Output

        std::shared_ptr<ietf_routing::FibRoute::Input> input;
        std::shared_ptr<ietf_routing::FibRoute::Output> output;
        
}; // FibRoute


class FibRoute::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf routing_instance_name; //type: string
        class DestinationAddress; //type: FibRoute::Input::DestinationAddress

        std::shared_ptr<ietf_routing::FibRoute::Input::DestinationAddress> destination_address;
        
}; // FibRoute::Input


class FibRoute::Input::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: AddressFamily
        ydk::YLeaf ietf_ipv4_unicast_routing_address; //type: string
        ydk::YLeaf ietf_ipv6_unicast_routing_address; //type: string

}; // FibRoute::Input::DestinationAddress


class FibRoute::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: FibRoute::Output::Route

        std::shared_ptr<ietf_routing::FibRoute::Output::Route> route;
        
}; // FibRoute::Output


class FibRoute::Output::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: AddressFamily
        ydk::YLeaf source_protocol; //type: RoutingProtocol
        ydk::YLeaf active; //type: empty
        ydk::YLeaf last_updated; //type: string
        ydk::YLeaf ietf_ipv4_unicast_routing_destination_prefix; //type: string
        ydk::YLeaf ietf_ipv6_unicast_routing_destination_prefix; //type: string
        class NextHop; //type: FibRoute::Output::Route::NextHop

        std::shared_ptr<ietf_routing::FibRoute::Output::Route::NextHop> next_hop;
        
}; // FibRoute::Output::Route


class FibRoute::Output::Route::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf ietf_routing_next_hop_address; //type: string
        ydk::YLeaf ietf_ipv4_unicast_routing_next_hop_address; //type: string
        ydk::YLeaf ietf_ipv6_unicast_routing_next_hop_address; //type: string
        ydk::YLeaf special_next_hop; //type: SpecialNextHop
        class SpecialNextHop;

}; // FibRoute::Output::Route::NextHop

class Direct : public ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Direct();
        ~Direct();


}; // Direct

class Ipv6 : public ietf_routing::AddressFamily, virtual ydk::Identity
{
    public:
        Ipv6();
        ~Ipv6();


}; // Ipv6

class VrfRoutingInstance : public ietf_routing::RoutingInstance, virtual ydk::Identity
{
    public:
        VrfRoutingInstance();
        ~VrfRoutingInstance();


}; // VrfRoutingInstance

class DefaultRoutingInstance : public ietf_routing::RoutingInstance, virtual ydk::Identity
{
    public:
        DefaultRoutingInstance();
        ~DefaultRoutingInstance();


}; // DefaultRoutingInstance

class Ipv4 : public ietf_routing::AddressFamily, virtual ydk::Identity
{
    public:
        Ipv4();
        ~Ipv4();


}; // Ipv4

class Static_ : public ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Static_();
        ~Static_();


}; // Static_

class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf point_to_point;

};

class RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf intra_area;
        static const ydk::Enum::YLeaf inter_area;
        static const ydk::Enum::YLeaf external_1;
        static const ydk::Enum::YLeaf external_2;
        static const ydk::Enum::YLeaf nssa_1;
        static const ydk::Enum::YLeaf nssa_2;

};

class RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blackhole;
        static const ydk::Enum::YLeaf unreachable;
        static const ydk::Enum::YLeaf prohibit;
        static const ydk::Enum::YLeaf receive;

};

class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blackhole;
        static const ydk::Enum::YLeaf unreachable;
        static const ydk::Enum::YLeaf prohibit;
        static const ydk::Enum::YLeaf receive;

};

class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blackhole;
        static const ydk::Enum::YLeaf unreachable;
        static const ydk::Enum::YLeaf prohibit;
        static const ydk::Enum::YLeaf receive;

};

class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf point_to_point;

};

class FibRoute::Output::Route::NextHop::SpecialNextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blackhole;
        static const ydk::Enum::YLeaf unreachable;
        static const ydk::Enum::YLeaf prohibit;
        static const ydk::Enum::YLeaf receive;

};


}
}

#endif /* _IETF_ROUTING_ */

