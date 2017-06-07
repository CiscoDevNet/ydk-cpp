#ifndef _CISCO_IOS_XR_SUBSCRIBER_INFRA_TMPLMGR_CFG_
#define _CISCO_IOS_XR_SUBSCRIBER_INFRA_TMPLMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg {

class DynamicTemplate : public Entity
{
    public:
        DynamicTemplate();
        ~DynamicTemplate();

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

        class Ppps; //type: DynamicTemplate::Ppps
        class IpSubscribers; //type: DynamicTemplate::IpSubscribers
        class SubscriberServices; //type: DynamicTemplate::SubscriberServices

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers> ip_subscribers;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps> ppps;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices> subscriber_services;
        
}; // DynamicTemplate


class DynamicTemplate::Ppps : public Entity
{
    public:
        Ppps();
        ~Ppps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ppp; //type: DynamicTemplate::Ppps::Ppp

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp> > ppp;
        
}; // DynamicTemplate::Ppps


class DynamicTemplate::Ppps::Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf vrf; //type: string
        class SpanMonitorSessions; //type: DynamicTemplate::Ppps::Ppp::SpanMonitorSessions
        class Ipv4PacketFilter; //type: DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter
        class Ipv6PacketFilter; //type: DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter
        class Igmp; //type: DynamicTemplate::Ppps::Ppp::Igmp
        class Ipv4Network; //type: DynamicTemplate::Ppps::Ppp::Ipv4Network
        class Ipv6Network; //type: DynamicTemplate::Ppps::Ppp::Ipv6Network
        class Ipv6Neighbor; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor
        class Dhcpv6; //type: DynamicTemplate::Ppps::Ppp::Dhcpv6
        class Pbr; //type: DynamicTemplate::Ppps::Ppp::Pbr
        class PppTemplate; //type: DynamicTemplate::Ppps::Ppp::PppTemplate
        class Qos; //type: DynamicTemplate::Ppps::Ppp::Qos
        class Accounting; //type: DynamicTemplate::Ppps::Ppp::Accounting
        class PppoeTemplate; //type: DynamicTemplate::Ppps::Ppp::PppoeTemplate

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Dhcpv6> dhcpv6;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4Network> ipv4_network;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter> ipv4_packet_filter;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor> ipv6_neighbor;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Network> ipv6_network;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter> ipv6_packet_filter;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Pbr> pbr;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate> ppp_template;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppoeTemplate> pppoe_template;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos> qos;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::SpanMonitorSessions> span_monitor_sessions;
        
}; // DynamicTemplate::Ppps::Ppp


class DynamicTemplate::Ppps::Ppp::SpanMonitorSessions : public Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpanMonitorSession; //type: DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;
        
}; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions


class DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession : public Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_class; //type: SpanSessionClassEnum
        YLeaf mirror_first; //type: uint32
        YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
        YLeaf acl; //type: empty
        class Attachment; //type: DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession


class DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment : public Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_name; //type: string
        YLeaf direction; //type: SpanTrafficDirectionEnum
        YLeaf port_level_enable; //type: empty

}; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment


class DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter : public Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Outbound; //type: DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound
        class Inbound; //type: DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound> outbound; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter


class DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound


class DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound


class DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter : public Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inbound; //type: DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound
        class Outbound; //type: DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound> outbound; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter


class DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound


class DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound


class DynamicTemplate::Ppps::Ppp::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefaultVrf; //type: DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf> default_vrf;
        
}; // DynamicTemplate::Ppps::Ppp::Igmp


class DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_groups; //type: uint32
        YLeaf access_group; //type: string
        YLeaf version; //type: uint32
        YLeaf query_interval; //type: uint32
        YLeaf query_max_response_time; //type: uint32
        YLeaf multicast_mode; //type: DynTmplMulticastModeEnum
        class ExplicitTracking; //type: DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking> explicit_tracking; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf


class DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string

}; // DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking


class DynamicTemplate::Ppps::Ppp::Ipv4Network : public Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unnumbered; //type: string
        YLeaf mtu; //type: uint32
        YLeaf unreachables; //type: boolean
        YLeaf rpf; //type: boolean

}; // DynamicTemplate::Ppps::Ppp::Ipv4Network


class DynamicTemplate::Ppps::Ppp::Ipv6Network : public Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint32
        YLeaf unreachables; //type: empty
        YLeaf verify; //type: Ipv6ReachableViaEnum
        class Addresses; //type: DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses> addresses;
        
}; // DynamicTemplate::Ppps::Ppp::Ipv6Network


class DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses : public Entity
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

        class AutoConfiguration; //type: DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;
        
}; // DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses


class DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration : public Entity
{
    public:
        AutoConfiguration();
        ~AutoConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor : public Entity
{
    public:
        Ipv6Neighbor();
        ~Ipv6Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf framed_prefix_pool; //type: string
        YLeaf managed_config; //type: empty
        YLeaf other_config; //type: empty
        YLeaf start_ra_on_ipv6_enable; //type: empty
        YLeaf nud_enable; //type: empty
        YLeaf ra_lifetime; //type: uint32
        YLeaf router_preference; //type: Ipv6NdRouterPrefTemplateEnum
        YLeaf ra_suppress; //type: empty
        YLeaf ra_unicast; //type: empty
        YLeaf ra_unspecify_hoplimit; //type: empty
        YLeaf ra_suppress_mtu; //type: empty
        YLeaf suppress_cache_learning; //type: empty
        YLeaf reachable_time; //type: uint32
        YLeaf ns_interval; //type: uint32
        class RaInterval; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval
        class FramedPrefix; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix
        class DuplicateAddressDetection; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection
        class RaInitial; //type: DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection> duplicate_address_detection;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix> framed_prefix; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial> ra_initial; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval> ra_interval; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval : public Entity
{
    public:
        RaInterval();
        ~RaInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: uint32
        YLeaf minimum; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix : public Entity
{
    public:
        FramedPrefix();
        ~FramedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint8
        YLeaf prefix; //type: string

}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection : public Entity
{
    public:
        DuplicateAddressDetection();
        ~DuplicateAddressDetection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attempts; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection


class DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial : public Entity
{
    public:
        RaInitial();
        ~RaInitial();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint32
        YLeaf interval; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial


class DynamicTemplate::Ppps::Ppp::Dhcpv6 : public Entity
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

        YLeaf dns_ipv6address; //type: string
        YLeaf mode_class; //type: string
        YLeaf address_pool; //type: string
        YLeaf delegated_prefix_pool; //type: string
        YLeaf class_; //type: string
        YLeaf stateful_address; //type: string
        class DelegatedPrefix; //type: DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix> delegated_prefix; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Dhcpv6


class DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix : public Entity
{
    public:
        DelegatedPrefix();
        ~DelegatedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8

}; // DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix


class DynamicTemplate::Ppps::Ppp::Pbr : public Entity
{
    public:
        Pbr();
        ~Pbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_in; //type: string
        class ServicePolicy; //type: DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy> service_policy;
        
}; // DynamicTemplate::Ppps::Ppp::Pbr


class DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: string

}; // DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy


class DynamicTemplate::Ppps::Ppp::PppTemplate : public Entity
{
    public:
        PppTemplate();
        ~PppTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fsm; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm
        class Lcp; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp
        class Ipv6Cp; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp
        class Ipcp; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm> fsm;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp> ipcp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp> ipv6cp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp> lcp;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate


class DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm : public Entity
{
    public:
        Fsm();
        ~Fsm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_consecutive_conf_naks; //type: uint32
        YLeaf max_unacknowledged_conf_requests; //type: uint32
        YLeaf retry_timeout; //type: uint32
        YLeaf protocol_reject_timeout; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp : public Entity
{
    public:
        Lcp();
        ~Lcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf renegotiation; //type: empty
        YLeaf service_type; //type: uint32
        YLeaf send_term_request_on_shut_down; //type: empty
        YLeaf mru_ignore; //type: empty
        class AbsoluteTimeout; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout
        class Delay; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay
        class Authentication; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication
        class Keepalive; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout> absolute_timeout;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay> delay;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive> keepalive;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout : public Entity
{
    public:
        AbsoluteTimeout();
        ~AbsoluteTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minutes; //type: uint32
        YLeaf seconds; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf milliseconds; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication : public Entity
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

        YLeaf chap_host_name; //type: string
        YLeaf pap; //type: int32
        YLeaf mschap_host_name; //type: string
        YLeaf max_authentication_failures; //type: uint32
        YLeaf timeout; //type: uint32
        class Methods; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods> methods;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods : public Entity
{
    public:
        Methods();
        ~Methods();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList method; //type: list of  PppAuthenticationMethodGblEnum

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods


class DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keepalive_disable; //type: boolean
        YLeaf interval; //type: uint32
        YLeaf retry_count; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp : public Entity
{
    public:
        Ipv6Cp();
        ~Ipv6Cp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf passive; //type: empty
        YLeaf renegotiation; //type: empty
        YLeaf peer_interface_id; //type: string
        YLeaf protocol_reject; //type: empty

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp : public Entity
{
    public:
        Ipcp();
        ~Ipcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf renegotiation; //type: empty
        YLeaf passive; //type: empty
        YLeaf protocol_reject; //type: empty
        YLeaf peer_netmask; //type: string
        class Wins; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins
        class Dns; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns
        class PeerAddress; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns> dns;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress> peer_address;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins> wins;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins : public Entity
{
    public:
        Wins();
        ~Wins();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class WinsAddresses; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses> wins_addresses;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses : public Entity
{
    public:
        WinsAddresses();
        ~WinsAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary; //type: string
        YLeaf secondary; //type: string

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns : public Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DnsAddresses; //type: DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses> dns_addresses;
        
}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses : public Entity
{
    public:
        DnsAddresses();
        ~DnsAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary; //type: string
        YLeaf secondary; //type: string

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses


class DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress : public Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: string
        YLeaf pool; //type: string

}; // DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress


class DynamicTemplate::Ppps::Ppp::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicy; //type: DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy
        class Account; //type: DynamicTemplate::Ppps::Ppp::Qos::Account
        class Output; //type: DynamicTemplate::Ppps::Ppp::Qos::Output

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::Account> account;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::Output> output;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy> service_policy;
        
}; // DynamicTemplate::Ppps::Ppp::Qos


class DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input
        class Output; //type: DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input> input; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output> output; // presence node
        
}; // DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy


class DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf spi_name; //type: string
        YLeaf merge; //type: boolean
        YLeaf merge_id; //type: uint32
        YLeaf account_stats; //type: boolean

}; // DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input


class DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf spi_name; //type: string
        YLeaf merge; //type: boolean
        YLeaf merge_id; //type: uint32
        YLeaf account_stats; //type: boolean

}; // DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output


class DynamicTemplate::Ppps::Ppp::Qos::Account : public Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aal; //type: Qosl2DataLinkEnum
        YLeaf encapsulation; //type: Qosl2EncapEnum
        YLeaf atm_cell_tax; //type: empty
        YLeaf user_defined; //type: int32

}; // DynamicTemplate::Ppps::Ppp::Qos::Account


class DynamicTemplate::Ppps::Ppp::Qos::Output : public Entity
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

        YLeaf minimum_bandwidth; //type: uint32

}; // DynamicTemplate::Ppps::Ppp::Qos::Output


class DynamicTemplate::Ppps::Ppp::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prepaid_feature; //type: string
        class IdleTimeout; //type: DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout
        class Session; //type: DynamicTemplate::Ppps::Ppp::Accounting::Session
        class ServiceAccounting; //type: DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout> idle_timeout;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting> service_accounting;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Accounting::Session> session;
        
}; // DynamicTemplate::Ppps::Ppp::Accounting


class DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout : public Entity
{
    public:
        IdleTimeout();
        ~IdleTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout_value; //type: int32
        YLeaf threshold; //type: int32
        YLeaf direction; //type: string

}; // DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout


class DynamicTemplate::Ppps::Ppp::Accounting::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf method_list_name; //type: string
        YLeaf periodic_interval; //type: int32
        YLeaf dual_stack_delay; //type: int32
        YLeaf hold_acct_start; //type: int32

}; // DynamicTemplate::Ppps::Ppp::Accounting::Session


class DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting : public Entity
{
    public:
        ServiceAccounting();
        ~ServiceAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf method_list_name; //type: string
        YLeaf accounting_interim_interval; //type: int32

}; // DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting


class DynamicTemplate::Ppps::Ppp::PppoeTemplate : public Entity
{
    public:
        PppoeTemplate();
        ~PppoeTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_limit; //type: uint16

}; // DynamicTemplate::Ppps::Ppp::PppoeTemplate


class DynamicTemplate::IpSubscribers : public Entity
{
    public:
        IpSubscribers();
        ~IpSubscribers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpSubscriber; //type: DynamicTemplate::IpSubscribers::IpSubscriber

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber> > ip_subscriber;
        
}; // DynamicTemplate::IpSubscribers


class DynamicTemplate::IpSubscribers::IpSubscriber : public Entity
{
    public:
        IpSubscriber();
        ~IpSubscriber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf vrf; //type: string
        class SpanMonitorSessions; //type: DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions
        class Ipv4PacketFilter; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter
        class Ipv6PacketFilter; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter
        class Dhcpd; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd
        class Igmp; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Igmp
        class Ipv4Network; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network
        class Ipv6Network; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network
        class Ipv6Neighbor; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor
        class Dhcpv6; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6
        class Pbr; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Pbr
        class Qos; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos
        class Accounting; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Accounting

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd> dhcpd;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6> dhcpv6;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network> ipv4_network;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter> ipv4_packet_filter;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor> ipv6_neighbor;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network> ipv6_network;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter> ipv6_packet_filter;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Pbr> pbr;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos> qos;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions> span_monitor_sessions;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber


class DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions : public Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpanMonitorSession; //type: DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions


class DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession : public Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_class; //type: SpanSessionClassEnum
        YLeaf mirror_first; //type: uint32
        YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
        YLeaf acl; //type: empty
        class Attachment; //type: DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession


class DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment : public Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_name; //type: string
        YLeaf direction; //type: SpanTrafficDirectionEnum
        YLeaf port_level_enable; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter : public Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Outbound; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound
        class Inbound; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound> outbound; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter : public Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inbound; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound
        class Outbound; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound> outbound; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound


class DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd : public Entity
{
    public:
        Dhcpd();
        ~Dhcpd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_; //type: string
        YLeaf default_gateway; //type: string
        YLeaf session_limit; //type: int32
        YLeaf dhcpv4_option; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd


class DynamicTemplate::IpSubscribers::IpSubscriber::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefaultVrf; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf> default_vrf;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Igmp


class DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_groups; //type: uint32
        YLeaf access_group; //type: string
        YLeaf version; //type: uint32
        YLeaf query_interval; //type: uint32
        YLeaf query_max_response_time; //type: uint32
        YLeaf multicast_mode; //type: DynTmplMulticastModeEnum
        class ExplicitTracking; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking> explicit_tracking; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf


class DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network : public Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unnumbered; //type: string
        YLeaf mtu; //type: uint32
        YLeaf unreachables; //type: boolean
        YLeaf rpf; //type: boolean

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network : public Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint32
        YLeaf unreachables; //type: empty
        YLeaf verify; //type: Ipv6ReachableViaEnum
        class Addresses; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses> addresses;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses : public Entity
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

        class AutoConfiguration; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration : public Entity
{
    public:
        AutoConfiguration();
        ~AutoConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor : public Entity
{
    public:
        Ipv6Neighbor();
        ~Ipv6Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf framed_prefix_pool; //type: string
        YLeaf managed_config; //type: empty
        YLeaf other_config; //type: empty
        YLeaf start_ra_on_ipv6_enable; //type: empty
        YLeaf nud_enable; //type: empty
        YLeaf ra_lifetime; //type: uint32
        YLeaf router_preference; //type: Ipv6NdRouterPrefTemplateEnum
        YLeaf ra_suppress; //type: empty
        YLeaf ra_unicast; //type: empty
        YLeaf ra_unspecify_hoplimit; //type: empty
        YLeaf ra_suppress_mtu; //type: empty
        YLeaf suppress_cache_learning; //type: empty
        YLeaf reachable_time; //type: uint32
        YLeaf ns_interval; //type: uint32
        class RaInterval; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval
        class FramedPrefix; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix
        class DuplicateAddressDetection; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection
        class RaInitial; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection> duplicate_address_detection;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix> framed_prefix; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial> ra_initial; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval> ra_interval; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval : public Entity
{
    public:
        RaInterval();
        ~RaInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: uint32
        YLeaf minimum; //type: uint32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix : public Entity
{
    public:
        FramedPrefix();
        ~FramedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint8
        YLeaf prefix; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection : public Entity
{
    public:
        DuplicateAddressDetection();
        ~DuplicateAddressDetection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attempts; //type: uint32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection


class DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial : public Entity
{
    public:
        RaInitial();
        ~RaInitial();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint32
        YLeaf interval; //type: uint32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial


class DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6 : public Entity
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

        YLeaf dns_ipv6address; //type: string
        YLeaf mode_class; //type: string
        YLeaf address_pool; //type: string
        YLeaf delegated_prefix_pool; //type: string
        YLeaf class_; //type: string
        YLeaf stateful_address; //type: string
        class DelegatedPrefix; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix> delegated_prefix; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6


class DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix : public Entity
{
    public:
        DelegatedPrefix();
        ~DelegatedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix


class DynamicTemplate::IpSubscribers::IpSubscriber::Pbr : public Entity
{
    public:
        Pbr();
        ~Pbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_in; //type: string
        class ServicePolicy; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy> service_policy;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Pbr


class DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicy; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy
        class Account; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account
        class Output; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account> account;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output> output;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy> service_policy;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input
        class Output; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input> input; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output> output; // presence node
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf spi_name; //type: string
        YLeaf merge; //type: boolean
        YLeaf merge_id; //type: uint32
        YLeaf account_stats; //type: boolean

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf spi_name; //type: string
        YLeaf merge; //type: boolean
        YLeaf merge_id; //type: uint32
        YLeaf account_stats; //type: boolean

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account : public Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aal; //type: Qosl2DataLinkEnum
        YLeaf encapsulation; //type: Qosl2EncapEnum
        YLeaf atm_cell_tax; //type: empty
        YLeaf user_defined; //type: int32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account


class DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output : public Entity
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

        YLeaf minimum_bandwidth; //type: uint32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output


class DynamicTemplate::IpSubscribers::IpSubscriber::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prepaid_feature; //type: string
        class ServiceAccounting; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting
        class Session; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session
        class IdleTimeout; //type: DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout> idle_timeout;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting> service_accounting;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session> session;
        
}; // DynamicTemplate::IpSubscribers::IpSubscriber::Accounting


class DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting : public Entity
{
    public:
        ServiceAccounting();
        ~ServiceAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf method_list_name; //type: string
        YLeaf accounting_interim_interval; //type: int32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting


class DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf method_list_name; //type: string
        YLeaf periodic_interval; //type: int32
        YLeaf dual_stack_delay; //type: int32
        YLeaf hold_acct_start; //type: int32

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session


class DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout : public Entity
{
    public:
        IdleTimeout();
        ~IdleTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout_value; //type: int32
        YLeaf threshold; //type: int32
        YLeaf direction; //type: string

}; // DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout


class DynamicTemplate::SubscriberServices : public Entity
{
    public:
        SubscriberServices();
        ~SubscriberServices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SubscriberService; //type: DynamicTemplate::SubscriberServices::SubscriberService

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService> > subscriber_service;
        
}; // DynamicTemplate::SubscriberServices


class DynamicTemplate::SubscriberServices::SubscriberService : public Entity
{
    public:
        SubscriberService();
        ~SubscriberService();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf vrf; //type: string
        class SpanMonitorSessions; //type: DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions
        class Ipv4PacketFilter; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter
        class Ipv6PacketFilter; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter
        class Ipv4Network; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network
        class Ipv6Network; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network
        class Ipv6Neighbor; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor
        class Pbr; //type: DynamicTemplate::SubscriberServices::SubscriberService::Pbr
        class Qos; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos
        class Accounting; //type: DynamicTemplate::SubscriberServices::SubscriberService::Accounting

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network> ipv4_network;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter> ipv4_packet_filter;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor> ipv6_neighbor;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network> ipv6_network;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter> ipv6_packet_filter;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Pbr> pbr;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos> qos;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions> span_monitor_sessions;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService


class DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions : public Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpanMonitorSession; //type: DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions


class DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession : public Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_class; //type: SpanSessionClassEnum
        YLeaf mirror_first; //type: uint32
        YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
        YLeaf acl; //type: empty
        class Attachment; //type: DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession


class DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment : public Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_name; //type: string
        YLeaf direction; //type: SpanTrafficDirectionEnum
        YLeaf port_level_enable; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter : public Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Outbound; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound
        class Inbound; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound> outbound; // presence node
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter : public Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inbound; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound
        class Outbound; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound> outbound; // presence node
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network : public Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unnumbered; //type: string
        YLeaf mtu; //type: uint32
        YLeaf unreachables; //type: boolean
        YLeaf rpf; //type: boolean

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network : public Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint32
        YLeaf unreachables; //type: empty
        YLeaf verify; //type: Ipv6ReachableViaEnum
        class Addresses; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses> addresses;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses : public Entity
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

        class AutoConfiguration; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration : public Entity
{
    public:
        AutoConfiguration();
        ~AutoConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor : public Entity
{
    public:
        Ipv6Neighbor();
        ~Ipv6Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf framed_prefix_pool; //type: string
        YLeaf managed_config; //type: empty
        YLeaf other_config; //type: empty
        YLeaf start_ra_on_ipv6_enable; //type: empty
        YLeaf nud_enable; //type: empty
        YLeaf ra_lifetime; //type: uint32
        YLeaf router_preference; //type: Ipv6NdRouterPrefTemplateEnum
        YLeaf ra_suppress; //type: empty
        YLeaf ra_unicast; //type: empty
        YLeaf ra_unspecify_hoplimit; //type: empty
        YLeaf ra_suppress_mtu; //type: empty
        YLeaf suppress_cache_learning; //type: empty
        YLeaf reachable_time; //type: uint32
        YLeaf ns_interval; //type: uint32
        class RaInterval; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval
        class FramedPrefix; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix
        class DuplicateAddressDetection; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection
        class RaInitial; //type: DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection> duplicate_address_detection;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix> framed_prefix; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial> ra_initial; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval> ra_interval; // presence node
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval : public Entity
{
    public:
        RaInterval();
        ~RaInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: uint32
        YLeaf minimum; //type: uint32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix : public Entity
{
    public:
        FramedPrefix();
        ~FramedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint8
        YLeaf prefix; //type: string

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection : public Entity
{
    public:
        DuplicateAddressDetection();
        ~DuplicateAddressDetection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attempts; //type: uint32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection


class DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial : public Entity
{
    public:
        RaInitial();
        ~RaInitial();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint32
        YLeaf interval; //type: uint32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial


class DynamicTemplate::SubscriberServices::SubscriberService::Pbr : public Entity
{
    public:
        Pbr();
        ~Pbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_policy_in; //type: string
        class ServicePolicy; //type: DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy> service_policy;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Pbr


class DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: string

}; // DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy


class DynamicTemplate::SubscriberServices::SubscriberService::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicy; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy
        class Account; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account
        class Output; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account> account;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output> output;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy> service_policy;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input
        class Output; //type: DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input> input; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output> output; // presence node
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf spi_name; //type: string
        YLeaf merge; //type: boolean
        YLeaf merge_id; //type: uint32
        YLeaf account_stats; //type: boolean

}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output : public Entity
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

        YLeaf policy_name; //type: string
        YLeaf spi_name; //type: string
        YLeaf merge; //type: boolean
        YLeaf merge_id; //type: uint32
        YLeaf account_stats; //type: boolean

}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account : public Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aal; //type: Qosl2DataLinkEnum
        YLeaf encapsulation; //type: Qosl2EncapEnum
        YLeaf atm_cell_tax; //type: empty
        YLeaf user_defined; //type: int32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account


class DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output : public Entity
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

        YLeaf minimum_bandwidth; //type: uint32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output


class DynamicTemplate::SubscriberServices::SubscriberService::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prepaid_feature; //type: string
        class ServiceAccounting; //type: DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting
        class Session; //type: DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session
        class IdleTimeout; //type: DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout

        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout> idle_timeout;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting> service_accounting;
        std::shared_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session> session;
        
}; // DynamicTemplate::SubscriberServices::SubscriberService::Accounting


class DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting : public Entity
{
    public:
        ServiceAccounting();
        ~ServiceAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf method_list_name; //type: string
        YLeaf accounting_interim_interval; //type: int32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting


class DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf method_list_name; //type: string
        YLeaf periodic_interval; //type: int32
        YLeaf dual_stack_delay; //type: int32
        YLeaf hold_acct_start; //type: int32

}; // DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session


class DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout : public Entity
{
    public:
        IdleTimeout();
        ~IdleTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout_value; //type: int32
        YLeaf threshold; //type: int32
        YLeaf direction; //type: string

}; // DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_INFRA_TMPLMGR_CFG_ */

