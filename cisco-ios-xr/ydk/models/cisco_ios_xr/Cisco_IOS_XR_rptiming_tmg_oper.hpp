#ifndef _CISCO_IOS_XR_RPTIMING_TMG_OPER_
#define _CISCO_IOS_XR_RPTIMING_TMG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_rptiming_tmg_oper {

class TimingCard : public ydk::Entity
{
    public:
        TimingCard();
        ~TimingCard();

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

        class Nodes; //type: TimingCard::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rptiming_tmg_oper::TimingCard::Nodes> nodes;
        
}; // TimingCard


class TimingCard::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: TimingCard::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rptiming_tmg_oper::TimingCard::Nodes::Node> > node;
        
}; // TimingCard::Nodes


class TimingCard::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class InputClock; //type: TimingCard::Nodes::Node::InputClock
        class Pll; //type: TimingCard::Nodes::Node::Pll

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rptiming_tmg_oper::TimingCard::Nodes::Node::InputClock> input_clock;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rptiming_tmg_oper::TimingCard::Nodes::Node::Pll> pll;
        
}; // TimingCard::Nodes::Node


class TimingCard::Nodes::Node::InputClock : public ydk::Entity
{
    public:
        InputClock();
        ~InputClock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ic1_valid; //type: boolean
        ydk::YLeaf ic2_valid; //type: boolean
        ydk::YLeaf ic3_valid; //type: boolean
        ydk::YLeaf ic4_valid; //type: boolean
        ydk::YLeaf ic5_valid; //type: boolean
        ydk::YLeaf ic6_valid; //type: boolean
        ydk::YLeaf ic7_valid; //type: boolean
        ydk::YLeaf ic8_valid; //type: boolean
        ydk::YLeaf ic9_valid; //type: boolean
        ydk::YLeaf ic10_valid; //type: boolean
        ydk::YLeaf ic11_valid; //type: boolean
        ydk::YLeaf ic1_slot; //type: string
        ydk::YLeaf ic2_slot; //type: string
        ydk::YLeaf ic3_slot; //type: string
        ydk::YLeaf ic4_slot; //type: string
        ydk::YLeaf ic5_slot; //type: string
        ydk::YLeaf ic6_slot; //type: string
        ydk::YLeaf ic7_slot; //type: string
        ydk::YLeaf ic8_slot; //type: string
        ydk::YLeaf ic9_slot; //type: string
        ydk::YLeaf ic10_slot; //type: string
        ydk::YLeaf ic11_slot; //type: string
        ydk::YLeaf ic1_split_xom; //type: string
        ydk::YLeaf ic2_split_xom; //type: string
        ydk::YLeaf ic3_split_xom; //type: string
        ydk::YLeaf ic4_split_xom; //type: string
        ydk::YLeaf ic5_split_xom; //type: string
        ydk::YLeaf ic6_split_xom; //type: string
        ydk::YLeaf ic7_split_xom; //type: string
        ydk::YLeaf ic8_split_xom; //type: string
        ydk::YLeaf ic9_split_xom; //type: string
        ydk::YLeaf ic10_split_xom; //type: string
        ydk::YLeaf ic11_split_xom; //type: string
        ydk::YLeaf ic1_eppsm; //type: string
        ydk::YLeaf ic2_eppsm; //type: string
        ydk::YLeaf ic3_eppsm; //type: string
        ydk::YLeaf ic4_eppsm; //type: string
        ydk::YLeaf ic5_eppsm; //type: string
        ydk::YLeaf ic6_eppsm; //type: string
        ydk::YLeaf ic7_eppsm; //type: string
        ydk::YLeaf ic8_eppsm; //type: string
        ydk::YLeaf ic9_eppsm; //type: string
        ydk::YLeaf ic10_eppsm; //type: string
        ydk::YLeaf ic11_eppsm; //type: string
        ydk::YLeaf ic1_pfm; //type: string
        ydk::YLeaf ic2_pfm; //type: string
        ydk::YLeaf ic3_pfm; //type: string
        ydk::YLeaf ic4_pfm; //type: string
        ydk::YLeaf ic5_pfm; //type: string
        ydk::YLeaf ic6_pfm; //type: string
        ydk::YLeaf ic7_pfm; //type: string
        ydk::YLeaf ic8_pfm; //type: string
        ydk::YLeaf ic9_pfm; //type: string
        ydk::YLeaf ic10_pfm; //type: string
        ydk::YLeaf ic11_pfm; //type: string
        ydk::YLeaf ic1_gst; //type: string
        ydk::YLeaf ic2_gst; //type: string
        ydk::YLeaf ic3_gst; //type: string
        ydk::YLeaf ic4_gst; //type: string
        ydk::YLeaf ic5_gst; //type: string
        ydk::YLeaf ic6_gst; //type: string
        ydk::YLeaf ic7_gst; //type: string
        ydk::YLeaf ic8_gst; //type: string
        ydk::YLeaf ic9_gst; //type: string
        ydk::YLeaf ic10_gst; //type: string
        ydk::YLeaf ic11_gst; //type: string
        ydk::YLeaf ic1_cfm; //type: string
        ydk::YLeaf ic2_cfm; //type: string
        ydk::YLeaf ic3_cfm; //type: string
        ydk::YLeaf ic4_cfm; //type: string
        ydk::YLeaf ic5_cfm; //type: string
        ydk::YLeaf ic6_cfm; //type: string
        ydk::YLeaf ic7_cfm; //type: string
        ydk::YLeaf ic8_cfm; //type: string
        ydk::YLeaf ic9_cfm; //type: string
        ydk::YLeaf ic10_cfm; //type: string
        ydk::YLeaf ic11_cfm; //type: string
        ydk::YLeaf ic1_scm; //type: string
        ydk::YLeaf ic2_scm; //type: string
        ydk::YLeaf ic3_scm; //type: string
        ydk::YLeaf ic4_scm; //type: string
        ydk::YLeaf ic5_scm; //type: string
        ydk::YLeaf ic6_scm; //type: string
        ydk::YLeaf ic7_scm; //type: string
        ydk::YLeaf ic8_scm; //type: string
        ydk::YLeaf ic9_scm; //type: string
        ydk::YLeaf ic10_scm; //type: string
        ydk::YLeaf ic11_scm; //type: string
        ydk::YLeaf ic1_los; //type: string
        ydk::YLeaf ic2_los; //type: string
        ydk::YLeaf ic3_los; //type: string
        ydk::YLeaf ic4_los; //type: string
        ydk::YLeaf ic5_los; //type: string
        ydk::YLeaf ic6_los; //type: string
        ydk::YLeaf ic7_los; //type: string
        ydk::YLeaf ic8_los; //type: string
        ydk::YLeaf ic9_los; //type: string
        ydk::YLeaf ic10_los; //type: string
        ydk::YLeaf ic11_los; //type: string

}; // TimingCard::Nodes::Node::InputClock


class TimingCard::Nodes::Node::Pll : public ydk::Entity
{
    public:
        Pll();
        ~Pll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf t0_pll_state; //type: string
        ydk::YLeaf t4_pll_state; //type: string
        ydk::YLeaf ptp_pll_state; //type: string
        ydk::YLeaf t0_pll_selected; //type: string
        ydk::YLeaf t4_pll_selected; //type: string
        ydk::YLeaf ptp_pll_selected; //type: string
        ydk::YLeaf t0_pll_mode; //type: string
        ydk::YLeaf t4_pll_mode; //type: string
        ydk::YLeaf ptp_pll_mode; //type: string
        ydk::YLeaf t0_pll_ic1_prio; //type: uint8
        ydk::YLeaf t0_pll_ic2_prio; //type: uint8
        ydk::YLeaf t0_pll_ic3_prio; //type: uint8
        ydk::YLeaf t0_pll_ic4_prio; //type: uint8
        ydk::YLeaf t0_pll_ic5_prio; //type: uint8
        ydk::YLeaf t0_pll_ic6_prio; //type: uint8
        ydk::YLeaf t0_pll_ic7_prio; //type: uint8
        ydk::YLeaf t0_pll_ic8_prio; //type: uint8
        ydk::YLeaf t0_pll_ic9_prio; //type: uint8
        ydk::YLeaf t0_pll_ic10_prio; //type: uint8
        ydk::YLeaf t0_pll_ic11_prio; //type: uint8
        ydk::YLeaf t4_pll_ic1_prio; //type: uint8
        ydk::YLeaf t4_pll_ic2_prio; //type: uint8
        ydk::YLeaf t4_pll_ic3_prio; //type: uint8
        ydk::YLeaf t4_pll_ic4_prio; //type: uint8
        ydk::YLeaf t4_pll_ic5_prio; //type: uint8
        ydk::YLeaf t4_pll_ic6_prio; //type: uint8
        ydk::YLeaf t4_pll_ic7_prio; //type: uint8
        ydk::YLeaf t4_pll_ic8_prio; //type: uint8
        ydk::YLeaf t4_pll_ic9_prio; //type: uint8
        ydk::YLeaf t4_pll_ic10_prio; //type: uint8
        ydk::YLeaf t4_pll_ic11_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic1_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic2_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic3_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic4_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic5_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic6_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic7_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic8_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic9_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic10_prio; //type: uint8
        ydk::YLeaf ptp_pll_ic11_prio; //type: uint8
        ydk::YLeaf ic1_valid; //type: boolean
        ydk::YLeaf ic2_valid; //type: boolean
        ydk::YLeaf ic3_valid; //type: boolean
        ydk::YLeaf ic4_valid; //type: boolean
        ydk::YLeaf ic5_valid; //type: boolean
        ydk::YLeaf ic6_valid; //type: boolean
        ydk::YLeaf ic7_valid; //type: boolean
        ydk::YLeaf ic8_valid; //type: boolean
        ydk::YLeaf ic9_valid; //type: boolean
        ydk::YLeaf ic10_valid; //type: boolean
        ydk::YLeaf ic11_valid; //type: boolean
        ydk::YLeaf t0_pll_freq_offset; //type: int32
        ydk::YLeaf t4_pll_freq_offset; //type: int32
        ydk::YLeaf ptp_pll_freq_offset; //type: int32
        ydk::YLeaf t0_pll_bandwidth; //type: string
        ydk::YLeaf t4_pll_bandwidth; //type: string
        ydk::YLeaf ptp_pll_bandwidth; //type: string
        ydk::YLeaf t0_pll_psl; //type: string
        ydk::YLeaf t4_pll_psl; //type: string
        ydk::YLeaf ptp_pll_psl; //type: string
        ydk::YLeaf ic1_qual_min; //type: string
        ydk::YLeaf ic1_qual_max; //type: string
        ydk::YLeaf ic2_qual_min; //type: string
        ydk::YLeaf ic2_qual_max; //type: string
        ydk::YLeaf ic3_qual_min; //type: string
        ydk::YLeaf ic3_qual_max; //type: string
        ydk::YLeaf ic4_qual_min; //type: string
        ydk::YLeaf ic4_qual_max; //type: string
        ydk::YLeaf ic5_qual_min; //type: string
        ydk::YLeaf ic5_qual_max; //type: string
        ydk::YLeaf ic6_qual_min; //type: string
        ydk::YLeaf ic6_qual_max; //type: string
        ydk::YLeaf ic7_qual_min; //type: string
        ydk::YLeaf ic7_qual_max; //type: string
        ydk::YLeaf ic8_qual_min; //type: string
        ydk::YLeaf ic8_qual_max; //type: string
        ydk::YLeaf ic9_qual_min; //type: string
        ydk::YLeaf ic9_qual_max; //type: string
        ydk::YLeaf ic10_qual_min; //type: string
        ydk::YLeaf ic10_qual_max; //type: string
        ydk::YLeaf ic11_qual_min; //type: string
        ydk::YLeaf ic11_qual_max; //type: string

}; // TimingCard::Nodes::Node::Pll


}
}

#endif /* _CISCO_IOS_XR_RPTIMING_TMG_OPER_ */

