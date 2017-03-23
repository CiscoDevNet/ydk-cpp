#ifndef _CISCO_IOS_XR_EVPN_OPER_
#define _CISCO_IOS_XR_EVPN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_evpn_oper {

class Evpn : public Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Nodes; //type: Evpn::Nodes
        class Active; //type: Evpn::Active
        class Standby; //type: Evpn::Standby

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active> active;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby> standby;


}; // Evpn


class Evpn::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Evpn::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node> > node;


}; // Evpn::Nodes


class Evpn::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: string

        class Evis; //type: Evpn::Nodes::Node::Evis
        class Summary; //type: Evpn::Nodes::Node::Summary
        class EviDetail; //type: Evpn::Nodes::Node::EviDetail
        class EthernetSegments; //type: Evpn::Nodes::Node::EthernetSegments
        class AcIds; //type: Evpn::Nodes::Node::AcIds

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::AcIds> ac_ids;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments> ethernet_segments;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail> evi_detail;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Evis> evis;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Summary> summary;


}; // Evpn::Nodes::Node


class Evpn::Nodes::Node::Evis : public Entity
{
    public:
        Evis();
        ~Evis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Evi; //type: Evpn::Nodes::Node::Evis::Evi

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Evis::Evi> > evi;


}; // Evpn::Nodes::Node::Evis


class Evpn::Nodes::Node::Evis::Evi : public Entity
{
    public:
        Evi();
        ~Evi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf bd_name; //type: string
        YLeaf type; //type: EvpnEnum



}; // Evpn::Nodes::Node::Evis::Evi


class Evpn::Nodes::Node::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf as; //type: uint32
        YLeaf ev_is; //type: uint32
        YLeaf local_mac_routes; //type: uint32
        YLeaf local_ipv4_mac_routes; //type: uint32
        YLeaf local_ipv6_mac_routes; //type: uint32
        YLeaf es_global_mac_routes; //type: uint32
        YLeaf remote_mac_routes; //type: uint32
        YLeaf remote_soo_mac_routes; //type: uint32
        YLeaf remote_ipv4_mac_routes; //type: uint32
        YLeaf remote_ipv6_mac_routes; //type: uint32
        YLeaf local_imcast_routes; //type: uint32
        YLeaf remote_imcast_routes; //type: uint32
        YLeaf labels; //type: uint32
        YLeaf es_entries; //type: uint32
        YLeaf neighbor_entries; //type: uint32
        YLeaf local_ead_routes; //type: uint32
        YLeaf remote_ead_routes; //type: uint32
        YLeaf global_source_mac; //type: string
        YLeaf peering_time; //type: uint32
        YLeaf recovery_time; //type: uint32
        YLeaf l2rib_throttle; //type: boolean
        YLeaf logging_df_election_enabled; //type: boolean



}; // Evpn::Nodes::Node::Summary


class Evpn::Nodes::Node::EviDetail : public Entity
{
    public:
        EviDetail();
        ~EviDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Elements; //type: Evpn::Nodes::Node::EviDetail::Elements
        class EviChildren; //type: Evpn::Nodes::Node::EviDetail::EviChildren

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements> elements;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren> evi_children;


}; // Evpn::Nodes::Node::EviDetail


class Evpn::Nodes::Node::EviDetail::Elements : public Entity
{
    public:
        Elements();
        ~Elements();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Element; //type: Evpn::Nodes::Node::EviDetail::Elements::Element

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element> > element;


}; // Evpn::Nodes::Node::EviDetail::Elements


class Evpn::Nodes::Node::EviDetail::Elements::Element : public Entity
{
    public:
        Element();
        ~Element();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf description; //type: string
        YLeaf bd_name; //type: string
        YLeaf type; //type: EvpnEnum
        YLeaf unicast_label; //type: uint32
        YLeaf multicast_label; //type: uint32
        YLeaf cw_disable; //type: boolean
        YLeaf table_policy_name; //type: string
        YLeaf forward_class; //type: uint8
        YLeaf rt_import_block_set; //type: boolean
        YLeaf rt_export_block_set; //type: boolean
        YLeaf advertise_mac; //type: boolean
        YLeaf aliasing_disabled; //type: boolean
        YLeaf unknown_unicast_flooding_disabled; //type: boolean
        YLeaf reoriginate_disabled; //type: boolean
        YLeaf stitching; //type: boolean

        class FlowLabel; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel
        class RdAuto; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto
        class RdConfigured; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured
        class RtAuto; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto
        class RtAutoStitching; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel> flow_label;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto> rd_auto;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured> rd_configured;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto> rt_auto;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching> rt_auto_stitching;


}; // Evpn::Nodes::Node::EviDetail::Elements::Element


class Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel : public Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf static_flow_label; //type: boolean
        YLeaf global_flow_label; //type: boolean



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto : public Entity
{
    public:
        RdAuto();
        ~RdAuto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: L2VpnAdRdEnum

        class Auto_; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;


}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured : public Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: L2VpnAdRdEnum

        class Auto_; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;


}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto : public Entity
{
    public:
        RtAuto();
        ~RtAuto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt; //type: L2VpnAdRtEnum

        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;


}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching : public Entity
{
    public:
        RtAutoStitching();
        ~RtAutoStitching();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt; //type: L2VpnAdRtEnum

        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr
        class EsImport; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr> v4_addr;


}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport


class Evpn::Nodes::Node::EviDetail::EviChildren : public Entity
{
    public:
        EviChildren();
        ~EviChildren();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbors; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs> macs;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets> route_targets;


}; // Evpn::Nodes::Node::EviDetail::EviChildren


class Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor> > neighbor;


}; // Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors


class Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf neighbor_ip; //type: string
        YLeaf evi_xr; //type: uint32
        YLeaf neighbor; //type: string



}; // Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries : public Entity
{
    public:
        EthernetAutoDiscoveries();
        ~EthernetAutoDiscoveries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetAutoDiscovery; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery> > ethernet_auto_discovery;


}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public Entity
{
    public:
        EthernetAutoDiscovery();
        ~EthernetAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf esi1; //type: string
        YLeaf esi2; //type: string
        YLeaf esi3; //type: string
        YLeaf esi4; //type: string
        YLeaf esi5; //type: string
        YLeaf ethernet_tag; //type: int32
        YLeaf ethernet_vpnid; //type: uint32
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf local_next_hop; //type: string
        YLeaf local_label; //type: uint32
        YLeaf is_local_ead; //type: boolean
        YLeaf encap; //type: uint8
        YLeaf redundancy_single_active; //type: boolean
        YLeaf num_paths; //type: uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8

        class PathBuffer; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer> > path_buffer;


}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32



}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts : public Entity
{
    public:
        InclusiveMulticasts();
        ~InclusiveMulticasts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InclusiveMulticast; //type: Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast> > inclusive_multicast;


}; // Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public Entity
{
    public:
        InclusiveMulticast();
        ~InclusiveMulticast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ethernet_tag; //type: int32
        YLeaf originating_ip; //type: string
        YLeaf evi_xr; //type: uint32
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf originating_ip_xr; //type: string
        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32
        YLeaf is_local_entry; //type: boolean



}; // Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets : public Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteTarget; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget> > route_target;


}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget : public Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf role; //type: BgpRouteTargetRoleEnum
        YLeaf type; //type: BgpRouteTargetEnum
        YLeaf format; //type: BgpRouteTargetFormatEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf addr_index; //type: uint32
        YLeaf address; //type: string
        YLeaf bd_name; //type: string
        YLeaf evi_xr; //type: uint32
        YLeaf route_target_role; //type: L2VpnAdRtRoleEnum
        YLeaf route_target_stitching; //type: boolean

        class RouteTarget_; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;


}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public Entity
{
    public:
        RouteTarget_();
        ~RouteTarget_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt; //type: L2VpnAdRtEnum

        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;


}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16



}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs : public Entity
{
    public:
        Macs();
        ~Macs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mac; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac> > mac;


}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ethernet_tag; //type: int32
        YLeaf mac_address; //type: string
        YLeaf ip_address; //type: string
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf mac_address_xr; //type: string
        YLeaf ip_address_xr; //type: string
        YLeaf local_label; //type: uint32
        YLeaf num_paths; //type: uint32
        YLeaf is_local_mac; //type: boolean
        YLeaf is_remote_mac; //type: boolean
        YLeaf soo_nexthop; //type: string
        YLeaf esi_port_key; //type: uint16
        YLeaf local_encap_type; //type: uint8
        YLeaf remote_encap_type; //type: uint8
        YLeaf learned_bridge_port_name; //type: string
        YLeaf local_seq_id; //type: uint32
        YLeaf remote_seq_id; //type: uint32
        YLeaf mac_flush_requested; //type: uint16
        YLeaf mac_flush_received; //type: uint16
        YLeaf internal_label; //type: uint32
        YLeaf resolved; //type: boolean
        YLeaf is_static; //type: boolean
        YLeafList local_ethernet_segment_identifier; //type: list of  uint8
        YLeafList remote_ethernet_segment_identifier; //type: list of  uint8

        class PathBuffer; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer> > path_buffer;


}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer : public Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32



}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Nodes::Node::EthernetSegments : public Entity
{
    public:
        EthernetSegments();
        ~EthernetSegments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetSegment; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment> > ethernet_segment;


}; // Evpn::Nodes::Node::EthernetSegments


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment : public Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf esi1; //type: string
        YLeaf esi2; //type: string
        YLeaf esi3; //type: string
        YLeaf esi4; //type: string
        YLeaf esi5; //type: string
        YLeaf esi_type; //type: L2VpnEvpnEsiEnum
        YLeaf ethernet_segment_name; //type: string
        YLeaf ethernet_segment_state; //type: uint32
        YLeaf if_handle; //type: string
        YLeaf main_port_role; //type: L2VpnRgStateEnum
        YLeaf main_port_mac; //type: string
        YLeaf num_up_p_ws; //type: uint32
        YLeaf route_target; //type: string
        YLeaf rt_origin; //type: L2VpnEvpnRtOriginEnum
        YLeaf es_bgp_gates; //type: string
        YLeaf es_l2fib_gates; //type: string
        YLeaf mac_flushing_mode_config; //type: L2VpnEvpnMfModeEnum
        YLeaf load_balance_mode_config; //type: L2VpnEvpnLbModeEnum
        YLeaf load_balance_mode_is_default; //type: boolean
        YLeaf load_balance_mode_oper; //type: L2VpnEvpnLbModeEnum
        YLeaf force_single_home; //type: boolean
        YLeaf source_mac_oper; //type: string
        YLeaf source_mac_origin; //type: L2VpnEvpnSmacSrcEnum
        YLeaf peering_timer; //type: uint32
        YLeaf peering_timer_left; //type: uint32
        YLeaf recovery_timer; //type: uint32
        YLeaf recovery_timer_left; //type: uint32
        YLeaf service_carving_mode; //type: L2VpnEvpnScModeEnum
        YLeaf primary_services_input; //type: string
        YLeaf secondary_services_input; //type: string
        YLeaf forwarder_ports; //type: uint32
        YLeaf mp_protected; //type: boolean
        YLeaf service_carving_type; //type: L2VpnEvpnScEnum
        YLeaf elected_d_fs; //type: uint32
        YLeaf not_elected_d_fs; //type: uint32
        YLeaf not_config_d_fs; //type: uint32
        YLeaf local_split_horizon_group_label; //type: uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8
        YLeafList primary_service; //type: list of  uint32
        YLeafList secondary_service; //type: list of  uint32
        YLeafList service_carving_result; //type: list of  uint32

        class NextHop; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop> > next_hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel> > remote_split_horizon_group_label;


}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string



}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf label; //type: uint32



}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Nodes::Node::AcIds : public Entity
{
    public:
        AcIds();
        ~AcIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AcId; //type: Evpn::Nodes::Node::AcIds::AcId

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::AcIds::AcId> > ac_id;


}; // Evpn::Nodes::Node::AcIds


class Evpn::Nodes::Node::AcIds::AcId : public Entity
{
    public:
        AcId();
        ~AcId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ac_id; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf neighbor; //type: string



}; // Evpn::Nodes::Node::AcIds::AcId


class Evpn::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Evis; //type: Evpn::Active::Evis
        class Summary; //type: Evpn::Active::Summary
        class EviDetail; //type: Evpn::Active::EviDetail
        class EthernetSegments; //type: Evpn::Active::EthernetSegments
        class AcIds; //type: Evpn::Active::AcIds

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::AcIds> ac_ids;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments> ethernet_segments;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail> evi_detail;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::Evis> evis;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::Summary> summary;


}; // Evpn::Active


class Evpn::Active::Evis : public Entity
{
    public:
        Evis();
        ~Evis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Evi; //type: Evpn::Active::Evis::Evi

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::Evis::Evi> > evi;


}; // Evpn::Active::Evis


class Evpn::Active::Evis::Evi : public Entity
{
    public:
        Evi();
        ~Evi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf bd_name; //type: string
        YLeaf type; //type: EvpnEnum



}; // Evpn::Active::Evis::Evi


class Evpn::Active::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf as; //type: uint32
        YLeaf ev_is; //type: uint32
        YLeaf local_mac_routes; //type: uint32
        YLeaf local_ipv4_mac_routes; //type: uint32
        YLeaf local_ipv6_mac_routes; //type: uint32
        YLeaf es_global_mac_routes; //type: uint32
        YLeaf remote_mac_routes; //type: uint32
        YLeaf remote_soo_mac_routes; //type: uint32
        YLeaf remote_ipv4_mac_routes; //type: uint32
        YLeaf remote_ipv6_mac_routes; //type: uint32
        YLeaf local_imcast_routes; //type: uint32
        YLeaf remote_imcast_routes; //type: uint32
        YLeaf labels; //type: uint32
        YLeaf es_entries; //type: uint32
        YLeaf neighbor_entries; //type: uint32
        YLeaf local_ead_routes; //type: uint32
        YLeaf remote_ead_routes; //type: uint32
        YLeaf global_source_mac; //type: string
        YLeaf peering_time; //type: uint32
        YLeaf recovery_time; //type: uint32
        YLeaf l2rib_throttle; //type: boolean
        YLeaf logging_df_election_enabled; //type: boolean



}; // Evpn::Active::Summary


class Evpn::Active::EviDetail : public Entity
{
    public:
        EviDetail();
        ~EviDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Elements; //type: Evpn::Active::EviDetail::Elements
        class EviChildren; //type: Evpn::Active::EviDetail::EviChildren

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements> elements;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren> evi_children;


}; // Evpn::Active::EviDetail


class Evpn::Active::EviDetail::Elements : public Entity
{
    public:
        Elements();
        ~Elements();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Element; //type: Evpn::Active::EviDetail::Elements::Element

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element> > element;


}; // Evpn::Active::EviDetail::Elements


class Evpn::Active::EviDetail::Elements::Element : public Entity
{
    public:
        Element();
        ~Element();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf description; //type: string
        YLeaf bd_name; //type: string
        YLeaf type; //type: EvpnEnum
        YLeaf unicast_label; //type: uint32
        YLeaf multicast_label; //type: uint32
        YLeaf cw_disable; //type: boolean
        YLeaf table_policy_name; //type: string
        YLeaf forward_class; //type: uint8
        YLeaf rt_import_block_set; //type: boolean
        YLeaf rt_export_block_set; //type: boolean
        YLeaf advertise_mac; //type: boolean
        YLeaf aliasing_disabled; //type: boolean
        YLeaf unknown_unicast_flooding_disabled; //type: boolean
        YLeaf reoriginate_disabled; //type: boolean
        YLeaf stitching; //type: boolean

        class FlowLabel; //type: Evpn::Active::EviDetail::Elements::Element::FlowLabel
        class RdAuto; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto
        class RdConfigured; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured
        class RtAuto; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto
        class RtAutoStitching; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::FlowLabel> flow_label;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto> rd_auto;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured> rd_configured;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto> rt_auto;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching> rt_auto_stitching;


}; // Evpn::Active::EviDetail::Elements::Element


class Evpn::Active::EviDetail::Elements::Element::FlowLabel : public Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf static_flow_label; //type: boolean
        YLeaf global_flow_label; //type: boolean



}; // Evpn::Active::EviDetail::Elements::Element::FlowLabel


class Evpn::Active::EviDetail::Elements::Element::RdAuto : public Entity
{
    public:
        RdAuto();
        ~RdAuto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: L2VpnAdRdEnum

        class Auto_; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_
        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;


}; // Evpn::Active::EviDetail::Elements::Element::RdAuto


class Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_


class Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RdConfigured : public Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: L2VpnAdRdEnum

        class Auto_; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_
        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;


}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RtAuto : public Entity
{
    public:
        RtAuto();
        ~RtAuto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt; //type: L2VpnAdRtEnum

        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;


}; // Evpn::Active::EviDetail::Elements::Element::RtAuto


class Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching : public Entity
{
    public:
        RtAutoStitching();
        ~RtAutoStitching();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt; //type: L2VpnAdRtEnum

        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr
        class EsImport; //type: Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr> v4_addr;


}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16



}; // Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport


class Evpn::Active::EviDetail::EviChildren : public Entity
{
    public:
        EviChildren();
        ~EviChildren();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbors; //type: Evpn::Active::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Active::EviDetail::EviChildren::Macs

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs> macs;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets> route_targets;


}; // Evpn::Active::EviDetail::EviChildren


class Evpn::Active::EviDetail::EviChildren::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor> > neighbor;


}; // Evpn::Active::EviDetail::EviChildren::Neighbors


class Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf neighbor_ip; //type: string
        YLeaf evi_xr; //type: uint32
        YLeaf neighbor; //type: string



}; // Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries : public Entity
{
    public:
        EthernetAutoDiscoveries();
        ~EthernetAutoDiscoveries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetAutoDiscovery; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery> > ethernet_auto_discovery;


}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public Entity
{
    public:
        EthernetAutoDiscovery();
        ~EthernetAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf esi1; //type: string
        YLeaf esi2; //type: string
        YLeaf esi3; //type: string
        YLeaf esi4; //type: string
        YLeaf esi5; //type: string
        YLeaf ethernet_tag; //type: int32
        YLeaf ethernet_vpnid; //type: uint32
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf local_next_hop; //type: string
        YLeaf local_label; //type: uint32
        YLeaf is_local_ead; //type: boolean
        YLeaf encap; //type: uint8
        YLeaf redundancy_single_active; //type: boolean
        YLeaf num_paths; //type: uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8

        class PathBuffer; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer> > path_buffer;


}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32



}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts : public Entity
{
    public:
        InclusiveMulticasts();
        ~InclusiveMulticasts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InclusiveMulticast; //type: Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast> > inclusive_multicast;


}; // Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public Entity
{
    public:
        InclusiveMulticast();
        ~InclusiveMulticast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ethernet_tag; //type: int32
        YLeaf originating_ip; //type: string
        YLeaf evi_xr; //type: uint32
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf originating_ip_xr; //type: string
        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32
        YLeaf is_local_entry; //type: boolean



}; // Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Active::EviDetail::EviChildren::RouteTargets : public Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteTarget; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget> > route_target;


}; // Evpn::Active::EviDetail::EviChildren::RouteTargets


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget : public Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf role; //type: BgpRouteTargetRoleEnum
        YLeaf type; //type: BgpRouteTargetEnum
        YLeaf format; //type: BgpRouteTargetFormatEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf addr_index; //type: uint32
        YLeaf address; //type: string
        YLeaf bd_name; //type: string
        YLeaf evi_xr; //type: uint32
        YLeaf route_target_role; //type: L2VpnAdRtRoleEnum
        YLeaf route_target_stitching; //type: boolean

        class RouteTarget_; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;


}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public Entity
{
    public:
        RouteTarget_();
        ~RouteTarget_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt; //type: L2VpnAdRtEnum

        class TwoByteAs; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;


}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16



}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Active::EviDetail::EviChildren::Macs : public Entity
{
    public:
        Macs();
        ~Macs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mac; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs::Mac> > mac;


}; // Evpn::Active::EviDetail::EviChildren::Macs


class Evpn::Active::EviDetail::EviChildren::Macs::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ethernet_tag; //type: int32
        YLeaf mac_address; //type: string
        YLeaf ip_address; //type: string
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf mac_address_xr; //type: string
        YLeaf ip_address_xr; //type: string
        YLeaf local_label; //type: uint32
        YLeaf num_paths; //type: uint32
        YLeaf is_local_mac; //type: boolean
        YLeaf is_remote_mac; //type: boolean
        YLeaf soo_nexthop; //type: string
        YLeaf esi_port_key; //type: uint16
        YLeaf local_encap_type; //type: uint8
        YLeaf remote_encap_type; //type: uint8
        YLeaf learned_bridge_port_name; //type: string
        YLeaf local_seq_id; //type: uint32
        YLeaf remote_seq_id; //type: uint32
        YLeaf mac_flush_requested; //type: uint16
        YLeaf mac_flush_received; //type: uint16
        YLeaf internal_label; //type: uint32
        YLeaf resolved; //type: boolean
        YLeaf is_static; //type: boolean
        YLeafList local_ethernet_segment_identifier; //type: list of  uint8
        YLeafList remote_ethernet_segment_identifier; //type: list of  uint8

        class PathBuffer; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer> > path_buffer;


}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac


class Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer : public Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32



}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Active::EthernetSegments : public Entity
{
    public:
        EthernetSegments();
        ~EthernetSegments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetSegment; //type: Evpn::Active::EthernetSegments::EthernetSegment

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment> > ethernet_segment;


}; // Evpn::Active::EthernetSegments


class Evpn::Active::EthernetSegments::EthernetSegment : public Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf esi1; //type: string
        YLeaf esi2; //type: string
        YLeaf esi3; //type: string
        YLeaf esi4; //type: string
        YLeaf esi5; //type: string
        YLeaf esi_type; //type: L2VpnEvpnEsiEnum
        YLeaf ethernet_segment_name; //type: string
        YLeaf ethernet_segment_state; //type: uint32
        YLeaf if_handle; //type: string
        YLeaf main_port_role; //type: L2VpnRgStateEnum
        YLeaf main_port_mac; //type: string
        YLeaf num_up_p_ws; //type: uint32
        YLeaf route_target; //type: string
        YLeaf rt_origin; //type: L2VpnEvpnRtOriginEnum
        YLeaf es_bgp_gates; //type: string
        YLeaf es_l2fib_gates; //type: string
        YLeaf mac_flushing_mode_config; //type: L2VpnEvpnMfModeEnum
        YLeaf load_balance_mode_config; //type: L2VpnEvpnLbModeEnum
        YLeaf load_balance_mode_is_default; //type: boolean
        YLeaf load_balance_mode_oper; //type: L2VpnEvpnLbModeEnum
        YLeaf force_single_home; //type: boolean
        YLeaf source_mac_oper; //type: string
        YLeaf source_mac_origin; //type: L2VpnEvpnSmacSrcEnum
        YLeaf peering_timer; //type: uint32
        YLeaf peering_timer_left; //type: uint32
        YLeaf recovery_timer; //type: uint32
        YLeaf recovery_timer_left; //type: uint32
        YLeaf service_carving_mode; //type: L2VpnEvpnScModeEnum
        YLeaf primary_services_input; //type: string
        YLeaf secondary_services_input; //type: string
        YLeaf forwarder_ports; //type: uint32
        YLeaf mp_protected; //type: boolean
        YLeaf service_carving_type; //type: L2VpnEvpnScEnum
        YLeaf elected_d_fs; //type: uint32
        YLeaf not_elected_d_fs; //type: uint32
        YLeaf not_config_d_fs; //type: uint32
        YLeaf local_split_horizon_group_label; //type: uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8
        YLeafList primary_service; //type: list of  uint32
        YLeafList secondary_service; //type: list of  uint32
        YLeafList service_carving_result; //type: list of  uint32

        class NextHop; //type: Evpn::Active::EthernetSegments::EthernetSegment::NextHop
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::NextHop> > next_hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel> > remote_split_horizon_group_label;


}; // Evpn::Active::EthernetSegments::EthernetSegment


class Evpn::Active::EthernetSegments::EthernetSegment::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string



}; // Evpn::Active::EthernetSegments::EthernetSegment::NextHop


class Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf label; //type: uint32



}; // Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Active::AcIds : public Entity
{
    public:
        AcIds();
        ~AcIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AcId; //type: Evpn::Active::AcIds::AcId

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Active::AcIds::AcId> > ac_id;


}; // Evpn::Active::AcIds


class Evpn::Active::AcIds::AcId : public Entity
{
    public:
        AcId();
        ~AcId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ac_id; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf neighbor; //type: string



}; // Evpn::Active::AcIds::AcId


class Evpn::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Evis; //type: Evpn::Standby::Evis
        class Summary; //type: Evpn::Standby::Summary
        class EviDetail; //type: Evpn::Standby::EviDetail
        class EthernetSegments; //type: Evpn::Standby::EthernetSegments
        class AcIds; //type: Evpn::Standby::AcIds

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::AcIds> ac_ids;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments> ethernet_segments;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail> evi_detail;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::Evis> evis;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::Summary> summary;


}; // Evpn::Standby


class Evpn::Standby::Evis : public Entity
{
    public:
        Evis();
        ~Evis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Evi; //type: Evpn::Standby::Evis::Evi

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::Evis::Evi> > evi;


}; // Evpn::Standby::Evis


class Evpn::Standby::Evis::Evi : public Entity
{
    public:
        Evi();
        ~Evi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf bd_name; //type: string
        YLeaf type; //type: EvpnEnum



}; // Evpn::Standby::Evis::Evi


class Evpn::Standby::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf as; //type: uint32
        YLeaf ev_is; //type: uint32
        YLeaf local_mac_routes; //type: uint32
        YLeaf local_ipv4_mac_routes; //type: uint32
        YLeaf local_ipv6_mac_routes; //type: uint32
        YLeaf es_global_mac_routes; //type: uint32
        YLeaf remote_mac_routes; //type: uint32
        YLeaf remote_soo_mac_routes; //type: uint32
        YLeaf remote_ipv4_mac_routes; //type: uint32
        YLeaf remote_ipv6_mac_routes; //type: uint32
        YLeaf local_imcast_routes; //type: uint32
        YLeaf remote_imcast_routes; //type: uint32
        YLeaf labels; //type: uint32
        YLeaf es_entries; //type: uint32
        YLeaf neighbor_entries; //type: uint32
        YLeaf local_ead_routes; //type: uint32
        YLeaf remote_ead_routes; //type: uint32
        YLeaf global_source_mac; //type: string
        YLeaf peering_time; //type: uint32
        YLeaf recovery_time; //type: uint32
        YLeaf l2rib_throttle; //type: boolean
        YLeaf logging_df_election_enabled; //type: boolean



}; // Evpn::Standby::Summary


class Evpn::Standby::EviDetail : public Entity
{
    public:
        EviDetail();
        ~EviDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Elements; //type: Evpn::Standby::EviDetail::Elements
        class EviChildren; //type: Evpn::Standby::EviDetail::EviChildren

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements> elements;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren> evi_children;


}; // Evpn::Standby::EviDetail


class Evpn::Standby::EviDetail::Elements : public Entity
{
    public:
        Elements();
        ~Elements();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Element; //type: Evpn::Standby::EviDetail::Elements::Element

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element> > element;


}; // Evpn::Standby::EviDetail::Elements


class Evpn::Standby::EviDetail::Elements::Element : public Entity
{
    public:
        Element();
        ~Element();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf description; //type: string
        YLeaf bd_name; //type: string
        YLeaf type; //type: EvpnEnum
        YLeaf unicast_label; //type: uint32
        YLeaf multicast_label; //type: uint32
        YLeaf cw_disable; //type: boolean
        YLeaf table_policy_name; //type: string
        YLeaf forward_class; //type: uint8
        YLeaf rt_import_block_set; //type: boolean
        YLeaf rt_export_block_set; //type: boolean
        YLeaf advertise_mac; //type: boolean
        YLeaf aliasing_disabled; //type: boolean
        YLeaf unknown_unicast_flooding_disabled; //type: boolean
        YLeaf reoriginate_disabled; //type: boolean
        YLeaf stitching; //type: boolean

        class FlowLabel; //type: Evpn::Standby::EviDetail::Elements::Element::FlowLabel
        class RdAuto; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto
        class RdConfigured; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured
        class RtAuto; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto
        class RtAutoStitching; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::FlowLabel> flow_label;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto> rd_auto;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured> rd_configured;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto> rt_auto;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching> rt_auto_stitching;


}; // Evpn::Standby::EviDetail::Elements::Element


class Evpn::Standby::EviDetail::Elements::Element::FlowLabel : public Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf static_flow_label; //type: boolean
        YLeaf global_flow_label; //type: boolean



}; // Evpn::Standby::EviDetail::Elements::Element::FlowLabel


class Evpn::Standby::EviDetail::Elements::Element::RdAuto : public Entity
{
    public:
        RdAuto();
        ~RdAuto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: L2VpnAdRdEnum

        class Auto_; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;


}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured : public Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: L2VpnAdRdEnum

        class Auto_; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;


}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAuto : public Entity
{
    public:
        RtAuto();
        ~RtAuto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt; //type: L2VpnAdRtEnum

        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;


}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching : public Entity
{
    public:
        RtAutoStitching();
        ~RtAutoStitching();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt; //type: L2VpnAdRtEnum

        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr> v4_addr;


}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16



}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport


class Evpn::Standby::EviDetail::EviChildren : public Entity
{
    public:
        EviChildren();
        ~EviChildren();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbors; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Standby::EviDetail::EviChildren::Macs

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs> macs;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets> route_targets;


}; // Evpn::Standby::EviDetail::EviChildren


class Evpn::Standby::EviDetail::EviChildren::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor> > neighbor;


}; // Evpn::Standby::EviDetail::EviChildren::Neighbors


class Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf neighbor_ip; //type: string
        YLeaf evi_xr; //type: uint32
        YLeaf neighbor; //type: string



}; // Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries : public Entity
{
    public:
        EthernetAutoDiscoveries();
        ~EthernetAutoDiscoveries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetAutoDiscovery; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery> > ethernet_auto_discovery;


}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public Entity
{
    public:
        EthernetAutoDiscovery();
        ~EthernetAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf esi1; //type: string
        YLeaf esi2; //type: string
        YLeaf esi3; //type: string
        YLeaf esi4; //type: string
        YLeaf esi5; //type: string
        YLeaf ethernet_tag; //type: int32
        YLeaf ethernet_vpnid; //type: uint32
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf local_next_hop; //type: string
        YLeaf local_label; //type: uint32
        YLeaf is_local_ead; //type: boolean
        YLeaf encap; //type: uint8
        YLeaf redundancy_single_active; //type: boolean
        YLeaf num_paths; //type: uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8

        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer> > path_buffer;


}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32



}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts : public Entity
{
    public:
        InclusiveMulticasts();
        ~InclusiveMulticasts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InclusiveMulticast; //type: Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast> > inclusive_multicast;


}; // Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public Entity
{
    public:
        InclusiveMulticast();
        ~InclusiveMulticast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ethernet_tag; //type: int32
        YLeaf originating_ip; //type: string
        YLeaf evi_xr; //type: uint32
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf originating_ip_xr; //type: string
        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32
        YLeaf is_local_entry; //type: boolean



}; // Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Standby::EviDetail::EviChildren::RouteTargets : public Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteTarget; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget> > route_target;


}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget : public Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf role; //type: BgpRouteTargetRoleEnum
        YLeaf type; //type: BgpRouteTargetEnum
        YLeaf format; //type: BgpRouteTargetFormatEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf addr_index; //type: uint32
        YLeaf address; //type: string
        YLeaf bd_name; //type: string
        YLeaf evi_xr; //type: uint32
        YLeaf route_target_role; //type: L2VpnAdRtRoleEnum
        YLeaf route_target_stitching; //type: boolean

        class RouteTarget_; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;


}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public Entity
{
    public:
        RouteTarget_();
        ~RouteTarget_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt; //type: L2VpnAdRtEnum

        class TwoByteAs; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;


}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16



}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Standby::EviDetail::EviChildren::Macs : public Entity
{
    public:
        Macs();
        ~Macs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mac; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs::Mac> > mac;


}; // Evpn::Standby::EviDetail::EviChildren::Macs


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ethernet_tag; //type: int32
        YLeaf mac_address; //type: string
        YLeaf ip_address; //type: string
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf mac_address_xr; //type: string
        YLeaf ip_address_xr; //type: string
        YLeaf local_label; //type: uint32
        YLeaf num_paths; //type: uint32
        YLeaf is_local_mac; //type: boolean
        YLeaf is_remote_mac; //type: boolean
        YLeaf soo_nexthop; //type: string
        YLeaf esi_port_key; //type: uint16
        YLeaf local_encap_type; //type: uint8
        YLeaf remote_encap_type; //type: uint8
        YLeaf learned_bridge_port_name; //type: string
        YLeaf local_seq_id; //type: uint32
        YLeaf remote_seq_id; //type: uint32
        YLeaf mac_flush_requested; //type: uint16
        YLeaf mac_flush_received; //type: uint16
        YLeaf internal_label; //type: uint32
        YLeaf resolved; //type: boolean
        YLeaf is_static; //type: boolean
        YLeafList local_ethernet_segment_identifier; //type: list of  uint8
        YLeafList remote_ethernet_segment_identifier; //type: list of  uint8

        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer> > path_buffer;


}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer : public Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32



}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Standby::EthernetSegments : public Entity
{
    public:
        EthernetSegments();
        ~EthernetSegments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetSegment; //type: Evpn::Standby::EthernetSegments::EthernetSegment

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments::EthernetSegment> > ethernet_segment;


}; // Evpn::Standby::EthernetSegments


class Evpn::Standby::EthernetSegments::EthernetSegment : public Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf esi1; //type: string
        YLeaf esi2; //type: string
        YLeaf esi3; //type: string
        YLeaf esi4; //type: string
        YLeaf esi5; //type: string
        YLeaf esi_type; //type: L2VpnEvpnEsiEnum
        YLeaf ethernet_segment_name; //type: string
        YLeaf ethernet_segment_state; //type: uint32
        YLeaf if_handle; //type: string
        YLeaf main_port_role; //type: L2VpnRgStateEnum
        YLeaf main_port_mac; //type: string
        YLeaf num_up_p_ws; //type: uint32
        YLeaf route_target; //type: string
        YLeaf rt_origin; //type: L2VpnEvpnRtOriginEnum
        YLeaf es_bgp_gates; //type: string
        YLeaf es_l2fib_gates; //type: string
        YLeaf mac_flushing_mode_config; //type: L2VpnEvpnMfModeEnum
        YLeaf load_balance_mode_config; //type: L2VpnEvpnLbModeEnum
        YLeaf load_balance_mode_is_default; //type: boolean
        YLeaf load_balance_mode_oper; //type: L2VpnEvpnLbModeEnum
        YLeaf force_single_home; //type: boolean
        YLeaf source_mac_oper; //type: string
        YLeaf source_mac_origin; //type: L2VpnEvpnSmacSrcEnum
        YLeaf peering_timer; //type: uint32
        YLeaf peering_timer_left; //type: uint32
        YLeaf recovery_timer; //type: uint32
        YLeaf recovery_timer_left; //type: uint32
        YLeaf service_carving_mode; //type: L2VpnEvpnScModeEnum
        YLeaf primary_services_input; //type: string
        YLeaf secondary_services_input; //type: string
        YLeaf forwarder_ports; //type: uint32
        YLeaf mp_protected; //type: boolean
        YLeaf service_carving_type; //type: L2VpnEvpnScEnum
        YLeaf elected_d_fs; //type: uint32
        YLeaf not_elected_d_fs; //type: uint32
        YLeaf not_config_d_fs; //type: uint32
        YLeaf local_split_horizon_group_label; //type: uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8
        YLeafList primary_service; //type: list of  uint32
        YLeafList secondary_service; //type: list of  uint32
        YLeafList service_carving_result; //type: list of  uint32

        class NextHop; //type: Evpn::Standby::EthernetSegments::EthernetSegment::NextHop
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments::EthernetSegment::NextHop> > next_hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel> > remote_split_horizon_group_label;


}; // Evpn::Standby::EthernetSegments::EthernetSegment


class Evpn::Standby::EthernetSegments::EthernetSegment::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string



}; // Evpn::Standby::EthernetSegments::EthernetSegment::NextHop


class Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf label; //type: uint32



}; // Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Standby::AcIds : public Entity
{
    public:
        AcIds();
        ~AcIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AcId; //type: Evpn::Standby::AcIds::AcId

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::AcIds::AcId> > ac_id;


}; // Evpn::Standby::AcIds


class Evpn::Standby::AcIds::AcId : public Entity
{
    public:
        AcId();
        ~AcId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ac_id; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf neighbor; //type: string



}; // Evpn::Standby::AcIds::AcId

class L2VpnAdRtRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf import;
        static const Enum::YLeaf export_;

};

class L2VpnEvpnSmacSrcEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf not_applicable;
        static const Enum::YLeaf local;
        static const Enum::YLeaf pbb_bsa;
        static const Enum::YLeaf esi;
        static const Enum::YLeaf esi_invalid;
        static const Enum::YLeaf pbb_bsa_overrride;

};

class L2VpnRgStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf active;
        static const Enum::YLeaf standby;

};

class BgpRouteTargetRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf import;
        static const Enum::YLeaf export_;

};

class L2VpnEvpnMfModeEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf tcn_stp;
        static const Enum::YLeaf mvrp;

};

class L2VpnEvpnLbModeEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid_load_balancing;
        static const Enum::YLeaf single_homed;
        static const Enum::YLeaf multi_homed_aa_per_flow;
        static const Enum::YLeaf multi_homed_aa_per_service;

};

class L2VpnAdRtEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_ad_rt_none;
        static const Enum::YLeaf l2vpn_ad_rt_as;
        static const Enum::YLeaf l2vpn_ad_rt_4byte_as;
        static const Enum::YLeaf l2vpn_ad_rt_v4_addr;
        static const Enum::YLeaf es_import;

};

class L2VpnEvpnScModeEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf manual;

};

class L2VpnEvpnRtOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf extracted;
        static const Enum::YLeaf configured;

};

class L2VpnEvpnScEnum : public Enum
{
    public:
        static const Enum::YLeaf not_applicable;
        static const Enum::YLeaf evi;
        static const Enum::YLeaf isid;
        static const Enum::YLeaf evpn_bag_sc_type_max;

};

class EvpnEnum : public Enum
{
    public:
        static const Enum::YLeaf evpn_type_invalid;
        static const Enum::YLeaf evpn_type_evpn;
        static const Enum::YLeaf evpn_type_pbb_evpn;
        static const Enum::YLeaf evpn_type_evpn_vpws_vlan_unaware;
        static const Enum::YLeaf evpn_type_evpn_vpws_vlan_aware;
        static const Enum::YLeaf evpn_type_max;

};

class BgpRouteTargetFormatEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf two_byte_as;
        static const Enum::YLeaf four_byte_as;
        static const Enum::YLeaf ipv4_address;

};

class L2VpnAdRdEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_ad_rd_none;
        static const Enum::YLeaf l2vpn_ad_rd_auto;
        static const Enum::YLeaf l2vpn_ad_rd_as;
        static const Enum::YLeaf l2vpn_ad_rd_4byte_as;
        static const Enum::YLeaf l2vpn_ad_rd_v4_addr;

};

class L2VpnEvpnEsiEnum : public Enum
{
    public:
        static const Enum::YLeaf esi_type0;
        static const Enum::YLeaf esi_type1;
        static const Enum::YLeaf esi_type2;
        static const Enum::YLeaf esi_type3;
        static const Enum::YLeaf esi_type4;
        static const Enum::YLeaf esi_type5;
        static const Enum::YLeaf l2vpn_evpn_esi_type_legacy;
        static const Enum::YLeaf l2vpn_evpn_esi_type_override;
        static const Enum::YLeaf esi_type_invalid;

};

class BgpRouteTargetEnum : public Enum
{
    public:
        static const Enum::YLeaf no_stitching;
        static const Enum::YLeaf stitching;

};


}
}

#endif /* _CISCO_IOS_XR_EVPN_OPER_ */

