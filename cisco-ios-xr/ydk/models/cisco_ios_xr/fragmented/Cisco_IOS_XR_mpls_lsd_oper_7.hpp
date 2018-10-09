#ifndef _CISCO_IOS_XR_MPLS_LSD_OPER_7_
#define _CISCO_IOS_XR_MPLS_LSD_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_lsd_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_4.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_6.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf tunnel_dest; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf is_srte; //type: int32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData : public ydk::Entity
{
    public:
        Ipv4l3vpnData();
        ~Ipv4l3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData : public ydk::Entity
{
    public:
        Ipv6l3vpnData();
        ~Ipv6l3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData : public ydk::Entity
{
    public:
        VrfL3vpnData();
        ~VrfL3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3vpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData : public ydk::Entity
{
    public:
        Cev4l3vpnData();
        ~Cev4l3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData : public ydk::Entity
{
    public:
        Cev6l3vpnData();
        ~Cev6l3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf pseudowire_id; //type: uint64
        ydk::YLeaf remote_l2_router_id; //type: uint32
        ydk::YLeaf subinterface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData : public ydk::Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: uint8
        ydk::YLeaf vpn_id; //type: uint16
        ydk::YLeaf edge_id; //type: uint16
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf parent_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData : public ydk::Entity
{
    public:
        Tev4p2mpData();
        ~Tev4p2mpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf previous_hop; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4p2mpData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data : public ydk::Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf peer_lsrid; //type: string
        ydk::YLeaf peer_label_space_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_intf; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData : public ydk::Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf dest_global_id; //type: uint32
        ydk::YLeaf dest_node_id; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint16
        ydk::YLeaf dest_tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gre_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf greipv6_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData : public ydk::Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_id; //type: uint32
        ydk::YLeaf evpn_tag; //type: uint32
        ydk::YLeaf ethernet_segment; //type: string
        ydk::YLeaf evpn_encap; //type: uint8

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData : public ydk::Entity
{
    public:
        Ipv4blbData();
        ~Ipv4blbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4blbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData : public ydk::Entity
{
    public:
        Ipv6blbData();
        ~Ipv6blbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6blbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public ydk::Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public ydk::Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32
        ydk::YLeaf hli; //type: uint32
        ydk::YLeaf seg; //type: int32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn : public ydk::Entity
{
    public:
        NextHopSetL3vpn();
        ~NextHopSetL3vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public ydk::Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf segment_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public ydk::Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding : public ydk::Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_identifier; //type: uint32
        ydk::YLeaf te_type; //type: MgmtLsdTeBinding

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData : public ydk::Entity
{
    public:
        LabelBlockSrlbData();
        ~LabelBlockSrlbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite : public ydk::Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData

        ydk::YList label_data;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite::LabelData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi : public ydk::Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fpi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi> fpi;
        ydk::YList application_owner;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi : public ydk::Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpi_type; //type: MgmtLsdFpi
        class LabelData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData
        class LabelRange; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange> label_range;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData : public ydk::Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf router_flags; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData : public ydk::Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf index_; //type: uint8

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelRange


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf : public ydk::Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf v4_rpf_neighbor; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf : public ydk::Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf v6_rpf_neighbor; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois : public ydk::Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationResource; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource> application_resource;
        ydk::YList moi_array;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource : public ydk::Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray : public ydk::Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Moi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi> moi;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi : public ydk::Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf moi_type; //type: MgmtLsdMoi
        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData
        class NnhStackv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data
        class NnhStackv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data
        class LabelRange; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data> nnh_stackv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data> nnh_stackv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange> label_range;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4 : public ydk::Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp : public ydk::Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6 : public ydk::Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf out_interface_parent; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf backup_interface; //type: string
        ydk::YLeaf backup_ipv4_next_hop; //type: string
        ydk::YLeaf merge_point_label; //type: uint32
        ydk::YLeaf backup_local_label; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf tunnel_weight; //type: uint32
        ydk::YLeaf data_out_parent_interface; //type: string
        ydk::YLeaf tunnel_class; //type: uint32
        ydk::YLeaf ipv4_next_next_hop; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf pseuodo_wire_connect_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf split_horizon_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf control_word; //type: int32
        ydk::YLeaf imposition; //type: int32
        ydk::YLeaf vctype; //type: uint8
        ydk::YLeaf pw_list_id; //type: uint16
        ydk::YLeaf pwhe_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf l3_interface; //type: string
        ydk::YLeaf l2_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data : public ydk::Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner_application_type; //type: MgmtLsdApp
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop
        class Label; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data : public ydk::Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf out_interface_parent; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop
        class Label; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData : public ydk::Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf tunnel_local_label; //type: uint32
        ydk::YLeaf tunnel_local_label_str; //type: string
        ydk::YLeaf tunnel_fwd_class; //type: uint8
        ydk::YLeaf tunnel_load_metric; //type: uint32
        ydk::YLeaf flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData : public ydk::Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data : public ydk::Entity
{
    public:
        NnhStackv4Data();
        ~NnhStackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Stack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack
        class NeighborNextHop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack> ipv4_stack;
        ydk::YList neighbor_next_hop;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack : public ydk::Entity
{
    public:
        Ipv4Stack();
        ~Ipv4Stack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner_application_type; //type: MgmtLsdApp
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop
        class Label; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nnh_type; //type: MplsLsdNnh
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data : public ydk::Entity
{
    public:
        NnhStackv6Data();
        ~NnhStackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Stack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack
        class NeighborNextHop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack> ipv6_stack;
        ydk::YList neighbor_next_hop;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack : public ydk::Entity
{
    public:
        Ipv6Stack();
        ~Ipv6Stack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf out_interface_parent; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop
        class Label; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::Ipv6Stack::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nnh_type; //type: MplsLsdNnh
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::NnhStackv6Data::NeighborNextHop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label_active; //type: uint32
        ydk::YLeaf end_label_active; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::LabelRange


class MplsLsd::RewriteSummary : public ydk::Entity
{
    public:
        RewriteSummary();
        ~RewriteSummary();

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

        ydk::YLeaf num_label_fpi; //type: uint32
        ydk::YLeaf num_tefpi; //type: uint32
        ydk::YLeaf num_ipv4fpi; //type: uint32
        ydk::YLeaf num_ipv6fpi; //type: uint32
        ydk::YLeaf num_pw_list_tefpi; //type: uint32
        ydk::YLeaf num_dmtctefpi; //type: uint32
        ydk::YLeaf num_label_range; //type: uint32
        ydk::YLeaf num_rewrite; //type: uint32
        ydk::YLeaf total_forward_update; //type: uint32
        ydk::YLeaf total_forwad_update_message; //type: uint32
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_t_ev4_paths; //type: uint32
        ydk::YLeaf total_te_head_paths; //type: uint32
        ydk::YLeaf total_pw_paths; //type: uint32
        ydk::YLeaf total_ip_sub_paths; //type: uint32
        ydk::YLeaf total_ipv4rpf_neighbors; //type: uint32
        ydk::YLeaf total_ipv6rpf_neighbors; //type: uint32
        ydk::YLeaf num_rewrite_rpf_neighbors; //type: uint32
        ydk::YLeaf total_dmtc_intf; //type: uint32
        ydk::YLeaf total_label_range; //type: uint32
        ydk::YLeaf vrf_name_xr; //type: string
        class Ipv4Paths; //type: MplsLsd::RewriteSummary::Ipv4Paths
        class Ipv6Paths; //type: MplsLsd::RewriteSummary::Ipv6Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummary::Ipv4Paths> ipv4_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummary::Ipv6Paths> ipv6_paths;
        
}; // MplsLsd::RewriteSummary


class MplsLsd::RewriteSummary::Ipv4Paths : public ydk::Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

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

        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_backup_paths; //type: uint32
        ydk::YLeaf total_remote_backup_paths; //type: uint32
        ydk::YLeaf total_protected_paths; //type: uint32
        ydk::YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsd::RewriteSummary::Ipv4Paths


class MplsLsd::RewriteSummary::Ipv6Paths : public ydk::Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

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

        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_backup_paths; //type: uint32
        ydk::YLeaf total_remote_backup_paths; //type: uint32
        ydk::YLeaf total_protected_paths; //type: uint32
        ydk::YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsd::RewriteSummary::Ipv6Paths


class MplsLsd::Applications : public ydk::Entity
{
    public:
        Applications();
        ~Applications();

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

        class Application; //type: MplsLsd::Applications::Application

        ydk::YList application;
        
}; // MplsLsd::Applications


class MplsLsd::Applications::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

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

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_name_xr; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf app_reg_time; //type: uint64
        ydk::YLeaf app_disconnect_time; //type: uint64
        ydk::YLeaf app_flow_controlled; //type: int32
        ydk::YLeaf flow_ctrl_time; //type: uint64
        ydk::YLeaf flow_ctrl_clr_time; //type: uint64
        ydk::YLeaf go_act_ts; //type: uint64
        ydk::YLeaf application_state; //type: MgmtLsdAppState
        ydk::YLeaf recovery_time_remaining_seconds; //type: uint32
        ydk::YLeaf recovery_time_elapsed_seconds; //type: uint32
        ydk::YLeaf recovery_time_register_seconds; //type: uint32
        ydk::YLeaf node_id; //type: string
        class ApplicationStatistics; //type: MplsLsd::Applications::Application::ApplicationStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application::ApplicationStatistics> application_statistics;
        
}; // MplsLsd::Applications::Application


class MplsLsd::Applications::Application::ApplicationStatistics : public ydk::Entity
{
    public:
        ApplicationStatistics();
        ~ApplicationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_enable; //type: uint32
        ydk::YLeaf interface_enable_pending; //type: uint32
        ydk::YLeaf connect_count; //type: uint32
        class Connected; //type: MplsLsd::Applications::Application::ApplicationStatistics::Connected
        class LabelContextCount; //type: MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount
        class LabelContextPendingCount; //type: MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application::ApplicationStatistics::Connected> connected;
        ydk::YList label_context_count;
        ydk::YList label_context_pending_count;
        
}; // MplsLsd::Applications::Application::ApplicationStatistics


class MplsLsd::Applications::Application::ApplicationStatistics::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_set_msg_count; //type: uint32
        ydk::YLeaf operation_msg_count; //type: uint32
        ydk::YLeaf oor_label_count; //type: uint32
        ydk::YLeaf error_msg_count; //type: uint32

}; // MplsLsd::Applications::Application::ApplicationStatistics::Connected


class MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount : public ydk::Entity
{
    public:
        LabelContextCount();
        ~LabelContextCount();

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

}; // MplsLsd::Applications::Application::ApplicationStatistics::LabelContextCount


class MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount : public ydk::Entity
{
    public:
        LabelContextPendingCount();
        ~LabelContextPendingCount();

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

}; // MplsLsd::Applications::Application::ApplicationStatistics::LabelContextPendingCount


class MplsLsd::LabelSummaryVrfs : public ydk::Entity
{
    public:
        LabelSummaryVrfs();
        ~LabelSummaryVrfs();

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

        class LabelSummaryVrf; //type: MplsLsd::LabelSummaryVrfs::LabelSummaryVrf

        ydk::YList label_summary_vrf;
        
}; // MplsLsd::LabelSummaryVrfs


class MplsLsd::LabelSummaryVrfs::LabelSummaryVrf : public ydk::Entity
{
    public:
        LabelSummaryVrf();
        ~LabelSummaryVrf();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf total_labels; //type: uint32
        ydk::YLeaf rsi_connected; //type: int32
        class OwnerCount; //type: MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount

        ydk::YList owner_count;
        
}; // MplsLsd::LabelSummaryVrfs::LabelSummaryVrf


class MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount : public ydk::Entity
{
    public:
        OwnerCount();
        ~OwnerCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf number_of_labels; //type: uint32

}; // MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount


class MplsLsd::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

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

        ydk::YLeaf min_dynamic_label_value; //type: uint32
        ydk::YLeaf max_dynamic_label_value; //type: uint32
        ydk::YLeaf min_static_label_value; //type: uint32
        ydk::YLeaf max_static_label_value; //type: uint32

}; // MplsLsd::LabelRange


class MplsLsd::RewriteSummaryVrfs : public ydk::Entity
{
    public:
        RewriteSummaryVrfs();
        ~RewriteSummaryVrfs();

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

        class RewriteSummaryVrf; //type: MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf

        ydk::YList rewrite_summary_vrf;
        
}; // MplsLsd::RewriteSummaryVrfs


class MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf : public ydk::Entity
{
    public:
        RewriteSummaryVrf();
        ~RewriteSummaryVrf();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf num_label_fpi; //type: uint32
        ydk::YLeaf num_tefpi; //type: uint32
        ydk::YLeaf num_ipv4fpi; //type: uint32
        ydk::YLeaf num_ipv6fpi; //type: uint32
        ydk::YLeaf num_pw_list_tefpi; //type: uint32
        ydk::YLeaf num_dmtctefpi; //type: uint32
        ydk::YLeaf num_label_range; //type: uint32
        ydk::YLeaf num_rewrite; //type: uint32
        ydk::YLeaf total_forward_update; //type: uint32
        ydk::YLeaf total_forwad_update_message; //type: uint32
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_t_ev4_paths; //type: uint32
        ydk::YLeaf total_te_head_paths; //type: uint32
        ydk::YLeaf total_pw_paths; //type: uint32
        ydk::YLeaf total_ip_sub_paths; //type: uint32
        ydk::YLeaf total_ipv4rpf_neighbors; //type: uint32
        ydk::YLeaf total_ipv6rpf_neighbors; //type: uint32
        ydk::YLeaf num_rewrite_rpf_neighbors; //type: uint32
        ydk::YLeaf total_dmtc_intf; //type: uint32
        ydk::YLeaf total_label_range; //type: uint32
        ydk::YLeaf vrf_name_xr; //type: string
        class Ipv4Paths; //type: MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths
        class Ipv6Paths; //type: MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths> ipv4_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths> ipv6_paths;
        
}; // MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf


class MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths : public ydk::Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_backup_paths; //type: uint32
        ydk::YLeaf total_remote_backup_paths; //type: uint32
        ydk::YLeaf total_protected_paths; //type: uint32
        ydk::YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths


class MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths : public ydk::Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_backup_paths; //type: uint32
        ydk::YLeaf total_remote_backup_paths; //type: uint32
        ydk::YLeaf total_protected_paths; //type: uint32
        ydk::YLeaf total_pop_lkup_paths; //type: uint32

}; // MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths


class MplsLsd::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: MplsLsd::Interfaces::Interface

        ydk::YList interface;
        
}; // MplsLsd::Interfaces


class MplsLsd::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_state; //type: MgmtLsdIntfState
        class ApplicationOwner; //type: MplsLsd::Interfaces::Interface::ApplicationOwner

        ydk::YList application_owner;
        
}; // MplsLsd::Interfaces::Interface


class MplsLsd::Interfaces::Interface::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Interfaces::Interface::ApplicationOwner


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_OPER_7_ */

