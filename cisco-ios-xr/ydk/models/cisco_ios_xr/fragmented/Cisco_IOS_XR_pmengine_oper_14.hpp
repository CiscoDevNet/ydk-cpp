#ifndef _CISCO_IOS_XR_PMENGINE_OPER_14_
#define _CISCO_IOS_XR_PMENGINE_OPER_14_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_11.hpp"
#include "Cisco_IOS_XR_pmengine_oper_13.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30secyifHistories::MacsecSecond30secyifHistory::MacsecSecond30secyifTimeLineInstances::MacsecSecond30secyifTimeLineInstance::OutOctetsEncrypted


class PerformanceManagementHistory::Global::Periodic::OduHistory : public ydk::Entity
{
    public:
        OduHistory();
        ~OduHistory();

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

        class OduPortHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories> odu_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories : public ydk::Entity
{
    public:
        OduPortHistories();
        ~OduPortHistories();

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

        class OduPortHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory

        ydk::YList odu_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory : public ydk::Entity
{
    public:
        OduPortHistory();
        ~OduPortHistory();

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

        ydk::YLeaf name; //type: string
        class OduHour24History; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History
        class OduMinute15History; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History> odu_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History> odu_minute15_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History : public ydk::Entity
{
    public:
        OduHour24History();
        ~OduHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24gfpHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories
        class OduHour24prbsHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories
        class OduHour24otnHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories> odu_hour24gfp_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories> odu_hour24prbs_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories> odu_hour24otn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories : public ydk::Entity
{
    public:
        OduHour24gfpHistories();
        ~OduHour24gfpHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24gfpHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory

        ydk::YList odu_hour24gfp_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory : public ydk::Entity
{
    public:
        OduHour24gfpHistory();
        ~OduHour24gfpHistory();

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
        class OduHour24gfpTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances> odu_hour24gfp_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances : public ydk::Entity
{
    public:
        OduHour24gfpTimeLineInstances();
        ~OduHour24gfpTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24gfpTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance

        ydk::YList odu_hour24gfp_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance : public ydk::Entity
{
    public:
        OduHour24gfpTimeLineInstance();
        ~OduHour24gfpTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxBitErr; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr
        class RxInvTyp; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp
        class RxCrc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc
        class RxLfd; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd
        class RxCsf; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr> rx_bit_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp> rx_inv_typ;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc> rx_crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd> rx_lfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf> rx_csf;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr : public ydk::Entity
{
    public:
        RxBitErr();
        ~RxBitErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxBitErr


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp : public ydk::Entity
{
    public:
        RxInvTyp();
        ~RxInvTyp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxInvTyp


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc : public ydk::Entity
{
    public:
        RxCrc();
        ~RxCrc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCrc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd : public ydk::Entity
{
    public:
        RxLfd();
        ~RxLfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxLfd


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf : public ydk::Entity
{
    public:
        RxCsf();
        ~RxCsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24gfpHistories::OduHour24gfpHistory::OduHour24gfpTimeLineInstances::OduHour24gfpTimeLineInstance::RxCsf


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories : public ydk::Entity
{
    public:
        OduHour24prbsHistories();
        ~OduHour24prbsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24prbsHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory

        ydk::YList odu_hour24prbs_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory : public ydk::Entity
{
    public:
        OduHour24prbsHistory();
        ~OduHour24prbsHistory();

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
        class OduHour24prbsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances> odu_hour24prbs_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances : public ydk::Entity
{
    public:
        OduHour24prbsTimeLineInstances();
        ~OduHour24prbsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24prbsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance

        ydk::YList odu_hour24prbs_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance : public ydk::Entity
{
    public:
        OduHour24prbsTimeLineInstance();
        ~OduHour24prbsTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf found_count; //type: uint32
        ydk::YLeaf lost_count; //type: uint32
        ydk::YLeaf found_at_time; //type: uint64
        ydk::YLeaf lost_at_time; //type: uint64
        ydk::YLeaf conf_patt; //type: PmPrbsPatternEt
        class RcvPatt; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt
        class PrbsStatus; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt> rcv_patt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus> prbs_status;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt : public ydk::Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rcv_patt; //type: PmPrbsPatternEt

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::RcvPatt


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus : public ydk::Entity
{
    public:
        PrbsStatus();
        ~PrbsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf prbs_status; //type: PmPrbsStatusEt

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24prbsHistories::OduHour24prbsHistory::OduHour24prbsTimeLineInstances::OduHour24prbsTimeLineInstance::PrbsStatus


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories : public ydk::Entity
{
    public:
        OduHour24otnHistories();
        ~OduHour24otnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24otnHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory

        ydk::YList odu_hour24otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory : public ydk::Entity
{
    public:
        OduHour24otnHistory();
        ~OduHour24otnHistory();

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
        class OduHour24otnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances> odu_hour24otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances : public ydk::Entity
{
    public:
        OduHour24otnTimeLineInstances();
        ~OduHour24otnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24otnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance

        ydk::YList odu_hour24otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance : public ydk::Entity
{
    public:
        OduHour24otnTimeLineInstance();
        ~OduHour24otnTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe> fc_fe;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe : public ydk::Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24otnHistories::OduHour24otnHistory::OduHour24otnTimeLineInstances::OduHour24otnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History : public ydk::Entity
{
    public:
        OduMinute15History();
        ~OduMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15prbsHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories
        class OduMinute15gfpHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories
        class OduMinute15otnHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories> odu_minute15prbs_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories> odu_minute15gfp_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories> odu_minute15otn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories : public ydk::Entity
{
    public:
        OduMinute15prbsHistories();
        ~OduMinute15prbsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15prbsHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory

        ydk::YList odu_minute15prbs_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory : public ydk::Entity
{
    public:
        OduMinute15prbsHistory();
        ~OduMinute15prbsHistory();

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
        class OduMinute15prbsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances> odu_minute15prbs_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances : public ydk::Entity
{
    public:
        OduMinute15prbsTimeLineInstances();
        ~OduMinute15prbsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15prbsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance

        ydk::YList odu_minute15prbs_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance : public ydk::Entity
{
    public:
        OduMinute15prbsTimeLineInstance();
        ~OduMinute15prbsTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf found_count; //type: uint32
        ydk::YLeaf lost_count; //type: uint32
        ydk::YLeaf found_at_time; //type: uint64
        ydk::YLeaf lost_at_time; //type: uint64
        ydk::YLeaf conf_patt; //type: PmPrbsPatternEt
        class RcvPatt; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt
        class PrbsStatus; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt> rcv_patt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus> prbs_status;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt : public ydk::Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rcv_patt; //type: PmPrbsPatternEt

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::RcvPatt


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus : public ydk::Entity
{
    public:
        PrbsStatus();
        ~PrbsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf prbs_status; //type: PmPrbsStatusEt

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15prbsHistories::OduMinute15prbsHistory::OduMinute15prbsTimeLineInstances::OduMinute15prbsTimeLineInstance::PrbsStatus


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories : public ydk::Entity
{
    public:
        OduMinute15gfpHistories();
        ~OduMinute15gfpHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15gfpHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory

        ydk::YList odu_minute15gfp_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory : public ydk::Entity
{
    public:
        OduMinute15gfpHistory();
        ~OduMinute15gfpHistory();

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
        class OduMinute15gfpTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances> odu_minute15gfp_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances : public ydk::Entity
{
    public:
        OduMinute15gfpTimeLineInstances();
        ~OduMinute15gfpTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15gfpTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance

        ydk::YList odu_minute15gfp_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance : public ydk::Entity
{
    public:
        OduMinute15gfpTimeLineInstance();
        ~OduMinute15gfpTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxBitErr; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr
        class RxInvTyp; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp
        class RxCrc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc
        class RxLfd; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd
        class RxCsf; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr> rx_bit_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp> rx_inv_typ;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc> rx_crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd> rx_lfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf> rx_csf;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr : public ydk::Entity
{
    public:
        RxBitErr();
        ~RxBitErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxBitErr


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp : public ydk::Entity
{
    public:
        RxInvTyp();
        ~RxInvTyp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxInvTyp


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc : public ydk::Entity
{
    public:
        RxCrc();
        ~RxCrc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCrc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd : public ydk::Entity
{
    public:
        RxLfd();
        ~RxLfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxLfd


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf : public ydk::Entity
{
    public:
        RxCsf();
        ~RxCsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15gfpHistories::OduMinute15gfpHistory::OduMinute15gfpTimeLineInstances::OduMinute15gfpTimeLineInstance::RxCsf


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories : public ydk::Entity
{
    public:
        OduMinute15otnHistories();
        ~OduMinute15otnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15otnHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory

        ydk::YList odu_minute15otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory : public ydk::Entity
{
    public:
        OduMinute15otnHistory();
        ~OduMinute15otnHistory();

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
        class OduMinute15otnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances> odu_minute15otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances : public ydk::Entity
{
    public:
        OduMinute15otnTimeLineInstances();
        ~OduMinute15otnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15otnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance

        ydk::YList odu_minute15otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance : public ydk::Entity
{
    public:
        OduMinute15otnTimeLineInstance();
        ~OduMinute15otnTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe> fc_fe;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe : public ydk::Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15otnHistories::OduMinute15otnHistory::OduMinute15otnTimeLineInstances::OduMinute15otnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory : public ydk::Entity
{
    public:
        OtuHistory();
        ~OtuHistory();

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

        class OtuPortHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories> otu_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories : public ydk::Entity
{
    public:
        OtuPortHistories();
        ~OtuPortHistories();

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

        class OtuPortHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory

        ydk::YList otu_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory : public ydk::Entity
{
    public:
        OtuPortHistory();
        ~OtuPortHistory();

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

        ydk::YLeaf name; //type: string
        class OtuSecond30History; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History
        class OtuMinute15History; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History
        class OtuHour24History; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History> otu_second30_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History> otu_minute15_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History> otu_hour24_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History : public ydk::Entity
{
    public:
        OtuSecond30History();
        ~OtuSecond30History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30fecHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories
        class OtuSecond30otnHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories> otu_second30fec_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories> otu_second30otn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories : public ydk::Entity
{
    public:
        OtuSecond30fecHistories();
        ~OtuSecond30fecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30fecHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory

        ydk::YList otu_second30fec_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory : public ydk::Entity
{
    public:
        OtuSecond30fecHistory();
        ~OtuSecond30fecHistory();

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
        class OtuSecond30fecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances> otu_second30fec_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances : public ydk::Entity
{
    public:
        OtuSecond30fecTimeLineInstances();
        ~OtuSecond30fecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30fecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance

        ydk::YList otu_second30fec_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance : public ydk::Entity
{
    public:
        OtuSecond30fecTimeLineInstance();
        ~OtuSecond30fecTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin> qmargin;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits : public ydk::Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords : public ydk::Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer : public ydk::Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer : public ydk::Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q : public ydk::Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin : public ydk::Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30fecHistories::OtuSecond30fecHistory::OtuSecond30fecTimeLineInstances::OtuSecond30fecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories : public ydk::Entity
{
    public:
        OtuSecond30otnHistories();
        ~OtuSecond30otnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30otnHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory

        ydk::YList otu_second30otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory : public ydk::Entity
{
    public:
        OtuSecond30otnHistory();
        ~OtuSecond30otnHistory();

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
        class OtuSecond30otnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances> otu_second30otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances : public ydk::Entity
{
    public:
        OtuSecond30otnTimeLineInstances();
        ~OtuSecond30otnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30otnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance

        ydk::YList otu_second30otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance : public ydk::Entity
{
    public:
        OtuSecond30otnTimeLineInstance();
        ~OtuSecond30otnTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe> fc_fe;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe : public ydk::Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30otnHistories::OtuSecond30otnHistory::OtuSecond30otnTimeLineInstances::OtuSecond30otnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History : public ydk::Entity
{
    public:
        OtuMinute15History();
        ~OtuMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15fecHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories
        class OtuMinute15prbsHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories
        class OtuMinute15otnHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories> otu_minute15fec_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories> otu_minute15prbs_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories> otu_minute15otn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories : public ydk::Entity
{
    public:
        OtuMinute15fecHistories();
        ~OtuMinute15fecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15fecHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory

        ydk::YList otu_minute15fec_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory : public ydk::Entity
{
    public:
        OtuMinute15fecHistory();
        ~OtuMinute15fecHistory();

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
        class OtuMinute15fecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances> otu_minute15fec_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances : public ydk::Entity
{
    public:
        OtuMinute15fecTimeLineInstances();
        ~OtuMinute15fecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15fecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance

        ydk::YList otu_minute15fec_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance : public ydk::Entity
{
    public:
        OtuMinute15fecTimeLineInstance();
        ~OtuMinute15fecTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin> qmargin;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits : public ydk::Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords : public ydk::Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer : public ydk::Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer : public ydk::Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q : public ydk::Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin : public ydk::Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15fecHistories::OtuMinute15fecHistory::OtuMinute15fecTimeLineInstances::OtuMinute15fecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories : public ydk::Entity
{
    public:
        OtuMinute15prbsHistories();
        ~OtuMinute15prbsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15prbsHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory

        ydk::YList otu_minute15prbs_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory : public ydk::Entity
{
    public:
        OtuMinute15prbsHistory();
        ~OtuMinute15prbsHistory();

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
        class OtuMinute15prbsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances> otu_minute15prbs_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances : public ydk::Entity
{
    public:
        OtuMinute15prbsTimeLineInstances();
        ~OtuMinute15prbsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15prbsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance

        ydk::YList otu_minute15prbs_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance : public ydk::Entity
{
    public:
        OtuMinute15prbsTimeLineInstance();
        ~OtuMinute15prbsTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf found_count; //type: uint32
        ydk::YLeaf lost_count; //type: uint32
        ydk::YLeaf found_at_time; //type: uint64
        ydk::YLeaf lost_at_time; //type: uint64
        ydk::YLeaf conf_patt; //type: PmPrbsPatternEt
        class RcvPatt; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt
        class PrbsStatus; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt> rcv_patt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus> prbs_status;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt : public ydk::Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rcv_patt; //type: PmPrbsPatternEt

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::RcvPatt


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus : public ydk::Entity
{
    public:
        PrbsStatus();
        ~PrbsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf prbs_status; //type: PmPrbsStatusEt

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15prbsHistories::OtuMinute15prbsHistory::OtuMinute15prbsTimeLineInstances::OtuMinute15prbsTimeLineInstance::PrbsStatus


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories : public ydk::Entity
{
    public:
        OtuMinute15otnHistories();
        ~OtuMinute15otnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15otnHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory

        ydk::YList otu_minute15otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory : public ydk::Entity
{
    public:
        OtuMinute15otnHistory();
        ~OtuMinute15otnHistory();

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
        class OtuMinute15otnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances> otu_minute15otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances : public ydk::Entity
{
    public:
        OtuMinute15otnTimeLineInstances();
        ~OtuMinute15otnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15otnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance

        ydk::YList otu_minute15otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance : public ydk::Entity
{
    public:
        OtuMinute15otnTimeLineInstance();
        ~OtuMinute15otnTimeLineInstance();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcFe> fc_fe;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15otnHistories::OtuMinute15otnHistory::OtuMinute15otnTimeLineInstances::OtuMinute15otnTimeLineInstance::BberFe


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_14_ */

