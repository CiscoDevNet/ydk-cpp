#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_3_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr : public ydk::Entity
{
    public:
        IpSecAddr();
        ~IpSecAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary_addr; //type: string
        ydk::YLeaf secondary_prefix; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr


class Ospf::Processes::Process::Vrfs::Vrf::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DatabaseAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas
        class DatabaseSummaries; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries
        class DatabaseSummaryAs; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs
        class Lsas; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas
        class LsaSummaries; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas> database_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries> database_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs> database_summary_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas> lsas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries> lsa_summaries;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas : public ydk::Entity
{
    public:
        DatabaseAreas();
        ~DatabaseAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DatabaseArea; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea

        ydk::YList database_area;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea : public ydk::Entity
{
    public:
        DatabaseArea();
        ~DatabaseArea();

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
        class Lsas; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas
        class LsaSummaries; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas> lsas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries> lsa_summaries;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas : public ydk::Entity
{
    public:
        Lsas();
        ~Lsas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa

        ydk::YList lsa;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa : public ydk::Entity
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

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf ls_type; //type: OspfLs
        ydk::YLeaf ls_id; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf interface_name; //type: string
        class LsaHeader; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader
        class LsaDetailData; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData
        class LsaInternalData; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData> lsa_detail_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData> lsa_internal_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader : public ydk::Entity
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

        ydk::YLeaf ls_type; //type: Lsa
        ydk::YLeaf lsid; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf dn_age_lsa; //type: boolean
        ydk::YLeaf nsf; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData : public ydk::Entity
{
    public:
        LsaDetailData();
        ~LsaDetailData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_capable; //type: boolean
        ydk::YLeaf nssa_translation; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf dn_bit; //type: boolean
        ydk::YLeaf lsa_rate_limit_due_time; //type: uint32
        ydk::YLeaf lsadb_base_clock; //type: uint64
        ydk::YLeaf routing_bit; //type: boolean
        ydk::YLeaf advertising_router_reachable; //type: boolean
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf sum_origin; //type: uint16
        ydk::YLeaf ase_origin; //type: uint16
        ydk::YLeaf in_sync; //type: uint8
        ydk::YLeaf lsa_prefix_priority; //type: uint8
        ydk::YLeaf new_lsa_prefix_priority; //type: uint8
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        class LsaThrottleTimer; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer
        class LsaLastUpdatedTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime
        class LsadbBaseTimeStamp; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp
        class NotDelete; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer> lsa_throttle_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime> lsa_last_updated_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp> lsadb_base_time_stamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete> not_delete;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer : public ydk::Entity
{
    public:
        LsaThrottleTimer();
        ~LsaThrottleTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_location; //type: TimerTable
        ydk::YLeaf timer_type; //type: Timer
        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf last_inst_second_table_index; //type: uint8
        ydk::YLeaf last_inst_minute_table_index; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime : public ydk::Entity
{
    public:
        LsaLastUpdatedTime();
        ~LsaLastUpdatedTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp : public ydk::Entity
{
    public:
        LsadbBaseTimeStamp();
        ~LsadbBaseTimeStamp();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete : public ydk::Entity
{
    public:
        NotDelete();
        ~NotDelete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf no_delete; //type: boolean
        ydk::YLeaf neighbor_exchange; //type: boolean
        ydk::YLeaf routing_table; //type: boolean
        ydk::YLeaf acknowledgement; //type: boolean
        ydk::YLeaf maximum_age; //type: boolean
        ydk::YLeaf partial_spf; //type: boolean
        ydk::YLeaf flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf nsr_ack_pending; //type: boolean
        ydk::YLeaf sum_orig_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData : public ydk::Entity
{
    public:
        LsaInternalData();
        ~LsaInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal_lsa_type; //type: OspfInternalLsaTypes
        class RouterLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType
        class NetworkLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType
        class SummaryLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType
        class ExternalLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType
        class OpaqueLinkLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType
        class OpaqueMplsTeLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType
        class OpaqueGraceLsa; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa
        class OpaqueRouterInfoLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType
        class OpaqueEpLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType
        class OpaqueElLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType> summary_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType> opaque_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType> opaque_mpls_te_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa> opaque_grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType> opaque_router_info_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType> opaque_ep_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType> opaque_el_lsa_type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType : public ydk::Entity
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

        ydk::YLeaf router_asbr; //type: boolean
        ydk::YLeaf router_abr; //type: boolean
        ydk::YLeaf internal_lsa; //type: boolean
        class Link; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link
        class InternalLink; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink

        ydk::YList link;
        ydk::YList internal_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link : public ydk::Entity
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

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: string
        ydk::YLeaf link_type; //type: OspfLinkTypes
        ydk::YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos

        ydk::YList link_tos;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos : public ydk::Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_tos; //type: uint16
        ydk::YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink : public ydk::Entity
{
    public:
        InternalLink();
        ~InternalLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: string
        ydk::YLeaf link_type; //type: OspfLinkTypes
        ydk::YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos

        ydk::YList link_tos;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos : public ydk::Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_tos; //type: uint16
        ydk::YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType : public ydk::Entity
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

        ydk::YLeaf network_prefix_length; //type: uint32
        class NeighborRouter; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter

        ydk::YList neighbor_router;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter : public ydk::Entity
{
    public:
        NeighborRouter();
        ~NeighborRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType : public ydk::Entity
{
    public:
        SummaryLsaType();
        ~SummaryLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_prefix_length; //type: uint32
        ydk::YLeaf internal_sum_lsa; //type: boolean
        class SummaryLsaMetric; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric

        ydk::YList summary_lsa_metric;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric : public ydk::Entity
{
    public:
        SummaryLsaMetric();
        ~SummaryLsaMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType : public ydk::Entity
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

        ydk::YLeaf external_prefix_length; //type: uint32
        ydk::YLeaf internal_external_lsa; //type: boolean
        class ExternalTosMetric; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric

        ydk::YList external_tos_metric;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric : public ydk::Entity
{
    public:
        ExternalTosMetric();
        ~ExternalTosMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_metric; //type: uint32
        ydk::YLeaf external_metric_type; //type: ExMetric
        ydk::YLeaf external_tos; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType : public ydk::Entity
{
    public:
        OpaqueLinkLsaType();
        ~OpaqueLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType : public ydk::Entity
{
    public:
        OpaqueMplsTeLsaType();
        ~OpaqueMplsTeLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv

        ydk::YList tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: string
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv

        ydk::YList te_link_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa : public ydk::Entity
{
    public:
        OpaqueGraceLsa();
        ~OpaqueGraceLsa();

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
        ydk::YLeaf grace_reason; //type: OspfGrReason
        ydk::YLeaf ip_address; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType : public ydk::Entity
{
    public:
        OpaqueRouterInfoLsaType();
        ~OpaqueRouterInfoLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_rilsa_scope; //type: OspfLsaOpqRiScope
        ydk::YLeaf opaque_ri_interface_name; //type: string
        class OpaqueRitlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv

        ydk::YList opaque_ritlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv : public ydk::Entity
{
    public:
        OpaqueRitlv();
        ~OpaqueRitlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ritlv_internal_type; //type: OspfShOpqRiTlvTypes
        class UnknownTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv
        class RtrCapTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv
        class Pcedtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv
        class SrAlgoTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv
        class SrRangeTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv
        class NodeMsdtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv
        class Srlbtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv> unknown_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv> rtr_cap_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv> pcedtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv> sr_algo_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv> sr_range_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv> node_msdtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv> srlbtlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ri_gen_tlv_type; //type: uint16
        ydk::YLeaf ri_gen_tlv_length; //type: uint16
        ydk::YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv : public ydk::Entity
{
    public:
        RtrCapTlv();
        ~RtrCapTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_cap_tlv_length; //type: uint16
        ydk::YLeaf rtr_cap_graceful_restart; //type: boolean
        ydk::YLeaf rtr_cap_graceful_restart_helper; //type: boolean
        ydk::YLeaf rtr_cap_stub_rtr; //type: boolean
        ydk::YLeaf rtr_cap_area_te; //type: boolean
        ydk::YLeaf rtr_cap_p2plan; //type: boolean
        ydk::YLeaf rtr_cap_te_exp; //type: boolean
        ydk::YLeaf rtr_cap_all_bits; //type: uint32
        ydk::YLeaf rtr_cap_additional_info; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv : public ydk::Entity
{
    public:
        Pcedtlv();
        ~Pcedtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcedtlv_length; //type: uint16
        class PcedAddr; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr
        class PcedScope; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr> pced_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope> pced_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr : public ydk::Entity
{
    public:
        PcedAddr();
        ~PcedAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_addr_type; //type: OspfShOpqRiPceAddrTypes
        class PceAddrUnknownTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv
        class Ipv4pceAddr; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr
        class Ipv6pceAddr; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv> pce_addr_unknown_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr> ipv4pce_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr> ipv6pce_addr;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv : public ydk::Entity
{
    public:
        PceAddrUnknownTlv();
        ~PceAddrUnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ri_gen_tlv_type; //type: uint16
        ydk::YLeaf ri_gen_tlv_length; //type: uint16
        ydk::YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr : public ydk::Entity
{
    public:
        Ipv4pceAddr();
        ~Ipv4pceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pceipv4_addr; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr : public ydk::Entity
{
    public:
        Ipv6pceAddr();
        ~Ipv6pceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pceipv6_addr; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope : public ydk::Entity
{
    public:
        PcedScope();
        ~PcedScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lbit; //type: boolean
        ydk::YLeaf rbit; //type: boolean
        ydk::YLeaf rd_bit; //type: boolean
        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf sd_bit; //type: boolean
        ydk::YLeaf ybit; //type: boolean
        ydk::YLeaf pref_l; //type: uint8
        ydk::YLeaf pref_r; //type: uint8
        ydk::YLeaf pref_s; //type: uint8
        ydk::YLeaf pref_y; //type: uint8
        ydk::YLeaf all_scope_info_bits; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv : public ydk::Entity
{
    public:
        SrAlgoTlv();
        ~SrAlgoTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrAlgoValue; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue

        ydk::YList sr_algo_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue : public ydk::Entity
{
    public:
        SrAlgoValue();
        ~SrAlgoValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv : public ydk::Entity
{
    public:
        SrRangeTlv();
        ~SrRangeTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_range_length; //type: uint16
        ydk::YLeaf sr_range_size; //type: uint32
        class Sidtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv> sidtlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv : public ydk::Entity
{
    public:
        Sidtlv();
        ~Sidtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_sid_length; //type: uint16
        ydk::YLeaf sr_sid_value; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv : public ydk::Entity
{
    public:
        NodeMsdtlv();
        ~NodeMsdtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_msdtlv_length; //type: uint16
        class NodeMsdSubTypes; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes> node_msd_sub_types;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes : public ydk::Entity
{
    public:
        NodeMsdSubTypes();
        ~NodeMsdSubTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msd_sub_type; //type: uint8
        ydk::YLeaf msd_value; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv : public ydk::Entity
{
    public:
        Srlbtlv();
        ~Srlbtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlbtlv_length; //type: uint16
        ydk::YLeaf srlb_range_size; //type: uint32
        class Sidtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv> sidtlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv : public ydk::Entity
{
    public:
        Sidtlv();
        ~Sidtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_sid_length; //type: uint16
        ydk::YLeaf sr_sid_value; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType : public ydk::Entity
{
    public:
        OpaqueEpLsaType();
        ~OpaqueEpLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv

        ydk::YList tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: string
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv

        ydk::YList te_link_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType : public ydk::Entity
{
    public:
        OpaqueElLsaType();
        ~OpaqueElLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv

        ydk::YList tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: string
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv

        ydk::YList te_link_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries : public ydk::Entity
{
    public:
        LsaSummaries();
        ~LsaSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaSummary; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary

        ydk::YList lsa_summary;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary : public ydk::Entity
{
    public:
        LsaSummary();
        ~LsaSummary();

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
        ydk::YLeaf ls_type; //type: OspfLs
        ydk::YLeaf ls_id; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf link_count; //type: uint16
        class LsaHeader; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader> lsa_header;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader : public ydk::Entity
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

        ydk::YLeaf ls_type; //type: Lsa
        ydk::YLeaf lsid; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf dn_age_lsa; //type: boolean
        ydk::YLeaf nsf; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries : public ydk::Entity
{
    public:
        DatabaseSummaries();
        ~DatabaseSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DatabaseSummary; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary

        ydk::YList database_summary;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary : public ydk::Entity
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

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf dbase_sum_area_id_string; //type: string
        class AreaLsaCounter; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter

        ydk::YList area_lsa_counter;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter : public ydk::Entity
{
    public:
        AreaLsaCounter();
        ~AreaLsaCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: Lsa
        ydk::YLeaf lsa_count; //type: int32
        ydk::YLeaf lsa_delete_count; //type: int32
        ydk::YLeaf lsa_maxage_count; //type: int32
        ydk::YLeaf lsa_self_count; //type: int32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs : public ydk::Entity
{
    public:
        DatabaseSummaryAs();
        ~DatabaseSummaryAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsLsaCounter; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter

        ydk::YList as_lsa_counter;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs


class Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter : public ydk::Entity
{
    public:
        AsLsaCounter();
        ~AsLsaCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: Lsa
        ydk::YLeaf lsa_count; //type: int32
        ydk::YLeaf lsa_delete_count; //type: int32
        ydk::YLeaf lsa_maxage_count; //type: int32
        ydk::YLeaf lsa_self_count; //type: int32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas : public ydk::Entity
{
    public:
        Lsas();
        ~Lsas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa

        ydk::YList lsa;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa : public ydk::Entity
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

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf ls_type; //type: OspfLs
        ydk::YLeaf ls_id; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf interface_name; //type: string
        class LsaHeader; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader
        class LsaDetailData; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData
        class LsaInternalData; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData> lsa_detail_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData> lsa_internal_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader : public ydk::Entity
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

        ydk::YLeaf ls_type; //type: Lsa
        ydk::YLeaf lsid; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf dn_age_lsa; //type: boolean
        ydk::YLeaf nsf; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData : public ydk::Entity
{
    public:
        LsaDetailData();
        ~LsaDetailData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_capable; //type: boolean
        ydk::YLeaf nssa_translation; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf dn_bit; //type: boolean
        ydk::YLeaf lsa_rate_limit_due_time; //type: uint32
        ydk::YLeaf lsadb_base_clock; //type: uint64
        ydk::YLeaf routing_bit; //type: boolean
        ydk::YLeaf advertising_router_reachable; //type: boolean
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf sum_origin; //type: uint16
        ydk::YLeaf ase_origin; //type: uint16
        ydk::YLeaf in_sync; //type: uint8
        ydk::YLeaf lsa_prefix_priority; //type: uint8
        ydk::YLeaf new_lsa_prefix_priority; //type: uint8
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        class LsaThrottleTimer; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer
        class LsaLastUpdatedTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime
        class LsadbBaseTimeStamp; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp
        class NotDelete; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer> lsa_throttle_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime> lsa_last_updated_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp> lsadb_base_time_stamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete> not_delete;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer : public ydk::Entity
{
    public:
        LsaThrottleTimer();
        ~LsaThrottleTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_location; //type: TimerTable
        ydk::YLeaf timer_type; //type: Timer
        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf last_inst_second_table_index; //type: uint8
        ydk::YLeaf last_inst_minute_table_index; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime : public ydk::Entity
{
    public:
        LsaLastUpdatedTime();
        ~LsaLastUpdatedTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp : public ydk::Entity
{
    public:
        LsadbBaseTimeStamp();
        ~LsadbBaseTimeStamp();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete : public ydk::Entity
{
    public:
        NotDelete();
        ~NotDelete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf no_delete; //type: boolean
        ydk::YLeaf neighbor_exchange; //type: boolean
        ydk::YLeaf routing_table; //type: boolean
        ydk::YLeaf acknowledgement; //type: boolean
        ydk::YLeaf maximum_age; //type: boolean
        ydk::YLeaf partial_spf; //type: boolean
        ydk::YLeaf flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf nsr_ack_pending; //type: boolean
        ydk::YLeaf sum_orig_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData : public ydk::Entity
{
    public:
        LsaInternalData();
        ~LsaInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal_lsa_type; //type: OspfInternalLsaTypes
        class RouterLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType
        class NetworkLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType
        class SummaryLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType
        class ExternalLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType
        class OpaqueLinkLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType
        class OpaqueMplsTeLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType
        class OpaqueGraceLsa; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa
        class OpaqueRouterInfoLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType
        class OpaqueEpLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType
        class OpaqueElLsaType; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType> summary_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType> opaque_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType> opaque_mpls_te_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa> opaque_grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType> opaque_router_info_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType> opaque_ep_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType> opaque_el_lsa_type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType : public ydk::Entity
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

        ydk::YLeaf router_asbr; //type: boolean
        ydk::YLeaf router_abr; //type: boolean
        ydk::YLeaf internal_lsa; //type: boolean
        class Link; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link
        class InternalLink; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink

        ydk::YList link;
        ydk::YList internal_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link : public ydk::Entity
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

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: string
        ydk::YLeaf link_type; //type: OspfLinkTypes
        ydk::YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos

        ydk::YList link_tos;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos : public ydk::Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_tos; //type: uint16
        ydk::YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink : public ydk::Entity
{
    public:
        InternalLink();
        ~InternalLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: string
        ydk::YLeaf link_type; //type: OspfLinkTypes
        ydk::YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos

        ydk::YList link_tos;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos : public ydk::Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_tos; //type: uint16
        ydk::YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType : public ydk::Entity
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

        ydk::YLeaf network_prefix_length; //type: uint32
        class NeighborRouter; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter

        ydk::YList neighbor_router;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter : public ydk::Entity
{
    public:
        NeighborRouter();
        ~NeighborRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType : public ydk::Entity
{
    public:
        SummaryLsaType();
        ~SummaryLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_prefix_length; //type: uint32
        ydk::YLeaf internal_sum_lsa; //type: boolean
        class SummaryLsaMetric; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric

        ydk::YList summary_lsa_metric;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric : public ydk::Entity
{
    public:
        SummaryLsaMetric();
        ~SummaryLsaMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType : public ydk::Entity
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

        ydk::YLeaf external_prefix_length; //type: uint32
        ydk::YLeaf internal_external_lsa; //type: boolean
        class ExternalTosMetric; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric

        ydk::YList external_tos_metric;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric : public ydk::Entity
{
    public:
        ExternalTosMetric();
        ~ExternalTosMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_metric; //type: uint32
        ydk::YLeaf external_metric_type; //type: ExMetric
        ydk::YLeaf external_tos; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType : public ydk::Entity
{
    public:
        OpaqueLinkLsaType();
        ~OpaqueLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType : public ydk::Entity
{
    public:
        OpaqueMplsTeLsaType();
        ~OpaqueMplsTeLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv

        ydk::YList tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: string
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv

        ydk::YList te_link_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa : public ydk::Entity
{
    public:
        OpaqueGraceLsa();
        ~OpaqueGraceLsa();

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
        ydk::YLeaf grace_reason; //type: OspfGrReason
        ydk::YLeaf ip_address; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType : public ydk::Entity
{
    public:
        OpaqueRouterInfoLsaType();
        ~OpaqueRouterInfoLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_rilsa_scope; //type: OspfLsaOpqRiScope
        ydk::YLeaf opaque_ri_interface_name; //type: string
        class OpaqueRitlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv

        ydk::YList opaque_ritlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv : public ydk::Entity
{
    public:
        OpaqueRitlv();
        ~OpaqueRitlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ritlv_internal_type; //type: OspfShOpqRiTlvTypes
        class UnknownTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv
        class RtrCapTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv
        class Pcedtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv
        class SrAlgoTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv
        class SrRangeTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv
        class NodeMsdtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv
        class Srlbtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv> unknown_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv> rtr_cap_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv> pcedtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv> sr_algo_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv> sr_range_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv> node_msdtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv> srlbtlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ri_gen_tlv_type; //type: uint16
        ydk::YLeaf ri_gen_tlv_length; //type: uint16
        ydk::YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv : public ydk::Entity
{
    public:
        RtrCapTlv();
        ~RtrCapTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_cap_tlv_length; //type: uint16
        ydk::YLeaf rtr_cap_graceful_restart; //type: boolean
        ydk::YLeaf rtr_cap_graceful_restart_helper; //type: boolean
        ydk::YLeaf rtr_cap_stub_rtr; //type: boolean
        ydk::YLeaf rtr_cap_area_te; //type: boolean
        ydk::YLeaf rtr_cap_p2plan; //type: boolean
        ydk::YLeaf rtr_cap_te_exp; //type: boolean
        ydk::YLeaf rtr_cap_all_bits; //type: uint32
        ydk::YLeaf rtr_cap_additional_info; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv : public ydk::Entity
{
    public:
        Pcedtlv();
        ~Pcedtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcedtlv_length; //type: uint16
        class PcedAddr; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr
        class PcedScope; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr> pced_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope> pced_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr : public ydk::Entity
{
    public:
        PcedAddr();
        ~PcedAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_addr_type; //type: OspfShOpqRiPceAddrTypes
        class PceAddrUnknownTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv
        class Ipv4pceAddr; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr
        class Ipv6pceAddr; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv> pce_addr_unknown_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr> ipv4pce_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr> ipv6pce_addr;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv : public ydk::Entity
{
    public:
        PceAddrUnknownTlv();
        ~PceAddrUnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ri_gen_tlv_type; //type: uint16
        ydk::YLeaf ri_gen_tlv_length; //type: uint16
        ydk::YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr : public ydk::Entity
{
    public:
        Ipv4pceAddr();
        ~Ipv4pceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pceipv4_addr; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr : public ydk::Entity
{
    public:
        Ipv6pceAddr();
        ~Ipv6pceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pceipv6_addr; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope : public ydk::Entity
{
    public:
        PcedScope();
        ~PcedScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lbit; //type: boolean
        ydk::YLeaf rbit; //type: boolean
        ydk::YLeaf rd_bit; //type: boolean
        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf sd_bit; //type: boolean
        ydk::YLeaf ybit; //type: boolean
        ydk::YLeaf pref_l; //type: uint8
        ydk::YLeaf pref_r; //type: uint8
        ydk::YLeaf pref_s; //type: uint8
        ydk::YLeaf pref_y; //type: uint8
        ydk::YLeaf all_scope_info_bits; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv : public ydk::Entity
{
    public:
        SrAlgoTlv();
        ~SrAlgoTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrAlgoValue; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue

        ydk::YList sr_algo_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue : public ydk::Entity
{
    public:
        SrAlgoValue();
        ~SrAlgoValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv : public ydk::Entity
{
    public:
        SrRangeTlv();
        ~SrRangeTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_range_length; //type: uint16
        ydk::YLeaf sr_range_size; //type: uint32
        class Sidtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv> sidtlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv : public ydk::Entity
{
    public:
        Sidtlv();
        ~Sidtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_sid_length; //type: uint16
        ydk::YLeaf sr_sid_value; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv : public ydk::Entity
{
    public:
        NodeMsdtlv();
        ~NodeMsdtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_msdtlv_length; //type: uint16
        class NodeMsdSubTypes; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes> node_msd_sub_types;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes : public ydk::Entity
{
    public:
        NodeMsdSubTypes();
        ~NodeMsdSubTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msd_sub_type; //type: uint8
        ydk::YLeaf msd_value; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv : public ydk::Entity
{
    public:
        Srlbtlv();
        ~Srlbtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlbtlv_length; //type: uint16
        ydk::YLeaf srlb_range_size; //type: uint32
        class Sidtlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv> sidtlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv : public ydk::Entity
{
    public:
        Sidtlv();
        ~Sidtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_sid_length; //type: uint16
        ydk::YLeaf sr_sid_value; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType : public ydk::Entity
{
    public:
        OpaqueEpLsaType();
        ~OpaqueEpLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv

        ydk::YList tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: string
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv

        ydk::YList te_link_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType : public ydk::Entity
{
    public:
        OpaqueElLsaType();
        ~OpaqueElLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv

        ydk::YList tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: string
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv

        ydk::YList te_link_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries : public ydk::Entity
{
    public:
        LsaSummaries();
        ~LsaSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaSummary; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary

        ydk::YList lsa_summary;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries


class Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary : public ydk::Entity
{
    public:
        LsaSummary();
        ~LsaSummary();

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
        ydk::YLeaf ls_type; //type: OspfLs
        ydk::YLeaf ls_id; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf link_count; //type: uint16
        class LsaHeader; //type: Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader> lsa_header;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary


class Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader : public ydk::Entity
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

        ydk::YLeaf ls_type; //type: Lsa
        ydk::YLeaf lsid; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf dn_age_lsa; //type: boolean
        ydk::YLeaf nsf; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes : public ydk::Entity
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

        class SummaryPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix

        ydk::YList summary_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix : public ydk::Entity
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
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf summary_prefix; //type: string
        ydk::YLeaf summary_mask; //type: string
        ydk::YLeaf summary_metric; //type: uint32
        ydk::YLeaf summary_metric_type; //type: ExMetric
        ydk::YLeaf summary_tag; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics : public ydk::Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntries; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries> interface_stats_entries;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries : public ydk::Entity
{
    public:
        InterfaceStatsEntries();
        ~InterfaceStatsEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry

        ydk::YList interface_stats_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry : public ydk::Entity
{
    public:
        InterfaceStatsEntry();
        ~InterfaceStatsEntry();

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
        ydk::YLeaf handle; //type: string
        ydk::YLeaf if_name_str; //type: string
        class IfEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        ydk::YList if_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public ydk::Entity
{
    public:
        IfEntry();
        ~IfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf madj_intf; //type: boolean
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_id_str; //type: string
        class IfStat; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat

        ydk::YList if_stat;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat : public ydk::Entity
{
    public:
        IfStat();
        ~IfStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat


class Ospf::Processes::Process::Vrfs::Vrf::OspfSummary : public ydk::Entity
{
    public:
        OspfSummary();
        ~OspfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_num_nbrs; //type: uint32
        ydk::YLeaf sa_num_nbrs_up; //type: uint32
        ydk::YLeaf sa_num_intf; //type: uint32
        ydk::YLeaf sa_num_intf_up; //type: uint32
        ydk::YLeaf sa_num_vintf_up; //type: uint32
        ydk::YLeaf sa_num_slintf_up; //type: uint32
        ydk::YLeaf sa_num_areas; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_rtr; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_net; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_sum_net; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_sum_asb; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_ase; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_mospf; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_7ase; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_8_ignore; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_opq_link; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_opq_area; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_opq_as; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::OspfSummary


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute : public ydk::Entity
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

        class Topologies; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies> topologies;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies : public ydk::Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topology; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology

        ydk::YList topology;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

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
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf ipfrr_topo_area_id; //type: string
        ydk::YLeaf ipfrr_router_id; //type: string
        ydk::YLeaf ipfrr_area_revision; //type: uint32
        class IpfrrTopo; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo

        ydk::YList ipfrr_topo;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo : public ydk::Entity
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
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf distance_reverse; //type: uint32
        ydk::YLeaf type4; //type: boolean
        ydk::YLeaf revision; //type: uint32
        ydk::YLeaf neighbor_sourced; //type: boolean
        ydk::YLeaf dr; //type: boolean
        ydk::YLeaf poison; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo


class Ospf::Processes::Process::Srms : public ydk::Entity
{
    public:
        Srms();
        ~Srms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Ospf::Processes::Process::Srms::Policy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy> policy;
        
}; // Ospf::Processes::Process::Srms


class Ospf::Processes::Process::Srms::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyIpv4; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4> policy_ipv4;
        
}; // Ospf::Processes::Process::Srms::Policy


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4 : public ydk::Entity
{
    public:
        PolicyIpv4();
        ~PolicyIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyIpv4Backup; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup
        class PolicyIpv4Active; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup> policy_ipv4_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active> policy_ipv4_active;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup : public ydk::Entity
{
    public:
        PolicyIpv4Backup();
        ~PolicyIpv4Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyMi; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi

        ydk::YList policy_mi;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr> addr;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active : public ydk::Entity
{
    public:
        PolicyIpv4Active();
        ~PolicyIpv4Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyMi; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi

        ydk::YList policy_mi;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr> addr;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr


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

        class FloodListTable; //type: Ospf::Processes::Process::DefaultVrf::FloodListTable
        class SegmentRouting; //type: Ospf::Processes::Process::DefaultVrf::SegmentRouting
        class MplsTe; //type: Ospf::Processes::Process::DefaultVrf::MplsTe
        class Statistics; //type: Ospf::Processes::Process::DefaultVrf::Statistics
        class AdjacencyInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation
        class RouteInformation; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation
        class InterfaceInformation; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation
        class BorderRouters; //type: Ospf::Processes::Process::DefaultVrf::BorderRouters
        class ProcessInformation; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation
        class Areas; //type: Ospf::Processes::Process::DefaultVrf::Areas
        class Database; //type: Ospf::Processes::Process::DefaultVrf::Database
        class SummaryPrefixes; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes
        class AreaStatistics; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics
        class OspfSummary; //type: Ospf::Processes::Process::DefaultVrf::OspfSummary
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FloodListTable> flood_list_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe> mpls_te;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation> adjacency_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation> route_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation> interface_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::BorderRouters> border_routers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation> process_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas> areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics> area_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::OspfSummary> ospf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FastReroute> fast_reroute;
        
}; // Ospf::Processes::Process::DefaultVrf


class Ospf::Processes::Process::DefaultVrf::FloodListTable : public ydk::Entity
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

        class Flood; //type: Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood

        ydk::YList flood;
        
}; // Ospf::Processes::Process::DefaultVrf::FloodListTable


class Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood : public ydk::Entity
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
        ydk::YLeaf flood_interface_name; //type: string
        ydk::YLeaf flood_pacing_timer; //type: uint32
        ydk::YLeaf flood_lsa_count; //type: uint32
        class AreaFlood; //type: Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood
        class AsFlood; //type: Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood

        ydk::YList area_flood;
        ydk::YList as_flood;
        
}; // Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood


class Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood : public ydk::Entity
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

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood


class Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood : public ydk::Entity
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

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood


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

        class SrEndpointPolicies; //type: Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies> sr_endpoint_policies;
        
}; // Ospf::Processes::Process::DefaultVrf::SegmentRouting


class Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies : public ydk::Entity
{
    public:
        SrEndpointPolicies();
        ~SrEndpointPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrEndpointPolicy; //type: Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy

        ydk::YList sr_endpoint_policy;
        
}; // Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies


class Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy : public ydk::Entity
{
    public:
        SrEndpointPolicy();
        ~SrEndpointPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf endpoint_ip; //type: string
        ydk::YLeaf sr_endpoint; //type: string
        ydk::YLeaf sr_router_id; //type: uint32
        ydk::YLeaf sr_area_id_string; //type: string
        ydk::YLeaf sr_policy_count; //type: uint32
        ydk::YLeaf sr_valid_policy_count; //type: uint32
        ydk::YLeaf sr_endp_state_is_valid; //type: boolean
        ydk::YLeaf sr_endp_state_is_stale; //type: boolean
        ydk::YLeaf sr_endp_state_is_unres; //type: boolean
        ydk::YLeaf sr_endp_resolution_fail_reason; //type: OspfSrEndpResFailReason
        class SrPolicy; //type: Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy

        ydk::YList sr_policy;
        
}; // Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy


class Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

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
        ydk::YLeaf policy_if_handle; //type: string
        ydk::YLeaf policy_metric; //type: int32
        ydk::YLeaf policy_metric_mode; //type: OspfSrPolMetricMode
        ydk::YLeaf policy_is_sspf; //type: boolean
        ydk::YLeaf policy_is_autoroute_include; //type: boolean
        ydk::YLeaf policy_state_is_valid; //type: boolean
        ydk::YLeaf policy_state_is_stale; //type: boolean
        ydk::YLeaf policy_state_is_ifh_error; //type: boolean
        ydk::YLeaf policy_state_is_idb_pending; //type: boolean
        ydk::YLeaf policy_update_timestamp; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy


class Ospf::Processes::Process::DefaultVrf::MplsTe : public ydk::Entity
{
    public:
        MplsTe();
        ~MplsTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsTeLinks; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks
        class MplsTeFragments; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks> mpls_te_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments> mpls_te_fragments;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks : public ydk::Entity
{
    public:
        MplsTeLinks();
        ~MplsTeLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsTeLink; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink

        ydk::YList mpls_te_link;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink : public ydk::Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

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
        ydk::YLeaf mpls_te_router_id; //type: string
        ydk::YLeaf mpls_te_enabled; //type: boolean
        ydk::YLeaf mpls_te_initialized; //type: boolean
        ydk::YLeaf mpls_te_area_id; //type: string
        ydk::YLeaf mpls_te_area_instance; //type: uint32
        ydk::YLeaf mpls_te_router_address; //type: string
        ydk::YLeaf mpls_te_next_fragment_id; //type: uint32
        ydk::YLeaf spacious_fragment; //type: boolean
        class MplsTeLink_; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_
        class MplsTeFragment; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment

        ydk::YList mpls_te_link;
        ydk::YList mpls_te_fragment;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_ : public ydk::Entity
{
    public:
        MplsTeLink_();
        ~MplsTeLink_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_link; //type: boolean
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf mpls_link_instance; //type: uint32
        ydk::YLeaf mpls_link_type; //type: LinkSubnet
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bw; //type: uint32
        ydk::YLeaf maximum_link_reservable_bw; //type: uint32
        ydk::YLeaf maximum_link_sub_reservable_bw; //type: uint32
        ydk::YLeaf priority_count; //type: int32
        ydk::YLeaf affinity; //type: uint32
        ydk::YLeaf output_interface_id; //type: uint32
        ydk::YLeaf input_interface_id; //type: uint32
        ydk::YLeaf dste_in_use; //type: boolean
        ydk::YLeaf dste_allocation_model_id; //type: IgpteLibBwModel
        ydk::YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability> link_sw_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList> extended_admin_group_list;
        ydk::YList mplste_link_opt_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority : public ydk::Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority : public ydk::Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_3_ */

