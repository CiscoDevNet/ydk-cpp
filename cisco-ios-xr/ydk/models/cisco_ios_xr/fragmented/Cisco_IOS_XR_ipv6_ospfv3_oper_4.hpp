#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_OPER_4_
#define _CISCO_IOS_XR_IPV6_OSPFV3_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_oper_0.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_2.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public ydk::Entity
{
    public:
        IntraAreaPrefixLsaType();
        ~IntraAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reference_type; //type: Ospfv3Lsa1
        ydk::YLeaf reference_lsa_id; //type: uint32
        ydk::YLeaf reference_advertised_router; //type: string
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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
        ydk::YLeaf ospfv3_prefix_length; //type: uint8
        ydk::YLeaf ospfv3_prefix_options; //type: uint8
        ydk::YLeaf ospfv3_prefix_metric; //type: uint16
        ydk::YLeaf priority; //type: PrefixPriority

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType : public ydk::Entity
{
    public:
        LinkLsaType();
        ~LinkLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        ydk::YLeaf lsa_link_local; //type: string
        ydk::YLeaf router_priority; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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
        ydk::YLeaf ospfv3_prefix_length; //type: uint8
        ydk::YLeaf ospfv3_prefix_options; //type: uint8
        ydk::YLeaf ospfv3_prefix_metric; //type: uint16
        ydk::YLeaf priority; //type: PrefixPriority

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo : public ydk::Entity
{
    public:
        LsaSummaryInfo();
        ~LsaSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf links; //type: uint16
        ydk::YLeaf router_la_bits; //type: uint8
        ydk::YLeaf reference_type; //type: uint16
        ydk::YLeaf reference_lsa_id; //type: uint32
        ydk::YLeaf lsa_router_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType : public ydk::Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList neighbor_router; //type: list of  string
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType : public ydk::Entity
{
    public:
        NssalsaType();
        ~NssalsaType();

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
        ydk::YLeaf metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tos_cost; //type: uint32
        ydk::YLeaf is_forwarding_address_set; //type: boolean
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType : public ydk::Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_la_bits; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: Ospfv3Link
        ydk::YLeaf link_metric; //type: uint16
        ydk::YLeaf link_interface_id; //type: uint32
        ydk::YLeaf link_neighbor_interface_id; //type: uint32
        ydk::YLeaf link_neighbor_router_id; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public ydk::Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpf_multicast_next_hop; //type: uint32
        ydk::YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType : public ydk::Entity
{
    public:
        UnknownAreaLsaType();
        ~UnknownAreaLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType : public ydk::Entity
{
    public:
        UnknownAslsaType();
        ~UnknownAslsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType : public ydk::Entity
{
    public:
        UnknownLinkLsaType();
        ~UnknownLinkLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType : public ydk::Entity
{
    public:
        UnknownLsaType();
        ~UnknownLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes : public ydk::Entity
{
    public:
        ExternalRoutes();
        ~ExternalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExternalRoute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute> > external_route;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute : public ydk::Entity
{
    public:
        ExternalRoute();
        ~ExternalRoute();

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
        class RouteTopology; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology
        class RouteExtendedCommunity; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity
        class RoutePath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity> route_extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath> > route_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology> route_topology;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity : public ydk::Entity
{
    public:
        RouteExtendedCommunity();
        ~RouteExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_community_domain_id_value; //type: string
        ydk::YLeaf extended_communityl_domain_id_type; //type: uint16
        ydk::YLeaf extended_community_area_id; //type: uint32
        ydk::YLeaf extended_community_router_id; //type: string
        ydk::YLeaf extended_community_route_type; //type: uint8
        ydk::YLeaf extended_community_options; //type: uint8

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

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
        ydk::YLeaf route_path_next_hop; //type: string
        ydk::YLeaf route_path_id; //type: uint16
        class RouteBackupPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath> route_backup_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath : public ydk::Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_route_interface_name; //type: string
        ydk::YLeaf backup_route_next_hop_address; //type: string
        ydk::YLeaf backup_route_source; //type: string
        ydk::YLeaf backup_metric; //type: uint32
        ydk::YLeaf primary_path; //type: boolean
        ydk::YLeaf line_card_disjoint; //type: boolean
        ydk::YLeaf downstream; //type: boolean
        ydk::YLeaf node_protect; //type: boolean
        ydk::YLeaf srlg_disjoint; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology : public ydk::Entity
{
    public:
        RouteTopology();
        ~RouteTopology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_id; //type: string
        ydk::YLeaf route_distance; //type: uint32
        ydk::YLeaf route_cost; //type: uint32
        ydk::YLeaf route_type; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes : public ydk::Entity
{
    public:
        FastReroutes();
        ~FastReroutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FastReroute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute> > fast_reroute;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute : public ydk::Entity
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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf ipfrr_topo_area_id; //type: string
        ydk::YLeaf ipfrr_router_id; //type: string
        ydk::YLeaf ipfrr_area_revision; //type: uint32
        class IpfrrTopo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo> > ipfrr_topo;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute


class Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo : public ydk::Entity
{
    public:
        IpfrrTopo();
        ~IpfrrTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf lsaid; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf type4; //type: boolean
        ydk::YLeaf revision; //type: uint32
        ydk::YLeaf neighbor_sourced; //type: boolean
        ydk::YLeaf dr; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes::FastReroute::IpfrrTopo


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable : public ydk::Entity
{
    public:
        FloodListProcessTable();
        ~FloodListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood> > flood;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood : public ydk::Entity
{
    public:
        Flood();
        ~Flood();

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
        ydk::YLeaf ls_transmission_timer; //type: uint32
        ydk::YLeaf queue_length; //type: uint32
        class LinkFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood
        class AreaFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood
        class AsFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood> > as_flood;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood> > link_flood;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood : public ydk::Entity
{
    public:
        AreaFlood();
        ~AreaFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood : public ydk::Entity
{
    public:
        AsFlood();
        ~AsFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood : public ydk::Entity
{
    public:
        LinkFlood();
        ~LinkFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable : public ydk::Entity
{
    public:
        InterfaceBriefProcessTable();
        ~InterfaceBriefProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceBrief; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief> > interface_brief;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief : public ydk::Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

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
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: Ospfv3InterfaceState
        ydk::YLeaf interface_neighbors; //type: uint16
        ydk::YLeaf interface_adjacent_neighbors; //type: uint16
        ydk::YLeaf network_type; //type: Ospfv3Interface

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable::InterfaceBrief


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable : public ydk::Entity
{
    public:
        InterfaceProcessTable();
        ~InterfaceProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface> > interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface : public ydk::Entity
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
        ydk::YLeaf interface_state; //type: ImStateEnum
        ydk::YLeaf is_interface_line_up; //type: boolean
        ydk::YLeaf is_interface_ip_security_required; //type: boolean
        ydk::YLeaf is_interface_ip_security_active; //type: boolean
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_number; //type: uint32
        ydk::YLeaf interface_router_id; //type: string
        ydk::YLeaf network_type; //type: Ospfv3Interface
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf is_interface_flood_reduction; //type: boolean
        ydk::YLeaf is_demand_circuit_configured; //type: boolean
        ydk::YLeaf is_interface_demand_circuit; //type: boolean
        ydk::YLeaf interface_dc_bitless_ls_as; //type: uint32
        ydk::YLeaf transmission_delay; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: Ospfv3InterfaceState
        ydk::YLeaf interface_priority; //type: uint8
        ydk::YLeaf is_designated_router; //type: boolean
        ydk::YLeaf designated_router_id; //type: string
        ydk::YLeaf designated_router_address; //type: string
        ydk::YLeaf backup_designated_router_id; //type: string
        ydk::YLeaf backup_designated_router_address; //type: string
        ydk::YLeaf network_lsa_flush_timer; //type: uint32
        ydk::YLeaf is_interface_lsa_filtered; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf wait_interval; //type: uint32
        ydk::YLeaf interface_retransmission_interval; //type: uint32
        ydk::YLeaf next_hello_time; //type: uint32
        ydk::YLeaf interface_authentication_spi; //type: uint32
        ydk::YLeaf interface_authentication_transmit; //type: uint32
        ydk::YLeaf is_interface_encryption_enabled; //type: boolean
        ydk::YLeaf is_prefix_suppress; //type: boolean
        ydk::YLeaf interface_encryption_spi; //type: uint32
        ydk::YLeaf interface_encryption_transmitted; //type: uint32
        ydk::YLeaf interface_encrypted_authentication_transmitted; //type: uint32
        ydk::YLeaf adjacent_neighbor; //type: uint32
        ydk::YLeaf interface_references; //type: uint32
        ydk::YLeaf configured_ldp_sync; //type: boolean
        ydk::YLeaf interface_ldp_sync; //type: boolean
        class ActiveInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface
        class InterfaceBfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd
        class InterfaceNeighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface> active_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd> interface_bfd;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor> > interface_neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface : public ydk::Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf interface_area_flood_index; //type: uint32
        ydk::YLeaf interface_as_flood_index; //type: uint32
        ydk::YLeaf interface_link_flood_index; //type: uint32
        ydk::YLeaf flood_queue_length; //type: uint32
        ydk::YLeaf interface_area_next_flood; //type: uint32
        ydk::YLeaf interface_area_next_flood_index; //type: uint32
        ydk::YLeaf interface_as_next_flood; //type: uint32
        ydk::YLeaf interface_as_next_flood_index; //type: uint32
        ydk::YLeaf interface_link_next_flood; //type: uint32
        ydk::YLeaf interface_link_next_index; //type: uint32
        ydk::YLeaf flood_scan_length; //type: uint32
        ydk::YLeaf maximum_flood_length; //type: uint32
        ydk::YLeaf last_flood_time; //type: uint32
        ydk::YLeaf maximum_flood_time; //type: uint32
        ydk::YLeaf interface_flood_pacing_timer; //type: uint32
        ydk::YLeaf interface_neighbors; //type: uint16
        ydk::YLeaf suppressed_hellos; //type: uint16

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd : public ydk::Entity
{
    public:
        InterfaceBfd();
        ~InterfaceBfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_detection_multiplier; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor : public ydk::Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_neighbor_id; //type: string
        ydk::YLeaf interface_neighbor_cost; //type: uint32
        ydk::YLeaf is_neighbor_dr; //type: boolean
        ydk::YLeaf is_neighbor_bdr; //type: boolean
        ydk::YLeaf is_hello_suppressed; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes : public ydk::Entity
{
    public:
        InternalRoutes();
        ~InternalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InternalRoute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute> > internal_route;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute : public ydk::Entity
{
    public:
        InternalRoute();
        ~InternalRoute();

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
        ydk::YLeaf route_area_id; //type: uint32
        class RouteTopology; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology
        class RouteSource; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource
        class RoutePath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath> > route_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource> > route_source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology> route_topology;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

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
        ydk::YLeaf route_path_next_hop; //type: string
        ydk::YLeaf route_path_id; //type: uint16
        class RouteBackupPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath> route_backup_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath : public ydk::Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_route_interface_name; //type: string
        ydk::YLeaf backup_route_next_hop_address; //type: string
        ydk::YLeaf backup_route_source; //type: string
        ydk::YLeaf backup_metric; //type: uint32
        ydk::YLeaf primary_path; //type: boolean
        ydk::YLeaf line_card_disjoint; //type: boolean
        ydk::YLeaf downstream; //type: boolean
        ydk::YLeaf node_protect; //type: boolean
        ydk::YLeaf srlg_disjoint; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource : public ydk::Entity
{
    public:
        RouteSource();
        ~RouteSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_source_adversting_router; //type: string
        ydk::YLeaf route_source_id; //type: string
        ydk::YLeaf route_source_lsa_type; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology : public ydk::Entity
{
    public:
        RouteTopology();
        ~RouteTopology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_id; //type: string
        ydk::YLeaf route_distance; //type: uint32
        ydk::YLeaf route_cost; //type: uint32
        ydk::YLeaf route_type; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable : public ydk::Entity
{
    public:
        NeighborDetailProcessTable();
        ~NeighborDetailProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail> > neighbor_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail : public ydk::Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

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
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_id; //type: uint32
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: Ospfv3NeighborState
        ydk::YLeaf neighbor_designated_router; //type: string
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_virtual_link_id; //type: uint32
        ydk::YLeaf is_neighbor_virtual_link; //type: boolean
        ydk::YLeaf neighbor_sham_link_id; //type: uint32
        ydk::YLeaf is_neighbor_sham_link; //type: boolean
        class NeighborDetail_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_> neighbor_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo : public ydk::Entity
{
    public:
        NeighborBfdInfo();
        ~NeighborBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf bfd_status_flag; //type: uint8

}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_ : public ydk::Entity
{
    public:
        NeighborDetail_();
        ~NeighborDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state_changes; //type: uint16
        ydk::YLeaf neighbor_cost; //type: uint16
        ydk::YLeaf is_neighbor_filtered; //type: boolean
        ydk::YLeaf neighbor_designated_router_address; //type: string
        ydk::YLeaf neighbor_backup_designated_router_address; //type: string
        ydk::YLeaf interface_type; //type: Ospfv3Interface
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf next_poll_interval; //type: uint32
        ydk::YLeaf neighbor_ignore_timer; //type: uint32
        ydk::YLeaf neighbor_option; //type: uint32
        ydk::YLeaf pending_events; //type: uint16
        class NeighborRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission> neighbor_retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission : public ydk::Entity
{
    public:
        NeighborRetransmission();
        ~NeighborRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_descriptor_retransmissions; //type: uint32
        ydk::YLeaf area_flood_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf link_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmissions; //type: uint32
        ydk::YLeaf retransmissions; //type: uint32
        ydk::YLeaf area_first_flood; //type: uint32
        ydk::YLeaf area_first_flood_index; //type: uint32
        ydk::YLeaf as_first_flood; //type: uint32
        ydk::YLeaf as_first_flood_index; //type: uint32
        ydk::YLeaf link_first_flood; //type: uint32
        ydk::YLeaf link_first_flood_index; //type: uint32
        ydk::YLeaf area_next_flood; //type: uint32
        ydk::YLeaf area_next_flood_index; //type: uint32
        ydk::YLeaf as_next_flood; //type: uint32
        ydk::YLeaf as_next_flood_index; //type: uint32
        ydk::YLeaf link_next_flood; //type: uint32
        ydk::YLeaf link_next_flood_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable : public ydk::Entity
{
    public:
        NeighborProcessTable();
        ~NeighborProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor> > neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_id; //type: uint32
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: Ospfv3NeighborState
        ydk::YLeaf neighbor_designated_router; //type: string
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_virtual_link_id; //type: uint32
        ydk::YLeaf is_neighbor_virtual_link; //type: boolean
        ydk::YLeaf neighbor_sham_link_id; //type: uint32
        ydk::YLeaf is_neighbor_sham_link; //type: boolean
        class NeighborDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail> neighbor_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo : public ydk::Entity
{
    public:
        NeighborBfdInfo();
        ~NeighborBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf bfd_status_flag; //type: uint8

}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborBfdInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail : public ydk::Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state_changes; //type: uint16
        ydk::YLeaf neighbor_cost; //type: uint16
        ydk::YLeaf is_neighbor_filtered; //type: boolean
        ydk::YLeaf neighbor_designated_router_address; //type: string
        ydk::YLeaf neighbor_backup_designated_router_address; //type: string
        ydk::YLeaf interface_type; //type: Ospfv3Interface
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf next_poll_interval; //type: uint32
        ydk::YLeaf neighbor_ignore_timer; //type: uint32
        ydk::YLeaf neighbor_option; //type: uint32
        ydk::YLeaf pending_events; //type: uint16
        class NeighborRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission> neighbor_retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission : public ydk::Entity
{
    public:
        NeighborRetransmission();
        ~NeighborRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_descriptor_retransmissions; //type: uint32
        ydk::YLeaf area_flood_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf link_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmissions; //type: uint32
        ydk::YLeaf retransmissions; //type: uint32
        ydk::YLeaf area_first_flood; //type: uint32
        ydk::YLeaf area_first_flood_index; //type: uint32
        ydk::YLeaf as_first_flood; //type: uint32
        ydk::YLeaf as_first_flood_index; //type: uint32
        ydk::YLeaf link_first_flood; //type: uint32
        ydk::YLeaf link_first_flood_index; //type: uint32
        ydk::YLeaf area_next_flood; //type: uint32
        ydk::YLeaf area_next_flood_index; //type: uint32
        ydk::YLeaf as_next_flood; //type: uint32
        ydk::YLeaf as_next_flood_index; //type: uint32
        ydk::YLeaf link_next_flood; //type: uint32
        ydk::YLeaf link_next_flood_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas : public ydk::Entity
{
    public:
        ProtocolAreas();
        ~ProtocolAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolArea; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea> > protocol_area;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas


class Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea : public ydk::Entity
{
    public:
        ProtocolArea();
        ~ProtocolArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: string
        ydk::YLeaf protocol_area_id; //type: string
        ydk::YLeaf distribute_list_in; //type: string
        class ProtocolInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface> > protocol_interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea


class Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface : public ydk::Entity
{
    public:
        ProtocolInterface();
        ~ProtocolInterface();

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
        ydk::YLeaf distribute_list_in; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions : public ydk::Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribution; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution> > redistribution;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf protocol_name_xr; //type: string
        ydk::YLeaf process_id; //type: string
        ydk::YLeaf red_metric_flag; //type: boolean
        ydk::YLeaf red_metric; //type: uint32
        ydk::YLeaf red_mtype_flag; //type: boolean
        ydk::YLeaf red_metric_type; //type: uint8
        ydk::YLeaf red_tag; //type: uint32
        ydk::YLeaf policy_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution


class Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable : public ydk::Entity
{
    public:
        RequestListProcessTable();
        ~RequestListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request> > request;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

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
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf request_neighbor_address; //type: string
        ydk::YLeaf is_request_virtual_link; //type: boolean
        ydk::YLeaf request_virtual_link_id; //type: uint32
        ydk::YLeaf is_request_sham_link; //type: boolean
        ydk::YLeaf request_sham_link_id; //type: uint32
        class Request_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_> > request;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request


class Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_ : public ydk::Entity
{
    public:
        Request_();
        ~Request_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable : public ydk::Entity
{
    public:
        RetransmissionListProcessTable();
        ~RetransmissionListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Retransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission> > retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission : public ydk::Entity
{
    public:
        Retransmission();
        ~Retransmission();

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
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf retransmission_neighbor_address; //type: string
        ydk::YLeaf is_retransmissionvirtual_link; //type: boolean
        ydk::YLeaf retransmissionvirtual_link_id; //type: uint32
        ydk::YLeaf is_retransmission_sham_link; //type: boolean
        ydk::YLeaf retransmission_sham_link_id; //type: uint32
        ydk::YLeaf retransmission_timer; //type: uint32
        ydk::YLeaf retransmission_length; //type: uint32
        class RetransmissionvirtualLinkDb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb
        class RetransmissionAreaDb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb> > retransmissionvirtual_link_db;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb : public ydk::Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb : public ydk::Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb


class Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb : public ydk::Entity
{
    public:
        RetransmissionvirtualLinkDb();
        ~RetransmissionvirtualLinkDb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb


class Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary : public ydk::Entity
{
    public:
        RouteSummary();
        ~RouteSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_id; //type: string
        ydk::YLeaf intra_area_route; //type: uint32
        ydk::YLeaf inter_area_route; //type: uint32
        ydk::YLeaf extern_one_route; //type: uint32
        ydk::YLeaf extern_two_route; //type: uint32
        ydk::YLeaf nssa_one_route; //type: uint32
        ydk::YLeaf nssa_two_route; //type: uint32
        ydk::YLeaf total_sent_route; //type: uint32
        ydk::YLeaf route_connected; //type: uint32
        ydk::YLeaf redistribution_route; //type: uint32
        ydk::YLeaf total_received_route; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable : public ydk::Entity
{
    public:
        ShamLinkTable();
        ~ShamLinkTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sham_link_neighbor_id; //type: string
        ydk::YLeaf sham_link_source_address; //type: string
        ydk::YLeaf sham_link_dest_address; //type: string
        ydk::YLeaf sham_link_state; //type: Ospfv3InterfaceState
        ydk::YLeaf sham_link_demand_circuit; //type: boolean
        ydk::YLeaf sham_link_dc_bitless_lsa; //type: uint32
        ydk::YLeaf sham_link_ifindex; //type: uint32
        ydk::YLeaf sham_link_area; //type: string
        ydk::YLeaf sham_link_cost; //type: uint16
        ydk::YLeaf sham_link_transmission_delay; //type: uint16
        ydk::YLeaf sham_link_hello_interval; //type: uint32
        ydk::YLeaf sham_link_dead_interval; //type: uint32
        ydk::YLeaf sham_link_wait_interval; //type: uint32
        ydk::YLeaf sham_link_retransmission_interval; //type: uint32
        ydk::YLeaf sham_link_next_hello; //type: uint32
        ydk::YLeaf sham_link_passive; //type: boolean
        ydk::YLeaf is_sham_link_ip_security_required; //type: boolean
        ydk::YLeaf is_sham_link_ip_security_active; //type: boolean
        ydk::YLeaf is_sham_link_authentication_enabled; //type: boolean
        ydk::YLeaf virtual_link_authentication_spi; //type: uint32
        ydk::YLeaf sham_link_authentication_transmit; //type: uint32
        ydk::YLeaf is_sham_link_encryption_enabled; //type: boolean
        ydk::YLeaf sham_link_encryption_spi; //type: uint32
        ydk::YLeaf sham_link_encryption_transmitted; //type: uint32
        ydk::YLeaf sham_link_encrypted_authentication_transmitted; //type: uint32
        ydk::YLeaf sham_link_gr_enabled; //type: boolean
        ydk::YLeaf sham_link_gr; //type: boolean
        ydk::YLeaf sham_link_last_gr; //type: uint32
        class ShamLinkNeighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor> sham_link_neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable


class Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor : public ydk::Entity
{
    public:
        ShamLinkNeighbor();
        ~ShamLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sham_link_suppress_hello; //type: boolean
        ydk::YLeaf sham_link_state; //type: Ospfv3NeighborState
        class ShamLinkRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission> sham_link_retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission : public ydk::Entity
{
    public:
        ShamLinkRetransmission();
        ~ShamLinkRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_descriptor_retransmissions; //type: uint32
        ydk::YLeaf area_flood_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf link_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmissions; //type: uint32
        ydk::YLeaf retransmissions; //type: uint32
        ydk::YLeaf area_first_flood; //type: uint32
        ydk::YLeaf area_first_flood_index; //type: uint32
        ydk::YLeaf as_first_flood; //type: uint32
        ydk::YLeaf as_first_flood_index; //type: uint32
        ydk::YLeaf link_first_flood; //type: uint32
        ydk::YLeaf link_first_flood_index; //type: uint32
        ydk::YLeaf area_next_flood; //type: uint32
        ydk::YLeaf area_next_flood_index; //type: uint32
        ydk::YLeaf as_next_flood; //type: uint32
        ydk::YLeaf as_next_flood_index; //type: uint32
        ydk::YLeaf link_next_flood; //type: uint32
        ydk::YLeaf link_next_flood_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary : public ydk::Entity
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

        class Protocol; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol
        class Ospfv3_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_
        class Route; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_> ospfv3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol> protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route> route;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_ : public ydk::Entity
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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf role; //type: uint32
        ydk::YLeaf is_nsr_enabled; //type: boolean
        ydk::YLeaf is_nsr_switchover_on_restart; //type: boolean
        ydk::YLeaf is_router_id_stalled; //type: boolean
        ydk::YLeaf is_opaque_capable; //type: boolean
        ydk::YLeaf is_area_border_router; //type: boolean
        ydk::YLeaf is_as_border_router; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf is_default_originated; //type: boolean
        ydk::YLeaf is_default_always; //type: boolean
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf default_metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf default_tag; //type: uint32
        ydk::YLeaf is_default_policy; //type: boolean
        ydk::YLeaf default_policy_name; //type: string
        ydk::YLeaf spf_start_time; //type: uint32
        ydk::YLeaf spf_hold_time; //type: uint32
        ydk::YLeaf spf_maximum_time; //type: uint32
        ydk::YLeaf lsa_start_time; //type: uint32
        ydk::YLeaf lsa_hold_time; //type: uint32
        ydk::YLeaf lsa_maximum_time; //type: uint32
        ydk::YLeaf minimum_lsa_interval; //type: uint32
        ydk::YLeaf lsa_group_interval; //type: uint32
        ydk::YLeaf lsa_flood_pacing_interval; //type: uint32
        ydk::YLeaf lsa_retransmission_pacing_interval; //type: uint32
        ydk::YLeaf as_ls_as; //type: uint32
        ydk::YLeaf opaque_lsas; //type: uint32
        ydk::YLeaf opaque_lsa_checksum; //type: uint32
        ydk::YLeaf as_dc_bitless_ls_as; //type: uint32
        ydk::YLeaf as_do_not_age_ls_as; //type: uint32
        ydk::YLeaf areas; //type: uint16
        ydk::YLeaf normal_areas; //type: uint16
        ydk::YLeaf stub_areas; //type: uint16
        ydk::YLeaf nssa_areas; //type: uint16
        ydk::YLeaf as_lsa_flood_list_length; //type: uint32
        ydk::YLeaf is_grace_restart_enabled; //type: boolean
        ydk::YLeaf last_nsf_time; //type: uint32
        ydk::YLeaf grace_resync_time; //type: uint32
        ydk::YLeaf maximum_interfaces; //type: uint32
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf redistribution_limit; //type: uint32
        ydk::YLeaf redistribution_threshold; //type: uint32
        ydk::YLeaf is_auto_cost; //type: boolean
        ydk::YLeaf reference_bandwidth; //type: uint32
        ydk::YLeaf context_name; //type: string
        ydk::YLeaf snmp_trap_enabled; //type: boolean
        ydk::YLeaf graceful_shutdown_state; //type: Ospfv3GracefulShutdownState
        class DomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId
        class StubRouter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter
        class IpfrrTiebreakers; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId> domain_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers> > ipfrr_tiebreakers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter> > stub_router;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId : public ydk::Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrimaryDomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId
        class SecondaryDomainId; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId> primary_domain_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId> > secondary_domain_id;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId : public ydk::Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::PrimaryDomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId : public ydk::Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::DomainId::SecondaryDomainId


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers : public ydk::Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: IpfrrTbrkr
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::IpfrrTiebreakers


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter : public ydk::Entity
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

        ydk::YLeaf mode; //type: StubRouterMode
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf remaining_time; //type: uint32
        ydk::YLeaf set_reason; //type: StubRouterTrigger
        ydk::YLeaf unset_reason; //type: StubRouterExitReason
        ydk::YLeaf include_stub_links; //type: boolean
        ydk::YLeaf summary_lsa_metric; //type: uint32
        ydk::YLeaf external_lsa_metric; //type: uint32
        ydk::YLeaf abr_off_reason; //type: StubRouterAbrOffReason
        class UnsetTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime
        class StartTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime
        class AbrResumeTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime
        class Trigger; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime> abr_resume_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime> start_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger> > trigger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime> unset_time;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime : public ydk::Entity
{
    public:
        AbrResumeTime();
        ~AbrResumeTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::AbrResumeTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::StartTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger : public ydk::Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trigger; //type: StubRouterTrigger
        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf unset_reason; //type: StubRouterExitReason
        ydk::YLeaf time; //type: uint32
        class UnsetTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime
        class StartTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime> start_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime> unset_time;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime : public ydk::Entity
{
    public:
        UnsetTime();
        ~UnsetTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime : public ydk::Entity
{
    public:
        UnsetTime();
        ~UnsetTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Ospfv3_::StubRouter::UnsetTime


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_router_id; //type: string
        ydk::YLeaf administrative_distance; //type: uint32
        ydk::YLeaf administrative_distance_inter_area; //type: uint32
        ydk::YLeaf administrative_distance_external; //type: uint32
        ydk::YLeaf is_graceful_restart; //type: boolean
        ydk::YLeaf distribute_list_in; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Protocol


class Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_id; //type: string
        ydk::YLeaf intra_area_route; //type: uint32
        ydk::YLeaf inter_area_route; //type: uint32
        ydk::YLeaf extern_one_route; //type: uint32
        ydk::YLeaf extern_two_route; //type: uint32
        ydk::YLeaf nssa_one_route; //type: uint32
        ydk::YLeaf nssa_two_route; //type: uint32
        ydk::YLeaf total_sent_route; //type: uint32
        ydk::YLeaf route_connected; //type: uint32
        ydk::YLeaf redistribution_route; //type: uint32
        ydk::YLeaf total_received_route; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Summary::Route


class Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes : public ydk::Entity
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

        class SummaryPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes


class Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix : public ydk::Entity
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
        ydk::YLeaf prefix_metric; //type: uint32
        ydk::YLeaf prefix_metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tag; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink : public ydk::Entity
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

        ydk::YLeaf virtual_link_neighbor_id; //type: string
        ydk::YLeaf virtual_link_interface_number; //type: uint32
        ydk::YLeaf virtual_link_state; //type: Ospfv3InterfaceState
        ydk::YLeaf is_virtual_link_ip_security_required; //type: boolean
        ydk::YLeaf is_virtual_link_ip_security_active; //type: boolean
        ydk::YLeaf virtual_link_neighbor_address; //type: string
        ydk::YLeaf is_virtual_link_demand_circuit; //type: boolean
        ydk::YLeaf virtual_link_dc_bitless_lsa; //type: uint32
        ydk::YLeaf transit_area_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf virtual_link_cost; //type: uint16
        ydk::YLeaf virual_link_transmission_delay; //type: uint16
        ydk::YLeaf virtual_link_hello_interval; //type: uint32
        ydk::YLeaf virtual_link_dead_interval; //type: uint32
        ydk::YLeaf virtual_link_wait_interval; //type: uint32
        ydk::YLeaf virtual_link_retransmission_interval; //type: uint32
        ydk::YLeaf virtual_link_next_hello; //type: uint32
        ydk::YLeaf is_virtual_link_passive; //type: boolean
        ydk::YLeaf is_virtual_link_authentication_enabled; //type: boolean
        ydk::YLeaf virtual_link_authentication_spi; //type: uint32
        ydk::YLeaf virtual_link_authentication_transmit; //type: uint32
        ydk::YLeaf is_virtual_link_encryption_enabled; //type: boolean
        ydk::YLeaf virtual_link_encryption_spi; //type: uint32
        ydk::YLeaf virtual_link_encryption_transmitted; //type: uint32
        ydk::YLeaf virtual_link_encrypted_authentication_transmitted; //type: uint32
        class VirtualLinkNeighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor> virtual_link_neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink


class Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor : public ydk::Entity
{
    public:
        VirtualLinkNeighbor();
        ~VirtualLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_virtual_link_hello_suppressed; //type: boolean
        ydk::YLeaf virtual_link_state; //type: Ospfv3InterfaceState
        class VirtualLinkRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission> virtual_link_retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission : public ydk::Entity
{
    public:
        VirtualLinkRetransmission();
        ~VirtualLinkRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_descriptor_retransmissions; //type: uint32
        ydk::YLeaf area_flood_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf link_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmissions; //type: uint32
        ydk::YLeaf retransmissions; //type: uint32
        ydk::YLeaf area_first_flood; //type: uint32
        ydk::YLeaf area_first_flood_index; //type: uint32
        ydk::YLeaf as_first_flood; //type: uint32
        ydk::YLeaf as_first_flood_index; //type: uint32
        ydk::YLeaf link_first_flood; //type: uint32
        ydk::YLeaf link_first_flood_index; //type: uint32
        ydk::YLeaf area_next_flood; //type: uint32
        ydk::YLeaf area_next_flood_index; //type: uint32
        ydk::YLeaf as_next_flood; //type: uint32
        ydk::YLeaf as_next_flood_index; //type: uint32
        ydk::YLeaf link_next_flood; //type: uint32
        ydk::YLeaf link_next_flood_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics : public ydk::Entity
{
    public:
        VrfStatistics();
        ~VrfStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats
        class SpfStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats
        class RawioStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats
        class PrefixPriorityStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats
        class VrfRibBatchStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats> prefix_priority_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats> protocol_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats> rawio_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats> spf_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats> vrf_rib_batch_stats;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats : public ydk::Entity
{
    public:
        PrefixPriorityStats();
        ~PrefixPriorityStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats : public ydk::Entity
{
    public:
        ProtocolStats();
        ~ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolStat; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat> > protocol_stat;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat : public ydk::Entity
{
    public:
        ProtocolStat();
        ~ProtocolStat();

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
        ydk::YLeaf total_in_packets; //type: uint64
        ydk::YLeaf hello_in_packets; //type: uint64
        ydk::YLeaf dbdes_in_packets; //type: uint64
        ydk::YLeaf dbdes_in_ls_as; //type: uint64
        ydk::YLeaf ls_req_in_packets; //type: uint64
        ydk::YLeaf ls_req_in_ls_as; //type: uint64
        ydk::YLeaf ls_upd_in_packets; //type: uint64
        ydk::YLeaf ls_upd_in_ignored; //type: uint64
        ydk::YLeaf ls_upd_in_ls_as; //type: uint64
        ydk::YLeaf ls_ack_in_packets; //type: uint64
        ydk::YLeaf ls_ack_in_ls_as; //type: uint64
        ydk::YLeaf total_out_packets; //type: uint64
        ydk::YLeaf hello_out_packets; //type: uint64
        ydk::YLeaf dbdes_out_packets; //type: uint64
        ydk::YLeaf dbdes_out_ls_as; //type: uint64
        ydk::YLeaf ls_req_out_packets; //type: uint64
        ydk::YLeaf ls_req_out_ls_as; //type: uint64
        ydk::YLeaf ls_upd_out_packets; //type: uint64
        ydk::YLeaf ls_upd_out_ls_as; //type: uint64
        ydk::YLeaf ls_ack_out_packets; //type: uint64
        ydk::YLeaf ls_ack_out_ls_as; //type: uint64
        ydk::YLeaf dropped_in_gs; //type: uint64
        ydk::YLeaf checksum_err; //type: uint64

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats : public ydk::Entity
{
    public:
        RawioStats();
        ~RawioStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf raw_conn_open; //type: uint64
        ydk::YLeaf raw_conn_close; //type: uint64
        ydk::YLeaf raw_conn_error; //type: uint64
        ydk::YLeaf in_packets; //type: uint64
        ydk::YLeaf in_bytes; //type: uint64
        ydk::YLeaf in_long_packets; //type: uint64
        ydk::YLeaf in_malloc_drops; //type: uint64
        ydk::YLeaf in_handle_drops; //type: uint64
        ydk::YLeaf in_short_drops; //type: uint64
        ydk::YLeaf in_error_drops; //type: uint64
        ydk::YLeaf in_ipsec_drops; //type: uint64
        ydk::YLeaf in_queue_drops; //type: uint64
        ydk::YLeaf out_packets; //type: uint64
        ydk::YLeaf out_bytes; //type: uint64
        ydk::YLeaf out_nofd_drops; //type: uint64
        ydk::YLeaf out_error_drops; //type: uint64
        ydk::YLeaf out_ipsec_drops; //type: uint64
        ydk::YLeaf out_nopak_drops; //type: uint64
        ydk::YLeaf out_pakapi_errors; //type: uint64
        ydk::YLeaf raw_conn_state; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats : public ydk::Entity
{
    public:
        SpfStats();
        ~SpfStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader
        class SpfRuntime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader> spf_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime> > spf_runtime;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader : public ydk::Entity
{
    public:
        SpfHeader();
        ~SpfHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_router_id; //type: string
        ydk::YLeaf header_sp_fs; //type: uint32
        class AreaSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary> > area_summary;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary : public ydk::Entity
{
    public:
        AreaSummary();
        ~AreaSummary();

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
        ydk::YLeaf sp_fs; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime : public ydk::Entity
{
    public:
        SpfRuntime();
        ~SpfRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf rib_add_routes; //type: uint32
        ydk::YLeaf rib_delete_routes; //type: uint32
        ydk::YLeaf reason_flags; //type: string
        ydk::YLeaf lsa_changes; //type: int16
        class GlobalTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime
        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa
        class AreaStat; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat> > area_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime> global_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat : public ydk::Entity
{
    public:
        AreaStat();
        ~AreaStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_stat_area_id; //type: uint32
        ydk::YLeafList spf_stat_lsa_type_count; //type: list of  uint32
        class SpfStatTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime> spf_stat_time;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime : public ydk::Entity
{
    public:
        SpfStatTime();
        ~SpfStatTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra; //type: uint32
        ydk::YLeaf intra_prefix; //type: uint32
        ydk::YLeaf intra_prefix_del; //type: uint32
        ydk::YLeaf inter_prefix; //type: uint32
        ydk::YLeaf inter_prefix_del; //type: uint32
        ydk::YLeaf external_prefix; //type: uint32
        ydk::YLeaf external_prefix_del; //type: uint32
        ydk::YLeaf rib_add; //type: uint32
        ydk::YLeaf rib_del; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime : public ydk::Entity
{
    public:
        GlobalTime();
        ~GlobalTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra; //type: uint32
        ydk::YLeaf intra_prefix; //type: uint32
        ydk::YLeaf intra_prefix_del; //type: uint32
        ydk::YLeaf inter_prefix; //type: uint32
        ydk::YLeaf inter_prefix_del; //type: uint32
        ydk::YLeaf external_prefix; //type: uint32
        ydk::YLeaf external_prefix_del; //type: uint32
        ydk::YLeaf rib_add; //type: uint32
        ydk::YLeaf rib_del; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa : public ydk::Entity
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

        ydk::YLeaf lsa_area_id; //type: uint32
        ydk::YLeaf lsa_advertising_router; //type: string
        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf lsa_flush; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats : public ydk::Entity
{
    public:
        VrfRibBatchStats();
        ~VrfRibBatchStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf batches_sent; //type: uint32
        ydk::YLeaf routes_sent; //type: uint32
        ydk::YLeaf routes_pending; //type: uint32
        ydk::YLeaf max_routes; //type: uint32
        ydk::YLeaf paths_sent; //type: uint32
        ydk::YLeaf paths_pending; //type: uint32
        ydk::YLeaf paths_add; //type: uint32
        ydk::YLeaf paths_add_errs; //type: uint32
        ydk::YLeaf paths_del; //type: uint32
        ydk::YLeaf paths_del_errs; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_OPER_4_ */

