#ifndef _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_CFG_
#define _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg {

class Dhcpv6 : public Entity
{
    public:
        Dhcpv6();
        ~Dhcpv6();

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

        YLeaf enable; //type: empty
        YLeaf allow_duid_change; //type: empty
        class Database; //type: Dhcpv6::Database
        class Profiles; //type: Dhcpv6::Profiles
        class Interfaces; //type: Dhcpv6::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Database> database;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles> profiles;
        
}; // Dhcpv6


class Dhcpv6::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proxy; //type: empty
        YLeaf server; //type: empty
        YLeaf relay; //type: empty
        YLeaf full_write_interval; //type: uint32
        YLeaf incremental_write_interval; //type: uint32

}; // Dhcpv6::Database


class Dhcpv6::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profile; //type: Dhcpv6::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile> > profile;
        
}; // Dhcpv6::Profiles


class Dhcpv6::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        class Relay; //type: Dhcpv6::Profiles::Profile::Relay
        class Base; //type: Dhcpv6::Profiles::Profile::Base
        class Proxy; //type: Dhcpv6::Profiles::Profile::Proxy
        class Server; //type: Dhcpv6::Profiles::Profile::Server

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base> base; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy> proxy; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Relay> relay; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server> server; // presence node
        
}; // Dhcpv6::Profiles::Profile


class Dhcpv6::Profiles::Profile::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf iana_route_add; //type: empty
        class HelperAddresses; //type: Dhcpv6::Profiles::Profile::Relay::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Relay::HelperAddresses> helper_addresses;
        
}; // Dhcpv6::Profiles::Profile::Relay


class Dhcpv6::Profiles::Profile::Relay::HelperAddresses : public Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelperAddress; //type: Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress> > helper_address;
        
}; // Dhcpv6::Profiles::Profile::Relay::HelperAddresses


class Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf helper_address; //type: string

}; // Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress


class Dhcpv6::Profiles::Profile::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class Default_; //type: Dhcpv6::Profiles::Profile::Base::Default_
        class Classes; //type: Dhcpv6::Profiles::Profile::Base::Classes

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Default_> default_;
        
}; // Dhcpv6::Profiles::Profile::Base


class Dhcpv6::Profiles::Profile::Base::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profile_; //type: Dhcpv6::Profiles::Profile::Base::Default_::Profile_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Default_::Profile_> > profile;
        
}; // Dhcpv6::Profiles::Profile::Base::Default_


class Dhcpv6::Profiles::Profile::Base::Default_::Profile_ : public Entity
{
    public:
        Profile_();
        ~Profile_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf server_mode; //type: empty
        YLeaf proxy_mode; //type: empty

}; // Dhcpv6::Profiles::Profile::Base::Default_::Profile_


class Dhcpv6::Profiles::Profile::Base::Classes : public Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Class_; //type: Dhcpv6::Profiles::Profile::Base::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Classes::Class_> > class_;
        
}; // Dhcpv6::Profiles::Profile::Base::Classes


class Dhcpv6::Profiles::Profile::Base::Classes::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_name; //type: string
        class Profile_; //type: Dhcpv6::Profiles::Profile::Base::Classes::Class_::Profile_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Classes::Class_::Profile_> > profile;
        
}; // Dhcpv6::Profiles::Profile::Base::Classes::Class_


class Dhcpv6::Profiles::Profile::Base::Classes::Class_::Profile_ : public Entity
{
    public:
        Profile_();
        ~Profile_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf server_mode; //type: empty
        YLeaf proxy_mode; //type: empty

}; // Dhcpv6::Profiles::Profile::Base::Classes::Class_::Profile_


class Dhcpv6::Profiles::Profile::Proxy : public Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_add_disable; //type: empty
        YLeaf link_address; //type: string
        YLeaf src_intf_name; //type: string
        YLeaf enable; //type: empty
        class Interfaces; //type: Dhcpv6::Profiles::Profile::Proxy::Interfaces
        class Relay; //type: Dhcpv6::Profiles::Profile::Proxy::Relay
        class Vrfs; //type: Dhcpv6::Profiles::Profile::Proxy::Vrfs
        class Classes; //type: Dhcpv6::Profiles::Profile::Proxy::Classes
        class Sessions; //type: Dhcpv6::Profiles::Profile::Proxy::Sessions

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Relay> relay;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs> vrfs;
        
}; // Dhcpv6::Profiles::Profile::Proxy


class Dhcpv6::Profiles::Profile::Proxy::Interfaces : public Entity
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

        class Interface; //type: Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface> > interface;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Interfaces


class Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf interface_id; //type: string

}; // Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface


class Dhcpv6::Profiles::Profile::Proxy::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Option; //type: Dhcpv6::Profiles::Profile::Proxy::Relay::Option

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Relay::Option> option;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Relay


class Dhcpv6::Profiles::Profile::Proxy::Relay::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subscriber_id; //type: SubscriberIdEnum
        YLeaf link_layer_addr; //type: LinkLayerAddrEnum
        YLeaf remote_i_dreceived; //type: int32
        YLeaf remote_id; //type: string
        class InterfaceId; //type: Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId> interface_id;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Relay::Option


class Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId : public Entity
{
    public:
        InterfaceId();
        ~InterfaceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf insert; //type: InsertEnum

}; // Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId


class Dhcpv6::Profiles::Profile::Proxy::Vrfs : public Entity
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

        class Vrf; //type: Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf> > vrf;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Vrfs


class Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf : public Entity
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
        class HelperAddresses; //type: Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses> helper_addresses;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf


class Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses : public Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelperAddress; //type: Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses


class Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf helper_address; //type: string
        YLeaf out_interface; //type: string
        YLeaf any_out_interface; //type: empty

}; // Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress


class Dhcpv6::Profiles::Profile::Proxy::Classes : public Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Class_; //type: Dhcpv6::Profiles::Profile::Proxy::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes::Class_> > class_;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Classes


class Dhcpv6::Profiles::Profile::Proxy::Classes::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_name; //type: string
        YLeaf link_address; //type: string
        class HelperAddresses; //type: Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses> helper_addresses;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Classes::Class_


class Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses : public Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelperAddress; //type: Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress> > helper_address;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses


class Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf helper_address; //type: string

}; // Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress


class Dhcpv6::Profiles::Profile::Proxy::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mac; //type: Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac> mac;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Sessions


class Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Throttle; //type: Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle> throttle;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac


class Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request; //type: uint32
        YLeaf block; //type: uint32

}; // Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle


class Dhcpv6::Profiles::Profile::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_pool; //type: string
        YLeaf aftr_name; //type: string
        YLeaf domain_name; //type: string
        YLeaf preference; //type: uint32
        YLeaf rapid_commit; //type: empty
        YLeaf enable; //type: empty
        YLeaf prefix_pool; //type: string
        class Sessions; //type: Dhcpv6::Profiles::Profile::Server::Sessions
        class DnsServers; //type: Dhcpv6::Profiles::Profile::Server::DnsServers
        class Classes; //type: Dhcpv6::Profiles::Profile::Server::Classes
        class Lease; //type: Dhcpv6::Profiles::Profile::Server::Lease
        class Dhcpv6Options; //type: Dhcpv6::Profiles::Profile::Server::Dhcpv6Options

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Dhcpv6Options> dhcpv6_options;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::DnsServers> dns_servers;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Lease> lease;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Sessions> sessions;
        
}; // Dhcpv6::Profiles::Profile::Server


class Dhcpv6::Profiles::Profile::Server::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mac; //type: Dhcpv6::Profiles::Profile::Server::Sessions::Mac

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Sessions::Mac> mac;
        
}; // Dhcpv6::Profiles::Profile::Server::Sessions


class Dhcpv6::Profiles::Profile::Server::Sessions::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Throttle; //type: Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle> throttle;
        
}; // Dhcpv6::Profiles::Profile::Server::Sessions::Mac


class Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf request; //type: uint32
        YLeaf block; //type: uint32

}; // Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle


class Dhcpv6::Profiles::Profile::Server::DnsServers : public Entity
{
    public:
        DnsServers();
        ~DnsServers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList dns_server; //type: list of  string

}; // Dhcpv6::Profiles::Profile::Server::DnsServers


class Dhcpv6::Profiles::Profile::Server::Classes : public Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Class_; //type: Dhcpv6::Profiles::Profile::Server::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Classes::Class_> > class_;
        
}; // Dhcpv6::Profiles::Profile::Server::Classes


class Dhcpv6::Profiles::Profile::Server::Classes::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_name; //type: string
        YLeaf address_pool; //type: string
        YLeaf domain_name; //type: string
        YLeaf preference; //type: uint32
        YLeaf prefix_pool; //type: string
        class DnsServers; //type: Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers> dns_servers;
        
}; // Dhcpv6::Profiles::Profile::Server::Classes::Class_


class Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers : public Entity
{
    public:
        DnsServers();
        ~DnsServers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList dns_server; //type: list of  string

}; // Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers


class Dhcpv6::Profiles::Profile::Server::Lease : public Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint32
        YLeaf hours; //type: uint32
        YLeaf minutes; //type: uint32
        YLeaf infinite; //type: string

}; // Dhcpv6::Profiles::Profile::Server::Lease


class Dhcpv6::Profiles::Profile::Server::Dhcpv6Options : public Entity
{
    public:
        Dhcpv6Options();
        ~Dhcpv6Options();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VendorOptions; //type: Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions> vendor_options;
        
}; // Dhcpv6::Profiles::Profile::Server::Dhcpv6Options


class Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions : public Entity
{
    public:
        VendorOptions();
        ~VendorOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: string
        YLeaf vendor_options; //type: string

}; // Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions


class Dhcpv6::Interfaces : public Entity
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

        class Interface; //type: Dhcpv6::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface> > interface;
        
}; // Dhcpv6::Interfaces


class Dhcpv6::Interfaces::Interface : public Entity
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

        YLeaf interface_name; //type: string
        class Pppoe; //type: Dhcpv6::Interfaces::Interface::Pppoe
        class Proxy; //type: Dhcpv6::Interfaces::Interface::Proxy
        class Base; //type: Dhcpv6::Interfaces::Interface::Base
        class Server; //type: Dhcpv6::Interfaces::Interface::Server
        class Relay; //type: Dhcpv6::Interfaces::Interface::Relay

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Base> base;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Proxy> proxy;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Relay> relay;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Server> server;
        
}; // Dhcpv6::Interfaces::Interface


class Dhcpv6::Interfaces::Interface::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Pppoe


class Dhcpv6::Interfaces::Interface::Proxy : public Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Proxy


class Dhcpv6::Interfaces::Interface::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Base


class Dhcpv6::Interfaces::Interface::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Server


class Dhcpv6::Interfaces::Interface::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Relay

class InsertEnum : public Enum
{
    public:
        static const Enum::YLeaf local;
        static const Enum::YLeaf received;
        static const Enum::YLeaf pppoe;

};

class LinkLayerAddrEnum : public Enum
{
    public:
        static const Enum::YLeaf set;

};

class SubscriberIdEnum : public Enum
{
    public:
        static const Enum::YLeaf pppoe;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_CFG_ */

