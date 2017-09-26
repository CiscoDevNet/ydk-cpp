#ifndef _CISCO_IOS_XR_IPV4_IGMP_OPER_2_
#define _CISCO_IOS_XR_IPV4_IGMP_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_igmp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_igmp_oper {


class Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_ : public ydk::Entity
{
    public:
        NonActiveGroups_();
        ~NonActiveGroups_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf reason_for_non_activity; //type: string
        class GroupAddress; //type: Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_


class Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress : public ydk::Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress


class Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress


class Igmp::Standby::Vrfs::Vrf::Ranges : public ydk::Entity
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

        class Range; //type: Igmp::Standby::Vrfs::Vrf::Ranges::Range

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Ranges::Range> > range;
        
}; // Igmp::Standby::Vrfs::Vrf::Ranges


class Igmp::Standby::Vrfs::Vrf::Ranges::Range : public ydk::Entity
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

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_mask; //type: int32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf protocol; //type: IgmpEdmProtocol
        ydk::YLeaf is_stale; //type: boolean
        class GroupAddressXr; //type: Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Igmp::Standby::Vrfs::Vrf::Ranges::Range


class Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails : public ydk::Entity
{
    public:
        SsmMapDetails();
        ~SsmMapDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmMapDetail; //type: Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail : public ydk::Entity
{
    public:
        SsmMapDetail();
        ~SsmMapDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ssm_map_type; //type: IgmpssmMap
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf expiration_time; //type: uint32
        ydk::YLeaf response_pending; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        ydk::YLeaf elapsed_time; //type: uint64
        class MapInfo; //type: Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo
        class Sources; //type: Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo> map_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources> > sources;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo : public ydk::Entity
{
    public:
        MapInfo();
        ~MapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_type; //type: uint32
        ydk::YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr> group_address_xr;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources : public ydk::Entity
{
    public:
        Sources();
        ~Sources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources


class Igmp::Standby::Vrfs::Vrf::SsmMaps : public ydk::Entity
{
    public:
        SsmMaps();
        ~SsmMaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmMap; //type: Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap> > ssm_map;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMaps


class Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ssm_map_type; //type: IgmpssmMap
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf map_type; //type: uint32
        ydk::YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap


class Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr


class Igmp::Standby::Vrfs::Vrf::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf supported_interfaces; //type: uint32
        ydk::YLeaf unsupported_interfaces; //type: uint32
        ydk::YLeaf enabled_interface_count; //type: uint32
        ydk::YLeaf disabled_interface_count; //type: uint32
        ydk::YLeaf tunnel_mte_config_count; //type: uint32
        ydk::YLeaf node_low_memory; //type: boolean
        class Interface; //type: Igmp::Standby::Vrfs::Vrf::Summary::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Summary::Interface> > interface;
        
}; // Igmp::Standby::Vrfs::Vrf::Summary


class Igmp::Standby::Vrfs::Vrf::Summary::Interface : public ydk::Entity
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
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf on_off; //type: boolean
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32

}; // Igmp::Standby::Vrfs::Vrf::Summary::Interface


class Igmp::Standby::Vrfs::Vrf::TrafficCounters : public ydk::Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf packets_in; //type: uint32
        ydk::YLeaf packets_out; //type: uint32
        ydk::YLeaf format_errors; //type: uint32
        ydk::YLeaf packet_manager_input_errors; //type: uint32
        ydk::YLeaf packet_manager_output_errors; //type: uint32
        ydk::YLeaf checksum_errors; //type: uint32
        ydk::YLeaf receive_socket_errors; //type: uint32
        ydk::YLeaf socket_errors; //type: uint32
        ydk::YLeaf bad_scope_errors; //type: uint32
        ydk::YLeaf auxillary_data_length_errors; //type: uint32
        ydk::YLeaf invalid_source_address_errors; //type: uint32
        ydk::YLeaf no_socket_connection; //type: uint32
        ydk::YLeaf miscellaneous_errors; //type: uint32
        ydk::YLeaf input_queries; //type: uint32
        ydk::YLeaf input_reports; //type: uint32
        ydk::YLeaf input_leaves; //type: uint32
        ydk::YLeaf input_mtrace; //type: uint32
        ydk::YLeaf input_dvmrp; //type: uint32
        ydk::YLeaf input_pim; //type: uint32
        ydk::YLeaf output_queries; //type: uint32
        ydk::YLeaf output_reports; //type: uint32
        ydk::YLeaf output_leaves; //type: uint32
        ydk::YLeaf output_mtrace; //type: uint32
        ydk::YLeaf output_dvmrp; //type: uint32
        ydk::YLeaf output_pim; //type: uint32
        ydk::YLeaf get_packet_failure; //type: uint32
        ydk::YLeaf output_no_parent_interface_handle; //type: uint32
        ydk::YLeaf input_no_idb; //type: uint32
        ydk::YLeaf input_no_vrf_in_idb; //type: uint32
        ydk::YLeaf input_disabled_idb; //type: uint32
        ydk::YLeaf input_martian_address; //type: uint32
        ydk::YLeaf input_no_assigned_vrf_id; //type: uint32
        ydk::YLeaf input_no_vrf_mtrace; //type: uint32
        ydk::YLeaf input_no_platform_support_mtrace; //type: uint32

}; // Igmp::Standby::Vrfs::Vrf::TrafficCounters

class Mld : public ydk::Entity
{
    public:
        Mld();
        ~Mld();

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

        class Standby; //type: Mld::Standby
        class Active; //type: Mld::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby> standby;
        
}; // Mld


class Mld::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class Vrfs; //type: Mld::Active::Vrfs
        class Process; //type: Mld::Active::Process
        class DefaultContext; //type: Mld::Active::DefaultContext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext> default_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Process> process;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs> vrfs;
        
}; // Mld::Active


class Mld::Active::DefaultContext : public ydk::Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

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

        class Summary; //type: Mld::Active::DefaultContext::Summary
        class InterfaceStateOns; //type: Mld::Active::DefaultContext::InterfaceStateOns
        class DetailGroups; //type: Mld::Active::DefaultContext::DetailGroups
        class NonActiveGroups; //type: Mld::Active::DefaultContext::NonActiveGroups
        class SsmMaps; //type: Mld::Active::DefaultContext::SsmMaps
        class ExplicitGroups; //type: Mld::Active::DefaultContext::ExplicitGroups
        class InterfaceTable; //type: Mld::Active::DefaultContext::InterfaceTable
        class InterfaceUnicastQosAdjusts; //type: Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts
        class Ranges; //type: Mld::Active::DefaultContext::Ranges
        class IfrsInterfaces; //type: Mld::Active::DefaultContext::IfrsInterfaces
        class TrafficCounters; //type: Mld::Active::DefaultContext::TrafficCounters
        class Groups; //type: Mld::Active::DefaultContext::Groups
        class GroupSummary; //type: Mld::Active::DefaultContext::GroupSummary
        class IfrsInterfaceSummary; //type: Mld::Active::DefaultContext::IfrsInterfaceSummary
        class GlobalInterfaceTable; //type: Mld::Active::DefaultContext::GlobalInterfaceTable
        class SsmMapDetails; //type: Mld::Active::DefaultContext::SsmMapDetails
        class InterfaceStateOffs; //type: Mld::Active::DefaultContext::InterfaceStateOffs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::DetailGroups> detail_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups> explicit_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GlobalInterfaceTable> global_interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GroupSummary> group_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaceSummary> ifrs_interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffs> interface_state_offs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOns> interface_state_ons;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceTable> interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts> interface_unicast_qos_adjusts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::NonActiveGroups> non_active_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Ranges> ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMapDetails> ssm_map_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMaps> ssm_maps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::TrafficCounters> traffic_counters;
        
}; // Mld::Active::DefaultContext


class Mld::Active::DefaultContext::DetailGroups : public ydk::Entity
{
    public:
        DetailGroups();
        ~DetailGroups();

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

        class DetailGroup; //type: Mld::Active::DefaultContext::DetailGroups::DetailGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::DetailGroups::DetailGroup> > detail_group;
        
}; // Mld::Active::DefaultContext::DetailGroups


class Mld::Active::DefaultContext::DetailGroups::DetailGroup : public ydk::Entity
{
    public:
        DetailGroup();
        ~DetailGroup();

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

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf is_router_exclude_mode; //type: boolean
        ydk::YLeaf is_host_exclude_mode; //type: boolean
        class GroupInfo; //type: Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo
        class Source; //type: Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source> > source;
        
}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo : public ydk::Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

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

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_remote; //type: boolean
        ydk::YLeaf is_forward; //type: boolean
        ydk::YLeaf is_we_report; //type: boolean
        ydk::YLeaf flags; //type: int32
        ydk::YLeaf is_added; //type: boolean
        class SourceAddress; //type: Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress


class Mld::Active::DefaultContext::ExplicitGroups : public ydk::Entity
{
    public:
        ExplicitGroups();
        ~ExplicitGroups();

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

        class ExplicitGroup; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup> > explicit_group;
        
}; // Mld::Active::DefaultContext::ExplicitGroups


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup : public ydk::Entity
{
    public:
        ExplicitGroup();
        ~ExplicitGroup();

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

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf include_hosts; //type: uint32
        ydk::YLeaf exclude_hosts; //type: uint32
        class GroupInfo; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo
        class Host; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host> > host;
        
}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo : public ydk::Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

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

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf is_exclude; //type: boolean
        ydk::YLeaf expiration_time; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address
        class SourceAddress; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address> address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress> > source_address;
        
}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress


class Mld::Active::DefaultContext::GlobalInterfaceTable : public ydk::Entity
{
    public:
        GlobalInterfaceTable();
        ~GlobalInterfaceTable();

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

        class Interface; //type: Mld::Active::DefaultContext::GlobalInterfaceTable::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GlobalInterfaceTable::Interface> > interface;
        
}; // Mld::Active::DefaultContext::GlobalInterfaceTable


class Mld::Active::DefaultContext::GlobalInterfaceTable::Interface : public ydk::Entity
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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::GlobalInterfaceTable::Interface


class Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address


class Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress


class Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress


class Mld::Active::DefaultContext::GroupSummary : public ydk::Entity
{
    public:
        GroupSummary();
        ~GroupSummary();

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

        ydk::YLeaf groutes; //type: uint32
        ydk::YLeaf sg_routes; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_low_memory; //type: boolean

}; // Mld::Active::DefaultContext::GroupSummary


class Mld::Active::DefaultContext::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

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

        class Group; //type: Mld::Active::DefaultContext::Groups::Group

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Groups::Group> > group;
        
}; // Mld::Active::DefaultContext::Groups


class Mld::Active::DefaultContext::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Active::DefaultContext::Groups::Group::GroupAddressXr
        class LastReporter; //type: Mld::Active::DefaultContext::Groups::Group::LastReporter
        class SourceAddress; //type: Mld::Active::DefaultContext::Groups::Group::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Groups::Group::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Groups::Group::LastReporter> last_reporter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Groups::Group::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::Groups::Group


class Mld::Active::DefaultContext::Groups::Group::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::Groups::Group::GroupAddressXr


class Mld::Active::DefaultContext::Groups::Group::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::Groups::Group::LastReporter


class Mld::Active::DefaultContext::Groups::Group::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::Groups::Group::SourceAddress


class Mld::Active::DefaultContext::IfrsInterfaceSummary : public ydk::Entity
{
    public:
        IfrsInterfaceSummary();
        ~IfrsInterfaceSummary();

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

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf configuration_count; //type: uint32

}; // Mld::Active::DefaultContext::IfrsInterfaceSummary


class Mld::Active::DefaultContext::IfrsInterfaces : public ydk::Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

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

        class IfrsInterface; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Mld::Active::DefaultContext::IfrsInterfaces


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface : public ydk::Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

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
        ydk::YLeaf join_group_count; //type: uint32
        class IgmpInterfaceEntry; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry> igmp_interface_entry;
        
}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry : public ydk::Entity
{
    public:
        IgmpInterfaceEntry();
        ~IgmpInterfaceEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress


class Mld::Active::DefaultContext::InterfaceStateOffs : public ydk::Entity
{
    public:
        InterfaceStateOffs();
        ~InterfaceStateOffs();

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

        class InterfaceStateOff; //type: Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff> > interface_state_off;
        
}; // Mld::Active::DefaultContext::InterfaceStateOffs


class Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff : public ydk::Entity
{
    public:
        InterfaceStateOff();
        ~InterfaceStateOff();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff


class Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address


class Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress


class Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress


class Mld::Active::DefaultContext::InterfaceStateOns : public ydk::Entity
{
    public:
        InterfaceStateOns();
        ~InterfaceStateOns();

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

        class InterfaceStateOn; //type: Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn> > interface_state_on;
        
}; // Mld::Active::DefaultContext::InterfaceStateOns


class Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn : public ydk::Entity
{
    public:
        InterfaceStateOn();
        ~InterfaceStateOn();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn


class Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address


class Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress


class Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress


class Mld::Active::DefaultContext::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

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

        class Interface; //type: Mld::Active::DefaultContext::InterfaceTable::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceTable::Interface> > interface;
        
}; // Mld::Active::DefaultContext::InterfaceTable


class Mld::Active::DefaultContext::InterfaceTable::Interface : public ydk::Entity
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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceTable::Interface::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::InterfaceTable::Interface


class Mld::Active::DefaultContext::InterfaceTable::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceTable::Interface::Address


class Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress


class Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts : public ydk::Entity
{
    public:
        InterfaceUnicastQosAdjusts();
        ~InterfaceUnicastQosAdjusts();

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

        class InterfaceUnicastQosAdjust; //type: Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust> > interface_unicast_qos_adjust;
        
}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust : public ydk::Entity
{
    public:
        InterfaceUnicastQosAdjust();
        ~InterfaceUnicastQosAdjust();

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
        ydk::YLeaf is_virtual_access; //type: boolean
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf rate_increments; //type: uint32
        ydk::YLeaf rate_decrements; //type: uint32
        class Update; //type: Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update> > update;
        
}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_add; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf received_time; //type: uint64
        class SourceAddress; //type: Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress
        class GroupAddress; //type: Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress> group_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress : public ydk::Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress


class Mld::Active::DefaultContext::NonActiveGroups : public ydk::Entity
{
    public:
        NonActiveGroups();
        ~NonActiveGroups();

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

        class NonActiveGroups_; //type: Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_> > non_active_groups;
        
}; // Mld::Active::DefaultContext::NonActiveGroups


class Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_ : public ydk::Entity
{
    public:
        NonActiveGroups_();
        ~NonActiveGroups_();

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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf reason_for_non_activity; //type: string
        class GroupAddress; //type: Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_


class Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress : public ydk::Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress


class Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress


class Mld::Active::DefaultContext::Ranges : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Range; //type: Mld::Active::DefaultContext::Ranges::Range

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Ranges::Range> > range;
        
}; // Mld::Active::DefaultContext::Ranges


class Mld::Active::DefaultContext::Ranges::Range : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_mask; //type: int32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf protocol; //type: IgmpEdmProtocol
        ydk::YLeaf is_stale; //type: boolean
        class GroupAddressXr; //type: Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Mld::Active::DefaultContext::Ranges::Range


class Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr


class Mld::Active::DefaultContext::SsmMapDetails : public ydk::Entity
{
    public:
        SsmMapDetails();
        ~SsmMapDetails();

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

        class SsmMapDetail; //type: Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Mld::Active::DefaultContext::SsmMapDetails


class Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail : public ydk::Entity
{
    public:
        SsmMapDetail();
        ~SsmMapDetail();

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

        ydk::YLeaf ssm_map_type; //type: IgmpssmMap
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf expiration_time; //type: uint32
        ydk::YLeaf response_pending; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        ydk::YLeaf elapsed_time; //type: uint64
        class MapInfo; //type: Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo
        class Sources; //type: Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo> map_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources> > sources;
        
}; // Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail


class Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo : public ydk::Entity
{
    public:
        MapInfo();
        ~MapInfo();

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

        ydk::YLeaf map_type; //type: uint32
        ydk::YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr> group_address_xr;
        
}; // Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo


class Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr


class Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources : public ydk::Entity
{
    public:
        Sources();
        ~Sources();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources


class Mld::Active::DefaultContext::SsmMaps : public ydk::Entity
{
    public:
        SsmMaps();
        ~SsmMaps();

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

        class SsmMap; //type: Mld::Active::DefaultContext::SsmMaps::SsmMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMaps::SsmMap> > ssm_map;
        
}; // Mld::Active::DefaultContext::SsmMaps


class Mld::Active::DefaultContext::SsmMaps::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

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

        ydk::YLeaf ssm_map_type; //type: IgmpssmMap
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf map_type; //type: uint32
        ydk::YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Mld::Active::DefaultContext::SsmMaps::SsmMap


class Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

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

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr


class Mld::Active::DefaultContext::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf supported_interfaces; //type: uint32
        ydk::YLeaf unsupported_interfaces; //type: uint32
        ydk::YLeaf enabled_interface_count; //type: uint32
        ydk::YLeaf disabled_interface_count; //type: uint32
        ydk::YLeaf tunnel_mte_config_count; //type: uint32
        ydk::YLeaf node_low_memory; //type: boolean
        class Interface; //type: Mld::Active::DefaultContext::Summary::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Summary::Interface> > interface;
        
}; // Mld::Active::DefaultContext::Summary


class Mld::Active::DefaultContext::Summary::Interface : public ydk::Entity
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
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf on_off; //type: boolean
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32

}; // Mld::Active::DefaultContext::Summary::Interface


class Mld::Active::DefaultContext::TrafficCounters : public ydk::Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

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

        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf packets_in; //type: uint32
        ydk::YLeaf packets_out; //type: uint32
        ydk::YLeaf format_errors; //type: uint32
        ydk::YLeaf packet_manager_input_errors; //type: uint32
        ydk::YLeaf packet_manager_output_errors; //type: uint32
        ydk::YLeaf checksum_errors; //type: uint32
        ydk::YLeaf receive_socket_errors; //type: uint32
        ydk::YLeaf socket_errors; //type: uint32
        ydk::YLeaf bad_scope_errors; //type: uint32
        ydk::YLeaf auxillary_data_length_errors; //type: uint32
        ydk::YLeaf invalid_source_address_errors; //type: uint32
        ydk::YLeaf no_socket_connection; //type: uint32
        ydk::YLeaf miscellaneous_errors; //type: uint32
        ydk::YLeaf input_queries; //type: uint32
        ydk::YLeaf input_reports; //type: uint32
        ydk::YLeaf input_leaves; //type: uint32
        ydk::YLeaf input_mtrace; //type: uint32
        ydk::YLeaf input_dvmrp; //type: uint32
        ydk::YLeaf input_pim; //type: uint32
        ydk::YLeaf output_queries; //type: uint32
        ydk::YLeaf output_reports; //type: uint32
        ydk::YLeaf output_leaves; //type: uint32
        ydk::YLeaf output_mtrace; //type: uint32
        ydk::YLeaf output_dvmrp; //type: uint32
        ydk::YLeaf output_pim; //type: uint32
        ydk::YLeaf get_packet_failure; //type: uint32
        ydk::YLeaf output_no_parent_interface_handle; //type: uint32
        ydk::YLeaf input_no_idb; //type: uint32
        ydk::YLeaf input_no_vrf_in_idb; //type: uint32
        ydk::YLeaf input_disabled_idb; //type: uint32
        ydk::YLeaf input_martian_address; //type: uint32
        ydk::YLeaf input_no_assigned_vrf_id; //type: uint32
        ydk::YLeaf input_no_vrf_mtrace; //type: uint32
        ydk::YLeaf input_no_platform_support_mtrace; //type: uint32

}; // Mld::Active::DefaultContext::TrafficCounters


class Mld::Active::Process : public ydk::Entity
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

        class AmtSummary; //type: Mld::Active::Process::AmtSummary
        class Nsr; //type: Mld::Active::Process::Nsr
        class AmtGatewaies; //type: Mld::Active::Process::AmtGatewaies
        class UnicastQosAdjustStats; //type: Mld::Active::Process::UnicastQosAdjustStats
        class BviStatistics; //type: Mld::Active::Process::BviStatistics
        class Nsf; //type: Mld::Active::Process::Nsf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Process::AmtGatewaies> amt_gatewaies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Process::AmtSummary> amt_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Process::BviStatistics> bvi_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Process::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Process::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Process::UnicastQosAdjustStats> unicast_qos_adjust_stats;
        
}; // Mld::Active::Process


class Mld::Active::Process::AmtGatewaies : public ydk::Entity
{
    public:
        AmtGatewaies();
        ~AmtGatewaies();

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

        class AmtGateway; //type: Mld::Active::Process::AmtGatewaies::AmtGateway

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Process::AmtGatewaies::AmtGateway> > amt_gateway;
        
}; // Mld::Active::Process::AmtGatewaies


class Mld::Active::Process::AmtGatewaies::AmtGateway : public ydk::Entity
{
    public:
        AmtGateway();
        ~AmtGateway();

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

        ydk::YLeaf gateway_address; //type: string
        ydk::YLeaf port; //type: int32
        ydk::YLeaf amtgw; //type: string
        ydk::YLeaf amt_port; //type: uint32
        ydk::YLeaf key_len; //type: uint32
        ydk::YLeaf amtnh; //type: uint32
        ydk::YLeaf amt_nonce; //type: uint32
        ydk::YLeaf idb; //type: uint64
        ydk::YLeaf mem_upd_in; //type: uint32
        ydk::YLeaf mem_upd_out; //type: uint32

}; // Mld::Active::Process::AmtGatewaies::AmtGateway


class Mld::Active::Process::AmtSummary : public ydk::Entity
{
    public:
        AmtSummary();
        ~AmtSummary();

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

        ydk::YLeaf anycast_prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf relay_address; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf query_interval; //type: uint32
        ydk::YLeaf gateway_count; //type: uint32
        ydk::YLeaf max_gateway; //type: uint32
        ydk::YLeaf tunnel_count; //type: uint32
        ydk::YLeaf tunnel_configured_maximum; //type: uint32
        ydk::YLeaf is_acl_configured; //type: boolean
        ydk::YLeaf is_gateway_simulation; //type: boolean
        ydk::YLeaf is_ou_of_resource; //type: boolean

}; // Mld::Active::Process::AmtSummary


class Mld::Active::Process::BviStatistics : public ydk::Entity
{
    public:
        BviStatistics();
        ~BviStatistics();

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

        ydk::YLeaf receive_buffers; //type: uint32
        ydk::YLeaf release_buffers; //type: uint32
        ydk::YLeaf send_blocks; //type: uint32
        ydk::YLeaf release_fail_buffers; //type: uint32
        ydk::YLeaf null_buffer_handles; //type: uint32
        ydk::YLeaf rx_ipc_open_notif; //type: uint32
        ydk::YLeaf rx_ipc_close_notif; //type: uint32
        ydk::YLeaf rx_ipc_error_notif; //type: uint32
        ydk::YLeaf rx_ipc_lwm_notif; //type: uint32
        ydk::YLeaf rx_ipc_input_wait_notif; //type: uint32
        ydk::YLeaf rx_ipc_send_status_notif; //type: uint32
        ydk::YLeaf rx_ipc_publish_notif; //type: uint32
        ydk::YLeaf rx_ipc_q_full_notif; //type: uint32
        ydk::YLeaf rx_ipc_output_notif; //type: uint32
        ydk::YLeaf rx_ipc_connect_notif; //type: uint32
        ydk::YLeaf rx_igmp_packet_success; //type: uint32
        ydk::YLeaf rx_add_mrouter_msg; //type: uint32
        ydk::YLeaf rx_delete_mrouter_msg; //type: uint32
        ydk::YLeaf rx_sweep_mrouter_msg; //type: uint32
        ydk::YLeaf tx_add_mrouter_msg; //type: uint32
        ydk::YLeaf tx_delete_mrouter_msg; //type: uint32
        ydk::YLeaf tx_sweep_mrouter_msg; //type: uint32
        ydk::YLeaf rx_unknown_mrouter_msg; //type: uint32
        ydk::YLeaf tx_unknown_mrouter_msg; //type: uint32
        ydk::YLeaf tx_buffer_errors; //type: uint32
        ydk::YLeaf tx_buffers; //type: uint32
        ydk::YLeaf tx_protocol_buffers; //type: uint32
        ydk::YLeaf tx_mrouter_buffers; //type: uint32
        ydk::YLeaf tx_unknown_buffers; //type: uint32
        ydk::YLeaf wtx_msg_recvd; //type: uint32
        ydk::YLeaf wtx_msg_sent; //type: uint32
        ydk::YLeaf wtx_msg_proto_sent; //type: uint32
        ydk::YLeaf wtx_msg_drop_dc; //type: uint32
        ydk::YLeaf wtx_msg_drop_nomem; //type: uint32
        ydk::YLeaf wtx_msg_freed; //type: uint32

}; // Mld::Active::Process::BviStatistics


class Mld::Active::Process::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

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

        ydk::YLeaf is_multicast_nsf_active; //type: boolean
        ydk::YLeaf multicast_nsf_timeout; //type: uint32
        ydk::YLeaf multicast_nsf_time_left; //type: uint32
        ydk::YLeaf respawn_count; //type: uint32
        ydk::YLeaf last_nsf_on; //type: int64
        ydk::YLeaf last_nsf_off; //type: int64
        ydk::YLeaf last_nsf_on_min; //type: int32
        ydk::YLeaf last_nsf_off_min; //type: int32
        ydk::YLeaf last_icd_notif_recv; //type: int64
        ydk::YLeaf last_icd_notif_recv_min; //type: int32

}; // Mld::Active::Process::Nsf


class Mld::Active::Process::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

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

        ydk::YLeaf state; //type: uint8
        ydk::YLeaf partner_proc_connected; //type: boolean
        ydk::YLeaf collab_conv_done; //type: boolean
        ydk::YLeaf rmf_notification_done; //type: boolean
        ydk::YLeaf last_proc; //type: uint64
        ydk::YLeaf last_proc_connection_up; //type: uint64
        ydk::YLeaf last_proc_connection_dn; //type: uint64
        ydk::YLeaf last_rmf_ready; //type: uint64
        ydk::YLeaf last_rmf_not_ready; //type: uint64
        ydk::YLeaf count_proc_connection_up; //type: uint32
        ydk::YLeaf count_proc_connection_dn; //type: uint32
        ydk::YLeaf count_rmf_ready; //type: uint32
        ydk::YLeaf count_rmf_not_ready; //type: uint32

}; // Mld::Active::Process::Nsr


class Mld::Active::Process::UnicastQosAdjustStats : public ydk::Entity
{
    public:
        UnicastQosAdjustStats();
        ~UnicastQosAdjustStats();

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

        ydk::YLeaf queues; //type: uint16
        ydk::YLeaf batches; //type: uint16
        ydk::YLeaf add_to_batches; //type: uint32
        ydk::YLeaf delete_to_batches; //type: uint32
        ydk::YLeaf send_success; //type: uint32
        ydk::YLeaf send_errors; //type: uint32
        ydk::YLeaf send_comm_errors; //type: uint32
        ydk::YLeaf send_partial_errors; //type: uint32
        ydk::YLeaf received_resync_requests; //type: uint32
        ydk::YLeaf sent_resync_bulks; //type: uint32
        ydk::YLeaf is_resync_received; //type: boolean
        ydk::YLeaf is_resync_required; //type: boolean
        ydk::YLeaf is_resync_start_sent; //type: boolean
        ydk::YLeaf is_qos_s_sweeped; //type: boolean
        ydk::YLeaf last_sweep_time; //type: uint64
        ydk::YLeaf last_download_time; //type: uint64

}; // Mld::Active::Process::UnicastQosAdjustStats


class Mld::Active::Vrfs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Vrf; //type: Mld::Active::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf> > vrf;
        
}; // Mld::Active::Vrfs


class Mld::Active::Vrfs::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class Summary; //type: Mld::Active::Vrfs::Vrf::Summary
        class InterfaceStateOns; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOns
        class DetailGroups; //type: Mld::Active::Vrfs::Vrf::DetailGroups
        class NonActiveGroups; //type: Mld::Active::Vrfs::Vrf::NonActiveGroups
        class SsmMaps; //type: Mld::Active::Vrfs::Vrf::SsmMaps
        class ExplicitGroups; //type: Mld::Active::Vrfs::Vrf::ExplicitGroups
        class InterfaceTable; //type: Mld::Active::Vrfs::Vrf::InterfaceTable
        class InterfaceUnicastQosAdjusts; //type: Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts
        class Ranges; //type: Mld::Active::Vrfs::Vrf::Ranges
        class IfrsInterfaces; //type: Mld::Active::Vrfs::Vrf::IfrsInterfaces
        class TrafficCounters; //type: Mld::Active::Vrfs::Vrf::TrafficCounters
        class Groups; //type: Mld::Active::Vrfs::Vrf::Groups
        class GroupSummary; //type: Mld::Active::Vrfs::Vrf::GroupSummary
        class IfrsInterfaceSummary; //type: Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary
        class GlobalInterfaceTable; //type: Mld::Active::Vrfs::Vrf::GlobalInterfaceTable
        class SsmMapDetails; //type: Mld::Active::Vrfs::Vrf::SsmMapDetails
        class InterfaceStateOffs; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOffs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::DetailGroups> detail_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::ExplicitGroups> explicit_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::GlobalInterfaceTable> global_interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::GroupSummary> group_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary> ifrs_interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOffs> interface_state_offs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOns> interface_state_ons;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceTable> interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts> interface_unicast_qos_adjusts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::NonActiveGroups> non_active_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::Ranges> ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::SsmMapDetails> ssm_map_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::SsmMaps> ssm_maps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::TrafficCounters> traffic_counters;
        
}; // Mld::Active::Vrfs::Vrf


class Mld::Active::Vrfs::Vrf::DetailGroups : public ydk::Entity
{
    public:
        DetailGroups();
        ~DetailGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailGroup; //type: Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup> > detail_group;
        
}; // Mld::Active::Vrfs::Vrf::DetailGroups


class Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup : public ydk::Entity
{
    public:
        DetailGroup();
        ~DetailGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf is_router_exclude_mode; //type: boolean
        ydk::YLeaf is_host_exclude_mode; //type: boolean
        class GroupInfo; //type: Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo
        class Source; //type: Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source> > source;
        
}; // Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup


class Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo : public ydk::Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress> source_address;
        
}; // Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo


class Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr


class Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter


class Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress


class Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_remote; //type: boolean
        ydk::YLeaf is_forward; //type: boolean
        ydk::YLeaf is_we_report; //type: boolean
        ydk::YLeaf flags; //type: int32
        ydk::YLeaf is_added; //type: boolean
        class SourceAddress; //type: Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress> source_address;
        
}; // Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source


class Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress


class Mld::Active::Vrfs::Vrf::ExplicitGroups : public ydk::Entity
{
    public:
        ExplicitGroups();
        ~ExplicitGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExplicitGroup; //type: Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup> > explicit_group;
        
}; // Mld::Active::Vrfs::Vrf::ExplicitGroups


class Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup : public ydk::Entity
{
    public:
        ExplicitGroup();
        ~ExplicitGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf include_hosts; //type: uint32
        ydk::YLeaf exclude_hosts; //type: uint32
        class GroupInfo; //type: Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo
        class Host; //type: Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host> > host;
        
}; // Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup


class Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo : public ydk::Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress> source_address;
        
}; // Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo


class Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr


class Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter


class Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress


class Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf is_exclude; //type: boolean
        ydk::YLeaf expiration_time; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        class Address; //type: Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address
        class SourceAddress; //type: Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address> address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress> > source_address;
        
}; // Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host


class Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address


class Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress


class Mld::Active::Vrfs::Vrf::GlobalInterfaceTable : public ydk::Entity
{
    public:
        GlobalInterfaceTable();
        ~GlobalInterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface> > interface;
        
}; // Mld::Active::Vrfs::Vrf::GlobalInterfaceTable


class Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface : public ydk::Entity
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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface


class Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address


class Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress


class Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress


class Mld::Active::Vrfs::Vrf::GroupSummary : public ydk::Entity
{
    public:
        GroupSummary();
        ~GroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf groutes; //type: uint32
        ydk::YLeaf sg_routes; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_low_memory; //type: boolean

}; // Mld::Active::Vrfs::Vrf::GroupSummary


class Mld::Active::Vrfs::Vrf::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Mld::Active::Vrfs::Vrf::Groups::Group

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::Groups::Group> > group;
        
}; // Mld::Active::Vrfs::Vrf::Groups


class Mld::Active::Vrfs::Vrf::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr
        class LastReporter; //type: Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter
        class SourceAddress; //type: Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter> last_reporter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress> source_address;
        
}; // Mld::Active::Vrfs::Vrf::Groups::Group


class Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr


class Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter


class Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress


class Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary : public ydk::Entity
{
    public:
        IfrsInterfaceSummary();
        ~IfrsInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf configuration_count; //type: uint32

}; // Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary


class Mld::Active::Vrfs::Vrf::IfrsInterfaces : public ydk::Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfrsInterface; //type: Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Mld::Active::Vrfs::Vrf::IfrsInterfaces


class Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface : public ydk::Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

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
        ydk::YLeaf join_group_count; //type: uint32
        class IgmpInterfaceEntry; //type: Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry> igmp_interface_entry;
        
}; // Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface


class Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry : public ydk::Entity
{
    public:
        IgmpInterfaceEntry();
        ~IgmpInterfaceEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address
        class QuerierAddress; //type: Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry


class Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address


class Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress


class Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress


class Mld::Active::Vrfs::Vrf::InterfaceStateOffs : public ydk::Entity
{
    public:
        InterfaceStateOffs();
        ~InterfaceStateOffs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStateOff; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff> > interface_state_off;
        
}; // Mld::Active::Vrfs::Vrf::InterfaceStateOffs


class Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff : public ydk::Entity
{
    public:
        InterfaceStateOff();
        ~InterfaceStateOff();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address
        class QuerierAddress; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff


class Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address


class Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress


class Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress


class Mld::Active::Vrfs::Vrf::InterfaceStateOns : public ydk::Entity
{
    public:
        InterfaceStateOns();
        ~InterfaceStateOns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStateOn; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn> > interface_state_on;
        
}; // Mld::Active::Vrfs::Vrf::InterfaceStateOns


class Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn : public ydk::Entity
{
    public:
        InterfaceStateOn();
        ~InterfaceStateOn();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address
        class QuerierAddress; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn


class Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address


class Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress


class Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress


class Mld::Active::Vrfs::Vrf::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mld::Active::Vrfs::Vrf::InterfaceTable::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceTable::Interface> > interface;
        
}; // Mld::Active::Vrfs::Vrf::InterfaceTable


class Mld::Active::Vrfs::Vrf::InterfaceTable::Interface : public ydk::Entity
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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::Vrfs::Vrf::InterfaceTable::Interface


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_OPER_2_ */

