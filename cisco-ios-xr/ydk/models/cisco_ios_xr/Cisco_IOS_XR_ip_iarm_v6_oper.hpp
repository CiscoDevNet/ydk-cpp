#ifndef _CISCO_IOS_XR_IP_IARM_V6_OPER_
#define _CISCO_IOS_XR_IP_IARM_V6_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_iarm_v6_oper {

class Ipv6Arm : public Entity
{
    public:
        Ipv6Arm();
        ~Ipv6Arm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf multicast_host_interface; //type: string

        class Addresses; //type: Ipv6Arm::Addresses
        class Summary; //type: Ipv6Arm::Summary
        class VrfSummaries; //type: Ipv6Arm::VrfSummaries

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::VrfSummaries> vrf_summaries;


}; // Ipv6Arm


class Ipv6Arm::Addresses : public Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrfs; //type: Ipv6Arm::Addresses::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs> vrfs;


}; // Ipv6Arm::Addresses


class Ipv6Arm::Addresses::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: Ipv6Arm::Addresses::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf> > vrf;


}; // Ipv6Arm::Addresses::Vrfs


class Ipv6Arm::Addresses::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Networks; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Networks
        class Interfaces; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks> networks;


}; // Ipv6Arm::Addresses::Vrfs::Vrf


class Ipv6Arm::Addresses::Vrfs::Vrf::Networks : public Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Network; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network> > network;


}; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks


class Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf handle; //type: string
        YLeaf interface_name; //type: string
        YLeaf referenced_interface; //type: string
        YLeaf vrf_name; //type: string

        class AddressXr; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr> address_xr;


}; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network


class Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr : public Entity
{
    public:
        AddressXr();
        ~AddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint32
        YLeaf route_tag; //type: uint32
        YLeaf is_primary; //type: boolean
        YLeaf is_tentative; //type: boolean
        YLeaf is_prefix_sid; //type: boolean
        YLeaf producer; //type: string

        class Address; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address> address;


}; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr


class Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: int32
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address


class Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface> > interface;


}; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces


class Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf referenced_interface; //type: string
        YLeaf vrf_name; //type: string

        class Address; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address> > address;


}; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface


class Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint32
        YLeaf route_tag; //type: uint32
        YLeaf is_primary; //type: boolean
        YLeaf is_tentative; //type: boolean
        YLeaf is_prefix_sid; //type: boolean
        YLeaf producer; //type: string

        class Address_; //type: Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_> address;


}; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address


class Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_ : public Entity
{
    public:
        Address_();
        ~Address_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: int32
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_


class Ipv6Arm::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf producer_count; //type: int32
        YLeaf address_conflict_count; //type: int32
        YLeaf unnumbered_conflict_count; //type: int32
        YLeaf db_master_version; //type: uint32
        YLeaf vrf_count; //type: int32



}; // Ipv6Arm::Summary


class Ipv6Arm::VrfSummaries : public Entity
{
    public:
        VrfSummaries();
        ~VrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfSummary; //type: Ipv6Arm::VrfSummaries::VrfSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::VrfSummaries::VrfSummary> > vrf_summary;


}; // Ipv6Arm::VrfSummaries


class Ipv6Arm::VrfSummaries::VrfSummary : public Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf vrf_name_xr; //type: string



}; // Ipv6Arm::VrfSummaries::VrfSummary


}
}

#endif /* _CISCO_IOS_XR_IP_IARM_V6_OPER_ */

