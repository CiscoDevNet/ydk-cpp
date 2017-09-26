#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_CFG_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_policymgr_cfg {

class PolicyManager : public ydk::Entity
{
    public:
        PolicyManager();
        ~PolicyManager();

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

        class ClassMaps; //type: PolicyManager::ClassMaps
        class PolicyMaps; //type: PolicyManager::PolicyMaps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps> class_maps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps> policy_maps;
        
}; // PolicyManager


class PolicyManager::ClassMaps : public ydk::Entity
{
    public:
        ClassMaps();
        ~ClassMaps();

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

        class ClassMap; //type: PolicyManager::ClassMaps::ClassMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap> > class_map;
        
}; // PolicyManager::ClassMaps


class PolicyManager::ClassMaps::ClassMap : public ydk::Entity
{
    public:
        ClassMap();
        ~ClassMap();

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

        ydk::YLeaf type; //type: ClassMapType
        ydk::YLeaf name; //type: string
        ydk::YLeaf class_map_mode_match_any; //type: empty
        ydk::YLeaf class_map_mode_match_all; //type: empty
        ydk::YLeaf description; //type: string
        class Match; //type: PolicyManager::ClassMaps::ClassMap::Match
        class MatchNot; //type: PolicyManager::ClassMaps::ClassMap::MatchNot

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match> match;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot> match_not;
        
}; // PolicyManager::ClassMaps::ClassMap


class PolicyManager::ClassMaps::ClassMap::Match : public ydk::Entity
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

        ydk::YLeaf dei; //type: uint8
        ydk::YLeaf dei_inner; //type: uint8
        ydk::YLeaf ipv4_acl; //type: string
        ydk::YLeaf ipv6_acl; //type: string
        ydk::YLeaf ethernet_services_acl; //type: string
        ydk::YLeaf mpls_disposition_ipv4_access_list; //type: string
        ydk::YLeaf mpls_disposition_ipv6_access_list; //type: string
        ydk::YLeaf fr_de; //type: uint8
        ydk::YLeaf tcp_flag; //type: uint16
        ydk::YLeaf authen_status; //type: string
        ydk::YLeaf vpls_control; //type: empty
        ydk::YLeaf vpls_broadcast; //type: empty
        ydk::YLeaf vpls_multicast; //type: empty
        ydk::YLeaf vpls_known; //type: empty
        ydk::YLeaf vpls_unknown; //type: empty
        ydk::YLeaf atm_clp; //type: uint8
        ydk::YLeaf atm_oam; //type: empty
        ydk::YLeaf cac_admit; //type: empty
        ydk::YLeaf cac_unadmit; //type: empty
        ydk::YLeafList ipv4_dscp; //type: list of  string
        ydk::YLeafList ipv6_dscp; //type: list of  string
        ydk::YLeafList dscp; //type: list of  string
        ydk::YLeafList ipv4_precedence; //type: list of  one of string, uint8
        ydk::YLeafList ipv6_precedence; //type: list of  one of string, uint8
        ydk::YLeafList precedence; //type: list of  one of string, uint8
        ydk::YLeafList qos_group; //type: list of  string
        ydk::YLeafList traffic_class; //type: list of  string
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList inner_cos; //type: list of  uint8
        ydk::YLeafList protocol; //type: list of  string
        ydk::YLeafList mpls_experimental_topmost; //type: list of  uint8
        ydk::YLeafList mpls_experimental_imposition; //type: list of  uint8
        ydk::YLeafList discard_class; //type: list of  uint8
        ydk::YLeafList ipv4_packet_length; //type: list of  string
        ydk::YLeafList ipv6_packet_length; //type: list of  string
        ydk::YLeafList packet_length; //type: list of  string
        ydk::YLeafList vlan; //type: list of  string
        ydk::YLeafList inner_vlan; //type: list of  string
        ydk::YLeafList flow_tag; //type: list of  string
        ydk::YLeafList ethertype; //type: list of  string
        ydk::YLeafList destination_port; //type: list of  string
        ydk::YLeafList fragment_type; //type: list of  string
        ydk::YLeafList frame_relay_dlci; //type: list of  string
        ydk::YLeafList icmpv4_code; //type: list of  string
        ydk::YLeafList icmpv4_type; //type: list of  string
        ydk::YLeafList icmpv6_code; //type: list of  string
        ydk::YLeafList icmpv6_type; //type: list of  string
        ydk::YLeafList source_port; //type: list of  string
        ydk::YLeafList circuit_id; //type: list of  string
        ydk::YLeafList circuit_id_regex; //type: list of  string
        ydk::YLeafList remote_id; //type: list of  string
        ydk::YLeafList remote_id_regex; //type: list of  string
        ydk::YLeafList service_name; //type: list of  string
        ydk::YLeafList service_name_regex; //type: list of  string
        ydk::YLeafList timer; //type: list of  string
        ydk::YLeafList timer_regex; //type: list of  string
        ydk::YLeafList user_name; //type: list of  string
        ydk::YLeafList user_name_regex; //type: list of  string
        ydk::YLeafList source_mac; //type: list of  string
        ydk::YLeafList destination_mac; //type: list of  string
        class DestinationAddressIpv4; //type: PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4
        class DestinationAddressIpv6; //type: PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6
        class SourceAddressIpv4; //type: PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4
        class SourceAddressIpv6; //type: PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6
        class DhcpClientId; //type: PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex
        class DomainName; //type: PolicyManager::ClassMaps::ClassMap::Match::DomainName
        class DomainNameRegex; //type: PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex
        class Flow; //type: PolicyManager::ClassMaps::ClassMap::Match::Flow

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4> > destination_address_ipv4;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6> > destination_address_ipv6;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId> > dhcp_client_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex> > dhcp_client_id_regex;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DomainName> > domain_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex> > domain_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::Flow> flow;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4> > source_address_ipv4;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6> > source_address_ipv6;
        
}; // PolicyManager::ClassMaps::ClassMap::Match


class PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4 : public ydk::Entity
{
    public:
        DestinationAddressIpv4();
        ~DestinationAddressIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf netmask; //type: string

}; // PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4


class PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6 : public ydk::Entity
{
    public:
        DestinationAddressIpv6();
        ~DestinationAddressIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6


class PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId : public ydk::Entity
{
    public:
        DhcpClientId();
        ~DhcpClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: string
        ydk::YLeaf flag; //type: string

}; // PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId


class PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex : public ydk::Entity
{
    public:
        DhcpClientIdRegex();
        ~DhcpClientIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: string
        ydk::YLeaf flag; //type: string

}; // PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex


class PolicyManager::ClassMaps::ClassMap::Match::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf format; //type: string

}; // PolicyManager::ClassMaps::ClassMap::Match::DomainName


class PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex : public ydk::Entity
{
    public:
        DomainNameRegex();
        ~DomainNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string
        ydk::YLeaf format; //type: string

}; // PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex


class PolicyManager::ClassMaps::ClassMap::Match::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList flow_key; //type: list of  string
        class FlowCache; //type: PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache> flow_cache;
        
}; // PolicyManager::ClassMaps::ClassMap::Match::Flow


class PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache : public ydk::Entity
{
    public:
        FlowCache();
        ~FlowCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_timeout; //type: one of uint16, string

}; // PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache


class PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4 : public ydk::Entity
{
    public:
        SourceAddressIpv4();
        ~SourceAddressIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf netmask; //type: string

}; // PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4


class PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6 : public ydk::Entity
{
    public:
        SourceAddressIpv6();
        ~SourceAddressIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6


class PolicyManager::ClassMaps::ClassMap::MatchNot : public ydk::Entity
{
    public:
        MatchNot();
        ~MatchNot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dei; //type: uint8
        ydk::YLeaf dei_inner; //type: uint8
        ydk::YLeaf ipv4_acl; //type: string
        ydk::YLeaf ipv6_acl; //type: string
        ydk::YLeaf ethernet_services_acl; //type: string
        ydk::YLeaf mpls_disposition_ipv4_access_list; //type: string
        ydk::YLeaf mpls_disposition_ipv6_access_list; //type: string
        ydk::YLeaf fr_de; //type: uint8
        ydk::YLeaf tcp_flag; //type: uint16
        ydk::YLeaf authen_status; //type: string
        ydk::YLeaf vpls_control; //type: empty
        ydk::YLeaf vpls_broadcast; //type: empty
        ydk::YLeaf vpls_multicast; //type: empty
        ydk::YLeaf vpls_known; //type: empty
        ydk::YLeaf vpls_unknown; //type: empty
        ydk::YLeafList ipv4_dscp; //type: list of  string
        ydk::YLeafList ipv6_dscp; //type: list of  string
        ydk::YLeafList dscp; //type: list of  string
        ydk::YLeafList ipv4_precedence; //type: list of  one of string, uint8
        ydk::YLeafList ipv6_precedence; //type: list of  one of string, uint8
        ydk::YLeafList precedence; //type: list of  one of string, uint8
        ydk::YLeafList qos_group; //type: list of  string
        ydk::YLeafList traffic_class; //type: list of  string
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList inner_cos; //type: list of  uint8
        ydk::YLeafList protocol; //type: list of  string
        ydk::YLeafList mpls_experimental_topmost; //type: list of  uint8
        ydk::YLeafList mpls_experimental_imposition; //type: list of  uint8
        ydk::YLeafList discard_class; //type: list of  uint8
        ydk::YLeafList ipv4_packet_length; //type: list of  string
        ydk::YLeafList ipv6_packet_length; //type: list of  string
        ydk::YLeafList packet_length; //type: list of  string
        ydk::YLeafList vlan; //type: list of  string
        ydk::YLeafList inner_vlan; //type: list of  string
        ydk::YLeafList flow_tag; //type: list of  string
        ydk::YLeafList ethertype; //type: list of  string
        ydk::YLeafList destination_port; //type: list of  string
        ydk::YLeafList fragment_type; //type: list of  string
        ydk::YLeafList frame_relay_dlci; //type: list of  string
        ydk::YLeafList icmpv4_code; //type: list of  string
        ydk::YLeafList icmpv4_type; //type: list of  string
        ydk::YLeafList icmpv6_code; //type: list of  string
        ydk::YLeafList icmpv6_type; //type: list of  string
        ydk::YLeafList source_port; //type: list of  string
        ydk::YLeafList circuit_id; //type: list of  string
        ydk::YLeafList circuit_id_regex; //type: list of  string
        ydk::YLeafList remote_id; //type: list of  string
        ydk::YLeafList remote_id_regex; //type: list of  string
        ydk::YLeafList service_name; //type: list of  string
        ydk::YLeafList service_name_regex; //type: list of  string
        ydk::YLeafList timer; //type: list of  string
        ydk::YLeafList timer_regex; //type: list of  string
        ydk::YLeafList user_name; //type: list of  string
        ydk::YLeafList user_name_regex; //type: list of  string
        ydk::YLeafList source_mac; //type: list of  string
        ydk::YLeafList destination_mac; //type: list of  string
        class DestinationAddressIpv4; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4
        class DestinationAddressIpv6; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6
        class SourceAddressIpv4; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4
        class SourceAddressIpv6; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6
        class DhcpClientId; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex
        class DomainName; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName
        class DomainNameRegex; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex
        class Flow; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::Flow

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4> > destination_address_ipv4;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6> > destination_address_ipv6;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId> > dhcp_client_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex> > dhcp_client_id_regex;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName> > domain_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex> > domain_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::Flow> flow;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4> > source_address_ipv4;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6> > source_address_ipv6;
        
}; // PolicyManager::ClassMaps::ClassMap::MatchNot


class PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4 : public ydk::Entity
{
    public:
        DestinationAddressIpv4();
        ~DestinationAddressIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf netmask; //type: string

}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4


class PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6 : public ydk::Entity
{
    public:
        DestinationAddressIpv6();
        ~DestinationAddressIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6


class PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId : public ydk::Entity
{
    public:
        DhcpClientId();
        ~DhcpClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: string
        ydk::YLeaf flag; //type: string

}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId


class PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex : public ydk::Entity
{
    public:
        DhcpClientIdRegex();
        ~DhcpClientIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: string
        ydk::YLeaf flag; //type: string

}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex


class PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf format; //type: string

}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName


class PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex : public ydk::Entity
{
    public:
        DomainNameRegex();
        ~DomainNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string
        ydk::YLeaf format; //type: string

}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex


class PolicyManager::ClassMaps::ClassMap::MatchNot::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList flow_tag; //type: list of  uint16

}; // PolicyManager::ClassMaps::ClassMap::MatchNot::Flow


class PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4 : public ydk::Entity
{
    public:
        SourceAddressIpv4();
        ~SourceAddressIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf netmask; //type: string

}; // PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4


class PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6 : public ydk::Entity
{
    public:
        SourceAddressIpv6();
        ~SourceAddressIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6


class PolicyManager::PolicyMaps : public ydk::Entity
{
    public:
        PolicyMaps();
        ~PolicyMaps();

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

        class PolicyMap; //type: PolicyManager::PolicyMaps::PolicyMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap> > policy_map;
        
}; // PolicyManager::PolicyMaps


class PolicyManager::PolicyMaps::PolicyMap : public ydk::Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

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

        ydk::YLeaf type; //type: PolicyMapType
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        class Event; //type: PolicyManager::PolicyMaps::PolicyMap::Event
        class PolicyMapRule; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event> > event;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule> > policy_map_rule;
        
}; // PolicyManager::PolicyMaps::PolicyMap


class PolicyManager::PolicyMaps::PolicyMap::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: EventType
        ydk::YLeaf event_mode_match_all; //type: empty
        ydk::YLeaf event_mode_match_first; //type: empty
        class Class_; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_> > class_;
        
}; // PolicyManager::PolicyMaps::PolicyMap::Event


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

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
        ydk::YLeaf class_type; //type: PmapClassMapType
        ydk::YLeaf class_execution_strategy; //type: ExecutionStrategy
        class ActionRule; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule> > action_rule;
        
}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule : public ydk::Entity
{
    public:
        ActionRule();
        ~ActionRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_sequence_number; //type: uint16
        ydk::YLeaf disconnect; //type: empty
        ydk::YLeaf monitor; //type: empty
        class ActivateDynamicTemplate; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate
        class Authenticate; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate
        class Authorize; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize
        class DeactivateDynamicTemplate; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate
        class SetTimer; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer
        class StopTimer; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate> activate_dynamic_template; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate> authenticate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize> authorize; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate> deactivate_dynamic_template; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer> set_timer; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer> stop_timer;
        
}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate : public ydk::Entity
{
    public:
        ActivateDynamicTemplate();
        ~ActivateDynamicTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf aaa_list; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate : public ydk::Entity
{
    public:
        Authenticate();
        ~Authenticate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_list; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize : public ydk::Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_list; //type: string
        ydk::YLeaf format; //type: string
        ydk::YLeaf identifier; //type: AuthorizeIdentifier
        ydk::YLeaf password; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate : public ydk::Entity
{
    public:
        DeactivateDynamicTemplate();
        ~DeactivateDynamicTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf aaa_list; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer : public ydk::Entity
{
    public:
        SetTimer();
        ~SetTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_name; //type: string
        ydk::YLeaf timer_value; //type: uint32

}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer : public ydk::Entity
{
    public:
        StopTimer();
        ~StopTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_name; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule : public ydk::Entity
{
    public:
        PolicyMapRule();
        ~PolicyMapRule();

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
        ydk::YLeaf class_type; //type: PmapClassMapType
        ydk::YLeaf priority_level; //type: uint8
        ydk::YLeaf default_red; //type: empty
        ydk::YLeaf ecn_red; //type: empty
        ydk::YLeaf http_redirect; //type: string
        ydk::YLeaf pbr_transmit; //type: empty
        ydk::YLeaf pbr_drop; //type: empty
        ydk::YLeaf decap_gre; //type: empty
        ydk::YLeaf service_fragment; //type: string
        ydk::YLeaf fragment; //type: string
        class Shape; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape
        class MinBandwidth; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth
        class BandwidthRemaining; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining
        class QueueLimit; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit
        class Pfc; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc
        class RandomDetect; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect
        class Set; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set
        class Police; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police
        class ServicePolicy; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy
        class CacLocal; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal
        class FlowParams; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams
        class MetricsIpcbr; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr
        class React; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React
        class PbrRedirect; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect
        class PbrForward; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward
        class ServiceFunctionPath; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining> bandwidth_remaining;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal> cac_local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams> flow_params;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr> metrics_ipcbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth> min_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward> pbr_forward;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect> pbr_redirect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc> pfc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit> queue_limit;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect> > random_detect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React> react;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath> service_function_path; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set> set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape> shape;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining : public ydk::Entity
{
    public:
        BandwidthRemaining();
        ~BandwidthRemaining();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal : public ydk::Entity
{
    public:
        CacLocal();
        ~CacLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_idle_timeout; //type: one of uint16, string
        class Rate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate
        class FlowRate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate> flow_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate> rate;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate : public ydk::Entity
{
    public:
        FlowRate();
        ~FlowRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf units; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf units; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams : public ydk::Entity
{
    public:
        FlowParams();
        ~FlowParams();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_flow; //type: uint16
        ydk::YLeaf interval_duration; //type: uint32
        ydk::YLeaf history; //type: uint32
        ydk::YLeaf timeout; //type: uint32

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr : public ydk::Entity
{
    public:
        MetricsIpcbr();
        ~MetricsIpcbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate
        class MediaPacket; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket> media_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate> rate;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket : public ydk::Entity
{
    public:
        MediaPacket();
        ~MediaPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count_in_layer3; //type: uint8

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf layer3; //type: uint32
        ydk::YLeaf packet; //type: uint32
        ydk::YLeaf media; //type: uint32

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth : public ydk::Entity
{
    public:
        MinBandwidth();
        ~MinBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward : public ydk::Entity
{
    public:
        PbrForward();
        ~PbrForward();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty
        class NextHop; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop> next_hop;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop : public ydk::Entity
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

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect : public ydk::Entity
{
    public:
        PbrRedirect();
        ~PbrRedirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4
        class Ipv6; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6
        class NextHop; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop> next_hop;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf vrf; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf vrf; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop : public ydk::Entity
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

        class RouteTarget; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget> route_target;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        class Ipv4Address; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address> ipv4_address;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf netmask; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc : public ydk::Entity
{
    public:
        Pfc();
        ~Pfc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfc_pause_set; //type: empty
        class PfcBufferSize; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize
        class PfcPauseThreshold; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold
        class PfcResumeThreshold; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize> pfc_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold> pfc_pause_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold> pfc_resume_threshold;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize : public ydk::Entity
{
    public:
        PfcBufferSize();
        ~PfcBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold : public ydk::Entity
{
    public:
        PfcPauseThreshold();
        ~PfcPauseThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold : public ydk::Entity
{
    public:
        PfcResumeThreshold();
        ~PfcResumeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate
        class PeakRate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate
        class Burst; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst
        class PeakBurst; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst
        class ConformAction; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction
        class ExceedAction; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction
        class ViolateAction; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst> burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction> conform_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction> exceed_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst> peak_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate> peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate> rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction> violate_action;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst : public ydk::Entity
{
    public:
        Burst();
        ~Burst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf units; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty
        ydk::YLeaf drop; //type: empty
        class Set; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set> set;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: string
        ydk::YLeaf qos_group; //type: uint16
        ydk::YLeaf traffic_class; //type: uint8
        ydk::YLeaf discard_class; //type: uint8
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf df; //type: uint8
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf inner_cos; //type: uint8
        ydk::YLeaf precedence; //type: one of string, uint8
        ydk::YLeaf precedence_tunnel; //type: one of string, uint8
        ydk::YLeaf mpls_experimental_top_most; //type: uint8
        ydk::YLeaf mpls_experimental_imposition; //type: uint8
        ydk::YLeaf srp_priority; //type: uint8
        ydk::YLeaf fr_de; //type: uint8
        ydk::YLeaf dei; //type: uint8
        ydk::YLeaf dei_imposition; //type: uint8
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty
        ydk::YLeaf drop; //type: empty
        class Set; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set> set;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: string
        ydk::YLeaf qos_group; //type: uint16
        ydk::YLeaf traffic_class; //type: uint8
        ydk::YLeaf discard_class; //type: uint8
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf df; //type: uint8
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf inner_cos; //type: uint8
        ydk::YLeaf precedence; //type: one of string, uint8
        ydk::YLeaf precedence_tunnel; //type: one of string, uint8
        ydk::YLeaf mpls_experimental_top_most; //type: uint8
        ydk::YLeaf mpls_experimental_imposition; //type: uint8
        ydk::YLeaf srp_priority; //type: uint8
        ydk::YLeaf fr_de; //type: uint8
        ydk::YLeaf dei; //type: uint8
        ydk::YLeaf dei_imposition; //type: uint8
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst : public ydk::Entity
{
    public:
        PeakBurst();
        ~PeakBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf units; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate : public ydk::Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf units; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf units; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty
        ydk::YLeaf drop; //type: empty
        class Set; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set> set;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: string
        ydk::YLeaf qos_group; //type: uint16
        ydk::YLeaf traffic_class; //type: uint8
        ydk::YLeaf discard_class; //type: uint8
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf df; //type: uint8
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf inner_cos; //type: uint8
        ydk::YLeaf precedence; //type: one of string, uint8
        ydk::YLeaf precedence_tunnel; //type: one of string, uint8
        ydk::YLeaf mpls_experimental_top_most; //type: uint8
        ydk::YLeaf mpls_experimental_imposition; //type: uint8
        ydk::YLeaf srp_priority; //type: uint8
        ydk::YLeaf fr_de; //type: uint8
        ydk::YLeaf dei; //type: uint8
        ydk::YLeaf dei_imposition; //type: uint8
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit : public ydk::Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect : public ydk::Entity
{
    public:
        RandomDetect();
        ~RandomDetect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_min_value; //type: uint32
        ydk::YLeaf threshold_min_units; //type: string
        ydk::YLeaf threshold_max_value; //type: uint32
        ydk::YLeaf threshold_max_units; //type: string
        ydk::YLeaf dei; //type: uint8
        ydk::YLeaf ecn; //type: empty
        ydk::YLeafList cos; //type: list of  string
        ydk::YLeafList discard_class; //type: list of  uint8
        ydk::YLeafList dscp; //type: list of  string
        ydk::YLeafList mpls_exp; //type: list of  uint8
        ydk::YLeafList precedence; //type: list of  one of string, uint8

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React : public ydk::Entity
{
    public:
        React();
        ~React();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf descrition; //type: string
        ydk::YLeaf criterion_delay_factor; //type: empty
        ydk::YLeaf criterion_media_stop; //type: empty
        ydk::YLeaf criterion_mrv; //type: empty
        ydk::YLeaf criterion_flow_count; //type: empty
        ydk::YLeaf criterion_packet_rate; //type: empty
        class Action; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action
        class Alarm; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm
        class Threshold; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action> action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm> alarm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold> threshold;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf syslog; //type: empty
        ydk::YLeaf snmp; //type: empty

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: string
        class Type; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type> type;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discrete; //type: empty
        ydk::YLeaf group_count; //type: uint16
        ydk::YLeaf group_percent; //type: uint16

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TriggerValue; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue
        class TriggerType; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType> trigger_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue> trigger_value;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType : public ydk::Entity
{
    public:
        TriggerType();
        ~TriggerType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf immediate; //type: empty
        ydk::YLeaf average; //type: uint32

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue : public ydk::Entity
{
    public:
        TriggerValue();
        ~TriggerValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf greater_than; //type: string
        ydk::YLeaf greater_than_equal; //type: string
        ydk::YLeaf less_than; //type: string
        ydk::YLeaf less_than_equal; //type: string
        ydk::YLeaf range; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath : public ydk::Entity
{
    public:
        ServiceFunctionPath();
        ~ServiceFunctionPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf index_; //type: uint8
        ydk::YLeaf metadata; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf type; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: string
        ydk::YLeaf qos_group; //type: uint16
        ydk::YLeaf traffic_class; //type: uint8
        ydk::YLeaf discard_class; //type: uint8
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf df; //type: uint8
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf inner_cos; //type: uint8
        ydk::YLeaf precedence; //type: one of string, uint8
        ydk::YLeaf precedence_tunnel; //type: one of string, uint8
        ydk::YLeaf mpls_experimental_top_most; //type: uint8
        ydk::YLeaf mpls_experimental_imposition; //type: uint8
        ydk::YLeaf srp_priority; //type: uint8
        ydk::YLeaf fr_de; //type: uint8
        ydk::YLeaf dei; //type: uint8
        ydk::YLeaf dei_imposition; //type: uint8
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate
        class Burst; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst> burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate> rate;
        
}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst : public ydk::Entity
{
    public:
        Burst();
        ~Burst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf units; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: string

}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate

class PolicyMapType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos;
        static const ydk::Enum::YLeaf pbr;
        static const ydk::Enum::YLeaf traffic;
        static const ydk::Enum::YLeaf subscriber_control;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf flow_monitor;

};

class AuthorizeIdentifier : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf circuit_id;
        static const ydk::Enum::YLeaf dhcp_client_id;
        static const ydk::Enum::YLeaf remote_id;
        static const ydk::Enum::YLeaf source_address_ipv4;
        static const ydk::Enum::YLeaf source_address_ipv6;
        static const ydk::Enum::YLeaf source_address_mac;
        static const ydk::Enum::YLeaf username;

};

class EventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf account_logoff;
        static const ydk::Enum::YLeaf account_logon;
        static const ydk::Enum::YLeaf authentication_failure;
        static const ydk::Enum::YLeaf authentication_no_response;
        static const ydk::Enum::YLeaf authorization_failure;
        static const ydk::Enum::YLeaf authorization_no_response;
        static const ydk::Enum::YLeaf credit_exhausted;
        static const ydk::Enum::YLeaf exception;
        static const ydk::Enum::YLeaf idle_timeout;
        static const ydk::Enum::YLeaf quota_depleted;
        static const ydk::Enum::YLeaf service_start;
        static const ydk::Enum::YLeaf service_stop;
        static const ydk::Enum::YLeaf session_activate;
        static const ydk::Enum::YLeaf session_start;
        static const ydk::Enum::YLeaf session_stop;
        static const ydk::Enum::YLeaf timer_expiry;

};

class ExecutionStrategy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf do_all;
        static const ydk::Enum::YLeaf do_until_failure;
        static const ydk::Enum::YLeaf do_until_success;

};

class ClassMapType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos;
        static const ydk::Enum::YLeaf traffic;
        static const ydk::Enum::YLeaf control;

};

class PmapClassMapType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos;
        static const ydk::Enum::YLeaf traffic;
        static const ydk::Enum::YLeaf subscriber_control;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_CFG_ */

