#ifndef _IETF_ROUTING_
#define _IETF_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace ietf_routing {

class RoutingProtocolIdentity : public virtual Identity
{
    public:
        RoutingProtocolIdentity();
        ~RoutingProtocolIdentity();


}; // RoutingProtocolIdentity

class RoutingInstanceIdentity : public virtual Identity
{
    public:
        RoutingInstanceIdentity();
        ~RoutingInstanceIdentity();


}; // RoutingInstanceIdentity

class AddressFamilyIdentity : public virtual Identity
{
    public:
        AddressFamilyIdentity();
        ~AddressFamilyIdentity();


}; // AddressFamilyIdentity

class RoutingState : public Entity
{
    public:
        RoutingState();
        ~RoutingState();

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

        class RoutingInstance; //type: RoutingState::RoutingInstance

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance> > routing_instance;
        
}; // RoutingState


class RoutingState::RoutingInstance : public Entity
{
    public:
        RoutingInstance();
        ~RoutingInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf type; //type: RoutingInstanceIdentity
        YLeaf router_id; //type: string
        class Interfaces; //type: RoutingState::RoutingInstance::Interfaces
        class RoutingProtocols; //type: RoutingState::RoutingInstance::RoutingProtocols
        class Ribs; //type: RoutingState::RoutingInstance::Ribs

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Interfaces> interfaces;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs> ribs;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols> routing_protocols;
        
}; // RoutingState::RoutingInstance


class RoutingState::RoutingInstance::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
        YLeafList interface;

}; // RoutingState::RoutingInstance::Interfaces


class RoutingState::RoutingInstance::RoutingProtocols : public Entity
{
    public:
        RoutingProtocols();
        ~RoutingProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RoutingProtocol; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol> > routing_protocol;
        
}; // RoutingState::RoutingInstance::RoutingProtocols


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol : public Entity
{
    public:
        RoutingProtocol();
        ~RoutingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: RoutingProtocolIdentity
        YLeaf name; //type: string
        class Ospf; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf> ospf;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operation_mode; //type: OperationModeIdentity
        class Instance; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance> > instance;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: AddressFamilyIdentity
        YLeaf router_id; //type: string
        class Area; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area
        class AsScopeLsas; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area> > area;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas> > as_scope_lsas;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: one of uint32, string
        class Interfaces; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces
        class AreaScopeLsas; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas> > area_scope_lsas;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces> > interfaces;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf network_type; //type: NetworkTypeEnum
        YLeaf passive; //type: boolean
        YLeaf demand_circuit; //type: boolean
        YLeaf node_flag; //type: boolean
        YLeaf cost; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dead_interval; //type: uint16
        YLeaf retransmit_interval; //type: uint16
        YLeaf transmit_delay; //type: uint16
        YLeaf mtu_ignore; //type: boolean
        YLeaf lls; //type: boolean
        YLeaf prefix_suppression; //type: boolean
        YLeaf bfd; //type: boolean
        YLeaf enable; //type: boolean
        YLeaf state; //type: string
        YLeaf hello_timer; //type: uint32
        YLeaf wait_timer; //type: uint32
        YLeaf dr; //type: string
        YLeaf bdr; //type: string
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
                class NetworkTypeEnum;

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multi_area_id; //type: one of uint32, string
        YLeaf cost; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors : public Entity
{
    public:
        StaticNeighbors();
        ~StaticNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor> > neighbor;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint16
        YLeaf priority; //type: uint8

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lfa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa> lfa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa : public Entity
{
    public:
        Lfa();
        ~Lfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate_disabled; //type: boolean
        YLeaf enabled; //type: boolean
        class RemoteLfa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa> remote_lfa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf hops; //type: uint8

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sa; //type: string
        //type: string (refers to ietf_key_chain::KeyChains::name)
        YLeaf key_chain;
        YLeaf key; //type: string
        class CryptoAlgorithm; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm> crypto_algorithm;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm : public Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hmac_sha1_12; //type: empty
        YLeaf hmac_sha1_20; //type: empty
        YLeaf md5; //type: empty
        YLeaf sha_1; //type: empty
        YLeaf hmac_sha_1; //type: empty
        YLeaf hmac_sha_256; //type: empty
        YLeaf hmac_sha_384; //type: empty
        YLeaf hmac_sha_512; //type: empty

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_id; //type: string
        YLeaf address; //type: string
        YLeaf dr; //type: string
        YLeaf bdr; //type: string
        YLeaf state; //type: NbrStateTypeEnum

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas : public Entity
{
    public:
        LinkScopeLsas();
        ~LinkScopeLsas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint8
        class LinkScopeLsa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa> > link_scope_lsa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa : public Entity
{
    public:
        LinkScopeLsa();
        ~LinkScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_id; //type: one of string, uint32
        YLeaf adv_router; //type: string
        YLeaf decoded_completed; //type: boolean
        YLeaf raw_data; //type: string
        class Ospfv2; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2
        class Ospfv3; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2> ospfv2;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3> ospfv3;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2 : public Entity
{
    public:
        Ospfv2();
        ~Ospfv2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: Options
        YLeaf lsa_id; //type: string
        YLeaf opaque_type; //type: uint8
        YLeaf opaque_id; //type: uint32
        YLeaf age; //type: uint16
        YLeaf type; //type: uint16
        YLeaf adv_router; //type: string
        YLeaf seq_num; //type: string
        YLeaf checksum; //type: string
        YLeaf length; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body : public Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: Flags
        YLeaf num_of_links; //type: uint16
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_id; //type: string
        YLeaf link_data; //type: one of string, uint32
        YLeaf type; //type: uint8
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mt_id; //type: uint8
        YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_mask; //type: string
        YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mt_id; //type: uint8
        YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External : public Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mt_id; //type: uint8
        YLeaf flags; //type: Flags
        YLeaf metric; //type: uint32
        YLeaf forwarding_address; //type: string
        YLeaf external_route_tag; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque : public Entity
{
    public:
        Opaque();
        ~Opaque();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UnknownTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv
        class RouterAddressTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv
        class LinkTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv> link_tlv;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv> router_address_tlv;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv> > unknown_tlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv : public Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf length; //type: uint16
        YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv : public Entity
{
    public:
        RouterAddressTlv();
        ~RouterAddressTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_address; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv : public Entity
{
    public:
        LinkTlv();
        ~LinkTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_type; //type: uint8
        YLeaf link_id; //type: string
        YLeaf te_metric; //type: uint32
        YLeaf max_bandwidth; //type: decimal64
        YLeaf max_reservable_bandwidth; //type: decimal64
        YLeaf unreserved_bandwidth; //type: decimal64
        YLeaf admin_group; //type: uint32
        YLeafList local_if_ipv4_addr; //type: list of  string
        YLeafList local_remote_ipv4_addr; //type: list of  string
        class UnknownSubtlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv> > unknown_subtlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv : public Entity
{
    public:
        UnknownSubtlv();
        ~UnknownSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf length; //type: uint16
        YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_id; //type: uint32
        YLeaf age; //type: uint16
        YLeaf type; //type: uint16
        YLeaf adv_router; //type: string
        YLeaf seq_num; //type: string
        YLeaf checksum; //type: string
        YLeaf length; //type: uint16
        YLeaf options; //type: Options

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body : public Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: Flags
        YLeaf options; //type: Options
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_id; //type: uint32
        YLeaf neighbor_interface_id; //type: uint32
        YLeaf neighbor_router_id; //type: string
        YLeaf type; //type: uint8
        YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: Options
        YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix : public Entity
{
    public:
        InterAreaPrefix();
        ~InterAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter : public Entity
{
    public:
        InterAreaRouter();
        ~InterAreaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: Options
        YLeaf metric; //type: uint32
        YLeaf destination_router_id; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal : public Entity
{
    public:
        AsExternal();
        ~AsExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf flags; //type: Flags
        YLeaf referenced_ls_type; //type: uint16
        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string
        YLeaf forwarding_address; //type: string
        YLeaf external_route_tag; //type: uint32
        YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa : public Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf flags; //type: Flags
        YLeaf referenced_ls_type; //type: uint16
        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string
        YLeaf forwarding_address; //type: string
        YLeaf external_route_tag; //type: uint32
        YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtr_priority; //type: uint8
        YLeaf options; //type: Options
        YLeaf link_local_interface_address; //type: string
        YLeaf num_of_prefixes; //type: uint32
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix : public Entity
{
    public:
        IntraAreaPrefix();
        ~IntraAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf referenced_ls_type; //type: uint16
        YLeaf referenced_link_state_id; //type: uint32
        YLeaf referenced_adv_router; //type: string
        YLeaf num_of_prefixes; //type: uint16
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string
        YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_routing::Routing::RoutingInstance::Ribs::Rib::name)
        YLeaf name;

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas : public Entity
{
    public:
        AreaScopeLsas();
        ~AreaScopeLsas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint8
        class AreaScopeLsa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa> > area_scope_lsa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa : public Entity
{
    public:
        AreaScopeLsa();
        ~AreaScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_id; //type: one of string, uint32
        YLeaf adv_router; //type: string
        YLeaf decoded_completed; //type: boolean
        YLeaf raw_data; //type: string
        class Ospfv2; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2
        class Ospfv3; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2> ospfv2;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3> ospfv3;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2 : public Entity
{
    public:
        Ospfv2();
        ~Ospfv2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: Options
        YLeaf lsa_id; //type: string
        YLeaf opaque_type; //type: uint8
        YLeaf opaque_id; //type: uint32
        YLeaf age; //type: uint16
        YLeaf type; //type: uint16
        YLeaf adv_router; //type: string
        YLeaf seq_num; //type: string
        YLeaf checksum; //type: string
        YLeaf length; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body : public Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: Flags
        YLeaf num_of_links; //type: uint16
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_id; //type: string
        YLeaf link_data; //type: one of string, uint32
        YLeaf type; //type: uint8
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mt_id; //type: uint8
        YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_mask; //type: string
        YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mt_id; //type: uint8
        YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External : public Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mt_id; //type: uint8
        YLeaf flags; //type: Flags
        YLeaf metric; //type: uint32
        YLeaf forwarding_address; //type: string
        YLeaf external_route_tag; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque : public Entity
{
    public:
        Opaque();
        ~Opaque();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UnknownTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv
        class RouterAddressTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv
        class LinkTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv> link_tlv;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv> router_address_tlv;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv> > unknown_tlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv : public Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf length; //type: uint16
        YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv : public Entity
{
    public:
        RouterAddressTlv();
        ~RouterAddressTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_address; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv : public Entity
{
    public:
        LinkTlv();
        ~LinkTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_type; //type: uint8
        YLeaf link_id; //type: string
        YLeaf te_metric; //type: uint32
        YLeaf max_bandwidth; //type: decimal64
        YLeaf max_reservable_bandwidth; //type: decimal64
        YLeaf unreserved_bandwidth; //type: decimal64
        YLeaf admin_group; //type: uint32
        YLeafList local_if_ipv4_addr; //type: list of  string
        YLeafList local_remote_ipv4_addr; //type: list of  string
        class UnknownSubtlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv> > unknown_subtlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv : public Entity
{
    public:
        UnknownSubtlv();
        ~UnknownSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf length; //type: uint16
        YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_id; //type: uint32
        YLeaf age; //type: uint16
        YLeaf type; //type: uint16
        YLeaf adv_router; //type: string
        YLeaf seq_num; //type: string
        YLeaf checksum; //type: string
        YLeaf length; //type: uint16
        YLeaf options; //type: Options

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body : public Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: Flags
        YLeaf options; //type: Options
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_id; //type: uint32
        YLeaf neighbor_interface_id; //type: uint32
        YLeaf neighbor_router_id; //type: string
        YLeaf type; //type: uint8
        YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: Options
        YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix : public Entity
{
    public:
        InterAreaPrefix();
        ~InterAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter : public Entity
{
    public:
        InterAreaRouter();
        ~InterAreaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: Options
        YLeaf metric; //type: uint32
        YLeaf destination_router_id; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal : public Entity
{
    public:
        AsExternal();
        ~AsExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf flags; //type: Flags
        YLeaf referenced_ls_type; //type: uint16
        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string
        YLeaf forwarding_address; //type: string
        YLeaf external_route_tag; //type: uint32
        YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa : public Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf flags; //type: Flags
        YLeaf referenced_ls_type; //type: uint16
        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string
        YLeaf forwarding_address; //type: string
        YLeaf external_route_tag; //type: uint32
        YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtr_priority; //type: uint8
        YLeaf options; //type: Options
        YLeaf link_local_interface_address; //type: string
        YLeaf num_of_prefixes; //type: uint32
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix : public Entity
{
    public:
        IntraAreaPrefix();
        ~IntraAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf referenced_ls_type; //type: uint16
        YLeaf referenced_link_state_id; //type: uint32
        YLeaf referenced_adv_router; //type: string
        YLeaf num_of_prefixes; //type: uint16
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string
        YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas : public Entity
{
    public:
        AsScopeLsas();
        ~AsScopeLsas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint8
        class AsScopeLsa; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa> > as_scope_lsa;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa : public Entity
{
    public:
        AsScopeLsa();
        ~AsScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_id; //type: one of string, uint32
        YLeaf adv_router; //type: string
        YLeaf decoded_completed; //type: boolean
        YLeaf raw_data; //type: string
        class Ospfv2; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2
        class Ospfv3; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2> ospfv2;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3> ospfv3;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2 : public Entity
{
    public:
        Ospfv2();
        ~Ospfv2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: Options
        YLeaf lsa_id; //type: string
        YLeaf opaque_type; //type: uint8
        YLeaf opaque_id; //type: uint32
        YLeaf age; //type: uint16
        YLeaf type; //type: uint16
        YLeaf adv_router; //type: string
        YLeaf seq_num; //type: string
        YLeaf checksum; //type: string
        YLeaf length; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body : public Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: Flags
        YLeaf num_of_links; //type: uint16
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_id; //type: string
        YLeaf link_data; //type: one of string, uint32
        YLeaf type; //type: uint8
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mt_id; //type: uint8
        YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_mask; //type: string
        YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mt_id; //type: uint8
        YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External : public Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_mask; //type: string
        class Topology; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology> > topology;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mt_id; //type: uint8
        YLeaf flags; //type: Flags
        YLeaf metric; //type: uint32
        YLeaf forwarding_address; //type: string
        YLeaf external_route_tag; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque : public Entity
{
    public:
        Opaque();
        ~Opaque();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UnknownTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv
        class RouterAddressTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv
        class LinkTlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv> link_tlv;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv> router_address_tlv;
        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv> > unknown_tlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv : public Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf length; //type: uint16
        YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv : public Entity
{
    public:
        RouterAddressTlv();
        ~RouterAddressTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_address; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv : public Entity
{
    public:
        LinkTlv();
        ~LinkTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_type; //type: uint8
        YLeaf link_id; //type: string
        YLeaf te_metric; //type: uint32
        YLeaf max_bandwidth; //type: decimal64
        YLeaf max_reservable_bandwidth; //type: decimal64
        YLeaf unreserved_bandwidth; //type: decimal64
        YLeaf admin_group; //type: uint32
        YLeafList local_if_ipv4_addr; //type: list of  string
        YLeafList local_remote_ipv4_addr; //type: list of  string
        class UnknownSubtlv; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv> > unknown_subtlv;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv : public Entity
{
    public:
        UnknownSubtlv();
        ~UnknownSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf length; //type: uint16
        YLeaf value_; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header
        class Body; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body> body;
        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header> header;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_id; //type: uint32
        YLeaf age; //type: uint16
        YLeaf type; //type: uint16
        YLeaf adv_router; //type: string
        YLeaf seq_num; //type: string
        YLeaf checksum; //type: string
        YLeaf length; //type: uint16
        YLeaf options; //type: Options

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body : public Entity
{
    public:
        Body();
        ~Body();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: Flags
        YLeaf options; //type: Options
        class Link; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link> > link;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_id; //type: uint32
        YLeaf neighbor_interface_id; //type: uint32
        YLeaf neighbor_router_id; //type: string
        YLeaf type; //type: uint8
        YLeaf metric; //type: uint16

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: Options
        YLeafList attached_router; //type: list of  string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix : public Entity
{
    public:
        InterAreaPrefix();
        ~InterAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter : public Entity
{
    public:
        InterAreaRouter();
        ~InterAreaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: Options
        YLeaf metric; //type: uint32
        YLeaf destination_router_id; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal : public Entity
{
    public:
        AsExternal();
        ~AsExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf flags; //type: Flags
        YLeaf referenced_ls_type; //type: uint16
        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string
        YLeaf forwarding_address; //type: string
        YLeaf external_route_tag; //type: uint32
        YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa : public Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf flags; //type: Flags
        YLeaf referenced_ls_type; //type: uint16
        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string
        YLeaf forwarding_address; //type: string
        YLeaf external_route_tag; //type: uint32
        YLeaf referenced_link_state_id; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtr_priority; //type: uint8
        YLeaf options; //type: Options
        YLeaf link_local_interface_address; //type: string
        YLeaf num_of_prefixes; //type: uint32
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix : public Entity
{
    public:
        IntraAreaPrefix();
        ~IntraAreaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf referenced_ls_type; //type: uint16
        YLeaf referenced_link_state_id; //type: uint32
        YLeaf referenced_adv_router; //type: string
        YLeaf num_of_prefixes; //type: uint16
        class PrefixList; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList> > prefix_list;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_options; //type: string
        YLeaf metric; //type: uint32

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_routing::Routing::RoutingInstance::Ribs::Rib::name)
        YLeaf name;
        class Area; //type: RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area> > area;
        
}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology


class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: one of uint32, string

}; // RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area


class RoutingState::RoutingInstance::Ribs : public Entity
{
    public:
        Ribs();
        ~Ribs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rib; //type: RoutingState::RoutingInstance::Ribs::Rib

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs::Rib> > rib;
        
}; // RoutingState::RoutingInstance::Ribs


class RoutingState::RoutingInstance::Ribs::Rib : public Entity
{
    public:
        Rib();
        ~Rib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf address_family; //type: AddressFamilyIdentity
        YLeaf default_rib; //type: boolean
        class Routes; //type: RoutingState::RoutingInstance::Ribs::Rib::Routes

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs::Rib::Routes> routes;
        
}; // RoutingState::RoutingInstance::Ribs::Rib


class RoutingState::RoutingInstance::Ribs::Rib::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Route; //type: RoutingState::RoutingInstance::Ribs::Rib::Routes::Route

        std::vector<std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs::Rib::Routes::Route> > route;
        
}; // RoutingState::RoutingInstance::Ribs::Rib::Routes


class RoutingState::RoutingInstance::Ribs::Rib::Routes::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_prefix; //type: string
        YLeaf route_preference; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf source_protocol; //type: RoutingProtocolIdentity
        YLeaf active; //type: empty
        YLeaf last_updated; //type: string
        YLeaf update_source; //type: string
        YLeaf tag; //type: uint32
        YLeaf route_type; //type: RouteTypeEnum
        class NextHop; //type: RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop

        std::shared_ptr<ietf_routing::RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop> next_hop;
                class RouteTypeEnum;

}; // RoutingState::RoutingInstance::Ribs::Rib::Routes::Route


class RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_interface; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf special_next_hop; //type: SpecialNextHopEnum
        class SpecialNextHopEnum;

}; // RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop

class Routing : public Entity
{
    public:
        Routing();
        ~Routing();

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

        class RoutingInstance; //type: Routing::RoutingInstance

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance> > routing_instance;
        
}; // Routing


class Routing::RoutingInstance : public Entity
{
    public:
        RoutingInstance();
        ~RoutingInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf type; //type: RoutingInstanceIdentity
        YLeaf enabled; //type: boolean
        YLeaf router_id; //type: string
        YLeaf description; //type: string
        class Interfaces; //type: Routing::RoutingInstance::Interfaces
        class RoutingProtocols; //type: Routing::RoutingInstance::RoutingProtocols
        class Ribs; //type: Routing::RoutingInstance::Ribs

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::Interfaces> interfaces;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::Ribs> ribs;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols> routing_protocols;
        
}; // Routing::RoutingInstance


class Routing::RoutingInstance::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: list of  string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeafList interface;

}; // Routing::RoutingInstance::Interfaces


class Routing::RoutingInstance::RoutingProtocols : public Entity
{
    public:
        RoutingProtocols();
        ~RoutingProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RoutingProtocol; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol> > routing_protocol;
        
}; // Routing::RoutingInstance::RoutingProtocols


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol : public Entity
{
    public:
        RoutingProtocol();
        ~RoutingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: RoutingProtocolIdentity
        YLeaf name; //type: string
        YLeaf description; //type: string
        class StaticRoutes; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes
        class Ospf; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf> ospf;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes> static_routes;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes : public Entity
{
    public:
        StaticRoutes();
        ~StaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4
        class Ipv6; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4> ipv4;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6> ipv6;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Route; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route> > route;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_prefix; //type: string
        YLeaf description; //type: string
        class NextHop; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop> next_hop;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_interface; //type: string
        YLeaf special_next_hop; //type: SpecialNextHopEnum
        YLeaf next_hop_address; //type: string
        class SpecialNextHopEnum;

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Route; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route> > route;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_prefix; //type: string
        YLeaf description; //type: string
        class NextHop; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop> next_hop;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_interface; //type: string
        YLeaf special_next_hop; //type: SpecialNextHopEnum
        YLeaf next_hop_address; //type: string
        class SpecialNextHopEnum;

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operation_mode; //type: OperationModeIdentity
        class AllInstancesInherit; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit
        class Instance; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit> all_instances_inherit;
        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance> > instance;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit : public Entity
{
    public:
        AllInstancesInherit();
        ~AllInstancesInherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Area; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area
        class Interface; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area> area;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface> interface;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: AddressFamilyIdentity
        YLeaf router_id; //type: string
        YLeaf enable; //type: boolean
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


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance : public Entity
{
    public:
        AdminDistance();
        ~AdminDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf intra_area; //type: uint8
        YLeaf inter_area; //type: uint8
        YLeaf internal; //type: uint8
        YLeaf external; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf helper_enable; //type: boolean
        YLeaf restart_interval; //type: uint16
        YLeaf helper_strict_lsa_checking; //type: boolean

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost : public Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf reference_bandwidth; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl : public Entity
{
    public:
        SpfControl();
        ~SpfControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf paths; //type: uint16

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl : public Entity
{
    public:
        DatabaseControl();
        ~DatabaseControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_lsa; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl : public Entity
{
    public:
        ReloadControl();
        ~ReloadControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TeRid; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid
        class Ldp; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp> ldp;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid> te_rid;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid : public Entity
{
    public:
        TeRid();
        ~TeRid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf router_id; //type: string

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp : public Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_sync; //type: boolean
        YLeaf autoconfig; //type: boolean

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lfa; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa> lfa;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa : public Entity
{
    public:
        Lfa();
        ~Lfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit : public Entity
{
    public:
        AllAreasInherit();
        ~AllAreasInherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Area; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area
        class Interface; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area> area;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface> interface;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: one of uint32, string
        YLeaf area_type; //type: AreaTypeIdentity
        YLeaf summary; //type: boolean
        YLeaf default_cost; //type: uint32
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


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf advertise; //type: boolean
        YLeaf cost; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit : public Entity
{
    public:
        AllInterfacesInherit();
        ~AllInterfacesInherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface> interface;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink : public Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf cost; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dead_interval; //type: uint16
        YLeaf retransmit_interval; //type: uint16
        YLeaf transmit_delay; //type: uint16
        YLeaf mtu_ignore; //type: boolean
        YLeaf lls; //type: boolean
        YLeaf prefix_suppression; //type: boolean
        YLeaf bfd; //type: boolean
        YLeaf enable; //type: boolean
        class TtlSecurity; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity
        class Authentication; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication> authentication;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity> ttl_security;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf hops; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sa; //type: string
        //type: string (refers to ietf_key_chain::KeyChains::name)
        YLeaf key_chain;
        YLeaf key; //type: string
        class CryptoAlgorithm; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm> crypto_algorithm;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm : public Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hmac_sha1_12; //type: empty
        YLeaf hmac_sha1_20; //type: empty
        YLeaf md5; //type: empty
        YLeaf sha_1; //type: empty
        YLeaf hmac_sha_1; //type: empty
        YLeaf hmac_sha_256; //type: empty
        YLeaf hmac_sha_384; //type: empty
        YLeaf hmac_sha_512; //type: empty

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink : public Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_id; //type: string
        YLeaf remote_id; //type: string
        YLeaf cost; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dead_interval; //type: uint16
        YLeaf retransmit_interval; //type: uint16
        YLeaf transmit_delay; //type: uint16
        YLeaf mtu_ignore; //type: boolean
        YLeaf lls; //type: boolean
        YLeaf prefix_suppression; //type: boolean
        YLeaf bfd; //type: boolean
        YLeaf enable; //type: boolean
        class TtlSecurity; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity
        class Authentication; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication> authentication;
        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity> ttl_security;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf hops; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sa; //type: string
        //type: string (refers to ietf_key_chain::KeyChains::name)
        YLeaf key_chain;
        YLeaf key; //type: string
        class CryptoAlgorithm; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm> crypto_algorithm;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm : public Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hmac_sha1_12; //type: empty
        YLeaf hmac_sha1_20; //type: empty
        YLeaf md5; //type: empty
        YLeaf sha_1; //type: empty
        YLeaf hmac_sha_1; //type: empty
        YLeaf hmac_sha_256; //type: empty
        YLeaf hmac_sha_384; //type: empty
        YLeaf hmac_sha_512; //type: empty

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf network_type; //type: NetworkTypeEnum
        YLeaf passive; //type: boolean
        YLeaf demand_circuit; //type: boolean
        YLeaf node_flag; //type: boolean
        YLeaf cost; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dead_interval; //type: uint16
        YLeaf retransmit_interval; //type: uint16
        YLeaf transmit_delay; //type: uint16
        YLeaf mtu_ignore; //type: boolean
        YLeaf lls; //type: boolean
        YLeaf prefix_suppression; //type: boolean
        YLeaf bfd; //type: boolean
        YLeaf enable; //type: boolean
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
                class NetworkTypeEnum;

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multi_area_id; //type: one of uint32, string
        YLeaf cost; //type: uint16

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors : public Entity
{
    public:
        StaticNeighbors();
        ~StaticNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor> > neighbor;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint16
        YLeaf priority; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lfa; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa> lfa;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa : public Entity
{
    public:
        Lfa();
        ~Lfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate_disabled; //type: boolean
        YLeaf enabled; //type: boolean
        class RemoteLfa; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa> remote_lfa;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf hops; //type: uint8

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sa; //type: string
        //type: string (refers to ietf_key_chain::KeyChains::name)
        YLeaf key_chain;
        YLeaf key; //type: string
        class CryptoAlgorithm; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm

        std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm> crypto_algorithm;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm : public Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hmac_sha1_12; //type: empty
        YLeaf hmac_sha1_20; //type: empty
        YLeaf md5; //type: empty
        YLeaf sha_1; //type: empty
        YLeaf hmac_sha_1; //type: empty
        YLeaf hmac_sha_256; //type: empty
        YLeaf hmac_sha_384; //type: empty
        YLeaf hmac_sha_512; //type: empty

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_routing::Routing::RoutingInstance::Ribs::Rib::name)
        YLeaf name;
        YLeaf cost; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_routing::Routing::RoutingInstance::Ribs::Rib::name)
        YLeaf name;
        class Area; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area> > area;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: one of uint32, string
        YLeaf area_type; //type: AreaTypeIdentity
        YLeaf summary; //type: boolean
        YLeaf default_cost; //type: uint32
        class Range; //type: Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range> > range;
        
}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area


class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf advertise; //type: boolean
        YLeaf cost; //type: uint32

}; // Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range


class Routing::RoutingInstance::Ribs : public Entity
{
    public:
        Ribs();
        ~Ribs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rib; //type: Routing::RoutingInstance::Ribs::Rib

        std::vector<std::shared_ptr<ietf_routing::Routing::RoutingInstance::Ribs::Rib> > rib;
        
}; // Routing::RoutingInstance::Ribs


class Routing::RoutingInstance::Ribs::Rib : public Entity
{
    public:
        Rib();
        ~Rib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf address_family; //type: AddressFamilyIdentity
        YLeaf description; //type: string

}; // Routing::RoutingInstance::Ribs::Rib

class FibRouteRpc : public Entity
{
    public:
        FibRouteRpc();
        ~FibRouteRpc();

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

        class Input; //type: FibRouteRpc::Input
        class Output; //type: FibRouteRpc::Output

        std::shared_ptr<ietf_routing::FibRouteRpc::Input> input;
        std::shared_ptr<ietf_routing::FibRouteRpc::Output> output;
        
}; // FibRouteRpc


class FibRouteRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf routing_instance_name; //type: string
        class DestinationAddress; //type: FibRouteRpc::Input::DestinationAddress

        std::shared_ptr<ietf_routing::FibRouteRpc::Input::DestinationAddress> destination_address;
        
}; // FibRouteRpc::Input


class FibRouteRpc::Input::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: AddressFamilyIdentity
        YLeaf ietf_ipv4_unicast_routing_address; //type: string
        YLeaf ietf_ipv6_unicast_routing_address; //type: string

}; // FibRouteRpc::Input::DestinationAddress


class FibRouteRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Route; //type: FibRouteRpc::Output::Route

        std::shared_ptr<ietf_routing::FibRouteRpc::Output::Route> route;
        
}; // FibRouteRpc::Output


class FibRouteRpc::Output::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: AddressFamilyIdentity
        YLeaf source_protocol; //type: RoutingProtocolIdentity
        YLeaf active; //type: empty
        YLeaf last_updated; //type: string
        YLeaf ietf_ipv4_unicast_routing_destination_prefix; //type: string
        YLeaf ietf_ipv6_unicast_routing_destination_prefix; //type: string
        class NextHop; //type: FibRouteRpc::Output::Route::NextHop

        std::shared_ptr<ietf_routing::FibRouteRpc::Output::Route::NextHop> next_hop;
        
}; // FibRouteRpc::Output::Route


class FibRouteRpc::Output::Route::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_interface; //type: string
        YLeaf ietf_routing_next_hop_address; //type: string
        YLeaf ietf_ipv4_unicast_routing_next_hop_address; //type: string
        YLeaf ietf_ipv6_unicast_routing_next_hop_address; //type: string
        YLeaf special_next_hop; //type: SpecialNextHopEnum
        class SpecialNextHopEnum;

}; // FibRouteRpc::Output::Route::NextHop

class VrfRoutingInstanceIdentity : public ietf_routing::RoutingInstanceIdentity, virtual Identity
{
    public:
        VrfRoutingInstanceIdentity();
        ~VrfRoutingInstanceIdentity();


}; // VrfRoutingInstanceIdentity

class DirectIdentity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        DirectIdentity();
        ~DirectIdentity();


}; // DirectIdentity

class DefaultRoutingInstanceIdentity : public ietf_routing::RoutingInstanceIdentity, virtual Identity
{
    public:
        DefaultRoutingInstanceIdentity();
        ~DefaultRoutingInstanceIdentity();


}; // DefaultRoutingInstanceIdentity

class StaticIdentity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        StaticIdentity();
        ~StaticIdentity();


}; // StaticIdentity

class Ipv4Identity : public ietf_routing::AddressFamilyIdentity, virtual Identity
{
    public:
        Ipv4Identity();
        ~Ipv4Identity();


}; // Ipv4Identity

class Ipv6Identity : public ietf_routing::AddressFamilyIdentity, virtual Identity
{
    public:
        Ipv6Identity();
        ~Ipv6Identity();


}; // Ipv6Identity

class RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf non_broadcast;
        static const Enum::YLeaf point_to_multipoint;
        static const Enum::YLeaf point_to_point;

};

class RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf intra_area;
        static const Enum::YLeaf inter_area;
        static const Enum::YLeaf external_1;
        static const Enum::YLeaf external_2;
        static const Enum::YLeaf nssa_1;
        static const Enum::YLeaf nssa_2;

};

class RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf blackhole;
        static const Enum::YLeaf unreachable;
        static const Enum::YLeaf prohibit;
        static const Enum::YLeaf receive;

};

class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf blackhole;
        static const Enum::YLeaf unreachable;
        static const Enum::YLeaf prohibit;
        static const Enum::YLeaf receive;

};

class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf blackhole;
        static const Enum::YLeaf unreachable;
        static const Enum::YLeaf prohibit;
        static const Enum::YLeaf receive;

};

class Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf non_broadcast;
        static const Enum::YLeaf point_to_multipoint;
        static const Enum::YLeaf point_to_point;

};

class FibRouteRpc::Output::Route::NextHop::SpecialNextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf blackhole;
        static const Enum::YLeaf unreachable;
        static const Enum::YLeaf prohibit;
        static const Enum::YLeaf receive;

};


}
}

#endif /* _IETF_ROUTING_ */

