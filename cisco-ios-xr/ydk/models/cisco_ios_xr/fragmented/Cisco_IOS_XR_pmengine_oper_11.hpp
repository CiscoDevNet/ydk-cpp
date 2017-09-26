#ifndef _CISCO_IOS_XR_PMENGINE_OPER_11_
#define _CISCO_IOS_XR_PMENGINE_OPER_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_10.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatUndersizedPkt : public ydk::Entity
{
    public:
        EtherStatUndersizedPkt();
        ~EtherStatUndersizedPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::FcsErrorsStat : public ydk::Entity
{
    public:
        FcsErrorsStat();
        ~FcsErrorsStat();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::FcsErrorsStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInErrors : public ydk::Entity
{
    public:
        IfInErrors();
        ~IfInErrors();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInErrors


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInOctets : public ydk::Entity
{
    public:
        IfInOctets();
        ~IfInOctets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::In8021QFrames : public ydk::Entity
{
    public:
        In8021QFrames();
        ~In8021QFrames();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::In8021QFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InBcastPkt : public ydk::Entity
{
    public:
        InBcastPkt();
        ~InBcastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InBcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropAbort : public ydk::Entity
{
    public:
        InDropAbort();
        ~InDropAbort();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropAbort


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidDmac : public ydk::Entity
{
    public:
        InDropInvalidDmac();
        ~InDropInvalidDmac();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidDmac


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidEncap : public ydk::Entity
{
    public:
        InDropInvalidEncap();
        ~InDropInvalidEncap();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidEncap


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidVlan : public ydk::Entity
{
    public:
        InDropInvalidVlan();
        ~InDropInvalidVlan();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidVlan


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOther : public ydk::Entity
{
    public:
        InDropOther();
        ~InDropOther();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOverrun : public ydk::Entity
{
    public:
        InDropOverrun();
        ~InDropOverrun();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOverrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorCollisions : public ydk::Entity
{
    public:
        InErrorCollisions();
        ~InErrorCollisions();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorCollisions


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorFragments : public ydk::Entity
{
    public:
        InErrorFragments();
        ~InErrorFragments();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorFragments


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorGiant : public ydk::Entity
{
    public:
        InErrorGiant();
        ~InErrorGiant();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorGiant


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorJabbers : public ydk::Entity
{
    public:
        InErrorJabbers();
        ~InErrorJabbers();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorJabbers


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorOther : public ydk::Entity
{
    public:
        InErrorOther();
        ~InErrorOther();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorRunt : public ydk::Entity
{
    public:
        InErrorRunt();
        ~InErrorRunt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorRunt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorSymbol : public ydk::Entity
{
    public:
        InErrorSymbol();
        ~InErrorSymbol();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorSymbol


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodBytes : public ydk::Entity
{
    public:
        InGoodBytes();
        ~InGoodBytes();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodBytes


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodPkts : public ydk::Entity
{
    public:
        InGoodPkts();
        ~InGoodPkts();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodPkts


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMcastPkt : public ydk::Entity
{
    public:
        InMcastPkt();
        ~InMcastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibGiant : public ydk::Entity
{
    public:
        InMibGiant();
        ~InMibGiant();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibGiant


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibJabber : public ydk::Entity
{
    public:
        InMibJabber();
        ~InMibJabber();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibJabber


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibcrc : public ydk::Entity
{
    public:
        InMibcrc();
        ~InMibcrc();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibcrc


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPauseFrame : public ydk::Entity
{
    public:
        InPauseFrame();
        ~InPauseFrame();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPauseFrame


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkt64Octet : public ydk::Entity
{
    public:
        InPkt64Octet();
        ~InPkt64Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkt64Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1024To1518Octets : public ydk::Entity
{
    public:
        InPkts1024To1518Octets();
        ~InPkts1024To1518Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1024To1518Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts128To255Octets : public ydk::Entity
{
    public:
        InPkts128To255Octets();
        ~InPkts128To255Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts128To255Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1519MaxOctets : public ydk::Entity
{
    public:
        InPkts1519MaxOctets();
        ~InPkts1519MaxOctets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts256To511Octets : public ydk::Entity
{
    public:
        InPkts256To511Octets();
        ~InPkts256To511Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts256To511Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts512To1023Octets : public ydk::Entity
{
    public:
        InPkts512To1023Octets();
        ~InPkts512To1023Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts512To1023Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts65To127Octets : public ydk::Entity
{
    public:
        InPkts65To127Octets();
        ~InPkts65To127Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts65To127Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InUcastPkt : public ydk::Entity
{
    public:
        InUcastPkt();
        ~InUcastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InUcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::JabberStat : public ydk::Entity
{
    public:
        JabberStat();
        ~JabberStat();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::JabberStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::LongFramesStat : public ydk::Entity
{
    public:
        LongFramesStat();
        ~LongFramesStat();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::LongFramesStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OctetStat : public ydk::Entity
{
    public:
        OctetStat();
        ~OctetStat();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OctetStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Out8021QFrames : public ydk::Entity
{
    public:
        Out8021QFrames();
        ~Out8021QFrames();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Out8021QFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutBcastPkt : public ydk::Entity
{
    public:
        OutBcastPkt();
        ~OutBcastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutBcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropAbort : public ydk::Entity
{
    public:
        OutDropAbort();
        ~OutDropAbort();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropAbort


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropOther : public ydk::Entity
{
    public:
        OutDropOther();
        ~OutDropOther();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropUnderrun : public ydk::Entity
{
    public:
        OutDropUnderrun();
        ~OutDropUnderrun();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropUnderrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutErrorOther : public ydk::Entity
{
    public:
        OutErrorOther();
        ~OutErrorOther();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutErrorOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodBytes : public ydk::Entity
{
    public:
        OutGoodBytes();
        ~OutGoodBytes();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodBytes


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodPkts : public ydk::Entity
{
    public:
        OutGoodPkts();
        ~OutGoodPkts();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodPkts


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutMcastPkt : public ydk::Entity
{
    public:
        OutMcastPkt();
        ~OutMcastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutMcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutOctets : public ydk::Entity
{
    public:
        OutOctets();
        ~OutOctets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPauseFrames : public ydk::Entity
{
    public:
        OutPauseFrames();
        ~OutPauseFrames();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPauseFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts10241518Octets : public ydk::Entity
{
    public:
        OutPkts10241518Octets();
        ~OutPkts10241518Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts10241518Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts128255Octets : public ydk::Entity
{
    public:
        OutPkts128255Octets();
        ~OutPkts128255Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts128255Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts1519MaxOctets : public ydk::Entity
{
    public:
        OutPkts1519MaxOctets();
        ~OutPkts1519MaxOctets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts256511Octets : public ydk::Entity
{
    public:
        OutPkts256511Octets();
        ~OutPkts256511Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts256511Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts5121023Octets : public ydk::Entity
{
    public:
        OutPkts5121023Octets();
        ~OutPkts5121023Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts5121023Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts65127Octets : public ydk::Entity
{
    public:
        OutPkts65127Octets();
        ~OutPkts65127Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts65127Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutUcastPkt : public ydk::Entity
{
    public:
        OutUcastPkt();
        ~OutUcastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutUcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Outpkt64Octet : public ydk::Entity
{
    public:
        Outpkt64Octet();
        ~Outpkt64Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Outpkt64Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OversizePktStat : public ydk::Entity
{
    public:
        OversizePktStat();
        ~OversizePktStat();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OversizePktStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxPkt : public ydk::Entity
{
    public:
        RxPkt();
        ~RxPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxUtil : public ydk::Entity
{
    public:
        RxUtil();
        ~RxUtil();

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
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxUtil


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::StatPkt : public ydk::Entity
{
    public:
        StatPkt();
        ~StatPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::StatPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxBadFcs : public ydk::Entity
{
    public:
        TxBadFcs();
        ~TxBadFcs();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxBadFcs


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxFragments : public ydk::Entity
{
    public:
        TxFragments();
        ~TxFragments();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxFragments


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxJabber : public ydk::Entity
{
    public:
        TxJabber();
        ~TxJabber();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxJabber


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxOversizedPkt : public ydk::Entity
{
    public:
        TxOversizedPkt();
        ~TxOversizedPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxOversizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxPkt : public ydk::Entity
{
    public:
        TxPkt();
        ~TxPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUndersizedPkt : public ydk::Entity
{
    public:
        TxUndersizedPkt();
        ~TxUndersizedPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUtil : public ydk::Entity
{
    public:
        TxUtil();
        ~TxUtil();

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
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUtil


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories : public ydk::Entity
{
    public:
        MacsecMinute15SecyifHistories();
        ~MacsecMinute15SecyifHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15SecyifHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory> > macsec_minute15secyif_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory : public ydk::Entity
{
    public:
        MacsecMinute15SecyifHistory();
        ~MacsecMinute15SecyifHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class MacsecMinute15SecyifTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances> macsec_minute15secyif_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances : public ydk::Entity
{
    public:
        MacsecMinute15SecyifTimeLineInstances();
        ~MacsecMinute15SecyifTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15SecyifTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance> > macsec_minute15secyif_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance : public ydk::Entity
{
    public:
        MacsecMinute15SecyifTimeLineInstance();
        ~MacsecMinute15SecyifTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUntagged; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsUntagged
        class InPktsNoTag; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsNoTag
        class InPktsBadTag; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsBadTag
        class InPktsUnknownSci; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsUnknownSci
        class InPktsNoSci; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsNoSci
        class InPktsOverrun; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsOverrun
        class InOctetsValidated; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InOctetsDecrypted
        class OutPktsUntagged; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutPktsUntagged
        class OutPktsTooLong; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutPktsTooLong
        class OutOctetsProtected; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutOctetsEncrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsBadTag> in_pkts_bad_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsNoSci> in_pkts_no_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsNoTag> in_pkts_no_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsOverrun> in_pkts_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsUnknownSci> in_pkts_unknown_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsUntagged> in_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutPktsTooLong> out_pkts_too_long;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutPktsUntagged> out_pkts_untagged;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InOctetsDecrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InOctetsValidated


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsBadTag : public ydk::Entity
{
    public:
        InPktsBadTag();
        ~InPktsBadTag();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsBadTag


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsNoSci : public ydk::Entity
{
    public:
        InPktsNoSci();
        ~InPktsNoSci();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsNoSci


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsNoTag : public ydk::Entity
{
    public:
        InPktsNoTag();
        ~InPktsNoTag();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsNoTag


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsOverrun : public ydk::Entity
{
    public:
        InPktsOverrun();
        ~InPktsOverrun();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsOverrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsUnknownSci : public ydk::Entity
{
    public:
        InPktsUnknownSci();
        ~InPktsUnknownSci();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsUnknownSci


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsUntagged : public ydk::Entity
{
    public:
        InPktsUntagged();
        ~InPktsUntagged();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::InPktsUntagged


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutOctetsEncrypted : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutOctetsEncrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutOctetsProtected


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutPktsTooLong


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutPktsUntagged : public ydk::Entity
{
    public:
        OutPktsUntagged();
        ~OutPktsUntagged();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories::MacsecMinute15SecyifHistory::MacsecMinute15SecyifTimeLineInstances::MacsecMinute15SecyifTimeLineInstance::OutPktsUntagged


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories : public ydk::Entity
{
    public:
        MacsecMinute15SecyrxHistories();
        ~MacsecMinute15SecyrxHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15SecyrxHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory> > macsec_minute15secyrx_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory : public ydk::Entity
{
    public:
        MacsecMinute15SecyrxHistory();
        ~MacsecMinute15SecyrxHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class MacsecMinute15SecyrxTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances> macsec_minute15secyrx_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances : public ydk::Entity
{
    public:
        MacsecMinute15SecyrxTimeLineInstances();
        ~MacsecMinute15SecyrxTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15SecyrxTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance> > macsec_minute15secyrx_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance : public ydk::Entity
{
    public:
        MacsecMinute15SecyrxTimeLineInstance();
        ~MacsecMinute15SecyrxTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUnchecked; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsDelayed
        class InPktsLate; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsLate
        class InPktsOk; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsOk
        class InPktsInvalid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnusedSa> in_pkts_unused_sa;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsDecrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsValidated


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsDelayed : public ydk::Entity
{
    public:
        InPktsDelayed();
        ~InPktsDelayed();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsDelayed


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsInvalid : public ydk::Entity
{
    public:
        InPktsInvalid();
        ~InPktsInvalid();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsInvalid


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsLate : public ydk::Entity
{
    public:
        InPktsLate();
        ~InPktsLate();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsLate


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotUsingSa : public ydk::Entity
{
    public:
        InPktsNotUsingSa();
        ~InPktsNotUsingSa();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotUsingSa


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotValid : public ydk::Entity
{
    public:
        InPktsNotValid();
        ~InPktsNotValid();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotValid


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsOk : public ydk::Entity
{
    public:
        InPktsOk();
        ~InPktsOk();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsOk


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnchecked : public ydk::Entity
{
    public:
        InPktsUnchecked();
        ~InPktsUnchecked();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnchecked


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUntaggedHit : public ydk::Entity
{
    public:
        InPktsUntaggedHit();
        ~InPktsUntaggedHit();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUntaggedHit


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnusedSa : public ydk::Entity
{
    public:
        InPktsUnusedSa();
        ~InPktsUnusedSa();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnusedSa


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories : public ydk::Entity
{
    public:
        MacsecMinute15SecytxHistories();
        ~MacsecMinute15SecytxHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15SecytxHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory> > macsec_minute15secytx_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory : public ydk::Entity
{
    public:
        MacsecMinute15SecytxHistory();
        ~MacsecMinute15SecytxHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class MacsecMinute15SecytxTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances> macsec_minute15secytx_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances : public ydk::Entity
{
    public:
        MacsecMinute15SecytxTimeLineInstances();
        ~MacsecMinute15SecytxTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15SecytxTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance> > macsec_minute15secytx_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance : public ydk::Entity
{
    public:
        MacsecMinute15SecytxTimeLineInstance();
        ~MacsecMinute15SecytxTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class OutPktsProtected; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsProtected
        class OutPktsEncrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsEncrypted
        class OutOctetsProtected; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutOctetsEncrypted
        class OutPktsTooLong; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsTooLong

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsEncrypted> out_pkts_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsProtected> out_pkts_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsTooLong> out_pkts_too_long;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutOctetsEncrypted : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutOctetsEncrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutOctetsProtected


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsEncrypted : public ydk::Entity
{
    public:
        OutPktsEncrypted();
        ~OutPktsEncrypted();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsEncrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsProtected : public ydk::Entity
{
    public:
        OutPktsProtected();
        ~OutPktsProtected();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsProtected


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories::MacsecMinute15SecytxHistory::MacsecMinute15SecytxTimeLineInstances::MacsecMinute15SecytxTimeLineInstance::OutPktsTooLong


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History : public ydk::Entity
{
    public:
        MacsecSecond30History();
        ~MacsecSecond30History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30SecyrxHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories
        class MacsecSecond30EtherHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories
        class MacsecSecond30SecytxHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories
        class MacsecSecond30SecyifHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories> macsec_second30_ether_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories> macsec_second30secyif_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories> macsec_second30secyrx_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories> macsec_second30secytx_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories : public ydk::Entity
{
    public:
        MacsecSecond30EtherHistories();
        ~MacsecSecond30EtherHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30EtherHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory> > macsec_second30_ether_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory : public ydk::Entity
{
    public:
        MacsecSecond30EtherHistory();
        ~MacsecSecond30EtherHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class MacsecSecond30EtherTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances> macsec_second30_ether_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances : public ydk::Entity
{
    public:
        MacsecSecond30EtherTimeLineInstances();
        ~MacsecSecond30EtherTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30EtherTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance> > macsec_second30_ether_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance : public ydk::Entity
{
    public:
        MacsecSecond30EtherTimeLineInstance();
        ~MacsecSecond30EtherTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt
        class StatPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt
        class OctetStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat
        class OversizePktStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat
        class JabberStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat
        class Ether64Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt
        class InMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMcastPkt
        class InBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt
        class TxPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt
        class IfInErrors; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::IfInErrors
        class IfInOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets
        class InPauseFrame; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPauseFrame
        class InGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InGoodBytes
        class In8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::In8021QFrames
        class InPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InGoodPkts
        class InDropOverrun; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropOverrun
        class InDropAbort; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropOther
        class InMibGiant; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibGiant
        class InMibJabber; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibJabber
        class InMibcrc; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibcrc
        class InErrorCollisions; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes
        class Out8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames
        class OutPauseFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort
        class OutDropOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther
        class OutErrorOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther
        class InErrorGiant; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorGiant
        class InErrorRunt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorFragments
        class InErrorOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorOther
        class InPkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts1024To1518Octets
        class Outpkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet
        class OutPkts65127Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil
        class TxUtil; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt
        class TxFragments; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments
        class TxJabber; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber
        class TxBadFcs; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::In8021QFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs> tx_bad_fcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil> tx_util;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether10241518Octet : public ydk::Entity
{
    public:
        Ether10241518Octet();
        ~Ether10241518Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether10241518Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether128255Octet : public ydk::Entity
{
    public:
        Ether128255Octet();
        ~Ether128255Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether128255Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether256511Octet : public ydk::Entity
{
    public:
        Ether256511Octet();
        ~Ether256511Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether256511Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether5121023Octet : public ydk::Entity
{
    public:
        Ether5121023Octet();
        ~Ether5121023Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether5121023Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether64Octets : public ydk::Entity
{
    public:
        Ether64Octets();
        ~Ether64Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether64Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether65127Octet : public ydk::Entity
{
    public:
        Ether65127Octet();
        ~Ether65127Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Ether65127Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatBroadcastPkt : public ydk::Entity
{
    public:
        EtherStatBroadcastPkt();
        ~EtherStatBroadcastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatBroadcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatMulticastPkt : public ydk::Entity
{
    public:
        EtherStatMulticastPkt();
        ~EtherStatMulticastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatMulticastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatUndersizedPkt : public ydk::Entity
{
    public:
        EtherStatUndersizedPkt();
        ~EtherStatUndersizedPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::EtherStatUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::FcsErrorsStat : public ydk::Entity
{
    public:
        FcsErrorsStat();
        ~FcsErrorsStat();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::FcsErrorsStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::IfInErrors : public ydk::Entity
{
    public:
        IfInErrors();
        ~IfInErrors();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::IfInErrors


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::IfInOctets : public ydk::Entity
{
    public:
        IfInOctets();
        ~IfInOctets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::IfInOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::In8021QFrames : public ydk::Entity
{
    public:
        In8021QFrames();
        ~In8021QFrames();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::In8021QFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InBcastPkt : public ydk::Entity
{
    public:
        InBcastPkt();
        ~InBcastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InBcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropAbort : public ydk::Entity
{
    public:
        InDropAbort();
        ~InDropAbort();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropAbort


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidDmac : public ydk::Entity
{
    public:
        InDropInvalidDmac();
        ~InDropInvalidDmac();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidDmac


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidEncap : public ydk::Entity
{
    public:
        InDropInvalidEncap();
        ~InDropInvalidEncap();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidEncap


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidVlan : public ydk::Entity
{
    public:
        InDropInvalidVlan();
        ~InDropInvalidVlan();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropInvalidVlan


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropOther : public ydk::Entity
{
    public:
        InDropOther();
        ~InDropOther();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropOverrun : public ydk::Entity
{
    public:
        InDropOverrun();
        ~InDropOverrun();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InDropOverrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorCollisions : public ydk::Entity
{
    public:
        InErrorCollisions();
        ~InErrorCollisions();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorCollisions


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorFragments : public ydk::Entity
{
    public:
        InErrorFragments();
        ~InErrorFragments();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorFragments


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorGiant : public ydk::Entity
{
    public:
        InErrorGiant();
        ~InErrorGiant();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorGiant


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorJabbers : public ydk::Entity
{
    public:
        InErrorJabbers();
        ~InErrorJabbers();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorJabbers


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorOther : public ydk::Entity
{
    public:
        InErrorOther();
        ~InErrorOther();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorRunt : public ydk::Entity
{
    public:
        InErrorRunt();
        ~InErrorRunt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorRunt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorSymbol : public ydk::Entity
{
    public:
        InErrorSymbol();
        ~InErrorSymbol();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InErrorSymbol


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InGoodBytes : public ydk::Entity
{
    public:
        InGoodBytes();
        ~InGoodBytes();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InGoodBytes


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InGoodPkts : public ydk::Entity
{
    public:
        InGoodPkts();
        ~InGoodPkts();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InGoodPkts


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMcastPkt : public ydk::Entity
{
    public:
        InMcastPkt();
        ~InMcastPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibGiant : public ydk::Entity
{
    public:
        InMibGiant();
        ~InMibGiant();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibGiant


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibJabber : public ydk::Entity
{
    public:
        InMibJabber();
        ~InMibJabber();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibJabber


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibcrc : public ydk::Entity
{
    public:
        InMibcrc();
        ~InMibcrc();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InMibcrc


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPauseFrame : public ydk::Entity
{
    public:
        InPauseFrame();
        ~InPauseFrame();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPauseFrame


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkt64Octet : public ydk::Entity
{
    public:
        InPkt64Octet();
        ~InPkt64Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkt64Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts1024To1518Octets : public ydk::Entity
{
    public:
        InPkts1024To1518Octets();
        ~InPkts1024To1518Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts1024To1518Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts128To255Octets : public ydk::Entity
{
    public:
        InPkts128To255Octets();
        ~InPkts128To255Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts128To255Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts1519MaxOctets : public ydk::Entity
{
    public:
        InPkts1519MaxOctets();
        ~InPkts1519MaxOctets();

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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts1519MaxOctets


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_11_ */

