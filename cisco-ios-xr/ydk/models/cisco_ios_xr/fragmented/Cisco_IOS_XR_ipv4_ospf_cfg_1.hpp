#ifndef _CISCO_IOS_XR_IPV4_OSPF_CFG_1_
#define _CISCO_IOS_XR_IPV4_OSPF_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes : public ydk::Entity
{
    public:
        MultiAreaInterfaceScopes();
        ~MultiAreaInterfaceScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaInterfaceScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope

        ydk::YList multi_area_interface_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope : public ydk::Entity
{
    public:
        MultiAreaInterfaceScope();
        ~MultiAreaInterfaceScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication
        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList : public ydk::Entity
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

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type : public ydk::Entity
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

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix : public ydk::Entity
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

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
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

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
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

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges : public ydk::Entity
{
    public:
        AreaRanges();
        ~AreaRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaRange; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange

        ydk::YList area_range;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

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
        ydk::YLeaf not_advertise; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_redistribution; //type: boolean
        ydk::YLeaf default_info_originate; //type: boolean
        ydk::YLeaf no_summary; //type: boolean
        ydk::YLeaf nssa_def_metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId : public ydk::Entity
{
    public:
        AreaAreaId();
        ~AreaAreaId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: OspfSegmentRouting
        ydk::YLeaf running; //type: empty
        class VirtualLinkScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes
        class ShamLinkScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes
        class AreaScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope
        class NameScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes
        class MultiAreaInterfaceScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes
        class AreaRanges; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges
        class Nssa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes> virtual_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes> sham_link_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes> name_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes> multi_area_interface_scopes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges> area_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa> nssa;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes : public ydk::Entity
{
    public:
        VirtualLinkScopes();
        ~VirtualLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLinkScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope

        ydk::YList virtual_link_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope : public ydk::Entity
{
    public:
        VirtualLinkScope();
        ~VirtualLinkScope();

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
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type : public ydk::Entity
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

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes : public ydk::Entity
{
    public:
        ShamLinkScopes();
        ~ShamLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLinkScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope

        ydk::YList sham_link_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope : public ydk::Entity
{
    public:
        ShamLinkScope();
        ~ShamLinkScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type : public ydk::Entity
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

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope : public ydk::Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList : public ydk::Entity
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

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd : public ydk::Entity
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
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type : public ydk::Entity
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

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

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
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix : public ydk::Entity
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

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
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

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
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

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes : public ydk::Entity
{
    public:
        NameScopes();
        ~NameScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NameScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope

        ydk::YList name_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope : public ydk::Entity
{
    public:
        NameScope();
        ~NameScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf prefix_suppression_primary; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf ldp_auto_config; //type: empty
        ydk::YLeaf network_type; //type: OspfNetwork
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf loopback_stub_network; //type: boolean
        ydk::YLeaf prefix_suppression_secondary; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf link_down_fast_detect; //type: boolean
        ydk::YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwarding
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf running; //type: empty
        class PrefixSid; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid
        class PrefixSidStrict; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security
        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict : public ydk::Entity
{
    public:
        PrefixSidStrict();
        ~PrefixSidStrict();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf explicit_null; //type: boolean
        ydk::YLeaf type; //type: OspfSid
        ydk::YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList : public ydk::Entity
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

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd : public ydk::Entity
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
        ydk::YLeaf fast_detect_mode; //type: BfdEnableMode

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type : public ydk::Entity
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

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

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
        ydk::YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix : public ydk::Entity
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

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
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

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
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

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes : public ydk::Entity
{
    public:
        MultiAreaInterfaceScopes();
        ~MultiAreaInterfaceScopes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaInterfaceScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope

        ydk::YList multi_area_interface_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope : public ydk::Entity
{
    public:
        MultiAreaInterfaceScope();
        ~MultiAreaInterfaceScope();

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
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf database_filter; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf running; //type: empty
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication
        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback> cost_fallback;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList : public ydk::Entity
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

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication : public ydk::Entity
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

        ydk::YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type
        class MessageDigestKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type> type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys> message_digest_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type : public ydk::Entity
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

        ydk::YLeaf authen_type; //type: OspfAuthentication
        ydk::YLeaf keychain_authen_type; //type: OspfKeychainAuth
        ydk::YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys : public ydk::Entity
{
    public:
        MessageDigestKeys();
        ~MessageDigestKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey

        ydk::YList message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint32
        ydk::YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeys::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal : public ydk::Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

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
        ydk::YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute : public ydk::Entity
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

        ydk::YLeaf fast_reroute_enable; //type: OspfFastReroute
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix : public ydk::Entity
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

        ydk::YLeaf topology_independent_lfa; //type: boolean
        ydk::YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: OspfFrrRlfaTunnel
        ydk::YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
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

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
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

        ydk::YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntf
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback : public ydk::Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges : public ydk::Entity
{
    public:
        AreaRanges();
        ~AreaRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaRange; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange

        ydk::YList area_range;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

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
        ydk::YLeaf not_advertise; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_redistribution; //type: boolean
        ydk::YLeaf default_info_originate; //type: boolean
        ydk::YLeaf no_summary; //type: boolean
        ydk::YLeaf nssa_def_metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa


class Ospf::Processes::Process::Vrfs::Vrf::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_pacing_flood; //type: uint32
        ydk::YLeaf fast_reroute_timer; //type: uint32
        ydk::YLeaf lsa_refresh; //type: uint32
        ydk::YLeaf lsa_group_pacing; //type: uint32
        ydk::YLeaf lsa_min_arrival; //type: uint32
        class SpfTimer; //type: Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer
        class LsaGenerationTimer; //type: Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer> spf_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer> lsa_generation_timer;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Timers


class Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer : public ydk::Entity
{
    public:
        SpfTimer();
        ~SpfTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial_delay; //type: uint32
        ydk::YLeaf backoff_increment; //type: uint32
        ydk::YLeaf max_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer


class Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer : public ydk::Entity
{
    public:
        LsaGenerationTimer();
        ~LsaGenerationTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial_delay; //type: uint32
        ydk::YLeaf backoff_increment; //type: uint32
        ydk::YLeaf max_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer


class Ospf::Processes::Process::TraceBufs : public ydk::Entity
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

        class TraceBuf; //type: Ospf::Processes::Process::TraceBufs::TraceBuf

        ydk::YList trace_buf;
        
}; // Ospf::Processes::Process::TraceBufs


class Ospf::Processes::Process::TraceBufs::TraceBuf : public ydk::Entity
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
        ydk::YLeaf bufsize; //type: OspfTraceBufSize

}; // Ospf::Processes::Process::TraceBufs::TraceBuf


class Ospf::Processes::Process::GracefulShutdownTimers : public ydk::Entity
{
    public:
        GracefulShutdownTimers();
        ~GracefulShutdownTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf graceful_shutdown_retain_routes; //type: uint32
        ydk::YLeaf graceful_shutdown_initial_delay; //type: uint32

}; // Ospf::Processes::Process::GracefulShutdownTimers


class Ospf::Processes::Process::DefaultVrf : public ydk::Entity
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

        ydk::YLeaf ignore_mospf; //type: empty
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf type7; //type: empty
        ydk::YLeaf snmp_context; //type: string
        ydk::YLeaf maximum_interfaces; //type: uint32
        ydk::YLeaf no_opaque; //type: empty
        ydk::YLeaf spf_prefix_priority; //type: string
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf adjacency_changes; //type: OspfLogAdj
        ydk::YLeaf default_metric; //type: uint32
        class MonitorConvergence; //type: Ospf::Processes::Process::DefaultVrf::MonitorConvergence
        class SegmentRouting; //type: Ospf::Processes::Process::DefaultVrf::SegmentRouting
        class Mpls; //type: Ospf::Processes::Process::DefaultVrf::Mpls
        class Microloop; //type: Ospf::Processes::Process::DefaultVrf::Microloop
        class MaximumRedistributePrefix; //type: Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix
        class DefaultInformation; //type: Ospf::Processes::Process::DefaultVrf::DefaultInformation
        class Af; //type: Ospf::Processes::Process::DefaultVrf::Af
        class Queue; //type: Ospf::Processes::Process::DefaultVrf::Queue
        class MaxMetric; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric
        class Nsf; //type: Ospf::Processes::Process::DefaultVrf::Nsf
        class ProcessScope; //type: Ospf::Processes::Process::DefaultVrf::ProcessScope
        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::Redistribution
        class AdjacencyStagger; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyStagger
        class MaxLsa; //type: Ospf::Processes::Process::DefaultVrf::MaxLsa
        class AutoCost; //type: Ospf::Processes::Process::DefaultVrf::AutoCost
        class Ucmp; //type: Ospf::Processes::Process::DefaultVrf::Ucmp
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::FastReroute
        class SummaryPrefixes; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes
        class OutgoingRouteUpdates; //type: Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates
        class Distance; //type: Ospf::Processes::Process::DefaultVrf::Distance
        class AreaAddresses; //type: Ospf::Processes::Process::DefaultVrf::AreaAddresses
        class Timers; //type: Ospf::Processes::Process::DefaultVrf::Timers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MonitorConvergence> monitor_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Microloop> microloop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix> maximum_redistribute_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Af> af; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric> max_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::ProcessScope> process_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Redistribution> redistribution;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AdjacencyStagger> adjacency_stagger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxLsa> max_lsa; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AutoCost> auto_cost;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Ucmp> ucmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates> outgoing_route_updates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Distance> distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::AreaAddresses> area_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Timers> timers;
        
}; // Ospf::Processes::Process::DefaultVrf


class Ospf::Processes::Process::DefaultVrf::MonitorConvergence : public ydk::Entity
{
    public:
        MonitorConvergence();
        ~MonitorConvergence();

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
        ydk::YLeaf prefix_list; //type: string
        ydk::YLeaf track_ip_frr; //type: empty
        ydk::YLeaf track_external_routes; //type: empty
        ydk::YLeaf track_summary_routes; //type: empty

}; // Ospf::Processes::Process::DefaultVrf::MonitorConvergence


class Ospf::Processes::Process::DefaultVrf::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_sid_map_receive_disable; //type: empty
        ydk::YLeaf prefix_sid_map_advertise_local; //type: empty
        ydk::YLeaf strict_spf_disable; //type: empty
        class SrPrefer; //type: Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer> sr_prefer;
        
}; // Ospf::Processes::Process::DefaultVrf::SegmentRouting


class Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer : public ydk::Entity
{
    public:
        SrPrefer();
        ~SrPrefer();

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
        ydk::YLeaf prefix_list_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer


class Ospf::Processes::Process::DefaultVrf::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_intact; //type: empty
        ydk::YLeaf ldp_sync_update; //type: empty
        ydk::YLeaf multicast_intact; //type: empty
        ydk::YLeaf autoroute_exclude; //type: string
        class MplsRouterId; //type: Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId> mpls_router_id;
        
}; // Ospf::Processes::Process::DefaultVrf::Mpls


class Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId : public ydk::Entity
{
    public:
        MplsRouterId();
        ~MplsRouterId();

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
        ydk::YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId


class Ospf::Processes::Process::DefaultVrf::Microloop : public ydk::Entity
{
    public:
        Microloop();
        ~Microloop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Avoidance; //type: Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance> avoidance;
        
}; // Ospf::Processes::Process::DefaultVrf::Microloop


class Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance : public ydk::Entity
{
    public:
        Avoidance();
        ~Avoidance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: OspfUloopAvoidance
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance


class Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix : public ydk::Entity
{
    public:
        MaximumRedistributePrefix();
        ~MaximumRedistributePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_prefixes; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf warning_only; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix


class Ospf::Processes::Process::DefaultVrf::DefaultInformation : public ydk::Entity
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

        ydk::YLeaf always_advertise; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: OspfLinkStateMetric
        ydk::YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::DefaultInformation


class Ospf::Processes::Process::DefaultVrf::Af : public ydk::Entity
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

        ydk::YLeaf af_name; //type: OspfAddressFamily
        ydk::YLeaf saf_name; //type: OspfSubAddressFamily

}; // Ospf::Processes::Process::DefaultVrf::Af


class Ospf::Processes::Process::DefaultVrf::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dispatch_rate_limited_flush; //type: uint32
        ydk::YLeaf limit_high; //type: uint32
        ydk::YLeaf dispatch_spf_lsa_limit; //type: uint32
        ydk::YLeaf limit_low; //type: uint32
        ydk::YLeaf dispatch_rate_limited; //type: uint32
        ydk::YLeaf limit_medium; //type: uint32
        ydk::YLeaf dispatch_incoming; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Queue


class Ospf::Processes::Process::DefaultVrf::MaxMetric : public ydk::Entity
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

        ydk::YLeaf max_metric_no_abr_off; //type: empty
        class MaxMetricOnProcRestart; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart
        class MaxMetricOnStartup; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup
        class MaxMetricOnProcMigration; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration
        class MaxMetricAlways; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways
        class MaxMetricOnSwitchover; //type: Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart> max_metric_on_proc_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup> max_metric_on_startup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration> max_metric_on_proc_migration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways> max_metric_always;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover> max_metric_on_switchover;
        
}; // Ospf::Processes::Process::DefaultVrf::MaxMetric


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart : public ydk::Entity
{
    public:
        MaxMetricOnProcRestart();
        ~MaxMetricOnProcRestart();

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
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup : public ydk::Entity
{
    public:
        MaxMetricOnStartup();
        ~MaxMetricOnStartup();

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
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration : public ydk::Entity
{
    public:
        MaxMetricOnProcMigration();
        ~MaxMetricOnProcMigration();

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
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways : public ydk::Entity
{
    public:
        MaxMetricAlways();
        ~MaxMetricAlways();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways


class Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover : public ydk::Entity
{
    public:
        MaxMetricOnSwitchover();
        ~MaxMetricOnSwitchover();

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
        ydk::YLeaf startup_max; //type: uint32
        ydk::YLeaf include_stub; //type: boolean
        ydk::YLeaf summary_lsa; //type: boolean
        ydk::YLeaf summary_lsa_maximum_metric; //type: uint32
        ydk::YLeaf external_lsa; //type: boolean
        ydk::YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_CFG_1_ */

