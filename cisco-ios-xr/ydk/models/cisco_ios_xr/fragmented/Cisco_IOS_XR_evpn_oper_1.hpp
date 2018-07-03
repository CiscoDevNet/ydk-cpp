#ifndef _CISCO_IOS_XR_EVPN_OPER_1_
#define _CISCO_IOS_XR_EVPN_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_evpn_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_evpn_oper {


class Evpn::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class EvpnGroups; //type: Evpn::Standby::EvpnGroups
        class Client; //type: Evpn::Standby::Client
        class Evis; //type: Evpn::Standby::Evis
        class Summary; //type: Evpn::Standby::Summary
        class EviDetail; //type: Evpn::Standby::EviDetail
        class InternalLabels; //type: Evpn::Standby::InternalLabels
        class EthernetSegments; //type: Evpn::Standby::EthernetSegments
        class AcIds; //type: Evpn::Standby::AcIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EvpnGroups> evpn_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Client> client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Evis> evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail> evi_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::InternalLabels> internal_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments> ethernet_segments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::AcIds> ac_ids;
        
}; // Evpn::Standby


class Evpn::Standby::EvpnGroups : public ydk::Entity
{
    public:
        EvpnGroups();
        ~EvpnGroups();

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

        class EvpnGroup; //type: Evpn::Standby::EvpnGroups::EvpnGroup

        ydk::YList evpn_group;
        
}; // Evpn::Standby::EvpnGroups


class Evpn::Standby::EvpnGroups::EvpnGroup : public ydk::Entity
{
    public:
        EvpnGroup();
        ~EvpnGroup();

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

        ydk::YLeaf group_number; //type: uint32
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf state; //type: EvpnGrp
        class CoreInterface; //type: Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface
        class AccessInterface; //type: Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface

        ydk::YList core_interface;
        ydk::YList access_interface;
        
}; // Evpn::Standby::EvpnGroups::EvpnGroup


class Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface : public ydk::Entity
{
    public:
        CoreInterface();
        ~CoreInterface();

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
        ydk::YLeaf state; //type: ImStateEnum

}; // Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface


class Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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
        ydk::YLeaf state; //type: ImStateEnum

}; // Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface


class Evpn::Standby::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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


}; // Evpn::Standby::Client


class Evpn::Standby::Evis : public ydk::Entity
{
    public:
        Evis();
        ~Evis();

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

        class Evi; //type: Evpn::Standby::Evis::Evi

        ydk::YList evi;
        
}; // Evpn::Standby::Evis


class Evpn::Standby::Evis::Evi : public ydk::Entity
{
    public:
        Evi();
        ~Evi();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::Evis::Evi


class Evpn::Standby::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf ev_is; //type: uint32
        ydk::YLeaf local_mac_routes; //type: uint32
        ydk::YLeaf local_ipv4_mac_routes; //type: uint32
        ydk::YLeaf local_ipv6_mac_routes; //type: uint32
        ydk::YLeaf es_global_mac_routes; //type: uint32
        ydk::YLeaf remote_mac_routes; //type: uint32
        ydk::YLeaf remote_soo_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv4_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv6_mac_routes; //type: uint32
        ydk::YLeaf local_imcast_routes; //type: uint32
        ydk::YLeaf remote_imcast_routes; //type: uint32
        ydk::YLeaf labels; //type: uint32
        ydk::YLeaf es_entries; //type: uint32
        ydk::YLeaf neighbor_entries; //type: uint32
        ydk::YLeaf local_ead_routes; //type: uint32
        ydk::YLeaf remote_ead_routes; //type: uint32
        ydk::YLeaf global_source_mac; //type: string
        ydk::YLeaf peering_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf carving_time; //type: uint32
        ydk::YLeaf mac_secure_move_count; //type: uint32
        ydk::YLeaf mac_secure_move_interval; //type: uint32
        ydk::YLeaf mac_secure_freeze_time; //type: uint32
        ydk::YLeaf mac_secure_retry_count; //type: uint32
        ydk::YLeaf cost_out; //type: boolean
        ydk::YLeaf startup_cost_in_time; //type: uint32
        ydk::YLeaf l2rib_throttle; //type: boolean
        ydk::YLeaf logging_df_election_enabled; //type: boolean

}; // Evpn::Standby::Summary


class Evpn::Standby::EviDetail : public ydk::Entity
{
    public:
        EviDetail();
        ~EviDetail();

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

        class Elements; //type: Evpn::Standby::EviDetail::Elements
        class EviChildren; //type: Evpn::Standby::EviDetail::EviChildren

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements> elements;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren> evi_children;
        
}; // Evpn::Standby::EviDetail


class Evpn::Standby::EviDetail::Elements : public ydk::Entity
{
    public:
        Elements();
        ~Elements();

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

        class Element; //type: Evpn::Standby::EviDetail::Elements::Element

        ydk::YList element;
        
}; // Evpn::Standby::EviDetail::Elements


class Evpn::Standby::EviDetail::Elements::Element : public ydk::Entity
{
    public:
        Element();
        ~Element();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf unicast_label; //type: uint32
        ydk::YLeaf multicast_label; //type: uint32
        ydk::YLeaf cw_disable; //type: boolean
        ydk::YLeaf table_policy_name; //type: string
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf rt_import_block_set; //type: boolean
        ydk::YLeaf rt_export_block_set; //type: boolean
        ydk::YLeaf advertise_mac; //type: boolean
        ydk::YLeaf advertise_bvi_mac; //type: boolean
        ydk::YLeaf aliasing_disabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf reoriginate_disabled; //type: boolean
        ydk::YLeaf stitching; //type: uint8
        ydk::YLeaf encapsulation; //type: uint8
        class FlowLabel; //type: Evpn::Standby::EviDetail::Elements::Element::FlowLabel
        class RdAuto; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto
        class RdConfigured; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured
        class RtAuto; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto
        class RtAutoStitching; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::FlowLabel> flow_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto> rd_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured> rd_configured;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto> rt_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching> rt_auto_stitching;
        
}; // Evpn::Standby::EviDetail::Elements::Element


class Evpn::Standby::EviDetail::Elements::Element::FlowLabel : public ydk::Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_flow_label; //type: boolean
        ydk::YLeaf global_flow_label; //type: boolean

}; // Evpn::Standby::EviDetail::Elements::Element::FlowLabel


class Evpn::Standby::EviDetail::Elements::Element::RdAuto : public ydk::Entity
{
    public:
        RdAuto();
        ~RdAuto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

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
        ydk::YLeaf auto_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured : public ydk::Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

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
        ydk::YLeaf auto_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAuto : public ydk::Entity
{
    public:
        RtAuto();
        ~RtAuto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching : public ydk::Entity
{
    public:
        RtAutoStitching();
        ~RtAutoStitching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport> es_import;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport


class Evpn::Standby::EviDetail::EviChildren : public ydk::Entity
{
    public:
        EviChildren();
        ~EviChildren();

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

        class Neighbors; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Standby::EviDetail::EviChildren::Macs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets> route_targets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs> macs;
        
}; // Evpn::Standby::EviDetail::EviChildren


class Evpn::Standby::EviDetail::EviChildren::Neighbors : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Neighbor; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Evpn::Standby::EviDetail::EviChildren::Neighbors


class Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf neighbor_ip; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf neighbor; //type: string

}; // Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries : public ydk::Entity
{
    public:
        EthernetAutoDiscoveries();
        ~EthernetAutoDiscoveries();

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

        class EthernetAutoDiscovery; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        ydk::YList ethernet_auto_discovery;
        
}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public ydk::Entity
{
    public:
        EthernetAutoDiscovery();
        ~EthernetAutoDiscovery();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf ethernet_vpnid; //type: uint32
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf local_next_hop; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf is_local_ead; //type: boolean
        ydk::YLeaf encap; //type: uint8
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf redundancy_single_flow_active; //type: boolean
        ydk::YLeaf num_paths; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        ydk::YList ethernet_segment_identifier;
        ydk::YList path_buffer;
        
}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts : public ydk::Entity
{
    public:
        InclusiveMulticasts();
        ~InclusiveMulticasts();

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

        class InclusiveMulticast; //type: Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        ydk::YList inclusive_multicast;
        
}; // Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public ydk::Entity
{
    public:
        InclusiveMulticast();
        ~InclusiveMulticast();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf originating_ip; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf originating_ip_xr; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf is_local_entry; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf encap_type; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Standby::EviDetail::EviChildren::RouteTargets : public ydk::Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

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

        class RouteTarget; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget

        ydk::YList route_target;
        
}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf type; //type: BgpRouteTarget
        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf addr_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf route_target_role; //type: L2vpnAdRtRole
        ydk::YLeaf route_target_stitching; //type: boolean
        class RouteTarget_; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;
        
}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public ydk::Entity
{
    public:
        RouteTarget_();
        ~RouteTarget_();

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

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        
}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

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

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Standby::EviDetail::EviChildren::Macs : public ydk::Entity
{
    public:
        Macs();
        ~Macs();

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

        class Mac; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac

        ydk::YList mac;
        
}; // Evpn::Standby::EviDetail::EviChildren::Macs


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf ip_address_xr; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf num_paths; //type: uint32
        ydk::YLeaf is_local_mac; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf is_remote_mac; //type: boolean
        ydk::YLeaf soo_nexthop; //type: string
        ydk::YLeaf ipnh_address; //type: string
        ydk::YLeaf esi_port_key; //type: uint16
        ydk::YLeaf local_encap_type; //type: uint8
        ydk::YLeaf remote_encap_type; //type: uint8
        ydk::YLeaf learned_bridge_port_name; //type: string
        ydk::YLeaf local_seq_id; //type: uint32
        ydk::YLeaf remote_seq_id; //type: uint32
        ydk::YLeaf local_l3_label; //type: uint32
        ydk::YLeaf router_mac_address; //type: string
        ydk::YLeaf mac_flush_requested; //type: uint16
        ydk::YLeaf mac_flush_received; //type: uint16
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf local_is_static; //type: boolean
        ydk::YLeaf remote_is_static; //type: boolean
        class LocalEthernetSegmentIdentifier; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier
        class RemoteEthernetSegmentIdentifier; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer

        ydk::YList local_ethernet_segment_identifier;
        ydk::YList remote_ethernet_segment_identifier;
        ydk::YList path_buffer;
        
}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        LocalEthernetSegmentIdentifier();
        ~LocalEthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        RemoteEthernetSegmentIdentifier();
        ~RemoteEthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Standby::InternalLabels : public ydk::Entity
{
    public:
        InternalLabels();
        ~InternalLabels();

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

        class InternalLabel; //type: Evpn::Standby::InternalLabels::InternalLabel

        ydk::YList internal_label;
        
}; // Evpn::Standby::InternalLabels


class Evpn::Standby::InternalLabels::InternalLabel : public ydk::Entity
{
    public:
        InternalLabel();
        ~InternalLabel();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf esi; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf encap; //type: uint8
        ydk::YLeaf mac_num_paths; //type: uint32
        ydk::YLeaf ead_num_paths; //type: uint32
        ydk::YLeaf evi_num_paths; //type: uint32
        ydk::YLeaf sum_num_paths; //type: uint32
        ydk::YLeaf sum_num_active_paths; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf ecmp_disable; //type: boolean
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf redundancy_single_flow_active; //type: boolean
        class MacPathBuffer; //type: Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer
        class EadPathBuffer; //type: Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer
        class EviPathBuffer; //type: Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer
        class SummaryPathBuffer; //type: Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer

        ydk::YList mac_path_buffer;
        ydk::YList ead_path_buffer;
        ydk::YList evi_path_buffer;
        ydk::YList summary_path_buffer;
        
}; // Evpn::Standby::InternalLabels::InternalLabel


class Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer : public ydk::Entity
{
    public:
        MacPathBuffer();
        ~MacPathBuffer();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer


class Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer : public ydk::Entity
{
    public:
        EadPathBuffer();
        ~EadPathBuffer();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer


class Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer : public ydk::Entity
{
    public:
        EviPathBuffer();
        ~EviPathBuffer();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer


class Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer : public ydk::Entity
{
    public:
        SummaryPathBuffer();
        ~SummaryPathBuffer();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer


class Evpn::Standby::EthernetSegments : public ydk::Entity
{
    public:
        EthernetSegments();
        ~EthernetSegments();

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

        class EthernetSegment; //type: Evpn::Standby::EthernetSegments::EthernetSegment

        ydk::YList ethernet_segment;
        
}; // Evpn::Standby::EthernetSegments


class Evpn::Standby::EthernetSegments::EthernetSegment : public ydk::Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf esi_type; //type: L2vpnEvpnEsi
        ydk::YLeaf esi_system_identifier; //type: string
        ydk::YLeaf esi_port_key; //type: uint32
        ydk::YLeaf esi_system_priority; //type: uint32
        ydk::YLeaf ethernet_segment_name; //type: string
        ydk::YLeaf ethernet_segment_state; //type: uint32
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf main_port_role; //type: L2vpnRgRole
        ydk::YLeaf main_port_mac; //type: string
        ydk::YLeaf num_up_p_ws; //type: uint32
        ydk::YLeaf route_target; //type: string
        ydk::YLeaf rt_origin; //type: L2vpnEvpnRtOrigin
        ydk::YLeaf es_bgp_gates; //type: string
        ydk::YLeaf es_l2fib_gates; //type: string
        ydk::YLeaf mac_flushing_mode_config; //type: L2vpnEvpnMfMode
        ydk::YLeaf load_balance_mode_config; //type: L2vpnEvpnLbMode
        ydk::YLeaf load_balance_mode_is_default; //type: boolean
        ydk::YLeaf load_balance_mode_oper; //type: L2vpnEvpnLbMode
        ydk::YLeaf force_single_home; //type: boolean
        ydk::YLeaf source_mac_oper; //type: string
        ydk::YLeaf source_mac_origin; //type: L2vpnEvpnSmacSrc
        ydk::YLeaf peering_timer; //type: uint32
        ydk::YLeaf peering_timer_left; //type: uint32
        ydk::YLeaf recovery_timer; //type: uint32
        ydk::YLeaf recovery_timer_left; //type: uint32
        ydk::YLeaf carving_timer; //type: uint32
        ydk::YLeaf carving_timer_left; //type: uint32
        ydk::YLeaf service_carving_mode; //type: L2vpnEvpnScMode
        ydk::YLeaf primary_services_input; //type: string
        ydk::YLeaf secondary_services_input; //type: string
        ydk::YLeaf forwarder_ports; //type: uint32
        ydk::YLeaf permanent_forwarder_ports; //type: uint32
        ydk::YLeaf elected_forwarder_ports; //type: uint32
        ydk::YLeaf not_elected_forwarder_ports; //type: uint32
        ydk::YLeaf not_config_forwarder_ports; //type: uint32
        ydk::YLeaf mp_protected; //type: boolean
        ydk::YLeaf nve_anycast_vtep; //type: boolean
        ydk::YLeaf nve_ingress_replication; //type: boolean
        ydk::YLeaf local_split_horizon_group_label_valid; //type: boolean
        ydk::YLeaf local_split_horizon_group_label; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier
        class PrimaryService; //type: Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService
        class SecondaryService; //type: Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService
        class ServiceCarvingISidelectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult
        class ServiceCarvingIsidNotElectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult
        class ServiceCarvingEviElectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult
        class ServiceCarvingEviNotElectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult
        class NextHop; //type: Evpn::Standby::EthernetSegments::EthernetSegment::NextHop
        class ServiceCarvingVpwsPermanentResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        ydk::YList ethernet_segment_identifier;
        ydk::YList primary_service;
        ydk::YList secondary_service;
        ydk::YList service_carving_i_sidelected_result;
        ydk::YList service_carving_isid_not_elected_result;
        ydk::YList service_carving_evi_elected_result;
        ydk::YList service_carving_evi_not_elected_result;
        ydk::YList next_hop;
        ydk::YList service_carving_vpws_permanent_result;
        ydk::YList remote_split_horizon_group_label;
        
}; // Evpn::Standby::EthernetSegments::EthernetSegment


class Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier


class Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService : public ydk::Entity
{
    public:
        PrimaryService();
        ~PrimaryService();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService


class Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService : public ydk::Entity
{
    public:
        SecondaryService();
        ~SecondaryService();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult : public ydk::Entity
{
    public:
        ServiceCarvingISidelectedResult();
        ~ServiceCarvingISidelectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingIsidNotElectedResult();
        ~ServiceCarvingIsidNotElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingEviElectedResult();
        ~ServiceCarvingEviElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingEviNotElectedResult();
        ~ServiceCarvingEviNotElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

        ydk::YLeaf next_hop; //type: string

}; // Evpn::Standby::EthernetSegments::EthernetSegment::NextHop


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult : public ydk::Entity
{
    public:
        ServiceCarvingVpwsPermanentResult();
        ~ServiceCarvingVpwsPermanentResult();

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

        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf ethernet_tag; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult


class Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Standby::AcIds : public ydk::Entity
{
    public:
        AcIds();
        ~AcIds();

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

        class AcId; //type: Evpn::Standby::AcIds::AcId

        ydk::YList ac_id;
        
}; // Evpn::Standby::AcIds


class Evpn::Standby::AcIds::AcId : public ydk::Entity
{
    public:
        AcId();
        ~AcId();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf neighbor; //type: string

}; // Evpn::Standby::AcIds::AcId


}
}

#endif /* _CISCO_IOS_XR_EVPN_OPER_1_ */

