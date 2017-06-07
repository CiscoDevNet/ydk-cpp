#ifndef _CISCO_IOS_XE_BGP_OPER_
#define _CISCO_IOS_XE_BGP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_bgp_oper {

class BgpState : public Entity
{
    public:
        BgpState();
        ~BgpState();

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

        class Neighbors; //type: BgpState::Neighbors
        class AddressFamilies; //type: BgpState::AddressFamilies

        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies> address_families;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors> neighbors;
        
}; // BgpState


class BgpState::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: BgpState::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor> > neighbor;
        
}; // BgpState::Neighbors


class BgpState::Neighbors::Neighbor : public Entity
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

        YLeaf afi_safi; //type: BgpAfiSafiEnum
        YLeaf vrf_name; //type: string
        YLeaf neighbor_id; //type: string
        YLeaf description; //type: string
        YLeaf bgp_version; //type: uint16
        YLeaf link; //type: BgpLinkEnum
        YLeaf up_time; //type: string
        YLeaf last_write; //type: string
        YLeaf last_read; //type: string
        YLeaf installed_prefixes; //type: uint32
        YLeaf session_state; //type: BgpFsmStateEnum
        YLeafList negotiated_cap; //type: list of  string
        class NegotiatedKeepaliveTimers; //type: BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers
        class BgpNeighborCounters; //type: BgpState::Neighbors::Neighbor::BgpNeighborCounters
        class Connection; //type: BgpState::Neighbors::Neighbor::Connection
        class Transport; //type: BgpState::Neighbors::Neighbor::Transport
        class PrefixActivity; //type: BgpState::Neighbors::Neighbor::PrefixActivity

        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor::BgpNeighborCounters> bgp_neighbor_counters;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor::Connection> connection;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers> negotiated_keepalive_timers;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor::PrefixActivity> prefix_activity;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor::Transport> transport;
        
}; // BgpState::Neighbors::Neighbor


class BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers : public Entity
{
    public:
        NegotiatedKeepaliveTimers();
        ~NegotiatedKeepaliveTimers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hold_time; //type: uint16
        YLeaf keepalive_interval; //type: uint16

}; // BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers


class BgpState::Neighbors::Neighbor::BgpNeighborCounters : public Entity
{
    public:
        BgpNeighborCounters();
        ~BgpNeighborCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inq_depth; //type: uint32
        YLeaf outq_depth; //type: uint32
        class Sent; //type: BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent
        class Received; //type: BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received

        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received> received;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent> sent;
        
}; // BgpState::Neighbors::Neighbor::BgpNeighborCounters


class BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf opens; //type: uint32
        YLeaf updates; //type: uint32
        YLeaf notifications; //type: uint32
        YLeaf keepalives; //type: uint32
        YLeaf route_refreshes; //type: uint32

}; // BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent


class BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf opens; //type: uint32
        YLeaf updates; //type: uint32
        YLeaf notifications; //type: uint32
        YLeaf keepalives; //type: uint32
        YLeaf route_refreshes; //type: uint32

}; // BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received


class BgpState::Neighbors::Neighbor::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: TcpFsmStateEnum
        YLeaf mode; //type: BgpModeEnum
        YLeaf total_established; //type: uint32
        YLeaf total_dropped; //type: uint32
        YLeaf last_reset; //type: string
        YLeaf reset_reason; //type: string

}; // BgpState::Neighbors::Neighbor::Connection


class BgpState::Neighbors::Neighbor::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf path_mtu_discovery; //type: boolean
        YLeaf local_port; //type: uint32
        YLeaf local_host; //type: string
        YLeaf foreign_port; //type: uint32
        YLeaf foreign_host; //type: string
        YLeaf mss; //type: uint32

}; // BgpState::Neighbors::Neighbor::Transport


class BgpState::Neighbors::Neighbor::PrefixActivity : public Entity
{
    public:
        PrefixActivity();
        ~PrefixActivity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sent; //type: BgpState::Neighbors::Neighbor::PrefixActivity::Sent
        class Received; //type: BgpState::Neighbors::Neighbor::PrefixActivity::Received

        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor::PrefixActivity::Received> received;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::Neighbors::Neighbor::PrefixActivity::Sent> sent;
        
}; // BgpState::Neighbors::Neighbor::PrefixActivity


class BgpState::Neighbors::Neighbor::PrefixActivity::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf current_prefixes; //type: uint64
        YLeaf total_prefixes; //type: uint64
        YLeaf implicit_withdraw; //type: uint64
        YLeaf explicit_withdraw; //type: uint64
        YLeaf bestpaths; //type: uint64
        YLeaf multipaths; //type: uint64

}; // BgpState::Neighbors::Neighbor::PrefixActivity::Sent


class BgpState::Neighbors::Neighbor::PrefixActivity::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf current_prefixes; //type: uint64
        YLeaf total_prefixes; //type: uint64
        YLeaf implicit_withdraw; //type: uint64
        YLeaf explicit_withdraw; //type: uint64
        YLeaf bestpaths; //type: uint64
        YLeaf multipaths; //type: uint64

}; // BgpState::Neighbors::Neighbor::PrefixActivity::Received


class BgpState::AddressFamilies : public Entity
{
    public:
        AddressFamilies();
        ~AddressFamilies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressFamily; //type: BgpState::AddressFamilies::AddressFamily

        std::vector<std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies::AddressFamily> > address_family;
        
}; // BgpState::AddressFamilies


class BgpState::AddressFamilies::AddressFamily : public Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi; //type: BgpAfiSafiEnum
        YLeaf vrf_name; //type: string
        YLeaf router_id; //type: string
        YLeaf bgp_table_version; //type: uint64
        YLeaf routing_table_version; //type: uint64
        YLeaf total_memory; //type: uint64
        class Prefixes; //type: BgpState::AddressFamilies::AddressFamily::Prefixes
        class Path; //type: BgpState::AddressFamilies::AddressFamily::Path
        class AsPath; //type: BgpState::AddressFamilies::AddressFamily::AsPath
        class RouteMap; //type: BgpState::AddressFamilies::AddressFamily::RouteMap
        class FilterList; //type: BgpState::AddressFamilies::AddressFamily::FilterList
        class Activities; //type: BgpState::AddressFamilies::AddressFamily::Activities
        class BgpNeighborSummaries; //type: BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries

        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies::AddressFamily::Activities> activities;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies::AddressFamily::AsPath> as_path;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries> bgp_neighbor_summaries;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies::AddressFamily::FilterList> filter_list;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies::AddressFamily::Path> path;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies::AddressFamily::Prefixes> prefixes;
        std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies::AddressFamily::RouteMap> route_map;
        
}; // BgpState::AddressFamilies::AddressFamily


class BgpState::AddressFamilies::AddressFamily::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_entries; //type: uint64
        YLeaf memory_usage; //type: uint64

}; // BgpState::AddressFamilies::AddressFamily::Prefixes


class BgpState::AddressFamilies::AddressFamily::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_entries; //type: uint64
        YLeaf memory_usage; //type: uint64

}; // BgpState::AddressFamilies::AddressFamily::Path


class BgpState::AddressFamilies::AddressFamily::AsPath : public Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_entries; //type: uint64
        YLeaf memory_usage; //type: uint64

}; // BgpState::AddressFamilies::AddressFamily::AsPath


class BgpState::AddressFamilies::AddressFamily::RouteMap : public Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_entries; //type: uint64
        YLeaf memory_usage; //type: uint64

}; // BgpState::AddressFamilies::AddressFamily::RouteMap


class BgpState::AddressFamilies::AddressFamily::FilterList : public Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_entries; //type: uint64
        YLeaf memory_usage; //type: uint64

}; // BgpState::AddressFamilies::AddressFamily::FilterList


class BgpState::AddressFamilies::AddressFamily::Activities : public Entity
{
    public:
        Activities();
        ~Activities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefixes; //type: uint64
        YLeaf paths; //type: uint64
        YLeaf scan_interval; //type: string

}; // BgpState::AddressFamilies::AddressFamily::Activities


class BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries : public Entity
{
    public:
        BgpNeighborSummaries();
        ~BgpNeighborSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpNeighborSummary; //type: BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary

        std::vector<std::shared_ptr<Cisco_IOS_XE_bgp_oper::BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary> > bgp_neighbor_summary;
        
}; // BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries


class BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary : public Entity
{
    public:
        BgpNeighborSummary();
        ~BgpNeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf bgp_version; //type: uint32
        YLeaf messages_received; //type: uint64
        YLeaf messages_sent; //type: uint64
        YLeaf table_version; //type: uint64
        YLeaf input_queue; //type: uint64
        YLeaf output_queue; //type: uint64
        YLeaf up_time; //type: string
        YLeaf state; //type: BgpFsmStateEnum
        YLeaf prefixes_received; //type: uint64

}; // BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary

class BgpFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf connect;
        static const Enum::YLeaf active;
        static const Enum::YLeaf opensent;
        static const Enum::YLeaf openconfirm;
        static const Enum::YLeaf established;
        static const Enum::YLeaf nonnegotiated;

};

class BgpAfiSafiEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4_mdt;
        static const Enum::YLeaf ipv4_multicast;
        static const Enum::YLeaf ipv4_unicast;
        static const Enum::YLeaf ipv4_mvpn;
        static const Enum::YLeaf ipv4_flowspec;
        static const Enum::YLeaf ipv6_multicast;
        static const Enum::YLeaf ipv6_unicast;
        static const Enum::YLeaf ipv6_mvpn;
        static const Enum::YLeaf ipv6_flowspec;
        static const Enum::YLeaf l2vpn_vpls;
        static const Enum::YLeaf l2vpn_e_vpn;
        static const Enum::YLeaf nsap_unicast;
        static const Enum::YLeaf rtfilter_unicast;
        static const Enum::YLeaf vpnv4_multicast;
        static const Enum::YLeaf vpnv4_unicast;
        static const Enum::YLeaf vpnv6_unicast;
        static const Enum::YLeaf vpnv6_multicast;
        static const Enum::YLeaf vpnv4_flowspec;
        static const Enum::YLeaf vpnv6_flowspec;

};

class BgpOriginCodeEnum : public Enum
{
    public:
        static const Enum::YLeaf origin_igp;
        static const Enum::YLeaf origin_egp;
        static const Enum::YLeaf origin_incomplete;

};

class TcpFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf closed;
        static const Enum::YLeaf listen;
        static const Enum::YLeaf synsent;
        static const Enum::YLeaf synrcvd;
        static const Enum::YLeaf established;
        static const Enum::YLeaf finwait1;
        static const Enum::YLeaf finwait2;
        static const Enum::YLeaf closewait;
        static const Enum::YLeaf lastack;
        static const Enum::YLeaf closing;
        static const Enum::YLeaf timewait;

};

class BgpLinkEnum : public Enum
{
    public:
        static const Enum::YLeaf internal;
        static const Enum::YLeaf external;

};

class BgpRouteOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_all_routes;
        static const Enum::YLeaf bgp_cidr_only_routes;
        static const Enum::YLeaf bgp_dampened_routes;
        static const Enum::YLeaf bgp_rib_fail_routes;
        static const Enum::YLeaf bgp_injected_routes;
        static const Enum::YLeaf bgp_pending_routes;
        static const Enum::YLeaf bgp_inconsistent_routes;

};

class BgpRpkiStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf rpki_valid;
        static const Enum::YLeaf rpki_invalid;
        static const Enum::YLeaf rpki_not_found;

};

class BgpModeEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};


}
}

#endif /* _CISCO_IOS_XE_BGP_OPER_ */

