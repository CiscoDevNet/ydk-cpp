#ifndef _CISCO_IOS_XR_IPV6_MA_OPER_
#define _CISCO_IOS_XR_IPV6_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ma_oper {

class Ipv6Network : public ydk::Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

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

        class Nodes; //type: Ipv6Network::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes> nodes;
        
}; // Ipv6Network


class Ipv6Network::Nodes : public ydk::Entity
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

        class Node; //type: Ipv6Network::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node> > node;
        
}; // Ipv6Network::Nodes


class Ipv6Network::Nodes::Node : public ydk::Entity
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
        class InterfaceData; //type: Ipv6Network::Nodes::Node::InterfaceData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData> interface_data;
        
}; // Ipv6Network::Nodes::Node


class Ipv6Network::Nodes::Node::InterfaceData : public ydk::Entity
{
    public:
        InterfaceData();
        ~InterfaceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrfs; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs
        class Summary; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary> summary;
        
}; // Ipv6Network::Nodes::Node::InterfaceData


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf> > vrf;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Briefs; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs
        class GlobalDetails; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails
        class GlobalBriefs; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs
        class Details; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs> briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails> global_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs> global_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details> details;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs : public ydk::Entity
{
    public:
        Briefs();
        ~Briefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Brief; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief> > brief;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

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
        ydk::YLeaf line_state; //type: Ipv6MaIfLineState
        ydk::YLeaf vrf_name; //type: string
        class LinkLocalAddress; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress
        class Address; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress> link_local_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address> > address;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress : public ydk::Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf address_state; //type: Ipv6MaIfAddrState
        ydk::YLeaf is_anycast; //type: boolean
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf address_state; //type: Ipv6MaIfAddrState
        ydk::YLeaf is_anycast; //type: boolean
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails : public ydk::Entity
{
    public:
        GlobalDetails();
        ~GlobalDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GlobalDetail; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail> > global_detail;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail : public ydk::Entity
{
    public:
        GlobalDetail();
        ~GlobalDetail();

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
        ydk::YLeaf line_state; //type: Ipv6MaIfLineState
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf operation_state; //type: Ipv6MaOperState
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf is_icmp_unreach_enabled; //type: boolean
        ydk::YLeaf rg_id_exists; //type: boolean
        ydk::YLeaf mlacp_active; //type: boolean
        ydk::YLeaf flow_tag_src; //type: boolean
        ydk::YLeaf flow_tag_dst; //type: boolean
        class LinkLocalAddress; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress
        class AccessControlList; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList
        class MultiAccessControlList; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList
        class Rpf; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf
        class BgpPa; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa
        class Utime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime
        class IdbUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime
        class CapsUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime
        class FwdEnUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime
        class FwdDisUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime
        class MulticastGroup; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup
        class Address; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address
        class ClientMulticastGroup; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress> link_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList> access_control_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList> multi_access_control_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf> rpf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa> bgp_pa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime> utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime> idb_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime> caps_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime> fwd_en_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime> fwd_dis_utime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup> > multicast_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address> > address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup> > client_multicast_group;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress : public ydk::Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf address_state; //type: Ipv6MaIfAddrState
        ydk::YLeaf is_anycast; //type: boolean
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList : public ydk::Entity
{
    public:
        AccessControlList();
        ~AccessControlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_bound; //type: string
        ydk::YLeaf out_bound; //type: string
        ydk::YLeaf common_in_bound; //type: string
        ydk::YLeaf common_out_bound; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList : public ydk::Entity
{
    public:
        MultiAccessControlList();
        ~MultiAccessControlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inbound; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound
        class Outbound; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound
        class Common; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound> > inbound;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound> > outbound;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common> > common;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

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

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

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

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

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

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf allow_default_route; //type: boolean
        ydk::YLeaf allow_self_ping; //type: boolean
        ydk::YLeaf mode; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa : public ydk::Entity
{
    public:
        BgpPa();
        ~BgpPa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input
        class Output; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output> output;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: uint32
        ydk::YLeaf source; //type: boolean
        ydk::YLeaf destination; //type: boolean

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: uint32
        ydk::YLeaf source; //type: boolean
        ydk::YLeaf destination; //type: boolean

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime : public ydk::Entity
{
    public:
        Utime();
        ~Utime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime : public ydk::Entity
{
    public:
        IdbUtime();
        ~IdbUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime : public ydk::Entity
{
    public:
        CapsUtime();
        ~CapsUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime : public ydk::Entity
{
    public:
        FwdEnUtime();
        ~FwdEnUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime : public ydk::Entity
{
    public:
        FwdDisUtime();
        ~FwdDisUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup : public ydk::Entity
{
    public:
        MulticastGroup();
        ~MulticastGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf address_state; //type: Ipv6MaIfAddrState
        ydk::YLeaf is_anycast; //type: boolean
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup : public ydk::Entity
{
    public:
        ClientMulticastGroup();
        ~ClientMulticastGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs : public ydk::Entity
{
    public:
        GlobalBriefs();
        ~GlobalBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GlobalBrief; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief> > global_brief;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief : public ydk::Entity
{
    public:
        GlobalBrief();
        ~GlobalBrief();

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
        ydk::YLeaf line_state; //type: Ipv6MaIfLineState
        ydk::YLeaf vrf_name; //type: string
        class LinkLocalAddress; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress
        class Address; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress> link_local_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address> > address;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress : public ydk::Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf address_state; //type: Ipv6MaIfAddrState
        ydk::YLeaf is_anycast; //type: boolean
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf address_state; //type: Ipv6MaIfAddrState
        ydk::YLeaf is_anycast; //type: boolean
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details : public ydk::Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detail; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail> > detail;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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
        ydk::YLeaf line_state; //type: Ipv6MaIfLineState
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf operation_state; //type: Ipv6MaOperState
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf is_icmp_unreach_enabled; //type: boolean
        ydk::YLeaf rg_id_exists; //type: boolean
        ydk::YLeaf mlacp_active; //type: boolean
        ydk::YLeaf flow_tag_src; //type: boolean
        ydk::YLeaf flow_tag_dst; //type: boolean
        class LinkLocalAddress; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress
        class AccessControlList; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList
        class MultiAccessControlList; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList
        class Rpf; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf
        class BgpPa; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa
        class Utime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime
        class IdbUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime
        class CapsUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime
        class FwdEnUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime
        class FwdDisUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime
        class MulticastGroup; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup
        class Address; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address
        class ClientMulticastGroup; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress> link_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList> access_control_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList> multi_access_control_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf> rpf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa> bgp_pa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime> utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime> idb_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime> caps_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime> fwd_en_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime> fwd_dis_utime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup> > multicast_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address> > address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup> > client_multicast_group;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress : public ydk::Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf address_state; //type: Ipv6MaIfAddrState
        ydk::YLeaf is_anycast; //type: boolean
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList : public ydk::Entity
{
    public:
        AccessControlList();
        ~AccessControlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_bound; //type: string
        ydk::YLeaf out_bound; //type: string
        ydk::YLeaf common_in_bound; //type: string
        ydk::YLeaf common_out_bound; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList : public ydk::Entity
{
    public:
        MultiAccessControlList();
        ~MultiAccessControlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inbound; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound
        class Outbound; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound
        class Common; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound> > inbound;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound> > outbound;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common> > common;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

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

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

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

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

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

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf allow_default_route; //type: boolean
        ydk::YLeaf allow_self_ping; //type: boolean
        ydk::YLeaf mode; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa : public ydk::Entity
{
    public:
        BgpPa();
        ~BgpPa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input
        class Output; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output> output;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: uint32
        ydk::YLeaf source; //type: boolean
        ydk::YLeaf destination; //type: boolean

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: uint32
        ydk::YLeaf source; //type: boolean
        ydk::YLeaf destination; //type: boolean

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime : public ydk::Entity
{
    public:
        Utime();
        ~Utime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime : public ydk::Entity
{
    public:
        IdbUtime();
        ~IdbUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime : public ydk::Entity
{
    public:
        CapsUtime();
        ~CapsUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime : public ydk::Entity
{
    public:
        FwdEnUtime();
        ~FwdEnUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime : public ydk::Entity
{
    public:
        FwdDisUtime();
        ~FwdDisUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup : public ydk::Entity
{
    public:
        MulticastGroup();
        ~MulticastGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf address_state; //type: Ipv6MaIfAddrState
        ydk::YLeaf is_anycast; //type: boolean
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup : public ydk::Entity
{
    public:
        ClientMulticastGroup();
        ~ClientMulticastGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup


class Ipv6Network::Nodes::Node::InterfaceData::Summary : public ydk::Entity
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

        ydk::YLeaf if_up_down_basecaps_up; //type: uint32
        class IfUpUp; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp
        class IfUpDown; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown
        class IfDownDown; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown
        class IfShutdownDown; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp> if_up_up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown> if_up_down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown> if_down_down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown> if_shutdown_down;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Summary


class Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp : public ydk::Entity
{
    public:
        IfUpUp();
        ~IfUpUp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_assigned; //type: uint32
        ydk::YLeaf ip_unnumbered; //type: uint32
        ydk::YLeaf ip_unassigned; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp


class Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown : public ydk::Entity
{
    public:
        IfUpDown();
        ~IfUpDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_assigned; //type: uint32
        ydk::YLeaf ip_unnumbered; //type: uint32
        ydk::YLeaf ip_unassigned; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown


class Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown : public ydk::Entity
{
    public:
        IfDownDown();
        ~IfDownDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_assigned; //type: uint32
        ydk::YLeaf ip_unnumbered; //type: uint32
        ydk::YLeaf ip_unassigned; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown


class Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown : public ydk::Entity
{
    public:
        IfShutdownDown();
        ~IfShutdownDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_assigned; //type: uint32
        ydk::YLeaf ip_unnumbered; //type: uint32
        ydk::YLeaf ip_unassigned; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown

class Ipv6MaOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oper_up;
        static const ydk::Enum::YLeaf oper_down;

};

class Ipv6MaIfAddrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf deprecated;
        static const ydk::Enum::YLeaf duplicate;
        static const ydk::Enum::YLeaf inaccessible;
        static const ydk::Enum::YLeaf tentative;

};

class Ipv6MaIfLineState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf error;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_MA_OPER_ */

