#ifndef _CISCO_IOS_XR_PMENGINE_OPER_12_
#define _CISCO_IOS_XR_PMENGINE_OPER_12_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_10.hpp"
#include "Cisco_IOS_XR_pmengine_oper_11.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts256To511Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts512To1023Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InPkts65To127Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::InUcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::JabberStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::LongFramesStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OctetStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Out8021QFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutBcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropAbort


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutDropUnderrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutErrorOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodBytes


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutGoodPkts


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutMcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPauseFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts10241518Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts128255Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts256511Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts5121023Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutPkts65127Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OutUcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::Outpkt64Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::OversizePktStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::RxUtil


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::StatPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxBadFcs


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxFragments


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxJabber


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxOversizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30EtherHistories::MacsecSecond30EtherHistory::MacsecSecond30EtherTimeLineInstances::MacsecSecond30EtherTimeLineInstance::TxUtil


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories : public ydk::Entity
{
    public:
        MacsecSecond30SecyifHistories();
        ~MacsecSecond30SecyifHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30SecyifHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory> > macsec_second30secyif_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory : public ydk::Entity
{
    public:
        MacsecSecond30SecyifHistory();
        ~MacsecSecond30SecyifHistory();

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
        class MacsecSecond30SecyifTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances> macsec_second30secyif_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances : public ydk::Entity
{
    public:
        MacsecSecond30SecyifTimeLineInstances();
        ~MacsecSecond30SecyifTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30SecyifTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance> > macsec_second30secyif_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance : public ydk::Entity
{
    public:
        MacsecSecond30SecyifTimeLineInstance();
        ~MacsecSecond30SecyifTimeLineInstance();

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
        class InPktsUntagged; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged
        class InPktsNoTag; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag
        class InPktsBadTag; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag
        class InPktsUnknownSci; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci
        class InPktsNoSci; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci
        class InPktsOverrun; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun
        class InOctetsValidated; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted
        class OutPktsUntagged; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged
        class OutPktsTooLong; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong
        class OutOctetsProtected; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag> in_pkts_bad_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci> in_pkts_no_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag> in_pkts_no_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun> in_pkts_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci> in_pkts_unknown_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged> in_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong> out_pkts_too_long;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged> out_pkts_untagged;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsDecrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InOctetsValidated


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsBadTag


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoSci


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsNoTag


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsOverrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUnknownSci


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::InPktsUntagged


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsEncrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutOctetsProtected


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsTooLong


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyifHistories::MacsecSecond30SecyifHistory::MacsecSecond30SecyifTimeLineInstances::MacsecSecond30SecyifTimeLineInstance::OutPktsUntagged


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories : public ydk::Entity
{
    public:
        MacsecSecond30SecyrxHistories();
        ~MacsecSecond30SecyrxHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30SecyrxHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory> > macsec_second30secyrx_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory : public ydk::Entity
{
    public:
        MacsecSecond30SecyrxHistory();
        ~MacsecSecond30SecyrxHistory();

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
        class MacsecSecond30SecyrxTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances> macsec_second30secyrx_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances : public ydk::Entity
{
    public:
        MacsecSecond30SecyrxTimeLineInstances();
        ~MacsecSecond30SecyrxTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30SecyrxTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance> > macsec_second30secyrx_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance : public ydk::Entity
{
    public:
        MacsecSecond30SecyrxTimeLineInstance();
        ~MacsecSecond30SecyrxTimeLineInstance();

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
        class InPktsUnchecked; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed
        class InPktsLate; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate
        class InPktsOk; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk
        class InPktsInvalid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa> in_pkts_unused_sa;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsDecrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InOctetsValidated


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsDelayed


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsInvalid


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsLate


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotUsingSa


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsNotValid


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsOk


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnchecked


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUntaggedHit


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecyrxHistories::MacsecSecond30SecyrxHistory::MacsecSecond30SecyrxTimeLineInstances::MacsecSecond30SecyrxTimeLineInstance::InPktsUnusedSa


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories : public ydk::Entity
{
    public:
        MacsecSecond30SecytxHistories();
        ~MacsecSecond30SecytxHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30SecytxHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory> > macsec_second30secytx_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory : public ydk::Entity
{
    public:
        MacsecSecond30SecytxHistory();
        ~MacsecSecond30SecytxHistory();

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
        class MacsecSecond30SecytxTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances> macsec_second30secytx_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances : public ydk::Entity
{
    public:
        MacsecSecond30SecytxTimeLineInstances();
        ~MacsecSecond30SecytxTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30SecytxTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance> > macsec_second30secytx_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance : public ydk::Entity
{
    public:
        MacsecSecond30SecytxTimeLineInstance();
        ~MacsecSecond30SecytxTimeLineInstance();

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
        class OutPktsProtected; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected
        class OutPktsEncrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted
        class OutOctetsProtected; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted
        class OutPktsTooLong; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted> out_pkts_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected> out_pkts_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong> out_pkts_too_long;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsEncrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutOctetsProtected


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsEncrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsProtected


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History::MacsecSecond30SecytxHistories::MacsecSecond30SecytxHistory::MacsecSecond30SecytxTimeLineInstances::MacsecSecond30SecytxTimeLineInstance::OutPktsTooLong


class PerformanceManagementHistory::Global::Periodic::OcHistory : public ydk::Entity
{
    public:
        OcHistory();
        ~OcHistory();

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

        class OcPortHistories; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories> oc_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories : public ydk::Entity
{
    public:
        OcPortHistories();
        ~OcPortHistories();

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

        class OcPortHistory; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory> > oc_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory : public ydk::Entity
{
    public:
        OcPortHistory();
        ~OcPortHistory();

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
        class OcHour24History; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History
        class OcMinute15History; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History> oc_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History> oc_minute15_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History : public ydk::Entity
{
    public:
        OcHour24History();
        ~OcHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24OcnHistories; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories> oc_hour24ocn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories : public ydk::Entity
{
    public:
        OcHour24OcnHistories();
        ~OcHour24OcnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24OcnHistory; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory> > oc_hour24ocn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory : public ydk::Entity
{
    public:
        OcHour24OcnHistory();
        ~OcHour24OcnHistory();

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
        class OcHour24OcnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances> oc_hour24ocn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances : public ydk::Entity
{
    public:
        OcHour24OcnTimeLineInstances();
        ~OcHour24OcnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24OcnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance> > oc_hour24ocn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance : public ydk::Entity
{
    public:
        OcHour24OcnTimeLineInstance();
        ~OcHour24OcnTimeLineInstance();

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
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Section; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine> fe_line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section> section;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine : public ydk::Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs : public ydk::Entity
{
    public:
        FarEndLineCVs();
        ~FarEndLineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs : public ydk::Entity
{
    public:
        FarEndLineFcLs();
        ~FarEndLineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line_status; //type: int32
        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs
        class LineCVs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs> line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs> line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs : public ydk::Entity
{
    public:
        LineCVs();
        ~LineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs : public ydk::Entity
{
    public:
        LineESs();
        ~LineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs : public ydk::Entity
{
    public:
        LineFcLs();
        ~LineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs : public ydk::Entity
{
    public:
        LineSeSs();
        ~LineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs : public ydk::Entity
{
    public:
        LineUaSs();
        ~LineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf section_status; //type: int32
        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs> section_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs> section_sef_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs : public ydk::Entity
{
    public:
        SectionCVs();
        ~SectionCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs : public ydk::Entity
{
    public:
        SectionESs();
        ~SectionESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs : public ydk::Entity
{
    public:
        SectionSeSs();
        ~SectionSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs : public ydk::Entity
{
    public:
        SectionSefSs();
        ~SectionSefSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History : public ydk::Entity
{
    public:
        OcMinute15History();
        ~OcMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcMinute15OcnHistories; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories> oc_minute15ocn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories : public ydk::Entity
{
    public:
        OcMinute15OcnHistories();
        ~OcMinute15OcnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcMinute15OcnHistory; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory> > oc_minute15ocn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory : public ydk::Entity
{
    public:
        OcMinute15OcnHistory();
        ~OcMinute15OcnHistory();

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
        class OcMinute15OcnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances> oc_minute15ocn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances : public ydk::Entity
{
    public:
        OcMinute15OcnTimeLineInstances();
        ~OcMinute15OcnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcMinute15OcnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance> > oc_minute15ocn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance : public ydk::Entity
{
    public:
        OcMinute15OcnTimeLineInstance();
        ~OcMinute15OcnTimeLineInstance();

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
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Section; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine> fe_line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section> section;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine : public ydk::Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs : public ydk::Entity
{
    public:
        FarEndLineCVs();
        ~FarEndLineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs : public ydk::Entity
{
    public:
        FarEndLineFcLs();
        ~FarEndLineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line_status; //type: int32
        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs
        class LineCVs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs> line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs> line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs : public ydk::Entity
{
    public:
        LineCVs();
        ~LineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs : public ydk::Entity
{
    public:
        LineESs();
        ~LineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs : public ydk::Entity
{
    public:
        LineFcLs();
        ~LineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs : public ydk::Entity
{
    public:
        LineSeSs();
        ~LineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs : public ydk::Entity
{
    public:
        LineUaSs();
        ~LineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf section_status; //type: int32
        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs> section_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs> section_sef_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs : public ydk::Entity
{
    public:
        SectionCVs();
        ~SectionCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs : public ydk::Entity
{
    public:
        SectionESs();
        ~SectionESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs : public ydk::Entity
{
    public:
        SectionSeSs();
        ~SectionSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs : public ydk::Entity
{
    public:
        SectionSefSs();
        ~SectionSefSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory> > odu_port_history;
        
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

        class OduHour24GfpHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories
        class OduHour24PrbsHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories
        class OduHour24OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories> odu_hour24gfp_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories> odu_hour24otn_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories> odu_hour24prbs_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories : public ydk::Entity
{
    public:
        OduHour24GfpHistories();
        ~OduHour24GfpHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24GfpHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory> > odu_hour24gfp_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory : public ydk::Entity
{
    public:
        OduHour24GfpHistory();
        ~OduHour24GfpHistory();

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
        class OduHour24GfpTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances> odu_hour24gfp_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances : public ydk::Entity
{
    public:
        OduHour24GfpTimeLineInstances();
        ~OduHour24GfpTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24GfpTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance> > odu_hour24gfp_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance : public ydk::Entity
{
    public:
        OduHour24GfpTimeLineInstance();
        ~OduHour24GfpTimeLineInstance();

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
        class RxBitErr; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr
        class RxInvTyp; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp
        class RxCrc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc
        class RxLfd; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd
        class RxCsf; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr> rx_bit_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc> rx_crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf> rx_csf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp> rx_inv_typ;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd> rx_lfd;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories : public ydk::Entity
{
    public:
        OduHour24OtnHistories();
        ~OduHour24OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory> > odu_hour24otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory : public ydk::Entity
{
    public:
        OduHour24OtnHistory();
        ~OduHour24OtnHistory();

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
        class OduHour24OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances> odu_hour24otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances : public ydk::Entity
{
    public:
        OduHour24OtnTimeLineInstances();
        ~OduHour24OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance> > odu_hour24otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance : public ydk::Entity
{
    public:
        OduHour24OtnTimeLineInstance();
        ~OduHour24OtnTimeLineInstance();

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
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe> uas_ne;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_12_ */

