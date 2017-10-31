#ifndef _CISCO_IOS_XR_EVPN_OPER_0_
#define _CISCO_IOS_XR_EVPN_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_evpn_oper {

class Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

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

        class Nodes; //type: Evpn::Nodes
        class Active; //type: Evpn::Active
        class Standby; //type: Evpn::Standby

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby> standby;
        
}; // Evpn


class Evpn::Nodes : public ydk::Entity
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

        class Node; //type: Evpn::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node> > node;
        
}; // Evpn::Nodes


class Evpn::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        class Evis; //type: Evpn::Nodes::Node::Evis
        class Summary; //type: Evpn::Nodes::Node::Summary
        class EviDetail; //type: Evpn::Nodes::Node::EviDetail
        class EthernetSegments; //type: Evpn::Nodes::Node::EthernetSegments
        class AcIds; //type: Evpn::Nodes::Node::AcIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Evis> evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail> evi_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments> ethernet_segments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::AcIds> ac_ids;
        
}; // Evpn::Nodes::Node


class Evpn::Nodes::Node::Evis : public ydk::Entity
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

        class Evi; //type: Evpn::Nodes::Node::Evis::Evi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Evis::Evi> > evi;
        
}; // Evpn::Nodes::Node::Evis


class Evpn::Nodes::Node::Evis::Evi : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::Evis::Evi


class Evpn::Nodes::Node::Summary : public ydk::Entity
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
        ydk::YLeaf mac_secure_move_count; //type: uint32
        ydk::YLeaf mac_secure_move_interval; //type: uint32
        ydk::YLeaf mac_secure_freeze_time; //type: uint32
        ydk::YLeaf mac_secure_retry_count; //type: uint32
        ydk::YLeaf cost_out; //type: boolean
        ydk::YLeaf startup_cost_in_time; //type: uint32
        ydk::YLeaf l2rib_throttle; //type: boolean
        ydk::YLeaf logging_df_election_enabled; //type: boolean

}; // Evpn::Nodes::Node::Summary


class Evpn::Nodes::Node::EviDetail : public ydk::Entity
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

        class Elements; //type: Evpn::Nodes::Node::EviDetail::Elements
        class EviChildren; //type: Evpn::Nodes::Node::EviDetail::EviChildren

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements> elements;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren> evi_children;
        
}; // Evpn::Nodes::Node::EviDetail


class Evpn::Nodes::Node::EviDetail::Elements : public ydk::Entity
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

        class Element; //type: Evpn::Nodes::Node::EviDetail::Elements::Element

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element> > element;
        
}; // Evpn::Nodes::Node::EviDetail::Elements


class Evpn::Nodes::Node::EviDetail::Elements::Element : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
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
        class FlowLabel; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel
        class RdAuto; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto
        class RdConfigured; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured
        class RtAuto; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto
        class RtAutoStitching; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel> flow_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto> rd_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured> rd_configured;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto> rt_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching> rt_auto_stitching;
        
}; // Evpn::Nodes::Node::EviDetail::Elements::Element


class Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto : public ydk::Entity
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
        class Auto_; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;
        
}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured : public ydk::Entity
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
        class Auto_; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;
        
}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto : public ydk::Entity
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
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        
}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching : public ydk::Entity
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
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr
        class EsImport; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport> es_import;
        
}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport


class Evpn::Nodes::Node::EviDetail::EviChildren : public ydk::Entity
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

        class Neighbors; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets> route_targets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs> macs;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren


class Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor> > neighbor;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors


class Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf neighbor_ip; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf neighbor; //type: string

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries : public ydk::Entity
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

        class EthernetAutoDiscovery; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery> > ethernet_auto_discovery;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: int32
        ydk::YLeaf ethernet_vpnid; //type: uint32
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf local_next_hop; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf is_local_ead; //type: boolean
        ydk::YLeaf encap; //type: uint8
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf num_paths; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier> > ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer> > path_buffer;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts : public ydk::Entity
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

        class InclusiveMulticast; //type: Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast> > inclusive_multicast;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ethernet_tag; //type: int32
        ydk::YLeaf originating_ip; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf originating_ip_xr; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf is_local_entry; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf encap_type; //type: uint8

}; // Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets : public ydk::Entity
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

        class RouteTarget; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget> > route_target;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
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
        class RouteTarget_; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public ydk::Entity
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

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public ydk::Entity
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

}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs : public ydk::Entity
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

        class Mac; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac> > mac;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ethernet_tag; //type: int32
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
        class LocalEthernetSegmentIdentifier; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier
        class RemoteEthernetSegmentIdentifier; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier> > local_ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier> > remote_ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer> > path_buffer;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Nodes::Node::EthernetSegments : public ydk::Entity
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

        class EthernetSegment; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment> > ethernet_segment;
        
}; // Evpn::Nodes::Node::EthernetSegments


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf esi_type; //type: L2vpnEvpnEsi
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
        ydk::YLeaf local_split_horizon_group_label; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier
        class PrimaryService; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::PrimaryService
        class SecondaryService; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::SecondaryService
        class ServiceCarvingISidelectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult
        class ServiceCarvingIsidNotElectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult
        class ServiceCarvingEviElectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult
        class ServiceCarvingEviNotElectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult
        class NextHop; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop
        class ServiceCarvingVpwsPermanentResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier> > ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::PrimaryService> > primary_service;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::SecondaryService> > secondary_service;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult> > service_carving_i_sidelected_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult> > service_carving_isid_not_elected_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult> > service_carving_evi_elected_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult> > service_carving_evi_not_elected_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop> > next_hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult> > service_carving_vpws_permanent_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel> > remote_split_horizon_group_label;
        
}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::PrimaryService : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::PrimaryService


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::SecondaryService : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::SecondaryService


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult : public ydk::Entity
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

        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf ethernet_tag; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Nodes::Node::AcIds : public ydk::Entity
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

        class AcId; //type: Evpn::Nodes::Node::AcIds::AcId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::AcIds::AcId> > ac_id;
        
}; // Evpn::Nodes::Node::AcIds


class Evpn::Nodes::Node::AcIds::AcId : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ac_id; //type: int32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf neighbor; //type: string

}; // Evpn::Nodes::Node::AcIds::AcId


class Evpn::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class Evis; //type: Evpn::Active::Evis
        class Summary; //type: Evpn::Active::Summary
        class EviDetail; //type: Evpn::Active::EviDetail
        class EthernetSegments; //type: Evpn::Active::EthernetSegments
        class AcIds; //type: Evpn::Active::AcIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Evis> evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail> evi_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments> ethernet_segments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::AcIds> ac_ids;
        
}; // Evpn::Active


class Evpn::Active::Evis : public ydk::Entity
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

        class Evi; //type: Evpn::Active::Evis::Evi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Evis::Evi> > evi;
        
}; // Evpn::Active::Evis


class Evpn::Active::Evis::Evi : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::Evis::Evi


class Evpn::Active::Summary : public ydk::Entity
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
        ydk::YLeaf mac_secure_move_count; //type: uint32
        ydk::YLeaf mac_secure_move_interval; //type: uint32
        ydk::YLeaf mac_secure_freeze_time; //type: uint32
        ydk::YLeaf mac_secure_retry_count; //type: uint32
        ydk::YLeaf cost_out; //type: boolean
        ydk::YLeaf startup_cost_in_time; //type: uint32
        ydk::YLeaf l2rib_throttle; //type: boolean
        ydk::YLeaf logging_df_election_enabled; //type: boolean

}; // Evpn::Active::Summary


class Evpn::Active::EviDetail : public ydk::Entity
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

        class Elements; //type: Evpn::Active::EviDetail::Elements
        class EviChildren; //type: Evpn::Active::EviDetail::EviChildren

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements> elements;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren> evi_children;
        
}; // Evpn::Active::EviDetail


class Evpn::Active::EviDetail::Elements : public ydk::Entity
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

        class Element; //type: Evpn::Active::EviDetail::Elements::Element

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element> > element;
        
}; // Evpn::Active::EviDetail::Elements


class Evpn::Active::EviDetail::Elements::Element : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
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
        class FlowLabel; //type: Evpn::Active::EviDetail::Elements::Element::FlowLabel
        class RdAuto; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto
        class RdConfigured; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured
        class RtAuto; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto
        class RtAutoStitching; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::FlowLabel> flow_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto> rd_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured> rd_configured;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto> rt_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching> rt_auto_stitching;
        
}; // Evpn::Active::EviDetail::Elements::Element


class Evpn::Active::EviDetail::Elements::Element::FlowLabel : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::FlowLabel


class Evpn::Active::EviDetail::Elements::Element::RdAuto : public ydk::Entity
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
        class Auto_; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_
        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;
        
}; // Evpn::Active::EviDetail::Elements::Element::RdAuto


class Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_


class Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RdConfigured : public ydk::Entity
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
        class Auto_; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_
        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;
        
}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RtAuto : public ydk::Entity
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
        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        
}; // Evpn::Active::EviDetail::Elements::Element::RtAuto


class Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching : public ydk::Entity
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
        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr
        class EsImport; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport> es_import;
        
}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport : public ydk::Entity
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

}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport


class Evpn::Active::EviDetail::EviChildren : public ydk::Entity
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

        class Neighbors; //type: Evpn::Active::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Active::EviDetail::EviChildren::Macs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets> route_targets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs> macs;
        
}; // Evpn::Active::EviDetail::EviChildren


class Evpn::Active::EviDetail::EviChildren::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor> > neighbor;
        
}; // Evpn::Active::EviDetail::EviChildren::Neighbors


class Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf neighbor_ip; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf neighbor; //type: string

}; // Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries : public ydk::Entity
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

        class EthernetAutoDiscovery; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery> > ethernet_auto_discovery;
        
}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: int32
        ydk::YLeaf ethernet_vpnid; //type: uint32
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf local_next_hop; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf is_local_ead; //type: boolean
        ydk::YLeaf encap; //type: uint8
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf num_paths; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier> > ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer> > path_buffer;
        
}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier : public ydk::Entity
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

}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public ydk::Entity
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

}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts : public ydk::Entity
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

        class InclusiveMulticast; //type: Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast> > inclusive_multicast;
        
}; // Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ethernet_tag; //type: int32
        ydk::YLeaf originating_ip; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf originating_ip_xr; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf is_local_entry; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf encap_type; //type: uint8

}; // Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Active::EviDetail::EviChildren::RouteTargets : public ydk::Entity
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

        class RouteTarget; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget> > route_target;
        
}; // Evpn::Active::EviDetail::EviChildren::RouteTargets


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
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
        class RouteTarget_; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;
        
}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public ydk::Entity
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
        class TwoByteAs; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        
}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public ydk::Entity
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

}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public ydk::Entity
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

}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public ydk::Entity
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

}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Active::EviDetail::EviChildren::Macs : public ydk::Entity
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

        class Mac; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs::Mac> > mac;
        
}; // Evpn::Active::EviDetail::EviChildren::Macs


class Evpn::Active::EviDetail::EviChildren::Macs::Mac : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ethernet_tag; //type: int32
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
        class LocalEthernetSegmentIdentifier; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier
        class RemoteEthernetSegmentIdentifier; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier> > local_ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier> > remote_ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer> > path_buffer;
        
}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac


class Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier : public ydk::Entity
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

}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier


class Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier : public ydk::Entity
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

}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier


class Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer : public ydk::Entity
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

}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Active::EthernetSegments : public ydk::Entity
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

        class EthernetSegment; //type: Evpn::Active::EthernetSegments::EthernetSegment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment> > ethernet_segment;
        
}; // Evpn::Active::EthernetSegments


class Evpn::Active::EthernetSegments::EthernetSegment : public ydk::Entity
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
        ydk::YLeaf local_split_horizon_group_label; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier
        class PrimaryService; //type: Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService
        class SecondaryService; //type: Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService
        class ServiceCarvingISidelectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult
        class ServiceCarvingIsidNotElectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult
        class ServiceCarvingEviElectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult
        class ServiceCarvingEviNotElectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult
        class NextHop; //type: Evpn::Active::EthernetSegments::EthernetSegment::NextHop
        class ServiceCarvingVpwsPermanentResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier> > ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService> > primary_service;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService> > secondary_service;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult> > service_carving_i_sidelected_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult> > service_carving_isid_not_elected_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult> > service_carving_evi_elected_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult> > service_carving_evi_not_elected_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::NextHop> > next_hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult> > service_carving_vpws_permanent_result;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel> > remote_split_horizon_group_label;
        
}; // Evpn::Active::EthernetSegments::EthernetSegment


class Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier


class Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService


class Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::NextHop : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::NextHop


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult


class Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public ydk::Entity
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

}; // Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Active::AcIds : public ydk::Entity
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

        class AcId; //type: Evpn::Active::AcIds::AcId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::AcIds::AcId> > ac_id;
        
}; // Evpn::Active::AcIds


class Evpn::Active::AcIds::AcId : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ac_id; //type: int32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf neighbor; //type: string

}; // Evpn::Active::AcIds::AcId


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

        class Evis; //type: Evpn::Standby::Evis
        class Summary; //type: Evpn::Standby::Summary
        class EviDetail; //type: Evpn::Standby::EviDetail
        class EthernetSegments; //type: Evpn::Standby::EthernetSegments
        class AcIds; //type: Evpn::Standby::AcIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Evis> evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail> evi_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments> ethernet_segments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::AcIds> ac_ids;
        
}; // Evpn::Standby


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Evis::Evi> > evi;
        
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

        ydk::YLeaf evi; //type: int32
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element> > element;
        
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

        ydk::YLeaf evi; //type: int32
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
        class Auto_; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_


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
        class Auto_; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_


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

class BgpRouteTargetRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

};

class BgpRouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_stitching;
        static const ydk::Enum::YLeaf stitching;

};

class BgpRouteTargetFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf two_byte_as;
        static const ydk::Enum::YLeaf four_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf es_import;

};

class L2vpnEvpnScMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf manual;

};

class L2vpnEvpnSmacSrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf pbb_bsa;
        static const ydk::Enum::YLeaf esi;
        static const ydk::Enum::YLeaf esi_invalid;
        static const ydk::Enum::YLeaf pbb_bsa_overrride;

};

class L2vpnEvpnLbMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid_load_balancing;
        static const ydk::Enum::YLeaf single_homed;
        static const ydk::Enum::YLeaf multi_homed_aa_per_flow;
        static const ydk::Enum::YLeaf multi_homed_aa_per_service;

};

class L2vpnEvpnMfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf tcn_stp;
        static const ydk::Enum::YLeaf mvrp;

};

class L2vpnEvpnRtOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf extracted;
        static const ydk::Enum::YLeaf configured;

};

class L2vpnRgRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_rg_role_not_defined;
        static const ydk::Enum::YLeaf l2vpn_rg_role_active;
        static const ydk::Enum::YLeaf l2vpn_rg_role_standby;
        static const ydk::Enum::YLeaf l2vpn_rg_role_max;

};

class L2vpnEvpnEsi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf esi_type0;
        static const ydk::Enum::YLeaf esi_type1;
        static const ydk::Enum::YLeaf esi_type2;
        static const ydk::Enum::YLeaf esi_type3;
        static const ydk::Enum::YLeaf esi_type4;
        static const ydk::Enum::YLeaf esi_type5;
        static const ydk::Enum::YLeaf l2vpn_evpn_esi_type_legacy;
        static const ydk::Enum::YLeaf l2vpn_evpn_esi_type_override;
        static const ydk::Enum::YLeaf esi_type_invalid;

};

class L2vpnAdRtRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

};

class L2vpnAdRt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rt_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_v4_addr;
        static const ydk::Enum::YLeaf es_import;

};

class L2vpnAdRd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rd_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_auto;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_v4_addr;

};

class L2vpnEvpn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_type_invalid;
        static const ydk::Enum::YLeaf evpn_type_evpn;
        static const ydk::Enum::YLeaf evpn_type_pbb_evpn;
        static const ydk::Enum::YLeaf evpn_type_evpn_vpws_vlan_unaware;
        static const ydk::Enum::YLeaf evpn_type_evpn_vpws_vlan_aware;
        static const ydk::Enum::YLeaf evpn_type_max;

};


}
}

#endif /* _CISCO_IOS_XR_EVPN_OPER_0_ */

