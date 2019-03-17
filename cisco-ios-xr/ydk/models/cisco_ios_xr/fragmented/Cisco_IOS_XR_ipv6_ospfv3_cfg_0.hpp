#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_CFG_0_
#define _CISCO_IOS_XR_IPV6_OSPFV3_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {

class Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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

        ydk::YLeaf dns_name_lookup; //type: empty
        class Processes; //type: Ospfv3::Processes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes> processes;
        
}; // Ospfv3


class Ospfv3::Processes : public ydk::Entity
{
    public:
        Processes();
        ~Processes();

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

        class Process; //type: Ospfv3::Processes::Process

        ydk::YList process;
        
}; // Ospfv3::Processes


class Ospfv3::Processes::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

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

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf nsr; //type: Ospfv3nsr
        ydk::YLeaf protocol_shutdown; //type: empty
        ydk::YLeaf enable; //type: empty
        class DefaultVrf; //type: Ospfv3::Processes::Process::DefaultVrf
        class Vrfs; //type: Ospfv3::Processes::Process::Vrfs
        class Af; //type: Ospfv3::Processes::Process::Af
        class TraceBufs; //type: Ospfv3::Processes::Process::TraceBufs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Af> af; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::TraceBufs> trace_bufs;
        
}; // Ospfv3::Processes::Process


class Ospfv3::Processes::Process::DefaultVrf : public ydk::Entity
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

        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf spf_prefix_priority_disable; //type: empty
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf spf_prefix_priority_policy; //type: string
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf log_adjacency_changes; //type: Ospfv3LogAdj
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf transmit_delay; //type: uint32
        class AreaAddresses; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses
        class Timers; //type: Ospfv3::Processes::Process::DefaultVrf::Timers
        class SummaryPrefixes; //type: Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes
        class Snmp; //type: Ospfv3::Processes::Process::DefaultVrf::Snmp
        class FastReroute; //type: Ospfv3::Processes::Process::DefaultVrf::FastReroute
        class Distance; //type: Ospfv3::Processes::Process::DefaultVrf::Distance
        class Maximum; //type: Ospfv3::Processes::Process::DefaultVrf::Maximum
        class Redistributes; //type: Ospfv3::Processes::Process::DefaultVrf::Redistributes
        class Ignore; //type: Ospfv3::Processes::Process::DefaultVrf::Ignore
        class DistributeListOut; //type: Ospfv3::Processes::Process::DefaultVrf::DistributeListOut
        class DistributeList; //type: Ospfv3::Processes::Process::DefaultVrf::DistributeList
        class StubRouter; //type: Ospfv3::Processes::Process::DefaultVrf::StubRouter
        class Bfd; //type: Ospfv3::Processes::Process::DefaultVrf::Bfd
        class DatabaseFilter; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter
        class Capability; //type: Ospfv3::Processes::Process::DefaultVrf::Capability
        class Authentication; //type: Ospfv3::Processes::Process::DefaultVrf::Authentication
        class GracefulRestart; //type: Ospfv3::Processes::Process::DefaultVrf::GracefulRestart
        class DefaultInformation; //type: Ospfv3::Processes::Process::DefaultVrf::DefaultInformation
        class ProcessScope; //type: Ospfv3::Processes::Process::DefaultVrf::ProcessScope
        class Encryption; //type: Ospfv3::Processes::Process::DefaultVrf::Encryption
        class AutoCost; //type: Ospfv3::Processes::Process::DefaultVrf::AutoCost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses> area_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Snmp> snmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Distance> distance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Redistributes> redistributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Ignore> ignore;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeListOut> distribute_list_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter> stub_router;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Capability> capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope> process_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AutoCost> auto_cost; // presence node
        
}; // Ospfv3::Processes::Process::DefaultVrf


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses : public ydk::Entity
{
    public:
        AreaAddresses();
        ~AreaAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaAddress; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress
        class AreaAreaId; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId

        ydk::YList area_address;
        ydk::YList area_area_id;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress : public ydk::Entity
{
    public:
        AreaAddress();
        ~AreaAddress();

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
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf cost; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication
        class Bfd; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd
        class Ranges; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges
        class Encryption; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption
        class Nssa; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa
        class DatabaseFilter; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList
        class Interfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces
        class AreaScope; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope
        class ShamLinks; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks
        class VirtualLinks; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges> ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa> nssa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks> sham_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks> virtual_links;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd : public ydk::Entity
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

        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range

        ydk::YList range;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf cost; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: Ospfv3Metric
        ydk::YLeaf no_summary; //type: empty

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter : public ydk::Entity
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

        class All; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All : public ydk::Entity
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

        ydk::YLeaf out; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList : public ydk::Entity
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

        class In; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces : public ydk::Entity
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

        class Interface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface

        ydk::YList interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf demand_circuit; //type: boolean
        class Authentication; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication
        class Neighbors; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors
        class Encryption; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption
        class Bfd; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd
        class DatabaseFilter; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList
        class FastReroute; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf zone; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd : public ydk::Entity
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
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter : public ydk::Entity
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

        class All; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All : public ydk::Entity
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

        ydk::YLeaf out; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList : public ydk::Entity
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

        class In; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute : public ydk::Entity
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
        class PerLink; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope : public ydk::Entity
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

        class FastReroute; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute : public ydk::Entity
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
        class PerLink; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks : public ydk::Entity
{
    public:
        ShamLinks();
        ~ShamLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLink; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink

        ydk::YList sham_link;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink : public ydk::Entity
{
    public:
        ShamLink();
        ~ShamLink();

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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption> encryption;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks : public ydk::Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLink; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink

        ydk::YList virtual_link;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_address; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption> encryption;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId : public ydk::Entity
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
        ydk::YLeaf stub; //type: boolean
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf type7_translate_always; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf default_cost; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf cost; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication
        class Bfd; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd
        class Ranges; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges
        class Encryption; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption
        class Nssa; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa
        class DatabaseFilter; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList
        class Interfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces
        class AreaScope; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope
        class ShamLinks; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks
        class VirtualLinks; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges> ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa> nssa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks> sham_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks> virtual_links;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd : public ydk::Entity
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

        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range

        ydk::YList range;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf cost; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: Ospfv3Metric
        ydk::YLeaf no_summary; //type: empty

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter : public ydk::Entity
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

        class All; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All : public ydk::Entity
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

        ydk::YLeaf out; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList : public ydk::Entity
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

        class In; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces : public ydk::Entity
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

        class Interface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface

        ydk::YList interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf flood_reduction; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf ldp_sync; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf network; //type: Ospfv3Network
        ydk::YLeaf demand_circuit; //type: boolean
        class Authentication; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication
        class Neighbors; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors
        class Encryption; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption
        class Bfd; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd
        class DatabaseFilter; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter
        class DistributeList; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList
        class FastReroute; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption> encryption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf zone; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd : public ydk::Entity
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
        ydk::YLeaf fast_detect_mode; //type: Ospfv3bfdEnableMode
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter : public ydk::Entity
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

        class All; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All> all;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All : public ydk::Entity
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

        ydk::YLeaf out; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList : public ydk::Entity
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

        class In; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute : public ydk::Entity
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
        class PerLink; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope : public ydk::Entity
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

        class FastReroute; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute : public ydk::Entity
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
        class PerLink; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix : public ydk::Entity
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
        class CandidateInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public ydk::Entity
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

        class CandidateInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        ydk::YList candidate_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public ydk::Entity
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

        class ExcludeInterface; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks : public ydk::Entity
{
    public:
        ShamLinks();
        ~ShamLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLink; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink

        ydk::YList sham_link;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink : public ydk::Entity
{
    public:
        ShamLink();
        ~ShamLink();

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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption> encryption;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks : public ydk::Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLink; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink

        ydk::YList virtual_link;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_address; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication
        class Encryption; //type: Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption> encryption;
        
}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication


class Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption


class Ospfv3::Processes::Process::DefaultVrf::Timers : public ydk::Entity
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

        class Pacing; //type: Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing
        class LsaTimers; //type: Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers
        class Throttle; //type: Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing> pacing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers> lsa_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle> throttle;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Timers


class Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing : public ydk::Entity
{
    public:
        Pacing();
        ~Pacing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flood; //type: uint32
        ydk::YLeaf retransmission; //type: uint32
        ydk::YLeaf lsa_group; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing


class Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers : public ydk::Entity
{
    public:
        LsaTimers();
        ~LsaTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf arrival; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers


class Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle : public ydk::Entity
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

        class Lsa; //type: Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa
        class Spf; //type: Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa> lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf> spf;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle


class Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa : public ydk::Entity
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

        ydk::YLeaf first_delay; //type: uint32
        ydk::YLeaf minimum_delay; //type: uint32
        ydk::YLeaf maximum_delay; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa


class Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf : public ydk::Entity
{
    public:
        Spf();
        ~Spf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf first_delay; //type: uint32
        ydk::YLeaf minimum_delay; //type: uint32
        ydk::YLeaf maximum_delay; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf


class Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix

        ydk::YList summary_prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes


class Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix : public ydk::Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

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
        ydk::YLeaf not_advertise; //type: boolean
        ydk::YLeaf tag; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix


class Ospfv3::Processes::Process::DefaultVrf::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context; //type: string
        class TrapRateLimit; //type: Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit> trap_rate_limit;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Snmp


class Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit : public ydk::Entity
{
    public:
        TrapRateLimit();
        ~TrapRateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf max_window_traps; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit


class Ospfv3::Processes::Process::DefaultVrf::FastReroute : public ydk::Entity
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

        class PerLink; //type: Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink
        class PerPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink> per_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix> per_prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::FastReroute


class Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink : public ydk::Entity
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

        ydk::YLeaf priority; //type: Ospfv3FastReroutePriority

}; // Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink


class Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix : public ydk::Entity
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
        class Tiebreakers; //type: Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix


class Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers : public ydk::Entity
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

        class Tiebreaker; //type: Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        ydk::YList tiebreaker;
        
}; // Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers


class Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospfv3::Processes::Process::DefaultVrf::Distance : public ydk::Entity
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
        class Ospfv3_; //type: Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_> ospfv3;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Distance


class Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_ : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_


class Ospfv3::Processes::Process::DefaultVrf::Maximum : public ydk::Entity
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
        class RedistributedPrefixes; //type: Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes> redistributed_prefixes;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Maximum


class Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes


class Ospfv3::Processes::Process::DefaultVrf::Redistributes : public ydk::Entity
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

        class Redistribute; //type: Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute

        ydk::YList redistribute;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Redistributes


class Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute : public ydk::Entity
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
        class ConnectedOrStaticOrSubscriberOrMobile; //type: Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile
        class Bgp; //type: Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp
        class Ospfv3OrIsisOrApplication; //type: Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication
        class Eigrp; //type: Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile> connected_or_static_or_subscriber_or_mobile; // presence node
        ydk::YList bgp;
        ydk::YList ospfv3_or_isis_or_application;
        ydk::YList eigrp;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute


class Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile


class Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp


class Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication


class Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp


class Ospfv3::Processes::Process::DefaultVrf::Ignore : public ydk::Entity
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

        class Lsa; //type: Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa> lsa;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Ignore


class Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa


class Ospfv3::Processes::Process::DefaultVrf::DistributeListOut : public ydk::Entity
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

        class DistributeOuts; //type: Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts> distribute_outs;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut


class Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts : public ydk::Entity
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

        class DistributeOut; //type: Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut

        ydk::YList distribute_out;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts


class Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut : public ydk::Entity
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
        class Bgp; //type: Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::Bgp
        class Ospfv3OrIsis; //type: Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::Ospfv3OrIsis
        class Eigrp; //type: Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::Eigrp

        ydk::YList bgp;
        ydk::YList ospfv3_or_isis;
        ydk::YList eigrp;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut


class Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::Bgp : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::Bgp


class Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::Ospfv3OrIsis : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::Ospfv3OrIsis


class Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::Eigrp : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::Eigrp


class Ospfv3::Processes::Process::DefaultVrf::DistributeList : public ydk::Entity
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

        class In; //type: Ospfv3::Processes::Process::DefaultVrf::DistributeList::In

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeList::In> in;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DistributeList


class Ospfv3::Processes::Process::DefaultVrf::DistributeList::In : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::DistributeList::In


class Ospfv3::Processes::Process::DefaultVrf::StubRouter : public ydk::Entity
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

        class Rbit; //type: Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit
        class V6bit; //type: Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6bit
        class MaxMetric; //type: Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit> rbit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6bit> v6bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric> max_metric;
        
}; // Ospfv3::Processes::Process::DefaultVrf::StubRouter


class Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf on_proc_migration; //type: uint32
        ydk::YLeaf on_proc_restart; //type: uint32
        class OnStartup; //type: Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup> on_startup;
        
}; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit


class Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup : public ydk::Entity
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

}; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup


class Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6bit : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf on_proc_migration; //type: uint32
        ydk::YLeaf on_proc_restart; //type: uint32
        class OnStartup; //type: Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6bit::OnStartup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6bit::OnStartup> on_startup;
        
}; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6bit

class Ospfv3DomainId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type0005;
        static const ydk::Enum::YLeaf type0105;
        static const ydk::Enum::YLeaf type0205;
        static const ydk::Enum::YLeaf type8005;

};

class Ospfv3Network : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast;
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf non_broadcast_point_to_multipoint;

};

class Ospfv3Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type1;
        static const ydk::Enum::YLeaf type2;

};

class Ospfv3AuthenticationType2 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf null;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha1;

};

class Ospfv3FastReroutePriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

};

class Ospfv3bfdEnableMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf strict;

};

class Ospfv3LogAdj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf suppress;
        static const ydk::Enum::YLeaf brief;
        static const ydk::Enum::YLeaf detail;

};

class Ospfv3TraceBufSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf size0;
        static const ydk::Enum::YLeaf size256;
        static const ydk::Enum::YLeaf size512;
        static const ydk::Enum::YLeaf size1024;
        static const ydk::Enum::YLeaf size2048;
        static const ydk::Enum::YLeaf size4096;
        static const ydk::Enum::YLeaf size8192;
        static const ydk::Enum::YLeaf size16384;
        static const ydk::Enum::YLeaf size32768;
        static const ydk::Enum::YLeaf size65536;

};

class Ospfv3FastReroute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf per_link;
        static const ydk::Enum::YLeaf per_prefix;

};

class Ospfv3isisRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1_and2;

};

class Ospfv3nssaExternalRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external1;
        static const ydk::Enum::YLeaf external2;
        static const ydk::Enum::YLeaf external;

};

class Ospfv3ExternalRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external1;
        static const ydk::Enum::YLeaf external2;
        static const ydk::Enum::YLeaf external;

};

class Ospfv3nsr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

};

class Ospfv3AddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv6;

};

class Ospfv3Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospfv3;
        static const ydk::Enum::YLeaf eigrp;

};

class Ospfv3EncryptionAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf null;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf Y_3des;
        static const ydk::Enum::YLeaf aes;
        static const ydk::Enum::YLeaf aes192;
        static const ydk::Enum::YLeaf aes256;

};

class Ospfv3ProtocolType2 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospfv3;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf subscriber;
        static const ydk::Enum::YLeaf application;
        static const ydk::Enum::YLeaf mobile;

};

class Ospfv3SubsequentAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;

};

class Ospfv3EigrpRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

};

class Ospfv3FastRerouteTiebreakers : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf line_card_disjoint;
        static const ydk::Enum::YLeaf lowest_metric;
        static const ydk::Enum::YLeaf node_protect;
        static const ydk::Enum::YLeaf primary_path;
        static const ydk::Enum::YLeaf secondary_path;
        static const ydk::Enum::YLeaf srlg_disjoint;

};

class Ospfv3Authentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha1;

};

class Ospfv3InternalRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_CFG_0_ */

