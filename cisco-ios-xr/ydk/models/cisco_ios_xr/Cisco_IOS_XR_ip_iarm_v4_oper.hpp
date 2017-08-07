#ifndef _CISCO_IOS_XR_IP_IARM_V4_OPER_
#define _CISCO_IOS_XR_IP_IARM_V4_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_iarm_v4_oper {

class Ipv4Arm : public ydk::Entity
{
    public:
        Ipv4Arm();
        ~Ipv4Arm();

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

        ydk::YLeaf multicast_host_interface; //type: string
        class Addresses; //type: Ipv4Arm::Addresses
        class Summary; //type: Ipv4Arm::Summary
        class VrfSummaries; //type: Ipv4Arm::VrfSummaries
        class RouterId; //type: Ipv4Arm::RouterId

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::RouterId> router_id;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::VrfSummaries> vrf_summaries;
        
}; // Ipv4Arm


class Ipv4Arm::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrfs; //type: Ipv4Arm::Addresses::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs> vrfs;
        
}; // Ipv4Arm::Addresses


class Ipv4Arm::Addresses::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv4Arm::Addresses::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf> > vrf;
        
}; // Ipv4Arm::Addresses::Vrfs


class Ipv4Arm::Addresses::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Networks; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Networks
        class Interfaces; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks> networks;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf


class Ipv4Arm::Addresses::Vrfs::Vrf::Networks : public ydk::Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Network; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network> > network;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks


class Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf handle; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf referenced_interface; //type: string
        ydk::YLeaf vrf_name; //type: string
        class AddressXr; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr> address_xr;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network


class Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr : public ydk::Entity
{
    public:
        AddressXr();
        ~AddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_tag; //type: uint32
        ydk::YLeaf is_primary; //type: boolean
        ydk::YLeaf is_tentative; //type: boolean
        ydk::YLeaf is_prefix_sid; //type: boolean
        ydk::YLeaf producer; //type: string
        class Address; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address> address;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr


class Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: int32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address


class Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces : public ydk::Entity
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

        class Interface; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface> > interface;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces


class Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf referenced_interface; //type: string
        ydk::YLeaf vrf_name; //type: string
        class Address; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address> > address;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface


class Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_tag; //type: uint32
        ydk::YLeaf is_primary; //type: boolean
        ydk::YLeaf is_tentative; //type: boolean
        ydk::YLeaf is_prefix_sid; //type: boolean
        ydk::YLeaf producer; //type: string
        class Address_; //type: Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_

        std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_> address;
        
}; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address


class Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_ : public ydk::Entity
{
    public:
        Address_();
        ~Address_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: int32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_


class Ipv4Arm::Summary : public ydk::Entity
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

        ydk::YLeaf producer_count; //type: int32
        ydk::YLeaf address_conflict_count; //type: int32
        ydk::YLeaf unnumbered_conflict_count; //type: int32
        ydk::YLeaf db_master_version; //type: uint32
        ydk::YLeaf vrf_count; //type: int32

}; // Ipv4Arm::Summary


class Ipv4Arm::VrfSummaries : public ydk::Entity
{
    public:
        VrfSummaries();
        ~VrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfSummary; //type: Ipv4Arm::VrfSummaries::VrfSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::VrfSummaries::VrfSummary> > vrf_summary;
        
}; // Ipv4Arm::VrfSummaries


class Ipv4Arm::VrfSummaries::VrfSummary : public ydk::Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf vrf_name_xr; //type: string

}; // Ipv4Arm::VrfSummaries::VrfSummary


class Ipv4Arm::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf router_id; //type: string

}; // Ipv4Arm::RouterId


}
}

#endif /* _CISCO_IOS_XR_IP_IARM_V4_OPER_ */

