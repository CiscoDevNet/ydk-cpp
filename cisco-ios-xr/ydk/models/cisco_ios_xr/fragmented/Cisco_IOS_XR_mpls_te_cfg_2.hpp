#ifndef _CISCO_IOS_XR_MPLS_TE_CFG_2_
#define _CISCO_IOS_XR_MPLS_TE_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_cfg_0.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {


class MplsTe::GmplsNni::TunnelHeads : public ydk::Entity
{
    public:
        TunnelHeads();
        ~TunnelHeads();

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

        class TunnelHead; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead

        ydk::YList tunnel_head;
        
}; // MplsTe::GmplsNni::TunnelHeads


class MplsTe::GmplsNni::TunnelHeads::TunnelHead : public ydk::Entity
{
    public:
        TunnelHead();
        ~TunnelHead();

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

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf announce_srlg; //type: empty
        ydk::YLeaf restore_lsp_shutdown; //type: empty
        ydk::YLeaf current_lsp_shutdown; //type: empty
        ydk::YLeaf path_selection_metric; //type: MplsTePathSelectionMetric
        ydk::YLeaf payload; //type: OtnPayload
        ydk::YLeaf standby_lsp_shutdown; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf path_protection_attribute_set_profile; //type: string
        ydk::YLeaf record_route; //type: empty
        ydk::YLeaf signalled_name; //type: string
        class SignalledBandwidth; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth
        class Destination; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination
        class ProtectionSwitching; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching
        class Logging; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging
        class PathOptions; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions
        class StaticUni; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth> signalled_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination> destination;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching> protection_switching;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions> path_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni> static_uni;
        
}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth : public ydk::Entity
{
    public:
        SignalledBandwidth();
        ~SignalledBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signalled_bandwidth_type; //type: OtnSignaledBandwidth
        ydk::YLeaf bitrate; //type: uint32
        ydk::YLeaf od_uflex_framing_type; //type: OtnSignaledBandwidthFlexFraming

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf destination_type; //type: OtnDestination
        ydk::YLeaf interface_if_index; //type: uint32

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching : public ydk::Entity
{
    public:
        ProtectionSwitching();
        ~ProtectionSwitching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lockout; //type: OtnProtectionSwitchLockout

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_message; //type: empty
        ydk::YLeaf homepath_state_message; //type: empty
        ydk::YLeaf signalling_state_message; //type: empty
        ydk::YLeaf path_change_message; //type: empty
        ydk::YLeaf static_cross_connect_message; //type: empty
        ydk::YLeaf tunnel_state_message; //type: empty
        ydk::YLeaf insufficient_bw_message; //type: empty

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions : public ydk::Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathOption; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption

        ydk::YList path_option;
        
}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preference_level; //type: uint32
        ydk::YLeaf path_type; //type: MplsTePathOption
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_name; //type: string
        ydk::YLeaf protected_by_preference_level; //type: uint32
        ydk::YLeaf restore_by_preference_level; //type: uint32
        ydk::YLeaf xro_type; //type: empty
        ydk::YLeaf xro_attribute_set_name; //type: string
        ydk::YLeaf affinity_attribute_set_name; //type: string
        ydk::YLeaf lockdown; //type: MplsTePathOptionProperty

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni : public ydk::Entity
{
    public:
        StaticUni();
        ~StaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ingress_controller_name; //type: string
        ydk::YLeaf egress_controller_if_index; //type: uint32
        ydk::YLeaf ingress_type; //type: OtnStaticUni
        ydk::YLeaf egress_type; //type: OtnStaticUni

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni


class MplsTe::Lcac : public ydk::Entity
{
    public:
        Lcac();
        ~Lcac();

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

        ydk::YLeaf bandwidth_hold_timer; //type: uint32
        ydk::YLeaf delay_preempt_bundle_capacity_timer; //type: uint32
        ydk::YLeaf periodic_flooding_timer; //type: uint32
        class Bfd; //type: MplsTe::Lcac::Bfd
        class FloodingThreshold; //type: MplsTe::Lcac::FloodingThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::FloodingThreshold> flooding_threshold;
        
}; // MplsTe::Lcac


class MplsTe::Lcac::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // MplsTe::Lcac::Bfd


class MplsTe::Lcac::FloodingThreshold : public ydk::Entity
{
    public:
        FloodingThreshold();
        ~FloodingThreshold();

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

        ydk::YLeaf up_stream; //type: uint32
        ydk::YLeaf down_stream; //type: uint32

}; // MplsTe::Lcac::FloodingThreshold


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_CFG_2_ */

