#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_1_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime> si_start_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration> si_duration;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime> sp_start_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration> sp_duration;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime> sp_start_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration> sp_duration;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime> gbl_spf_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo> > lsa_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat> > area_stat;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime> spf_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt> > lsa_type_cnt;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat


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


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats : public ydk::Entity
{
    public:
        RibBatchStats();
        ~RibBatchStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PriorityBatch; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch> > priority_batch;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch : public ydk::Entity
{
    public:
        PriorityBatch();
        ~PriorityBatch();

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
        ydk::YLeaf lfas_pending; //type: uint32
        ydk::YLeaf lfas_add; //type: uint32
        ydk::YLeaf lfas_del; //type: uint32
        ydk::YLeaf lfas_sent; //type: uint32
        ydk::YLeaf priority_level; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats : public ydk::Entity
{
    public:
        IssuStats();
        ~IssuStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_rev; //type: int32
        ydk::YLeaf nsr_fsm_state; //type: int32
        ydk::YLeaf nsr_version; //type: uint32
        ydk::YLeaf nsr_nodeid; //type: uint32
        ydk::YLeaf nsr_peer_version; //type: uint32
        ydk::YLeaf nsr_peer_nodeid; //type: uint32
        ydk::YLeaf nsr_mtu; //type: uint32
        ydk::YLeaf nsr_nbr_qad_qid; //type: uint32
        ydk::YLeaf nsr_lsa_qad_qid; //type: uint32
        ydk::YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_nbr_seq_no; //type: uint32
        ydk::YLeaf nsr_intf_seq_no; //type: uint32
        ydk::YLeaf nsr_tmr_quant; //type: int32
        ydk::YLeaf nsr_conn_to_active_attempts; //type: uint64
        ydk::YLeaf nsr_conn_to_active_fails; //type: uint64
        ydk::YLeaf nsr_conn_to_active_opens; //type: uint64
        ydk::YLeaf nsr_conn_to_active_closes; //type: uint64
        ydk::YLeaf nsr_conn_to_active_errors; //type: uint64
        class NsrThdSched; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched
        class NsrRtrThdSched; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched> nsr_thd_sched;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched : public ydk::Entity
{
    public:
        NsrThdSched();
        ~NsrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: uint32
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched : public ydk::Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: uint32
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats : public ydk::Entity
{
    public:
        RibThreadStats();
        ~RibThreadStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Internalwq; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq
        class Ribqueue; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq> internalwq;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue> > ribqueue;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats


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


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats : public ydk::Entity
{
    public:
        NsrPlStats();
        ~NsrPlStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NcdPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri> > ncd_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri : public ydk::Entity
{
    public:
        NcdPri();
        ~NcdPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NumSent; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent
        class NumRecv; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv
        class NumSentDrop; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop
        class NumRecvDrop; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent> > num_sent;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv> > num_recv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop> > num_sent_drop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop> > num_recv_drop;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent : public ydk::Entity
{
    public:
        NumSent();
        ~NumSent();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv : public ydk::Entity
{
    public:
        NumRecv();
        ~NumRecv();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop : public ydk::Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPlSendDropArray; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray> > nsr_pl_send_drop_array;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray : public ydk::Entity
{
    public:
        NsrPlSendDropArray();
        ~NsrPlSendDropArray();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop : public ydk::Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPlRecvDropArray; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray> > nsr_pl_recv_drop_array;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray : public ydk::Entity
{
    public:
        NsrPlRecvDropArray();
        ~NsrPlRecvDropArray();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats : public ydk::Entity
{
    public:
        NsrStats();
        ~NsrStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_rev; //type: int32
        ydk::YLeaf nsr_fsm_state; //type: int32
        ydk::YLeaf nsr_version; //type: uint32
        ydk::YLeaf nsr_nodeid; //type: uint32
        ydk::YLeaf nsr_peer_version; //type: uint32
        ydk::YLeaf nsr_peer_nodeid; //type: uint32
        ydk::YLeaf nsr_mtu; //type: uint32
        ydk::YLeaf nsr_nbr_qad_qid; //type: uint32
        ydk::YLeaf nsr_lsa_qad_qid; //type: uint32
        ydk::YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_nbr_seq_no; //type: uint32
        ydk::YLeaf nsr_intf_seq_no; //type: uint32
        ydk::YLeaf nsr_tmr_quant; //type: int32
        ydk::YLeaf nsr_conn_to_active_attempts; //type: uint64
        ydk::YLeaf nsr_conn_to_active_fails; //type: uint64
        ydk::YLeaf nsr_conn_to_active_opens; //type: uint64
        ydk::YLeaf nsr_conn_to_active_closes; //type: uint64
        ydk::YLeaf nsr_conn_to_active_errors; //type: uint64
        class NsrThdSched; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched
        class NsrRtrThdSched; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched> nsr_thd_sched;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched : public ydk::Entity
{
    public:
        NsrThdSched();
        ~NsrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: uint32
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched : public ydk::Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: uint32
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats : public ydk::Entity
{
    public:
        FrrStats();
        ~FrrStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fs_paths; //type: uint32
        ydk::YLeaf fs_paths_eligible; //type: uint32
        ydk::YLeaf fs_paths_protected; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats


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


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats : public ydk::Entity
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

        ydk::YLeaf inputs; //type: uint32
        ydk::YLeaf input_hello; //type: uint32
        ydk::YLeaf input_dbdes; //type: uint32
        ydk::YLeaf input_dbdes_lsa; //type: uint32
        ydk::YLeaf input_req; //type: uint32
        ydk::YLeaf input_req_lsa; //type: uint32
        ydk::YLeaf input_lsupd; //type: uint32
        ydk::YLeaf input_lsupd_lsa; //type: uint32
        ydk::YLeaf input_ack; //type: uint32
        ydk::YLeaf input_ack_lsa; //type: uint32
        ydk::YLeaf checksumerr; //type: uint32
        ydk::YLeaf input_autherr; //type: uint32
        ydk::YLeaf outputs; //type: uint32
        ydk::YLeaf output_hello; //type: uint32
        ydk::YLeaf output_dbdes; //type: uint32
        ydk::YLeaf output_dbdes_lsa; //type: uint32
        ydk::YLeaf output_req; //type: uint32
        ydk::YLeaf output_req_lsa; //type: uint32
        ydk::YLeaf output_lsupd; //type: uint32
        ydk::YLeaf output_lsupd_lsa; //type: uint32
        ydk::YLeaf output_ack; //type: uint32
        ydk::YLeaf output_ack_lsa; //type: uint32
        ydk::YLeaf output_autherr; //type: uint32
        ydk::YLeaf h_input_dbdes; //type: uint32
        ydk::YLeaf h_input_req; //type: uint32
        ydk::YLeaf h_input_lsupd; //type: uint32
        ydk::YLeaf h_input_ack; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats : public ydk::Entity
{
    public:
        RawIoStats();
        ~RawIoStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_sent; //type: uint32
        ydk::YLeaf out_bytes_sent; //type: uint32
        ydk::YLeaf out_no_conn_discarded; //type: uint32
        ydk::YLeaf out_null_src_discarded; //type: uint32
        ydk::YLeaf out_no_pak_discarded; //type: uint32
        ydk::YLeaf out_ipv4_hdr_err_discarded; //type: uint32
        ydk::YLeaf out_send_pak_err_discarded; //type: uint32
        ydk::YLeaf in_rcv; //type: uint32
        ydk::YLeaf in_bytes_rcv; //type: uint32
        ydk::YLeaf in_short_msg_discarded; //type: uint32
        ydk::YLeaf in_no_mem_discarded; //type: uint32
        ydk::YLeaf in_raw_event; //type: uint32
        ydk::YLeaf disconnects; //type: uint32
        ydk::YLeaf in_standby_discarded; //type: uint32
        ydk::YLeaf nsr_not_ready_discarded; //type: uint32
        ydk::YLeaf raw_connected; //type: boolean
        ydk::YLeaf sl_raw_connected; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries : public ydk::Entity
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

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry : public ydk::Entity
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
        class IfEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public ydk::Entity
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
        class IfStat; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat> > if_stat;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation : public ydk::Entity
{
    public:
        AdjacencyInformation();
        ~AdjacencyInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors
        class Requests; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests
        class Retransmissions; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions
        class NeighborDetails; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions> retransmissions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails> neighbor_details;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor> > neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests : public ydk::Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request> > request;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request : public ydk::Entity
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
        ydk::YLeaf request_neighbor_id; //type: string
        ydk::YLeaf request_neighbor_address; //type: string
        ydk::YLeaf request_interface_name; //type: string
        class Request_; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_> > request;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_ : public ydk::Entity
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

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions : public ydk::Entity
{
    public:
        Retransmissions();
        ~Retransmissions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Retransmission; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission> > retransmission;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission : public ydk::Entity
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
        ydk::YLeaf retransmission_neighbor_id; //type: string
        ydk::YLeaf retransmission_neighbor_ip_address; //type: string
        ydk::YLeaf retransmission_interface_name; //type: string
        ydk::YLeaf retransmission_timer; //type: uint32
        ydk::YLeaf retransmission_count; //type: uint32
        class RetransmissionAreaDb; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb : public ydk::Entity
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

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb : public ydk::Entity
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

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails : public ydk::Entity
{
    public:
        NeighborDetails();
        ~NeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborDetail; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail> > neighbor_detail;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail : public ydk::Entity
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
        ydk::YLeaf neighbor_area_id; //type: string
        ydk::YLeaf state_change_count; //type: uint16
        ydk::YLeaf neighbor_cost; //type: uint16
        ydk::YLeaf neighbor_filter; //type: boolean
        ydk::YLeaf neighbor_designated_router_address; //type: string
        ydk::YLeaf neighbor_backup_designated_router_address; //type: string
        ydk::YLeaf interface_type; //type: Interface
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf next_poll_interval; //type: uint32
        ydk::YLeaf neighbor_option; //type: uint8
        ydk::YLeaf pending_events; //type: uint16
        ydk::YLeaf neighbor_lls_option; //type: uint32
        ydk::YLeaf oob_resynchronization; //type: boolean
        ydk::YLeaf nsf_router_state; //type: NsfRtr
        ydk::YLeaf last_oob_time; //type: uint32
        ydk::YLeaf lfa_interface; //type: string
        ydk::YLeaf lfa_next_hop; //type: string
        ydk::YLeaf lfa_neighbor_id; //type: string
        ydk::YLeaf lfa_neighbor_revision; //type: uint32
        ydk::YLeaf neighbor_ack_list_count; //type: uint32
        ydk::YLeaf neighbor_ack_list_high_watermark; //type: uint32
        ydk::YLeaf adjacency_sid_label; //type: uint32
        ydk::YLeaf adjacency_sid_protected; //type: boolean
        ydk::YLeaf adjacency_sid_unprotected_label; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint16
        class NeighborSummary; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation
        class NeighborRetransmissionInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary : public ydk::Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation : public ydk::Entity
{
    public:
        NeighborRetransmissionInformation();
        ~NeighborRetransmissionInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dbd_retransmission_count; //type: uint32
        ydk::YLeaf dbd_retransmission_total_count; //type: uint32
        ydk::YLeaf area_flooding_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmission_count; //type: uint32
        ydk::YLeaf number_of_retransmissions; //type: uint32
        ydk::YLeaf area_first_flood_information; //type: uint32
        ydk::YLeaf area_first_flood_information_index; //type: uint32
        ydk::YLeaf as_first_flood_information; //type: uint32
        ydk::YLeaf as_first_flood_information_index; //type: uint32
        ydk::YLeaf area_next_flood_information; //type: uint32
        ydk::YLeaf area_next_flood_information_index; //type: uint32
        ydk::YLeaf as_next_flood_information; //type: uint32
        ydk::YLeaf as_next_flood_information_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation : public ydk::Entity
{
    public:
        RouteInformation();
        ~RouteInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes
        class MulticastIntactRouteTable; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable
        class MulticastIntactBackupRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes
        class SummaryInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation
        class ConnectedRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes
        class LocalRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes
        class RouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas
        class RouteTable; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable
        class ExternalRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes> backup_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable> multicast_intact_route_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes> multicast_intact_backup_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation> summary_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes> connected_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes> local_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas> route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable> route_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes> external_routes;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes : public ydk::Entity
{
    public:
        BackupRoutes();
        ~BackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupRoute; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute> > backup_route;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute : public ydk::Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath : public ydk::Entity
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

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_path_id; //type: uint16
        ydk::YLeaf lsa_type; //type: uint8
        class RouteBackupPath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath : public ydk::Entity
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
        ydk::YLeaf backup_remote_lfa; //type: string
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf backup_tunnel_interface_name; //type: string
        class BackupRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable : public ydk::Entity
{
    public:
        MulticastIntactRouteTable();
        ~MulticastIntactRouteTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route> > route;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath : public ydk::Entity
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

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes : public ydk::Entity
{
    public:
        MulticastIntactBackupRoutes();
        ~MulticastIntactBackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastIntactBackupRoute; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute> > multicast_intact_backup_route;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute : public ydk::Entity
{
    public:
        MulticastIntactBackupRoute();
        ~MulticastIntactBackupRoute();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath : public ydk::Entity
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

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_path_id; //type: uint16
        ydk::YLeaf lsa_type; //type: uint8
        class RouteBackupPath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath : public ydk::Entity
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
        ydk::YLeaf backup_remote_lfa; //type: string
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf backup_tunnel_interface_name; //type: string
        class BackupRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation : public ydk::Entity
{
    public:
        SummaryInformation();
        ~SummaryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failures; //type: uint32
        ydk::YLeaf failure_address; //type: string
        class FailureTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime
        class Common; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime> failure_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common> common;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime : public ydk::Entity
{
    public:
        FailureTime();
        ~FailureTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_type1s; //type: uint32
        ydk::YLeaf external_type2s; //type: uint32
        ydk::YLeaf external_nssa_type1s; //type: uint32
        ydk::YLeaf external_nssa_type2s; //type: uint32
        ydk::YLeaf inter_areas; //type: uint32
        ydk::YLeaf intra_areas; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes : public ydk::Entity
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

        class ConnectedRoute; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute> > connected_route;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute : public ydk::Entity
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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath : public ydk::Entity
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

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes : public ydk::Entity
{
    public:
        LocalRoutes();
        ~LocalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalRoute; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute> > local_route;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute : public ydk::Entity
{
    public:
        LocalRoute();
        ~LocalRoute();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath : public ydk::Entity
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

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas : public ydk::Entity
{
    public:
        RouteAreas();
        ~RouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea> > route_area;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea : public ydk::Entity
{
    public:
        RouteArea();
        ~RouteArea();

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
        class MulticastIntactBackupRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas
        class ConnectedRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas
        class BackupRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas
        class RouteAreaInformations; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations
        class MulticastIntactRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas
        class SummaryAreaInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation
        class LocalRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas> multicast_intact_backup_route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas> connected_route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas> backup_route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations> route_area_informations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas> multicast_intact_route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation> summary_area_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas> local_route_areas;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas : public ydk::Entity
{
    public:
        MulticastIntactBackupRouteAreas();
        ~MulticastIntactBackupRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastIntactBackupRouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea> > multicast_intact_backup_route_area;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea : public ydk::Entity
{
    public:
        MulticastIntactBackupRouteArea();
        ~MulticastIntactBackupRouteArea();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath : public ydk::Entity
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

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_path_id; //type: uint16
        ydk::YLeaf lsa_type; //type: uint8
        class RouteBackupPath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath : public ydk::Entity
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
        ydk::YLeaf backup_remote_lfa; //type: string
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf backup_tunnel_interface_name; //type: string
        class BackupRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas : public ydk::Entity
{
    public:
        ConnectedRouteAreas();
        ~ConnectedRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectedRouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea> > connected_route_area;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea : public ydk::Entity
{
    public:
        ConnectedRouteArea();
        ~ConnectedRouteArea();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath : public ydk::Entity
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

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas : public ydk::Entity
{
    public:
        BackupRouteAreas();
        ~BackupRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupRouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea> > backup_route_area;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea : public ydk::Entity
{
    public:
        BackupRouteArea();
        ~BackupRouteArea();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath : public ydk::Entity
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

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_path_id; //type: uint16
        ydk::YLeaf lsa_type; //type: uint8
        class RouteBackupPath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath : public ydk::Entity
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
        ydk::YLeaf backup_remote_lfa; //type: string
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf backup_tunnel_interface_name; //type: string
        class BackupRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations : public ydk::Entity
{
    public:
        RouteAreaInformations();
        ~RouteAreaInformations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteAreaInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation> > route_area_information;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation : public ydk::Entity
{
    public:
        RouteAreaInformation();
        ~RouteAreaInformation();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath : public ydk::Entity
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

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_1_ */

