#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_OPER_3_
#define _CISCO_IOS_XR_IPV6_OSPFV3_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_oper_0.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType : public ydk::Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_router_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable : public ydk::Entity
{
    public:
        FloodListTable();
        ~FloodListTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood> > flood;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood : public ydk::Entity
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
        class LinkFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood
        class AreaFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood
        class AsFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood> > as_flood;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood> > link_flood;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable : public ydk::Entity
{
    public:
        InterfaceBriefTable();
        ~InterfaceBriefTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceBrief; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief> > interface_brief;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable : public ydk::Entity
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

        class Interface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface> > interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface : public ydk::Entity
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
        class ActiveInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface
        class InterfaceBfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd
        class InterfaceNeighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface> active_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd> interface_bfd;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor> > interface_neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable : public ydk::Entity
{
    public:
        NeighborDetailTable();
        ~NeighborDetailTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail> > neighbor_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail : public ydk::Entity
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
        class NeighborDetail_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_> neighbor_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_ : public ydk::Entity
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
        class NeighborRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission> neighbor_retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable : public ydk::Entity
{
    public:
        NeighborTable();
        ~NeighborTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor> > neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor : public ydk::Entity
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
        class NeighborDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail> neighbor_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail : public ydk::Entity
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
        class NeighborRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission> neighbor_retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable : public ydk::Entity
{
    public:
        RequestListTable();
        ~RequestListTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request> > request;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request : public ydk::Entity
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
        class Request_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_> > request;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_ : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable : public ydk::Entity
{
    public:
        RetransmissionListTable();
        ~RetransmissionListTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Retransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission> > retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission : public ydk::Entity
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
        class RetransmissionvirtualLinkDb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb
        class RetransmissionAreaDb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb> > retransmissionvirtual_link_db;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb


class Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums : public ydk::Entity
{
    public:
        BadChecksums();
        ~BadChecksums();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BadChecksum; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum> > bad_checksum;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums


class Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum : public ydk::Entity
{
    public:
        BadChecksum();
        ~BadChecksum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_number; //type: uint32
        ydk::YLeaf received_checksum; //type: uint16
        ydk::YLeaf computed_checksum; //type: uint16
        ydk::YLeaf received_data; //type: string
        class Timestamp; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp> timestamp;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum


class Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp : public ydk::Entity
{
    public:
        Timestamp();
        ~Timestamp();

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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums::BadChecksum::Timestamp


class Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters : public ydk::Entity
{
    public:
        BorderRouters();
        ~BorderRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BorderRouter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter> > border_router;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters


class Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter : public ydk::Entity
{
    public:
        BorderRouter();
        ~BorderRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf border_router_id; //type: string
        class BorderRouterPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath> > border_router_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter


class Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath : public ydk::Entity
{
    public:
        BorderRouterPath();
        ~BorderRouterPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_intra_area_router; //type: boolean
        ydk::YLeaf border_router_route_metric; //type: uint32
        ydk::YLeaf border_router_next_hop; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf border_router_type; //type: Ospfv3BorderRoute
        ydk::YLeaf border_router_area_id; //type: string
        ydk::YLeaf spf_version; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes : public ydk::Entity
{
    public:
        ConnectedRoutes();
        ~ConnectedRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectedRoute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute> > connected_route;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute : public ydk::Entity
{
    public:
        ConnectedRoute();
        ~ConnectedRoute();

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
        class RouteTopology; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology
        class RoutePath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath> > route_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology> route_topology;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath : public ydk::Entity
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
        class RouteBackupPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath> route_backup_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable : public ydk::Entity
{
    public:
        DatabaseSummaryTable();
        ~DatabaseSummaryTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DatabaseSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary> database_summary;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary : public ydk::Entity
{
    public:
        DatabaseSummary();
        ~DatabaseSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_router_id; //type: string
        ydk::YLeaf is_opaque_database_capable; //type: boolean
        class DatabaseCounters; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters
        class AreaDatabase; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase> > area_database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters> database_counters;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase : public ydk::Entity
{
    public:
        AreaDatabase();
        ~AreaDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_area_id; //type: string
        class AreaDatabaseSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary> area_database_summary;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary : public ydk::Entity
{
    public:
        AreaDatabaseSummary();
        ~AreaDatabaseSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList lsa; //type: list of  uint32
        ydk::YLeafList deleted_lsa; //type: list of  uint32
        ydk::YLeafList max_age_lsa; //type: list of  uint32
        ydk::YLeafList lsa_checksum; //type: list of  uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters : public ydk::Entity
{
    public:
        DatabaseCounters();
        ~DatabaseCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList lsa; //type: list of  uint32
        ydk::YLeafList deleted_lsa; //type: list of  uint32
        ydk::YLeafList max_age_lsa; //type: list of  uint32
        ydk::YLeafList lsa_checksum; //type: list of  uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable : public ydk::Entity
{
    public:
        DatabaseTable();
        ~DatabaseTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable
        class LsaInternalTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable> lsa_internal_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable> lsa_table;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable : public ydk::Entity
{
    public:
        LsaInternalTable();
        ~LsaInternalTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa : public ydk::Entity
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

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf ls_type; //type: Ospfv3Lsa
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf ls_id; //type: int32
        ydk::YLeaf interface_name; //type: string
        class LsaInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo> lsa_info;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo : public ydk::Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypes
        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType : public ydk::Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa : public ydk::Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grace_period; //type: uint32
        ydk::YLeaf grace_reason; //type: Ospfv3GracefulRestartReason
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public ydk::Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

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
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType : public ydk::Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_router_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType : public ydk::Entity
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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable : public ydk::Entity
{
    public:
        LsaTable();
        ~LsaTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa : public ydk::Entity
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

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf ls_type; //type: Ospfv3Lsa
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf ls_id; //type: int32
        ydk::YLeaf interface_name; //type: string
        class LsaInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo> lsa_info;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo : public ydk::Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypes
        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType : public ydk::Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

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
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa : public ydk::Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grace_period; //type: uint32
        ydk::YLeaf grace_reason; //type: Ospfv3GracefulRestartReason
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public ydk::Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

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
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType : public ydk::Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_router_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public ydk::Entity
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

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_OPER_3_ */

