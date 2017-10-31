#ifndef _CISCO_IOS_XR_MPLS_LSD_OPER_4_
#define _CISCO_IOS_XR_MPLS_LSD_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_lsd_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf l3_interface; //type: string
        ydk::YLeaf l2_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf owner_application_type; //type: MgmtLsdApp
        class Nexthop; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        ydk::YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Nexthop; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        ydk::YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf tunnel_local_label; //type: uint32
        ydk::YLeaf tunnel_local_label_str; //type: string
        ydk::YLeaf tunnel_fwd_class; //type: uint8
        ydk::YLeaf tunnel_load_metric; //type: uint32
        ydk::YLeaf flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteTes : public ydk::Entity
{
    public:
        RewriteTes();
        ~RewriteTes();

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

        class RewriteTe; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe> > rewrite_te;
        
}; // MplsLsd::Rewrite::RewriteTes


class MplsLsd::Rewrite::RewriteTes::RewriteTe : public ydk::Entity
{
    public:
        RewriteTe();
        ~RewriteTe();

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
        ydk::YLeaf rewrite_version; //type: uint64
        ydk::YLeaf bcdl_priority; //type: uint8
        ydk::YLeaf lsd_queue; //type: uint8
        ydk::YLeaf rw_install_time; //type: uint64
        ydk::YLeaf rw_install_age; //type: uint64
        ydk::YLeaf rw_updated; //type: int32
        ydk::YLeaf priority_updated; //type: int32
        class FpiKey; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey> fpi_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi> > associated_fpi;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf> > v6_rpf;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois> > mois;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey : public ydk::Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fpi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi> fpi;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner> > application_owner;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi : public ydk::Entity
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
        class LabelData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId : public ydk::Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RewriteId_; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_> rewrite_id;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_ : public ydk::Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rewrite_id_type; //type: MgmtLsdRwId
        class LabelContext; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext : public ydk::Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_context_type; //type: MgmtLsdLblCtx
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding
        class LabelBlockSrlbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData> label_block_srlb_data;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data : public ydk::Entity
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
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public ydk::Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public ydk::Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public ydk::Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public ydk::Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public ydk::Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public ydk::Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public ydk::Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public ydk::Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public ydk::Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite : public ydk::Entity
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

        ydk::YLeafList label_data; //type: list of  uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi : public ydk::Entity
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

        class Fpi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi> fpi;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner> > application_owner;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi : public ydk::Entity
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
        class LabelData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf


class MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois : public ydk::Entity
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

        class ApplicationResource; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray> > moi_array;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray : public ydk::Entity
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

        class Moi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi> moi;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi : public ydk::Entity
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
        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4 : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6 : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data : public ydk::Entity
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
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data : public ydk::Entity
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
        ydk::YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data : public ydk::Entity
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
        class Nexthop; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public ydk::Entity
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
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public ydk::Entity
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
        ydk::YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data : public ydk::Entity
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

        class Nexthop; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public ydk::Entity
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
        ydk::YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public ydk::Entity
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
        ydk::YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteLabels : public ydk::Entity
{
    public:
        RewriteLabels();
        ~RewriteLabels();

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

        class RewriteLabel; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel> > rewrite_label;
        
}; // MplsLsd::Rewrite::RewriteLabels


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel : public ydk::Entity
{
    public:
        RewriteLabel();
        ~RewriteLabel();

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

        ydk::YLeaf label_id; //type: int32
        ydk::YLeaf rewrite_version; //type: uint64
        ydk::YLeaf bcdl_priority; //type: uint8
        ydk::YLeaf lsd_queue; //type: uint8
        ydk::YLeaf rw_install_time; //type: uint64
        ydk::YLeaf rw_install_age; //type: uint64
        ydk::YLeaf rw_updated; //type: int32
        ydk::YLeaf priority_updated; //type: int32
        class FpiKey; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey> fpi_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi> > associated_fpi;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf> > v6_rpf;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois> > mois;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey : public ydk::Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fpi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi> fpi;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner> > application_owner;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi : public ydk::Entity
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
        class LabelData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner : public ydk::Entity
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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId : public ydk::Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RewriteId_; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_> rewrite_id;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_ : public ydk::Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rewrite_id_type; //type: MgmtLsdRwId
        class LabelContext; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext : public ydk::Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_context_type; //type: MgmtLsdLblCtx
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding
        class LabelBlockSrlbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData> label_block_srlb_data;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data : public ydk::Entity
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
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data


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


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public ydk::Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public ydk::Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public ydk::Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public ydk::Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public ydk::Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


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


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public ydk::Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public ydk::Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public ydk::Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


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


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public ydk::Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

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

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


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

        ydk::YLeafList label_data; //type: list of  uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite


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
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner> > application_owner;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        
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


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_OPER_4_ */

