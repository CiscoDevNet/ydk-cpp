#ifndef _CISCO_IOS_XR_IP_IARM_V4_OPER_
#define _CISCO_IOS_XR_IP_IARM_V4_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_iarm_v4_oper {

class Ipv4Arm : public Entity
{
    public:
        Ipv4Arm();
        ~Ipv4Arm();

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

        YLeaf multicast_host_interface; //type: string
        class Addresses; //type: Ipv4Arm::Addresses
        class Summary; //type: Ipv4Arm::Summary
        class VrfSummaries; //type: Ipv4Arm::VrfSummaries
        class RouterId; //type: Ipv4Arm::RouterId

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::RouterId> router_id;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::VrfSummaries> vrf_summaries;
        
}; // Ipv4Arm


class Ipv4Arm::Addresses : public Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrfs; //type: Ipv4Arm::Addresses::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs> vrfs;
        
}; // Ipv4Arm::Addresses


class Ipv4Arm::Addresses::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Ipv4Arm::Addresses::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf> > vrf;
        
}; // Ipv4Arm::Addresses::Vrfs


class Ipv4Arm::Addresses::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Networks; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Networks
        class Interfaces; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks> networks;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf


class Ipv4Arm::Addresses::Vrfs::Vrf::Networks : public Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Network; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network> > network;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks


class Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network : public Entity
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

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf handle; //type: string
        YLeaf interface_name; //type: string
        YLeaf referenced_interface; //type: string
        YLeaf vrf_name; //type: string
        class AddressXr; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr> address_xr;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network


class Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr : public Entity
{
    public:
        AddressXr();
        ~AddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint32
        YLeaf route_tag; //type: uint32
        YLeaf is_primary; //type: boolean
        YLeaf is_tentative; //type: boolean
        YLeaf is_prefix_sid; //type: boolean
        YLeaf producer; //type: string
        class Address; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address> address;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr


class Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: int32
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address


class Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces : public Entity
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

        class Interface; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface> > interface;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces


class Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface : public Entity
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

        YLeaf interface; //type: string
        YLeaf referenced_interface; //type: string
        YLeaf vrf_name; //type: string
        class Address; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address> > address;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface


class Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint32
        YLeaf route_tag; //type: uint32
        YLeaf is_primary; //type: boolean
        YLeaf is_tentative; //type: boolean
        YLeaf is_prefix_sid; //type: boolean
        YLeaf producer; //type: string
        class Address_; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_> address;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address


class Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_ : public Entity
{
    public:
        Address_();
        ~Address_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: int32
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_


class Ipv4Arm::Summary : public Entity
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

        YLeaf producer_count; //type: int32
        YLeaf address_conflict_count; //type: int32
        YLeaf unnumbered_conflict_count; //type: int32
        YLeaf db_master_version; //type: uint32
        YLeaf vrf_count; //type: int32

}; // Ipv4Arm::Summary


class Ipv4Arm::VrfSummaries : public Entity
{
    public:
        VrfSummaries();
        ~VrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VrfSummary; //type: Ipv4Arm::VrfSummaries::VrfSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::VrfSummaries::VrfSummary> > vrf_summary;
        
}; // Ipv4Arm::VrfSummaries


class Ipv4Arm::VrfSummaries::VrfSummary : public Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf vrf_name_xr; //type: string

}; // Ipv4Arm::VrfSummaries::VrfSummary


class Ipv4Arm::RouterId : public Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_id; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf router_id; //type: string

}; // Ipv4Arm::RouterId


}
}

#endif /* _CISCO_IOS_XR_IP_IARM_V4_OPER_ */

