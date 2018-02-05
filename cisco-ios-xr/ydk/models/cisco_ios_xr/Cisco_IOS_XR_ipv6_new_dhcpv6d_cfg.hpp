#ifndef _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_CFG_
#define _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg {

class Dhcpv6 : public ydk::Entity
{
    public:
        Dhcpv6();
        ~Dhcpv6();

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

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf allow_duid_change; //type: empty
        class Database; //type: Dhcpv6::Database
        class Profiles; //type: Dhcpv6::Profiles
        class Interfaces; //type: Dhcpv6::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces> interfaces;
        
}; // Dhcpv6


class Dhcpv6::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

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

        ydk::YLeaf proxy; //type: empty
        ydk::YLeaf server; //type: empty
        ydk::YLeaf relay; //type: empty
        ydk::YLeaf full_write_interval; //type: uint32
        ydk::YLeaf incremental_write_interval; //type: uint32

}; // Dhcpv6::Database


class Dhcpv6::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

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

        class Profile; //type: Dhcpv6::Profiles::Profile

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile> > profile;
        
}; // Dhcpv6::Profiles


class Dhcpv6::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf profile_name; //type: string
        class Relay; //type: Dhcpv6::Profiles::Profile::Relay
        class Base; //type: Dhcpv6::Profiles::Profile::Base
        class Proxy; //type: Dhcpv6::Profiles::Profile::Proxy
        class Server; //type: Dhcpv6::Profiles::Profile::Server

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Relay> relay; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base> base; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy> proxy; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server> server; // presence node
        
}; // Dhcpv6::Profiles::Profile


class Dhcpv6::Profiles::Profile::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf iana_route_add; //type: empty
        class HelperAddresses; //type: Dhcpv6::Profiles::Profile::Relay::HelperAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Relay::HelperAddresses> helper_addresses;
        
}; // Dhcpv6::Profiles::Profile::Relay


class Dhcpv6::Profiles::Profile::Relay::HelperAddresses : public ydk::Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelperAddress; //type: Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress> > helper_address;
        
}; // Dhcpv6::Profiles::Profile::Relay::HelperAddresses


class Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf helper_address; //type: string

}; // Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress


class Dhcpv6::Profiles::Profile::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Default; //type: Dhcpv6::Profiles::Profile::Base::Default
        class Match; //type: Dhcpv6::Profiles::Profile::Base::Match

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Default> default_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Match> match;
        
}; // Dhcpv6::Profiles::Profile::Base


class Dhcpv6::Profiles::Profile::Base::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile_; //type: Dhcpv6::Profiles::Profile::Base::Default::Profile_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Default::Profile_> > profile;
        
}; // Dhcpv6::Profiles::Profile::Base::Default


class Dhcpv6::Profiles::Profile::Base::Default::Profile_ : public ydk::Entity
{
    public:
        Profile_();
        ~Profile_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf server_mode; //type: empty
        ydk::YLeaf proxy_mode; //type: empty

}; // Dhcpv6::Profiles::Profile::Base::Default::Profile_


class Dhcpv6::Profiles::Profile::Base::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ModeClasses; //type: Dhcpv6::Profiles::Profile::Base::Match::ModeClasses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Match::ModeClasses> mode_classes;
        
}; // Dhcpv6::Profiles::Profile::Base::Match


class Dhcpv6::Profiles::Profile::Base::Match::ModeClasses : public ydk::Entity
{
    public:
        ModeClasses();
        ~ModeClasses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ModeClass; //type: Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass> > mode_class;
        
}; // Dhcpv6::Profiles::Profile::Base::Match::ModeClasses


class Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass : public ydk::Entity
{
    public:
        ModeClass();
        ~ModeClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_name; //type: string
        class Profile_; //type: Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_> > profile;
        
}; // Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass


class Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_ : public ydk::Entity
{
    public:
        Profile_();
        ~Profile_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf server_mode; //type: empty
        ydk::YLeaf proxy_mode; //type: empty

}; // Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_


class Dhcpv6::Profiles::Profile::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf linkaddress_from_ra_enable; //type: empty
        ydk::YLeaf route_add_disable; //type: empty
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf src_intf_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Interfaces; //type: Dhcpv6::Profiles::Profile::Proxy::Interfaces
        class Relay; //type: Dhcpv6::Profiles::Profile::Proxy::Relay
        class Vrfs; //type: Dhcpv6::Profiles::Profile::Proxy::Vrfs
        class Authentication; //type: Dhcpv6::Profiles::Profile::Proxy::Authentication
        class Classes; //type: Dhcpv6::Profiles::Profile::Proxy::Classes
        class Sessions; //type: Dhcpv6::Profiles::Profile::Proxy::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Relay> relay;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes> classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Sessions> sessions;
        
}; // Dhcpv6::Profiles::Profile::Proxy


class Dhcpv6::Profiles::Profile::Proxy::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface> > interface;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Interfaces


class Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_id; //type: string

}; // Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface


class Dhcpv6::Profiles::Profile::Proxy::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Option; //type: Dhcpv6::Profiles::Profile::Proxy::Relay::Option

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Relay::Option> option;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Relay


class Dhcpv6::Profiles::Profile::Proxy::Relay::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_id; //type: SubscriberId
        ydk::YLeaf link_layer_addr; //type: LinkLayerAddr
        ydk::YLeaf remote_i_dreceived; //type: int32
        ydk::YLeaf remote_id; //type: string
        class InterfaceId; //type: Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId> interface_id;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Relay::Option


class Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId : public ydk::Entity
{
    public:
        InterfaceId();
        ~InterfaceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf insert; //type: Insert

}; // Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId


class Dhcpv6::Profiles::Profile::Proxy::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf> > vrf;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Vrfs


class Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class HelperAddresses; //type: Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses> helper_addresses;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf


class Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses : public ydk::Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelperAddress; //type: Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses


class Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf helper_address; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf any_out_interface; //type: empty

}; // Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress


class Dhcpv6::Profiles::Profile::Proxy::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: empty

}; // Dhcpv6::Profiles::Profile::Proxy::Authentication


class Dhcpv6::Profiles::Profile::Proxy::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class; //type: Dhcpv6::Profiles::Profile::Proxy::Classes::Class

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes::Class> > class_;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Classes


class Dhcpv6::Profiles::Profile::Proxy::Classes::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf link_address; //type: string
        class HelperAddresses; //type: Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses> helper_addresses;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Classes::Class


class Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses : public ydk::Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelperAddress; //type: Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress> > helper_address;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses


class Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf helper_address; //type: string

}; // Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress


class Dhcpv6::Profiles::Profile::Proxy::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac> mac;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Sessions


class Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Throttle; //type: Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle> throttle;
        
}; // Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac


class Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle : public ydk::Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request; //type: uint32
        ydk::YLeaf block; //type: uint32

}; // Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle


class Dhcpv6::Profiles::Profile::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_pool; //type: string
        ydk::YLeaf aftr_name; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf rapid_commit; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf prefix_pool; //type: string
        class Sessions; //type: Dhcpv6::Profiles::Profile::Server::Sessions
        class DnsServers; //type: Dhcpv6::Profiles::Profile::Server::DnsServers
        class Classes; //type: Dhcpv6::Profiles::Profile::Server::Classes
        class Lease; //type: Dhcpv6::Profiles::Profile::Server::Lease
        class Dhcpv6Options; //type: Dhcpv6::Profiles::Profile::Server::Dhcpv6Options

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::DnsServers> dns_servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Classes> classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Lease> lease;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Dhcpv6Options> dhcpv6_options;
        
}; // Dhcpv6::Profiles::Profile::Server


class Dhcpv6::Profiles::Profile::Server::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Dhcpv6::Profiles::Profile::Server::Sessions::Mac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Sessions::Mac> mac;
        
}; // Dhcpv6::Profiles::Profile::Server::Sessions


class Dhcpv6::Profiles::Profile::Server::Sessions::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Throttle; //type: Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle> throttle;
        
}; // Dhcpv6::Profiles::Profile::Server::Sessions::Mac


class Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle : public ydk::Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf request; //type: uint32
        ydk::YLeaf block; //type: uint32

}; // Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle


class Dhcpv6::Profiles::Profile::Server::DnsServers : public ydk::Entity
{
    public:
        DnsServers();
        ~DnsServers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList dns_server; //type: list of  string

}; // Dhcpv6::Profiles::Profile::Server::DnsServers


class Dhcpv6::Profiles::Profile::Server::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class; //type: Dhcpv6::Profiles::Profile::Server::Classes::Class

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Classes::Class> > class_;
        
}; // Dhcpv6::Profiles::Profile::Server::Classes


class Dhcpv6::Profiles::Profile::Server::Classes::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf address_pool; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf prefix_pool; //type: string
        class DnsServers; //type: Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers> dns_servers;
        
}; // Dhcpv6::Profiles::Profile::Server::Classes::Class


class Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers : public ydk::Entity
{
    public:
        DnsServers();
        ~DnsServers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList dns_server; //type: list of  string

}; // Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers


class Dhcpv6::Profiles::Profile::Server::Lease : public ydk::Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf infinite; //type: string

}; // Dhcpv6::Profiles::Profile::Server::Lease


class Dhcpv6::Profiles::Profile::Server::Dhcpv6Options : public ydk::Entity
{
    public:
        Dhcpv6Options();
        ~Dhcpv6Options();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VendorOptions; //type: Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions> vendor_options;
        
}; // Dhcpv6::Profiles::Profile::Server::Dhcpv6Options


class Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions : public ydk::Entity
{
    public:
        VendorOptions();
        ~VendorOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf vendor_options; //type: string

}; // Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions


class Dhcpv6::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Dhcpv6::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface> > interface;
        
}; // Dhcpv6::Interfaces


class Dhcpv6::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        class Pppoe; //type: Dhcpv6::Interfaces::Interface::Pppoe
        class Proxy; //type: Dhcpv6::Interfaces::Interface::Proxy
        class Base; //type: Dhcpv6::Interfaces::Interface::Base
        class Server; //type: Dhcpv6::Interfaces::Interface::Server
        class Relay; //type: Dhcpv6::Interfaces::Interface::Relay

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Proxy> proxy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Server> server;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Relay> relay;
        
}; // Dhcpv6::Interfaces::Interface


class Dhcpv6::Interfaces::Interface::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Pppoe


class Dhcpv6::Interfaces::Interface::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Proxy


class Dhcpv6::Interfaces::Interface::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Base


class Dhcpv6::Interfaces::Interface::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Server


class Dhcpv6::Interfaces::Interface::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Dhcpv6::Interfaces::Interface::Relay

class Insert : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf received;
        static const ydk::Enum::YLeaf pppoe;

};

class SubscriberId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pppoe;

};

class LinkLayerAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf set;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_CFG_ */

