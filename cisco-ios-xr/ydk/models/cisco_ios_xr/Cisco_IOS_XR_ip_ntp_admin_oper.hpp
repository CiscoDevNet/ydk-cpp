#ifndef _CISCO_IOS_XR_IP_NTP_ADMIN_OPER_
#define _CISCO_IOS_XR_IP_NTP_ADMIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_ntp_admin_oper {

class Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

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

        class Racks; //type: Ntp::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks> racks;
        
}; // Ntp


class Ntp::Racks : public ydk::Entity
{
    public:
        Racks();
        ~Racks();

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

        class Rack; //type: Ntp::Racks::Rack

        ydk::YList rack;
        
}; // Ntp::Racks


class Ntp::Racks::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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

        ydk::YLeaf number; //type: uint32
        class Slots; //type: Ntp::Racks::Rack::Slots

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots> slots;
        
}; // Ntp::Racks::Rack


class Ntp::Racks::Rack::Slots : public ydk::Entity
{
    public:
        Slots();
        ~Slots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Slot; //type: Ntp::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // Ntp::Racks::Rack::Slots


class Ntp::Racks::Rack::Slots::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Instances; //type: Ntp::Racks::Rack::Slots::Slot::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances> instances;
        
}; // Ntp::Racks::Rack::Slots::Slot


class Ntp::Racks::Rack::Slots::Slot::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance

        ydk::YList instance;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Status; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status
        class Associations; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations
        class AssociationsDetail; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status> status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations> associations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail> associations_detail;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_ntp_enabled; //type: boolean
        ydk::YLeaf sys_dispersion; //type: string
        ydk::YLeaf sys_offset; //type: string
        ydk::YLeaf clock_period; //type: uint32
        ydk::YLeaf sys_leap; //type: NtpLeap
        ydk::YLeaf sys_precision; //type: int8
        ydk::YLeaf sys_stratum; //type: uint8
        ydk::YLeaf sys_ref_id; //type: string
        ydk::YLeaf sys_root_delay; //type: string
        ydk::YLeaf sys_root_dispersion; //type: string
        ydk::YLeaf loop_filter_state; //type: NtpLoopFilterState
        ydk::YLeaf poll_interval; //type: uint8
        ydk::YLeaf is_updated; //type: ClockUpdateNode
        ydk::YLeaf last_update; //type: int32
        class SysRefTime; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime
        class SysDrift; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime> sys_ref_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift> sys_drift;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime : public ydk::Entity
{
    public:
        SysRefTime();
        ~SysRefTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec
        class FracSecs; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs> frac_secs;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift : public ydk::Entity
{
    public:
        SysDrift();
        ~SysDrift();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec
        class FracSecs; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs> frac_secs;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations : public ydk::Entity
{
    public:
        Associations();
        ~Associations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_ntp_enabled; //type: boolean
        ydk::YLeaf sys_leap; //type: NtpLeap
        class PeerSummaryInfo; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo

        ydk::YList peer_summary_info;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo : public ydk::Entity
{
    public:
        PeerSummaryInfo();
        ~PeerSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_since; //type: int32
        class PeerInfoCommon; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon> peer_info_common;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon : public ydk::Entity
{
    public:
        PeerInfoCommon();
        ~PeerInfoCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_mode; //type: NtpMode
        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf address; //type: string
        ydk::YLeaf reference_id; //type: string
        ydk::YLeaf host_poll; //type: uint8
        ydk::YLeaf reachability; //type: uint8
        ydk::YLeaf stratum; //type: uint8
        ydk::YLeaf status; //type: NtpPeerStatus
        ydk::YLeaf delay; //type: string
        ydk::YLeaf offset; //type: string
        ydk::YLeaf dispersion; //type: string
        ydk::YLeaf is_sys_peer; //type: boolean

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail : public ydk::Entity
{
    public:
        AssociationsDetail();
        ~AssociationsDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_ntp_enabled; //type: boolean
        ydk::YLeaf sys_leap; //type: NtpLeap
        class PeerDetailInfo; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo

        ydk::YList peer_detail_info;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo : public ydk::Entity
{
    public:
        PeerDetailInfo();
        ~PeerDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leap; //type: NtpLeap
        ydk::YLeaf peer_mode; //type: NtpMode
        ydk::YLeaf poll_interval; //type: uint8
        ydk::YLeaf is_ref_clock; //type: boolean
        ydk::YLeaf is_authenticated; //type: boolean
        ydk::YLeaf root_delay; //type: string
        ydk::YLeaf root_dispersion; //type: string
        ydk::YLeaf synch_distance; //type: string
        ydk::YLeaf precision; //type: int8
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf filter_index; //type: uint32
        ydk::YLeaf cast_flags; //type: uint8
        class PeerInfoCommon; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon
        class RefTime; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime
        class OriginateTime; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime
        class ReceiveTime; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime
        class TransmitTime; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime
        class FilterDetail; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon> peer_info_common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime> ref_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime> originate_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime> receive_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime> transmit_time;
        ydk::YList filter_detail;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon : public ydk::Entity
{
    public:
        PeerInfoCommon();
        ~PeerInfoCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_mode; //type: NtpMode
        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf address; //type: string
        ydk::YLeaf reference_id; //type: string
        ydk::YLeaf host_poll; //type: uint8
        ydk::YLeaf reachability; //type: uint8
        ydk::YLeaf stratum; //type: uint8
        ydk::YLeaf status; //type: NtpPeerStatus
        ydk::YLeaf delay; //type: string
        ydk::YLeaf offset; //type: string
        ydk::YLeaf dispersion; //type: string
        ydk::YLeaf is_sys_peer; //type: boolean

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime : public ydk::Entity
{
    public:
        RefTime();
        ~RefTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec
        class FracSecs; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs> frac_secs;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime : public ydk::Entity
{
    public:
        OriginateTime();
        ~OriginateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec
        class FracSecs; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs> frac_secs;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime : public ydk::Entity
{
    public:
        ReceiveTime();
        ~ReceiveTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec
        class FracSecs; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs> frac_secs;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime : public ydk::Entity
{
    public:
        TransmitTime();
        ~TransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec
        class FracSecs; //type: Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_admin_oper::Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs> frac_secs;
        
}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs


class Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail : public ydk::Entity
{
    public:
        FilterDetail();
        ~FilterDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter_delay; //type: string
        ydk::YLeaf filter_offset; //type: string
        ydk::YLeaf filter_disp; //type: string

}; // Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail

class NtpPeerStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_reject;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_sane;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_correct;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_selcand;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_sync_cand;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_distsys_peer;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_sys_peer;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_pps;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-ctl-pst-sel-reject") return 0;
            if (name == "ntp-ctl-pst-sel-sane") return 1;
            if (name == "ntp-ctl-pst-sel-correct") return 2;
            if (name == "ntp-ctl-pst-sel-selcand") return 3;
            if (name == "ntp-ctl-pst-sel-sync-cand") return 4;
            if (name == "ntp-ctl-pst-sel-distsys-peer") return 5;
            if (name == "ntp-ctl-pst-sel-sys-peer") return 6;
            if (name == "ntp-ctl-pst-sel-pps") return 7;
            return -1;
        }
};

class NtpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_mode_unspec;
        static const ydk::Enum::YLeaf ntp_mode_symetric_active;
        static const ydk::Enum::YLeaf ntp_mode_symetric_passive;
        static const ydk::Enum::YLeaf ntp_mode_client;
        static const ydk::Enum::YLeaf ntp_mode_server;
        static const ydk::Enum::YLeaf ntp_mode_xcast_server;
        static const ydk::Enum::YLeaf ntp_mode_control;
        static const ydk::Enum::YLeaf ntp_mode_private;
        static const ydk::Enum::YLeaf ntp_mode_xcast_client;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-mode-unspec") return 0;
            if (name == "ntp-mode-symetric-active") return 1;
            if (name == "ntp-mode-symetric-passive") return 2;
            if (name == "ntp-mode-client") return 3;
            if (name == "ntp-mode-server") return 4;
            if (name == "ntp-mode-xcast-server") return 5;
            if (name == "ntp-mode-control") return 6;
            if (name == "ntp-mode-private") return 7;
            if (name == "ntp-mode-xcast-client") return 8;
            return -1;
        }
};

class ClockUpdateNode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clk_never_updated;
        static const ydk::Enum::YLeaf clk_updated;
        static const ydk::Enum::YLeaf clk_no_update_info;

        static int get_enum_value(const std::string & name) {
            if (name == "clk-never-updated") return 0;
            if (name == "clk-updated") return 1;
            if (name == "clk-no-update-info") return 2;
            return -1;
        }
};

class NtpLoopFilterState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_loop_flt_n_set;
        static const ydk::Enum::YLeaf ntp_loop_flt_f_set;
        static const ydk::Enum::YLeaf ntp_loop_flt_spik;
        static const ydk::Enum::YLeaf ntp_loop_flt_freq;
        static const ydk::Enum::YLeaf ntp_loop_flt_sync;
        static const ydk::Enum::YLeaf ntp_loop_flt_unkn;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-loop-flt-n-set") return 1;
            if (name == "ntp-loop-flt-f-set") return 2;
            if (name == "ntp-loop-flt-spik") return 3;
            if (name == "ntp-loop-flt-freq") return 4;
            if (name == "ntp-loop-flt-sync") return 5;
            if (name == "ntp-loop-flt-unkn") return 6;
            return -1;
        }
};

class NtpLeap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_leap_no_warning;
        static const ydk::Enum::YLeaf ntp_leap_addse_cond;
        static const ydk::Enum::YLeaf ntp_leap_delse_cond;
        static const ydk::Enum::YLeaf ntp_leap_not_in_sync;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-leap-no-warning") return 0;
            if (name == "ntp-leap-addse-cond") return 1;
            if (name == "ntp-leap-delse-cond") return 2;
            if (name == "ntp-leap-not-in-sync") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IP_NTP_ADMIN_OPER_ */

