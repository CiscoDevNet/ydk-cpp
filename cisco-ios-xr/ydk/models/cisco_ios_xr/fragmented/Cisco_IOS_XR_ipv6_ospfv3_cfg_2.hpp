#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_CFG_2_
#define _CISCO_IOS_XR_IPV6_OSPFV3_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_sharing_disable; //type: empty
        ydk::YLeaf priority; //type: Ospfv3FastReroutePriority
        class Tiebreakers; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tiebreaker; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: Ospfv3FastRerouteTiebreakers
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospfv3::Processes::Process::Vrfs::Vrf::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf administrative; //type: uint32
        class Ospfv3_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_> ospfv3;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Distance


class Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_ : public ydk::Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intra_area; //type: uint32
        ydk::YLeaf inter_area; //type: uint32
        ydk::YLeaf external; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_


class Ospfv3::Processes::Process::Vrfs::Vrf::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interfaces; //type: uint32
        ydk::YLeaf paths; //type: uint32
        class RedistributedPrefixes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes> redistributed_prefixes;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Maximum


class Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes : public ydk::Entity
{
    public:
        RedistributedPrefixes();
        ~RedistributedPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefixes; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf warning_only; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes : public ydk::Entity
{
    public:
        Redistributes();
        ~Redistributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute

        ydk::YList redistribute;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: Ospfv3ProtocolType2
        class ConnectedOrStaticOrSubscriberOrMobile; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile
        class Bgp; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp
        class Ospfv3OrIsisOrApplication; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication
        class Eigrp; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile> connected_or_static_or_subscriber_or_mobile; // presence node
        ydk::YList bgp;
        ydk::YList ospfv3_or_isis_or_application;
        ydk::YList eigrp;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile : public ydk::Entity
{
    public:
        ConnectedOrStaticOrSubscriberOrMobile();
        ~ConnectedOrStaticOrSubscriberOrMobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal_route_type; //type: Ospfv3InternalRoute
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf metric_type; //type: Ospfv3Metric
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf external_route_type; //type: Ospfv3ExternalRoute
        ydk::YLeaf nssa_external_route_type; //type: Ospfv3nssaExternalRoute
        ydk::YLeaf redistribute_route; //type: boolean
        ydk::YLeaf isis_route_type; //type: Ospfv3isisRoute
        ydk::YLeaf eigrp_route_type; //type: Ospfv3EigrpRoute
        ydk::YLeaf preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf use_rib_metric; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf internal_route_type; //type: Ospfv3InternalRoute
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf metric_type; //type: Ospfv3Metric
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf external_route_type; //type: Ospfv3ExternalRoute
        ydk::YLeaf nssa_external_route_type; //type: Ospfv3nssaExternalRoute
        ydk::YLeaf redistribute_route; //type: boolean
        ydk::YLeaf isis_route_type; //type: Ospfv3isisRoute
        ydk::YLeaf eigrp_route_type; //type: Ospfv3EigrpRoute
        ydk::YLeaf preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf use_rib_metric; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication : public ydk::Entity
{
    public:
        Ospfv3OrIsisOrApplication();
        ~Ospfv3OrIsisOrApplication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf internal_route_type; //type: Ospfv3InternalRoute
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf metric_type; //type: Ospfv3Metric
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf external_route_type; //type: Ospfv3ExternalRoute
        ydk::YLeaf nssa_external_route_type; //type: Ospfv3nssaExternalRoute
        ydk::YLeaf redistribute_route; //type: boolean
        ydk::YLeaf isis_route_type; //type: Ospfv3isisRoute
        ydk::YLeaf eigrp_route_type; //type: Ospfv3EigrpRoute
        ydk::YLeaf preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf use_rib_metric; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf internal_route_type; //type: Ospfv3InternalRoute
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf metric_type; //type: Ospfv3Metric
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf external_route_type; //type: Ospfv3ExternalRoute
        ydk::YLeaf nssa_external_route_type; //type: Ospfv3nssaExternalRoute
        ydk::YLeaf redistribute_route; //type: boolean
        ydk::YLeaf isis_route_type; //type: Ospfv3isisRoute
        ydk::YLeaf eigrp_route_type; //type: Ospfv3EigrpRoute
        ydk::YLeaf preserve_med; //type: boolean
        ydk::YLeaf bgp_preserve_default_info; //type: boolean
        ydk::YLeaf use_rib_metric; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp


class Ospfv3::Processes::Process::Vrfs::Vrf::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa> lsa;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Ignore


class Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mospf; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut : public ydk::Entity
{
    public:
        DistributeListOut();
        ~DistributeListOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DistributeOuts; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts> distribute_outs;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts : public ydk::Entity
{
    public:
        DistributeOuts();
        ~DistributeOuts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DistributeOut; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut

        ydk::YList distribute_out;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut : public ydk::Entity
{
    public:
        DistributeOut();
        ~DistributeOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: Ospfv3Protocol
        ydk::YLeaf all_or_connected_or_static_prefix_list; //type: string
        class Bgp; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::Bgp
        class Ospfv3OrIsis; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::Ospfv3OrIsis
        class Eigrp; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::Eigrp

        ydk::YList bgp;
        ydk::YList ospfv3_or_isis;
        ydk::YList eigrp;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::Bgp


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::Ospfv3OrIsis : public ydk::Entity
{
    public:
        Ospfv3OrIsis();
        ~Ospfv3OrIsis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::Ospfv3OrIsis


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::Eigrp


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList


class Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter : public ydk::Entity
{
    public:
        StubRouter();
        ~StubRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rbit; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit
        class V6bit; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6bit
        class MaxMetric; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit> rbit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6bit> v6bit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric> max_metric; // presence node
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit : public ydk::Entity
{
    public:
        Rbit();
        ~Rbit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on_switchover; //type: uint32
        ydk::YLeaf always; //type: empty
        ydk::YLeaf include_stub; //type: empty
        ydk::YLeaf on_proc_migration; //type: uint32
        ydk::YLeaf on_proc_restart; //type: uint32
        class OnStartup; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup> on_startup;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup : public ydk::Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf wait_time; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6bit : public ydk::Entity
{
    public:
        V6bit();
        ~V6bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on_switchover; //type: uint32
        ydk::YLeaf always; //type: empty
        ydk::YLeaf on_proc_migration; //type: uint32
        ydk::YLeaf on_proc_restart; //type: uint32
        class OnStartup; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6bit::OnStartup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6bit::OnStartup> on_startup;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6bit


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6bit::OnStartup : public ydk::Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf wait_time; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6bit::OnStartup


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric : public ydk::Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_lsa; //type: uint32
        ydk::YLeaf summary_lsa; //type: uint32
        ydk::YLeaf on_switchover; //type: uint32
        ydk::YLeaf always; //type: empty
        ydk::YLeaf include_stub; //type: empty
        ydk::YLeaf on_proc_migration; //type: uint32
        ydk::YLeaf on_proc_restart; //type: uint32
        class OnStartup; //type: Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup> on_startup;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric


class Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup : public ydk::Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf wait_time; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup


class Ospfv3::Processes::Process::Vrfs::Vrf::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Bfd


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All


class Ospfv3::Processes::Process::Vrfs::Vrf::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type7_prefer; //type: boolean
        ydk::YLeaf vrf_lite; //type: boolean
        ydk::YLeaf type7_translate_zero_forwarding_addr; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Capability


class Ospfv3::Processes::Process::Vrfs::Vrf::Authentication : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf algorithm; //type: Ospfv3Authentication
        ydk::YLeaf password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Authentication


class Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf strict_lsa_checking; //type: empty
        ydk::YLeaf helper; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf lifetime; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart


class Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Originate; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate> originate; // presence node
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation


class Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate : public ydk::Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf route_policy_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope : public ydk::Entity
{
    public:
        ProcessScope();
        ~ProcessScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_enable; //type: Ospfv3FastReroute
        class PerLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink : public ydk::Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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
        ydk::YLeaf spi; //type: uint32
        ydk::YLeaf encryption_algorithm; //type: Ospfv3EncryptionAlgorithm
        ydk::YLeaf encryption_password; //type: string
        ydk::YLeaf authentication_algorithm; //type: Ospfv3AuthenticationType2
        ydk::YLeaf authentication_password; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Encryption


class Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost : public ydk::Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf reference_bandwidth; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost


class Ospfv3::Processes::Process::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: Ospfv3AddressFamily
        ydk::YLeaf saf_name; //type: Ospfv3SubsequentAddressFamily

}; // Ospfv3::Processes::Process::Af


class Ospfv3::Processes::Process::TraceBufs : public ydk::Entity
{
    public:
        TraceBufs();
        ~TraceBufs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TraceBuf; //type: Ospfv3::Processes::Process::TraceBufs::TraceBuf

        ydk::YList trace_buf;
        
}; // Ospfv3::Processes::Process::TraceBufs


class Ospfv3::Processes::Process::TraceBufs::TraceBuf : public ydk::Entity
{
    public:
        TraceBuf();
        ~TraceBuf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trace_buf_name; //type: string
        ydk::YLeaf bufsize; //type: Ospfv3TraceBufSize

}; // Ospfv3::Processes::Process::TraceBufs::TraceBuf


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_CFG_2_ */

