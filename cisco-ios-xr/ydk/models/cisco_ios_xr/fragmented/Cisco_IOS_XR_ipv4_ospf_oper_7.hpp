#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_7_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_6.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq : public ydk::Entity
{
    public:
        Internalwq();
        ~Internalwq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wq_thread_active; //type: boolean
        ydk::YLeaf wq_dqtime; //type: uint64
        ydk::YLeaf wqe_qtime; //type: uint64
        ydk::YLeaf wq_len_cur; //type: int32
        ydk::YLeaf wq_len_max; //type: int32
        ydk::YLeaf wq_total_queued; //type: uint32
        ydk::YLeaf wq_total_dequeued; //type: uint32
        ydk::YLeaf rib_version; //type: uint32
        ydk::YLeaf rib_pkts_sent; //type: uint32
        ydk::YLeaf rib_signals; //type: uint32
        ydk::YLeaf rib_send_errs; //type: uint32
        ydk::YLeaf rib_queue_errs; //type: uint32
        ydk::YLeaf rib_pfx_limit_errs; //type: uint32
        ydk::YLeaf rib_dequeue_errs; //type: uint32
        ydk::YLeaf rib_empty_batches; //type: uint32
        ydk::YLeaf rib_drop_before; //type: uint32
        ydk::YLeaf rib_drop_after; //type: uint32
        ydk::YLeaf rib_drop_conn; //type: uint32
        ydk::YLeaf rib_table_not_created; //type: uint32
        ydk::YLeaf priority_level; //type: string
        ydk::YLeaf rib_base_clock; //type: uint64
        class RibBaseTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime> rib_base_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime : public ydk::Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue : public ydk::Entity
{
    public:
        Ribqueue();
        ~Ribqueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wq_thread_active; //type: boolean
        ydk::YLeaf wq_dqtime; //type: uint64
        ydk::YLeaf wqe_qtime; //type: uint64
        ydk::YLeaf wq_len_cur; //type: int32
        ydk::YLeaf wq_len_max; //type: int32
        ydk::YLeaf wq_total_queued; //type: uint32
        ydk::YLeaf wq_total_dequeued; //type: uint32
        ydk::YLeaf rib_version; //type: uint32
        ydk::YLeaf rib_pkts_sent; //type: uint32
        ydk::YLeaf rib_signals; //type: uint32
        ydk::YLeaf rib_send_errs; //type: uint32
        ydk::YLeaf rib_queue_errs; //type: uint32
        ydk::YLeaf rib_pfx_limit_errs; //type: uint32
        ydk::YLeaf rib_dequeue_errs; //type: uint32
        ydk::YLeaf rib_empty_batches; //type: uint32
        ydk::YLeaf rib_drop_before; //type: uint32
        ydk::YLeaf rib_drop_after; //type: uint32
        ydk::YLeaf rib_drop_conn; //type: uint32
        ydk::YLeaf rib_table_not_created; //type: uint32
        ydk::YLeaf priority_level; //type: string
        ydk::YLeaf rib_base_clock; //type: uint64
        class RibBaseTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime> rib_base_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime : public ydk::Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats : public ydk::Entity
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

        class SpfHeader; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader
        class OsRuntime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime
        class OsSumRuntime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime
        class OsExRuntime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime
        class Runtime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime> > os_ex_runtime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime> > os_runtime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime> > os_sum_runtime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime> > runtime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader> spf_header;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime : public ydk::Entity
{
    public:
        OsExRuntime();
        ~OsExRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sp_adv_rtr_id; //type: uint32
        ydk::YLeaf sp_dest_count; //type: uint32
        ydk::YLeaf sp_dest_addr; //type: uint32
        class SpStartTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime
        class SpDuration; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration> sp_duration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime> sp_start_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration : public ydk::Entity
{
    public:
        SpDuration();
        ~SpDuration();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime : public ydk::Entity
{
    public:
        SpStartTime();
        ~SpStartTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime : public ydk::Entity
{
    public:
        OsRuntime();
        ~OsRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_area_id_str; //type: string
        ydk::YLeaf si_change_flags; //type: uint16
        class SiStartTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime
        class SiDuration; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration> si_duration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime> si_start_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration : public ydk::Entity
{
    public:
        SiDuration();
        ~SiDuration();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime : public ydk::Entity
{
    public:
        SiStartTime();
        ~SiStartTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime : public ydk::Entity
{
    public:
        OsSumRuntime();
        ~OsSumRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sp_adv_rtr_id; //type: uint32
        ydk::YLeaf sp_dest_count; //type: uint32
        ydk::YLeaf sp_dest_addr; //type: uint32
        class SpStartTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime
        class SpDuration; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration> sp_duration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime> sp_start_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration : public ydk::Entity
{
    public:
        SpDuration();
        ~SpDuration();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime : public ydk::Entity
{
    public:
        SpStartTime();
        ~SpStartTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime : public ydk::Entity
{
    public:
        Runtime();
        ~Runtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_start_time; //type: uint32
        ydk::YLeaf lsa_change_cnt; //type: int16
        class GblSpfTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime
        class LsaInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo
        class AreaStat; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat> > area_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime> gbl_spf_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo> > lsa_info;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat : public ydk::Entity
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

        ydk::YLeaf area_id; //type: uint32
        class SpfTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime
        class LsaTypeCnt; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt> > lsa_type_cnt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime> spf_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt : public ydk::Entity
{
    public:
        LsaTypeCnt();
        ~LsaTypeCnt();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime : public ydk::Entity
{
    public:
        SpfTime();
        ~SpfTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_dijkstra; //type: uint32
        ydk::YLeaf spf_intra_prefix; //type: uint32
        ydk::YLeaf spf_intra_prefix_del; //type: uint32
        ydk::YLeaf spf_inter_prefix; //type: uint32
        ydk::YLeaf spf_inter_prefix_del; //type: uint32
        ydk::YLeaf spf_ext_prefix; //type: uint32
        ydk::YLeaf spf_ext_prefix_del; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime : public ydk::Entity
{
    public:
        GblSpfTime();
        ~GblSpfTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_dijkstra; //type: uint32
        ydk::YLeaf spf_intra_prefix; //type: uint32
        ydk::YLeaf spf_intra_prefix_del; //type: uint32
        ydk::YLeaf spf_inter_prefix; //type: uint32
        ydk::YLeaf spf_inter_prefix_del; //type: uint32
        ydk::YLeaf spf_ext_prefix; //type: uint32
        ydk::YLeaf spf_ext_prefix_del; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo : public ydk::Entity
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

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf adv_rtr; //type: string
        ydk::YLeaf id; //type: string
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf flush; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader : public ydk::Entity
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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf spf_count; //type: uint32
        class AreaSumm; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm> > area_summ;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm : public ydk::Entity
{
    public:
        AreaSumm();
        ~AreaSumm();

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
        ydk::YLeaf spf_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats : public ydk::Entity
{
    public:
        TeStats();
        ~TeStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_connected; //type: boolean
        ydk::YLeaf control_disconnects; //type: uint32
        ydk::YLeaf te_disconnects; //type: uint32
        ydk::YLeaf adj_gets; //type: uint32
        ydk::YLeaf link_floods; //type: uint32
        ydk::YLeaf link_fragment_floods; //type: uint32
        ydk::YLeaf lsp_gets; //type: uint32
        ydk::YLeaf tunnel_announces; //type: uint32
        ydk::YLeaf total_tunnels; //type: uint32
        ydk::YLeaf control_batch_reads; //type: uint32
        ydk::YLeaf control_batch_writes; //type: uint32
        ydk::YLeaf link_batch_reads; //type: uint32
        ydk::YLeaf link_batch_writes; //type: uint32
        ydk::YLeaf adj_changes; //type: uint32
        ydk::YLeaf fragment_deletes; //type: uint32
        ydk::YLeaf fragment_announces; //type: uint32
        ydk::YLeaf data_trans_completes; //type: uint32
        ydk::YLeaf pce_listen; //type: uint32
        ydk::YLeaf pce_stoplisten; //type: uint32
        ydk::YLeaf pce_flood; //type: uint32
        ydk::YLeaf pce_get; //type: uint32
        ydk::YLeaf pce_br_lookup; //type: uint32
        ydk::YLeaf pce_br_lkup_num_dests; //type: uint32
        ydk::YLeaf pce_br_resp_fails; //type: uint32
        ydk::YLeaf pce_node_announce_batches; //type: uint32
        ydk::YLeaf pce_node_delete_batches; //type: uint32
        ydk::YLeaf pce_num_node_announce; //type: uint32
        ydk::YLeaf pce_num_node_delete; //type: uint32
        ydk::YLeaf pce_node_send_fails; //type: uint32
        ydk::YLeaf te_sr_path_reg_idt_recvd; //type: boolean
        ydk::YLeaf te_sr_idt_sent; //type: boolean
        ydk::YLeaf sr_num_area_enabled; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;
        
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


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_7_ */

