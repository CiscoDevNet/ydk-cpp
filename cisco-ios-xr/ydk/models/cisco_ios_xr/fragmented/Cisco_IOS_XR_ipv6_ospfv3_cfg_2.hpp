#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_CFG_2_
#define _CISCO_IOS_XR_IPV6_OSPFV3_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tiebreaker_type; //type: Ospfv3FastRerouteTiebreakersEnum
        YLeaf tiebreaker_index; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospfv3::Processes::Process::Vrfs::Vrf::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf administrative; //type: uint32
        class Ospfv3_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_> ospfv3;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Distance


class Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_ : public Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf intra_area; //type: uint32
        YLeaf inter_area; //type: uint32
        YLeaf external; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_


class Ospfv3::Processes::Process::Vrfs::Vrf::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interfaces; //type: uint32
        YLeaf paths; //type: uint32
        class RedistributedPrefixes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes> redistributed_prefixes;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Maximum


class Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes : public Entity
{
    public:
        RedistributedPrefixes();
        ~RedistributedPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefixes; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf warning_only; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes : public Entity
{
    public:
        Redistributes();
        ~Redistributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Redistribute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute> > redistribute;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute : public Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: Ospfv3ProtocolType2Enum
        class ConnectedOrStaticOrSubscriberOrMobile; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile
        class Bgp; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp
        class Ospfv3OrIsisOrApplication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication
        class Eigrp; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile> connected_or_static_or_subscriber_or_mobile; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication> > ospfv3_or_isis_or_application;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile : public Entity
{
    public:
        ConnectedOrStaticOrSubscriberOrMobile();
        ~ConnectedOrStaticOrSubscriberOrMobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal_route_type; //type: Ospfv3InternalRouteEnum
        YLeaf default_metric; //type: uint32
        YLeaf metric_type; //type: Ospfv3MetricEnum
        YLeaf tag; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf external_route_type; //type: Ospfv3ExternalRouteEnum
        YLeaf nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
        YLeaf redistribute_route; //type: boolean
        YLeaf isis_route_type; //type: Ospfv3IsisRouteEnum
        YLeaf eigrp_route_type; //type: Ospfv3EigrpRouteEnum
        YLeaf preserve_med; //type: empty
        YLeaf preserve_med_info; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf internal_route_type; //type: Ospfv3InternalRouteEnum
        YLeaf default_metric; //type: uint32
        YLeaf metric_type; //type: Ospfv3MetricEnum
        YLeaf tag; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf external_route_type; //type: Ospfv3ExternalRouteEnum
        YLeaf nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
        YLeaf redistribute_route; //type: boolean
        YLeaf isis_route_type; //type: Ospfv3IsisRouteEnum
        YLeaf eigrp_route_type; //type: Ospfv3EigrpRouteEnum
        YLeaf preserve_med; //type: empty
        YLeaf preserve_med_info; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication : public Entity
{
    public:
        Ospfv3OrIsisOrApplication();
        ~Ospfv3OrIsisOrApplication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_name; //type: string
        YLeaf internal_route_type; //type: Ospfv3InternalRouteEnum
        YLeaf default_metric; //type: uint32
        YLeaf metric_type; //type: Ospfv3MetricEnum
        YLeaf tag; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf external_route_type; //type: Ospfv3ExternalRouteEnum
        YLeaf nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
        YLeaf redistribute_route; //type: boolean
        YLeaf isis_route_type; //type: Ospfv3IsisRouteEnum
        YLeaf eigrp_route_type; //type: Ospfv3EigrpRouteEnum
        YLeaf preserve_med; //type: empty
        YLeaf preserve_med_info; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_xx; //type: uint32
        YLeaf internal_route_type; //type: Ospfv3InternalRouteEnum
        YLeaf default_metric; //type: uint32
        YLeaf metric_type; //type: Ospfv3MetricEnum
        YLeaf tag; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf external_route_type; //type: Ospfv3ExternalRouteEnum
        YLeaf nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
        YLeaf redistribute_route; //type: boolean
        YLeaf isis_route_type; //type: Ospfv3IsisRouteEnum
        YLeaf eigrp_route_type; //type: Ospfv3EigrpRouteEnum
        YLeaf preserve_med; //type: empty
        YLeaf preserve_med_info; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp


class Ospfv3::Processes::Process::Vrfs::Vrf::Ignore : public Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa> lsa;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Ignore


class Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mospf; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut : public Entity
{
    public:
        DistributeListOut();
        ~DistributeListOut();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DistributeOuts; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts> distribute_outs;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts : public Entity
{
    public:
        DistributeOuts();
        ~DistributeOuts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DistributeOut; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut> > distribute_out;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut : public Entity
{
    public:
        DistributeOut();
        ~DistributeOut();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: Ospfv3ProtocolEnum
        class AsYyAndAsXxAndProcessName; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName> > as_yy_and_as_xx_and_process_name;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName : public Entity
{
    public:
        AsYyAndAsXxAndProcessName();
        ~AsYyAndAsXxAndProcessName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_yy; //type: uint32
        YLeaf as_xx; //type: uint32
        YLeaf process_name; //type: string
        YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter : public Entity
{
    public:
        StubRouter();
        ~StubRouter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rbit; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit
        class V6Bit; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit
        class MaxMetric; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric> max_metric;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit> rbit;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit> v6bit;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit : public Entity
{
    public:
        Rbit();
        ~Rbit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf on_switchover; //type: uint32
        YLeaf always; //type: empty
        YLeaf external_lsa; //type: uint32
        YLeaf include_stub; //type: empty
        YLeaf enable; //type: empty
        YLeaf on_proc_migration; //type: uint32
        YLeaf on_proc_restart; //type: uint32
        YLeaf summary_lsa; //type: uint32
        class OnStartup; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup> on_startup;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup : public Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wait_for_bgp; //type: boolean
        YLeaf wait_time; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit : public Entity
{
    public:
        V6Bit();
        ~V6Bit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf on_switchover; //type: uint32
        YLeaf always; //type: empty
        YLeaf external_lsa; //type: uint32
        YLeaf include_stub; //type: empty
        YLeaf enable; //type: empty
        YLeaf on_proc_migration; //type: uint32
        YLeaf on_proc_restart; //type: uint32
        YLeaf summary_lsa; //type: uint32
        class OnStartup; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup> on_startup;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup : public Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wait_for_bgp; //type: boolean
        YLeaf wait_time; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric : public Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf on_switchover; //type: uint32
        YLeaf always; //type: empty
        YLeaf external_lsa; //type: uint32
        YLeaf include_stub; //type: empty
        YLeaf enable; //type: empty
        YLeaf on_proc_migration; //type: uint32
        YLeaf on_proc_restart; //type: uint32
        YLeaf summary_lsa; //type: uint32
        class OnStartup; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup> on_startup;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup : public Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wait_for_bgp; //type: boolean
        YLeaf wait_time; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup


class Ospfv3::Processes::Process::Vrfs::Vrf::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf fast_detect_mode; //type: Ospfv3BfdEnableModeEnum

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::Authentication : public Entity
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

        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf algorithm; //type: Ospfv3AuthenticationEnum
        YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart : public Entity
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

        YLeaf interval; //type: uint32
        YLeaf strict_lsa_checking; //type: empty
        YLeaf helper; //type: empty
        YLeaf enable; //type: empty
        YLeaf lifetime; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart


class Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Originate; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate> originate; // presence node
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation


class Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate : public Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: uint32
        YLeaf tag; //type: int32
        YLeaf route_policy_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope : public Entity
{
    public:
        ProcessScope();
        ~ProcessScope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute : public Entity
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

        YLeaf fast_reroute_enable; //type: Ospfv3FastRerouteEnum
        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf spi; //type: uint32
        YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
        YLeaf encryption_password; //type: string
        YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
        YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost : public Entity
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

        YLeaf disable; //type: empty
        YLeaf reference_bandwidth; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost


class Ospfv3::Processes::Process::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: Ospfv3AddressFamilyEnum
        YLeaf saf_name; //type: Ospfv3SubsequentAddressFamilyEnum

}; // Ospfv3::Processes::Process::Af


class Ospfv3::Processes::Process::TraceBufs : public Entity
{
    public:
        TraceBufs();
        ~TraceBufs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TraceBuf; //type: Ospfv3::Processes::Process::TraceBufs::TraceBuf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::TraceBufs::TraceBuf> > trace_buf;
        
}; // Ospfv3::Processes::Process::TraceBufs


class Ospfv3::Processes::Process::TraceBufs::TraceBuf : public Entity
{
    public:
        TraceBuf();
        ~TraceBuf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trace_buf_name; //type: string
        YLeaf bufsize; //type: TraceBufSizeEnum

}; // Ospfv3::Processes::Process::TraceBufs::TraceBuf


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_CFG_2_ */

