#ifndef _CISCO_IOS_XR_ASR9K_PTP_PD_OPER_
#define _CISCO_IOS_XR_ASR9K_PTP_PD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_ptp_pd_oper {

class PlatformPtp : public ydk::Entity
{
    public:
        PlatformPtp();
        ~PlatformPtp();

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

        class PlatformPtpServo; //type: PlatformPtp::PlatformPtpServo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo> platform_ptp_servo;
        
}; // PlatformPtp


class PlatformPtp::PlatformPtpServo : public ydk::Entity
{
    public:
        PlatformPtpServo();
        ~PlatformPtpServo();

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

        ydk::YLeaf lock_status; //type: uint16
        ydk::YLeaf running; //type: boolean
        ydk::YLeaf device_status; //type: string
        ydk::YLeaf log_level; //type: uint16
        ydk::YLeaf phase_accuracy_last; //type: int64
        ydk::YLeaf num_sync_timestamp; //type: uint32
        ydk::YLeaf num_delay_timestamp; //type: uint32
        ydk::YLeaf num_set_time; //type: uint32
        ydk::YLeaf num_step_time; //type: uint32
        ydk::YLeaf num_adjust_freq; //type: uint32
        ydk::YLeaf num_adjust_freq_time; //type: uint32
        ydk::YLeaf last_adjust_freq; //type: int32
        ydk::YLeaf last_step_time; //type: int32
        ydk::YLeaf num_discard_sync_timestamp; //type: uint32
        ydk::YLeaf num_discard_delay_timestamp; //type: uint32
        ydk::YLeaf flagof_last_set_time; //type: boolean
        ydk::YLeaf offset_from_master; //type: int64
        ydk::YLeaf mean_path_delay; //type: int64
        class LastSetTime; //type: PlatformPtp::PlatformPtpServo::LastSetTime
        class LastReceivedT1; //type: PlatformPtp::PlatformPtpServo::LastReceivedT1
        class LastReceivedT2; //type: PlatformPtp::PlatformPtpServo::LastReceivedT2
        class LastReceivedT3; //type: PlatformPtp::PlatformPtpServo::LastReceivedT3
        class LastReceivedT4; //type: PlatformPtp::PlatformPtpServo::LastReceivedT4
        class PreReceivedT1; //type: PlatformPtp::PlatformPtpServo::PreReceivedT1
        class PreReceivedT2; //type: PlatformPtp::PlatformPtpServo::PreReceivedT2
        class PreReceivedT3; //type: PlatformPtp::PlatformPtpServo::PreReceivedT3
        class PreReceivedT4; //type: PlatformPtp::PlatformPtpServo::PreReceivedT4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo::LastSetTime> last_set_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo::LastReceivedT1> last_received_t1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo::LastReceivedT2> last_received_t2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo::LastReceivedT3> last_received_t3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo::LastReceivedT4> last_received_t4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo::PreReceivedT1> pre_received_t1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo::PreReceivedT2> pre_received_t2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo::PreReceivedT3> pre_received_t3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_ptp_pd_oper::PlatformPtp::PlatformPtpServo::PreReceivedT4> pre_received_t4;
        
}; // PlatformPtp::PlatformPtpServo


class PlatformPtp::PlatformPtpServo::LastSetTime : public ydk::Entity
{
    public:
        LastSetTime();
        ~LastSetTime();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // PlatformPtp::PlatformPtpServo::LastSetTime


class PlatformPtp::PlatformPtpServo::LastReceivedT1 : public ydk::Entity
{
    public:
        LastReceivedT1();
        ~LastReceivedT1();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // PlatformPtp::PlatformPtpServo::LastReceivedT1


class PlatformPtp::PlatformPtpServo::LastReceivedT2 : public ydk::Entity
{
    public:
        LastReceivedT2();
        ~LastReceivedT2();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // PlatformPtp::PlatformPtpServo::LastReceivedT2


class PlatformPtp::PlatformPtpServo::LastReceivedT3 : public ydk::Entity
{
    public:
        LastReceivedT3();
        ~LastReceivedT3();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // PlatformPtp::PlatformPtpServo::LastReceivedT3


class PlatformPtp::PlatformPtpServo::LastReceivedT4 : public ydk::Entity
{
    public:
        LastReceivedT4();
        ~LastReceivedT4();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // PlatformPtp::PlatformPtpServo::LastReceivedT4


class PlatformPtp::PlatformPtpServo::PreReceivedT1 : public ydk::Entity
{
    public:
        PreReceivedT1();
        ~PreReceivedT1();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // PlatformPtp::PlatformPtpServo::PreReceivedT1


class PlatformPtp::PlatformPtpServo::PreReceivedT2 : public ydk::Entity
{
    public:
        PreReceivedT2();
        ~PreReceivedT2();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // PlatformPtp::PlatformPtpServo::PreReceivedT2


class PlatformPtp::PlatformPtpServo::PreReceivedT3 : public ydk::Entity
{
    public:
        PreReceivedT3();
        ~PreReceivedT3();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // PlatformPtp::PlatformPtpServo::PreReceivedT3


class PlatformPtp::PlatformPtpServo::PreReceivedT4 : public ydk::Entity
{
    public:
        PreReceivedT4();
        ~PreReceivedT4();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // PlatformPtp::PlatformPtpServo::PreReceivedT4


}
}

#endif /* _CISCO_IOS_XR_ASR9K_PTP_PD_OPER_ */

