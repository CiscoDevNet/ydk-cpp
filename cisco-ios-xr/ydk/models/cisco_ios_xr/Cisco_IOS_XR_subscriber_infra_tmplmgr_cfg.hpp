#ifndef _CISCO_IOS_XR_SUBSCRIBER_INFRA_TMPLMGR_CFG_
#define _CISCO_IOS_XR_SUBSCRIBER_INFRA_TMPLMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg {

class DynamicTemplate : public ydk::Entity
{
    public:
        DynamicTemplate();
        ~DynamicTemplate();

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

        class Ppps; //type: DynamicTemplate::Ppps
        class IpSubscribers; //type: DynamicTemplate::IpSubscribers
        class SubscriberServices; //type: DynamicTemplate::SubscriberServices

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps> ppps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers> ip_subscribers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices> subscriber_services;
        
}; // DynamicTemplate


class DynamicTemplate::Ppps : public ydk::Entity
{
    public:
        Ppps();
        ~Ppps();

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

        class Ppp; //type: DynamicTemplate::Ppps::Ppp

        ydk::YList ppp;
        
}; // DynamicTemplate::Ppps


class DynamicTemplate::Ppps::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf vrf; //type: string
        class PppoeTemplate; //type: DynamicTemplate::Ppps::Ppp::PppoeTemplate
        class Pbr; //type: DynamicTemplate::Ppps::Ppp::Pbr
        class Ipv4Network; //type: DynamicTemplate::Ppps::Ppp::Ipv4Network
        class Dhcpv6; //type: DynamicTemplate::Ppps::Ppp::Dhcpv6
        class Ipv6Neighbor; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor
        class Accounting; //type: DynamicTemplate::Ppps::Ppp::Accounting
        class SpanMonitorSessions; //type: DynamicTemplate::Ppps::Ppp::SpanMonitorSessions
        class Qos; //type: DynamicTemplate::Ppps::Ppp::Qos
        class Ipv4PacketFilter; //type: DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter
        class Ipv6PacketFilter; //type: DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter
        class Ipv6Network; //type: DynamicTemplate::Ppps::Ppp::Ipv6Network
        class Igmp; //type: DynamicTemplate::Ppps::Ppp::Igmp
        class PppTemplate; //type: DynamicTemplate::Ppps::Ppp::PppTemplate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppoeTemplate> pppoe_template; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Pbr> pbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4Network> ipv4_network;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Dhcpv6> dhcpv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor> ipv6_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Accounting> accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::SpanMonitorSessions> span_monitor_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos> qos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter> ipv4_packet_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter> ipv6_packet_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Network> ipv6_network;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate> ppp_template;
        
}; // DynamicTemplate::Ppps::Ppp


class DynamicTemplate::Ppps::Ppp::PppoeTemplate : public ydk::Entity
{
    public:
        PppoeTemplate();
        ~PppoeTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_limit; //type: uint16

}; // DynamicTemplate::Ppps::Ppp::PppoeTemplate


class DynamicTemplate::Ppps::Ppp::Pbr : public ydk::Entity
{
    public:
        Pbr();
        ~Pbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_in; //type: string
        class ServicePolicy; //type: DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy> service_policy;
        
}; // DynamicTemplate::Ppps::Ppp::Pbr


class DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf input; //type: string

}; // DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy


class DynamicTemplate::Ppps::Ppp::Ipv4Network : public ydk::Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf unreachables; //type: boolean
        ydk::YLeaf rpf; //type: boolean

}; // DynamicTemplate::Ppps::Ppp::Ipv4Network


class DynamicTemplate::Ppps::Ppp::Dhcpv6 : public ydk::Entity
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

        ydk::YLeaf dns_ipv6address; //type: string
        ydk::YLeaf mode_class; //type: string
        ydk::YLeaf dhcpv6_iplease; //type: string
        ydk::YLeaf dhcpv6_option; //type: string
        ydk::YLeaf address_pool; //type: string
        ydk::YLeaf delegated_prefix_pool; //type: string
        ydk::YLeaf class_; //type: string
        ydk::YLeaf stateful_address; //type: string
        class DelegatedPrefix; //type: DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix> delegated_prefix; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Dhcpv6


class DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix : public ydk::Entity
{
    public:
        DelegatedPrefix();
        ~DelegatedPrefix();

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
        ydk::YLeaf prefix_length; //type: uint8

}; // DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor : public ydk::Entity
{
    public:
        Ipv6Neighbor();
        ~Ipv6Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf framed_prefix_pool; //type: string
        ydk::YLeaf managed_config; //type: empty
        ydk::YLeaf other_config; //type: empty
        ydk::YLeaf start_ra_on_ipv6_enable; //type: empty
        ydk::YLeaf nud_enable; //type: empty
        ydk::YLeaf ra_lifetime; //type: uint32
        ydk::YLeaf router_preference; //type: Ipv6NdRouterPrefTemplate
        ydk::YLeaf ra_suppress; //type: empty
        ydk::YLeaf ra_unicast; //type: empty
        ydk::YLeaf ra_unspecify_hoplimit; //type: empty
        ydk::YLeaf ra_suppress_mtu; //type: empty
        ydk::YLeaf suppress_cache_learning; //type: empty
        ydk::YLeaf reachable_time; //type: uint32
        ydk::YLeaf ns_interval; //type: uint32
        class RaInterval; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval
        class FramedPrefix; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix
        class DuplicateAddressDetection; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection
        class RaInitial; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval> ra_interval; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix> framed_prefix; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection> duplicate_address_detection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial> ra_initial; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval : public ydk::Entity
{
    public:
        RaInterval();
        ~RaInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf minimum; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix : public ydk::Entity
{
    public:
        FramedPrefix();
        ~FramedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string

}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection : public ydk::Entity
{
    public:
        DuplicateAddressDetection();
        ~DuplicateAddressDetection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attempts; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial : public ydk::Entity
{
    public:
        RaInitial();
        ~RaInitial();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial


class DynamicTemplate::Ppps::Ppp::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_feature; //type: string
        ydk::YLeaf prepaid_feature; //type: string
        class IdleTimeout; //type: DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout
        class Session; //type: DynamicTemplate::Ppps::Ppp::Accounting::Session
        class ServiceAccounting; //type: DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout> idle_timeout;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Accounting::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting> service_accounting;
        
}; // DynamicTemplate::Ppps::Ppp::Accounting


class DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout : public ydk::Entity
{
    public:
        IdleTimeout();
        ~IdleTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout_value; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf direction; //type: string

}; // DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout


class DynamicTemplate::Ppps::Ppp::Accounting::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_list_name; //type: string
        ydk::YLeaf periodic_interval; //type: uint32
        ydk::YLeaf dual_stack_delay; //type: uint32
        ydk::YLeaf hold_acct_start; //type: HoldAcctStart
        class HoldAcctStart;

}; // DynamicTemplate::Ppps::Ppp::Accounting::Session


class DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting : public ydk::Entity
{
    public:
        ServiceAccounting();
        ~ServiceAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_list_name; //type: string
        ydk::YLeaf accounting_interim_interval; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting


class DynamicTemplate::Ppps::Ppp::SpanMonitorSessions : public ydk::Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpanMonitorSession; //type: DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession

        ydk::YList span_monitor_session;
        
}; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions


class DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession : public ydk::Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_class; //type: SpanSessionClass
        ydk::YLeaf mirror_first; //type: uint32
        ydk::YLeaf mirror_interval; //type: SpanMirrorInterval
        class Attachment; //type: DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment
        class Acl; //type: DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl> acl; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession


class DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment : public ydk::Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_name; //type: string
        ydk::YLeaf direction; //type: SpanTrafficDirection
        ydk::YLeaf port_level_enable; //type: empty

}; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment


class DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_enable; //type: empty
        ydk::YLeaf acl_name; //type: string

}; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl


class DynamicTemplate::Ppps::Ppp::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy
        class Account; //type: DynamicTemplate::Ppps::Ppp::Qos::Account
        class Output; //type: DynamicTemplate::Ppps::Ppp::Qos::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::Account> account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::Output> output;
        
}; // DynamicTemplate::Ppps::Ppp::Qos


class DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy : public ydk::Entity
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

        class Input; //type: DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input
        class Output; //type: DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input> input; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output> output; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy


class DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf merge; //type: boolean
        ydk::YLeaf merge_id; //type: uint32
        ydk::YLeaf account_stats; //type: boolean

}; // DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input


class DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf merge; //type: boolean
        ydk::YLeaf merge_id; //type: uint32
        ydk::YLeaf account_stats; //type: boolean

}; // DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output


class DynamicTemplate::Ppps::Ppp::Qos::Account : public ydk::Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aal; //type: Qosl2DataLink
        ydk::YLeaf encapsulation; //type: Qosl2Encap
        ydk::YLeaf atm_cell_tax; //type: empty
        ydk::YLeaf user_defined; //type: int32

}; // DynamicTemplate::Ppps::Ppp::Qos::Account


class DynamicTemplate::Ppps::Ppp::Qos::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_bandwidth; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::Qos::Output


class DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter : public ydk::Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Outbound; //type: DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound
        class Inbound; //type: DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound> outbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound> inbound;
        
}; // DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter


class DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound


class DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound


class DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter : public ydk::Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inbound; //type: DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound
        class Outbound; //type: DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound> outbound;
        
}; // DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter


class DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound


class DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound


class DynamicTemplate::Ppps::Ppp::Ipv6Network : public ydk::Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf rpf; //type: boolean
        ydk::YLeaf unreachables; //type: empty
        class Addresses; //type: DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses> addresses;
        
}; // DynamicTemplate::Ppps::Ppp::Ipv6Network


class DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoConfiguration; //type: DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;
        
}; // DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses


class DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration : public ydk::Entity
{
    public:
        AutoConfiguration();
        ~AutoConfiguration();

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

}; // DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration


class DynamicTemplate::Ppps::Ppp::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefaultVrf; //type: DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf> default_vrf;
        
}; // DynamicTemplate::Ppps::Ppp::Igmp


class DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_groups; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf query_interval; //type: uint32
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf multicast_mode; //type: DynTmplMulticastMode
        class ExplicitTracking; //type: DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking> explicit_tracking; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf


class DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking


class DynamicTemplate::Ppps::Ppp::PppTemplate : public ydk::Entity
{
    public:
        PppTemplate();
        ~PppTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fsm; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm
        class Lcp; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp
        class Ipv6cp; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp
        class Ipcp; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm> fsm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp> lcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp> ipv6cp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp> ipcp;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate


class DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm : public ydk::Entity
{
    public:
        Fsm();
        ~Fsm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_consecutive_conf_naks; //type: uint32
        ydk::YLeaf max_unacknowledged_conf_requests; //type: uint32
        ydk::YLeaf retry_timeout; //type: uint32
        ydk::YLeaf protocol_reject_timeout; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp : public ydk::Entity
{
    public:
        Lcp();
        ~Lcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf renegotiation; //type: empty
        ydk::YLeaf service_type; //type: uint32
        ydk::YLeaf send_term_request_on_shut_down; //type: empty
        ydk::YLeaf mru_ignore; //type: empty
        class AbsoluteTimeout; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout
        class Delay; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay
        class Authentication; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication
        class Keepalive; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout> absolute_timeout;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay> delay;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive> keepalive;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout : public ydk::Entity
{
    public:
        AbsoluteTimeout();
        ~AbsoluteTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf seconds; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf milliseconds; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication : public ydk::Entity
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

        ydk::YLeaf chap_host_name; //type: string
        ydk::YLeaf pap; //type: uint32
        ydk::YLeaf mschap_host_name; //type: string
        ydk::YLeaf max_authentication_failures; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        class Methods; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods> methods;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods : public ydk::Entity
{
    public:
        Methods();
        ~Methods();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList method; //type: list of  PppAuthenticationMethodGbl

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keepalive_disable; //type: boolean
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf retry_count; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp : public ydk::Entity
{
    public:
        Ipv6cp();
        ~Ipv6cp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf passive; //type: empty
        ydk::YLeaf renegotiation; //type: empty
        ydk::YLeaf peer_interface_id; //type: string
        ydk::YLeaf protocol_reject; //type: empty

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp : public ydk::Entity
{
    public:
        Ipcp();
        ~Ipcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf renegotiation; //type: empty
        ydk::YLeaf passive; //type: empty
        ydk::YLeaf protocol_reject; //type: empty
        ydk::YLeaf peer_netmask; //type: string
        class Wins; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins
        class Dns; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns
        class PeerAddress; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins> wins;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns> dns;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress> peer_address;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins : public ydk::Entity
{
    public:
        Wins();
        ~Wins();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class WinsAddresses; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses> wins_addresses;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses : public ydk::Entity
{
    public:
        WinsAddresses();
        ~WinsAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DnsAddresses; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses> dns_addresses;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses : public ydk::Entity
{
    public:
        DnsAddresses();
        ~DnsAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress : public ydk::Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: string
        ydk::YLeaf pool; //type: string

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress


class DynamicTemplate::IpSubscribers : public ydk::Entity
{
    public:
        IpSubscribers();
        ~IpSubscribers();

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

        class IpSubscriber; //type: DynamicTemplate::IpSubscribers::IpSubscriber

        ydk::YList ip_subscriber;
        
}; // DynamicTemplate::IpSubscribers


class DynamicTemplate::IpSubscribers::IpSubscriber : public ydk::Entity
{
    public:
        IpSubscriber();
        ~IpSubscriber();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf vrf; //type: string
        class Pbr; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Pbr
        class Ipv4Network; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network
        class Dhcpv6; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6
        class Ipv6Neighbor; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor
        class Accounting; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Accounting
        class SpanMonitorSessions; //type: DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions
        class Qos; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos
        class Dhcpd; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd
        class Ipv4PacketFilter; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter
        class Ipv6PacketFilter; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter
        class Ipv6Network; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network
        class Igmp; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Igmp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Pbr> pbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network> ipv4_network;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6> dhcpv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor> ipv6_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Accounting> accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions> span_monitor_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos> qos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd> dhcpd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter> ipv4_packet_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter> ipv6_packet_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network> ipv6_network;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Igmp> igmp;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber


class DynamicTemplate::IpSubscribers::IpSubscriber::Pbr : public ydk::Entity
{
    public:
        Pbr();
        ~Pbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_in; //type: string
        class ServicePolicy; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy> service_policy;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Pbr


class DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf input; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network : public ydk::Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf unreachables; //type: boolean
        ydk::YLeaf rpf; //type: boolean

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network


class DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6 : public ydk::Entity
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

        ydk::YLeaf dns_ipv6address; //type: string
        ydk::YLeaf mode_class; //type: string
        ydk::YLeaf dhcpv6_iplease; //type: string
        ydk::YLeaf dhcpv6_option; //type: string
        ydk::YLeaf address_pool; //type: string
        ydk::YLeaf delegated_prefix_pool; //type: string
        ydk::YLeaf class_; //type: string
        ydk::YLeaf stateful_address; //type: string
        class DelegatedPrefix; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix> delegated_prefix; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6


class DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix : public ydk::Entity
{
    public:
        DelegatedPrefix();
        ~DelegatedPrefix();

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
        ydk::YLeaf prefix_length; //type: uint8

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor : public ydk::Entity
{
    public:
        Ipv6Neighbor();
        ~Ipv6Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf framed_prefix_pool; //type: string
        ydk::YLeaf managed_config; //type: empty
        ydk::YLeaf other_config; //type: empty
        ydk::YLeaf start_ra_on_ipv6_enable; //type: empty
        ydk::YLeaf nud_enable; //type: empty
        ydk::YLeaf ra_lifetime; //type: uint32
        ydk::YLeaf router_preference; //type: Ipv6NdRouterPrefTemplate
        ydk::YLeaf ra_suppress; //type: empty
        ydk::YLeaf ra_unicast; //type: empty
        ydk::YLeaf ra_unspecify_hoplimit; //type: empty
        ydk::YLeaf ra_suppress_mtu; //type: empty
        ydk::YLeaf suppress_cache_learning; //type: empty
        ydk::YLeaf reachable_time; //type: uint32
        ydk::YLeaf ns_interval; //type: uint32
        class RaInterval; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval
        class FramedPrefix; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix
        class DuplicateAddressDetection; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection
        class RaInitial; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval> ra_interval; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix> framed_prefix; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection> duplicate_address_detection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial> ra_initial; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval : public ydk::Entity
{
    public:
        RaInterval();
        ~RaInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf minimum; //type: uint32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix : public ydk::Entity
{
    public:
        FramedPrefix();
        ~FramedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection : public ydk::Entity
{
    public:
        DuplicateAddressDetection();
        ~DuplicateAddressDetection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attempts; //type: uint32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial : public ydk::Entity
{
    public:
        RaInitial();
        ~RaInitial();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial


class DynamicTemplate::IpSubscribers::IpSubscriber::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_feature; //type: string
        ydk::YLeaf prepaid_feature; //type: string
        class ServiceAccounting; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting
        class Session; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session
        class IdleTimeout; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting> service_accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout> idle_timeout;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Accounting


class DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting : public ydk::Entity
{
    public:
        ServiceAccounting();
        ~ServiceAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_list_name; //type: string
        ydk::YLeaf accounting_interim_interval; //type: uint32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting


class DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_list_name; //type: string
        ydk::YLeaf periodic_interval; //type: uint32
        ydk::YLeaf dual_stack_delay; //type: uint32
        ydk::YLeaf hold_acct_start; //type: HoldAcctStart
        class HoldAcctStart;

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session


class DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout : public ydk::Entity
{
    public:
        IdleTimeout();
        ~IdleTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout_value; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf direction; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout


class DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions : public ydk::Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpanMonitorSession; //type: DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession

        ydk::YList span_monitor_session;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions


class DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession : public ydk::Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_class; //type: SpanSessionClass
        ydk::YLeaf mirror_first; //type: uint32
        ydk::YLeaf mirror_interval; //type: SpanMirrorInterval
        class Attachment; //type: DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment
        class Acl; //type: DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl> acl; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession


class DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment : public ydk::Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_name; //type: string
        ydk::YLeaf direction; //type: SpanTrafficDirection
        ydk::YLeaf port_level_enable; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment


class DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_enable; //type: empty
        ydk::YLeaf acl_name; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy
        class Account; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account
        class Output; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account> account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output> output;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy : public ydk::Entity
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

        class Input; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input
        class Output; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input> input; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output> output; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf merge; //type: boolean
        ydk::YLeaf merge_id; //type: uint32
        ydk::YLeaf account_stats; //type: boolean

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf merge; //type: boolean
        ydk::YLeaf merge_id; //type: uint32
        ydk::YLeaf account_stats; //type: boolean

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account : public ydk::Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aal; //type: Qosl2DataLink
        ydk::YLeaf encapsulation; //type: Qosl2Encap
        ydk::YLeaf atm_cell_tax; //type: empty
        ydk::YLeaf user_defined; //type: int32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_bandwidth; //type: uint32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output


class DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd : public ydk::Entity
{
    public:
        Dhcpd();
        ~Dhcpd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dhcpv4_iplease; //type: string
        ydk::YLeaf class_; //type: string
        ydk::YLeaf default_gateway; //type: string
        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf dhcpv4_option; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter : public ydk::Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Outbound; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound
        class Inbound; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound> outbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound> inbound;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter : public ydk::Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inbound; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound
        class Outbound; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound> outbound;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network : public ydk::Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf rpf; //type: boolean
        ydk::YLeaf unreachables; //type: empty
        class Addresses; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses> addresses;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoConfiguration; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration : public ydk::Entity
{
    public:
        AutoConfiguration();
        ~AutoConfiguration();

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

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration


class DynamicTemplate::IpSubscribers::IpSubscriber::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefaultVrf; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf> default_vrf;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Igmp


class DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_groups; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf query_interval; //type: uint32
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf multicast_mode; //type: DynTmplMulticastMode
        class ExplicitTracking; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking> explicit_tracking; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf


class DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking


class DynamicTemplate::SubscriberServices : public ydk::Entity
{
    public:
        SubscriberServices();
        ~SubscriberServices();

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

        class SubscriberService; //type: DynamicTemplate::SubscriberServices::SubscriberService

        ydk::YList subscriber_service;
        
}; // DynamicTemplate::SubscriberServices


class DynamicTemplate::SubscriberServices::SubscriberService : public ydk::Entity
{
    public:
        SubscriberService();
        ~SubscriberService();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf vrf; //type: string
        class Pbr; //type: DynamicTemplate::SubscriberServices::SubscriberService::Pbr
        class Ipv4Network; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network
        class Ipv6Neighbor; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor
        class Accounting; //type: DynamicTemplate::SubscriberServices::SubscriberService::Accounting
        class SpanMonitorSessions; //type: DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions
        class Qos; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos
        class Ipv4PacketFilter; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter
        class Ipv6PacketFilter; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter
        class Ipv6Network; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Pbr> pbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network> ipv4_network;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor> ipv6_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Accounting> accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions> span_monitor_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos> qos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter> ipv4_packet_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter> ipv6_packet_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network> ipv6_network;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService


class DynamicTemplate::SubscriberServices::SubscriberService::Pbr : public ydk::Entity
{
    public:
        Pbr();
        ~Pbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_in; //type: string
        class ServicePolicy; //type: DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy> service_policy;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Pbr


class DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf input; //type: string

}; // DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network : public ydk::Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf unreachables; //type: boolean
        ydk::YLeaf rpf; //type: boolean

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor : public ydk::Entity
{
    public:
        Ipv6Neighbor();
        ~Ipv6Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf framed_prefix_pool; //type: string
        ydk::YLeaf managed_config; //type: empty
        ydk::YLeaf other_config; //type: empty
        ydk::YLeaf start_ra_on_ipv6_enable; //type: empty
        ydk::YLeaf nud_enable; //type: empty
        ydk::YLeaf ra_lifetime; //type: uint32
        ydk::YLeaf router_preference; //type: Ipv6NdRouterPrefTemplate
        ydk::YLeaf ra_suppress; //type: empty
        ydk::YLeaf ra_unicast; //type: empty
        ydk::YLeaf ra_unspecify_hoplimit; //type: empty
        ydk::YLeaf ra_suppress_mtu; //type: empty
        ydk::YLeaf suppress_cache_learning; //type: empty
        ydk::YLeaf reachable_time; //type: uint32
        ydk::YLeaf ns_interval; //type: uint32
        class RaInterval; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval
        class FramedPrefix; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix
        class DuplicateAddressDetection; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection
        class RaInitial; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval> ra_interval; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix> framed_prefix; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection> duplicate_address_detection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial> ra_initial; // presence node
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval : public ydk::Entity
{
    public:
        RaInterval();
        ~RaInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf minimum; //type: uint32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix : public ydk::Entity
{
    public:
        FramedPrefix();
        ~FramedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection : public ydk::Entity
{
    public:
        DuplicateAddressDetection();
        ~DuplicateAddressDetection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attempts; //type: uint32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial : public ydk::Entity
{
    public:
        RaInitial();
        ~RaInitial();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial


class DynamicTemplate::SubscriberServices::SubscriberService::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_feature; //type: string
        ydk::YLeaf prepaid_feature; //type: string
        class ServiceAccounting; //type: DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting
        class Session; //type: DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session
        class IdleTimeout; //type: DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting> service_accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout> idle_timeout;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Accounting


class DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting : public ydk::Entity
{
    public:
        ServiceAccounting();
        ~ServiceAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_list_name; //type: string
        ydk::YLeaf accounting_interim_interval; //type: uint32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting


class DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_list_name; //type: string
        ydk::YLeaf periodic_interval; //type: uint32
        ydk::YLeaf dual_stack_delay; //type: uint32
        ydk::YLeaf hold_acct_start; //type: HoldAcctStart
        class HoldAcctStart;

}; // DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session


class DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout : public ydk::Entity
{
    public:
        IdleTimeout();
        ~IdleTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout_value; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf direction; //type: string

}; // DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout


class DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions : public ydk::Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpanMonitorSession; //type: DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession

        ydk::YList span_monitor_session;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions


class DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession : public ydk::Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_class; //type: SpanSessionClass
        ydk::YLeaf mirror_first; //type: uint32
        ydk::YLeaf mirror_interval; //type: SpanMirrorInterval
        class Attachment; //type: DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment
        class Acl; //type: DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl> acl; // presence node
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession


class DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment : public ydk::Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_name; //type: string
        ydk::YLeaf direction; //type: SpanTrafficDirection
        ydk::YLeaf port_level_enable; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment


class DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_enable; //type: empty
        ydk::YLeaf acl_name; //type: string

}; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl


class DynamicTemplate::SubscriberServices::SubscriberService::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy
        class Account; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account
        class Output; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account> account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output> output;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy : public ydk::Entity
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

        class Input; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input
        class Output; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input> input; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output> output; // presence node
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf merge; //type: boolean
        ydk::YLeaf merge_id; //type: uint32
        ydk::YLeaf account_stats; //type: boolean

}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf merge; //type: boolean
        ydk::YLeaf merge_id; //type: uint32
        ydk::YLeaf account_stats; //type: boolean

}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account : public ydk::Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aal; //type: Qosl2DataLink
        ydk::YLeaf encapsulation; //type: Qosl2Encap
        ydk::YLeaf atm_cell_tax; //type: empty
        ydk::YLeaf user_defined; //type: int32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_bandwidth; //type: uint32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter : public ydk::Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Outbound; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound
        class Inbound; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound> outbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound> inbound;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter : public ydk::Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inbound; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound
        class Outbound; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound> outbound;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network : public ydk::Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf rpf; //type: boolean
        ydk::YLeaf unreachables; //type: empty
        class Addresses; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses> addresses;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoConfiguration; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration : public ydk::Entity
{
    public:
        AutoConfiguration();
        ~AutoConfiguration();

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

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration

class DynamicTemplate::Ppps::Ppp::Accounting::Session::HoldAcctStart : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv6_prefix_delegation;

};

class DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::HoldAcctStart : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv6_prefix_delegation;

};

class DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::HoldAcctStart : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv6_prefix_delegation;

};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_INFRA_TMPLMGR_CFG_ */

