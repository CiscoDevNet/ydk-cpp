#ifndef _CISCO_IOS_XR_IPV4_IO_OPER_
#define _CISCO_IOS_XR_IPV4_IO_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_io_oper {

class Ipv4Network : public ydk::Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

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

        class Nodes; //type: Ipv4Network::Nodes
        class Interfaces; //type: Ipv4Network::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces> interfaces;
        
}; // Ipv4Network


class Ipv4Network::Nodes : public ydk::Entity
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

        class Node; //type: Ipv4Network::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node> > node;
        
}; // Ipv4Network::Nodes


class Ipv4Network::Nodes::Node : public ydk::Entity
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
        class InterfaceData; //type: Ipv4Network::Nodes::Node::InterfaceData
        class Statistics; //type: Ipv4Network::Nodes::Node::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData> interface_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics> statistics;
        
}; // Ipv4Network::Nodes::Node


class Ipv4Network::Nodes::Node::InterfaceData : public ydk::Entity
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

        class Vrfs; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs
        class Summary; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary> summary;
        
}; // Ipv4Network::Nodes::Node::InterfaceData


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs : public ydk::Entity
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

        class Vrf; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf> > vrf;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf : public ydk::Entity
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
        class Briefs; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs
        class Details; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs> briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details> details;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs : public ydk::Entity
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

        class Brief; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief> > brief;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief : public ydk::Entity
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
        ydk::YLeaf primary_address; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf line_state; //type: Ipv4MaOperLineState

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details : public ydk::Entity
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

        class Detail; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail> > detail;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail : public ydk::Entity
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
        ydk::YLeaf primary_address; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf line_state; //type: Ipv4MaOperLineState
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_tag; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf unreachable; //type: boolean
        ydk::YLeaf redirect; //type: boolean
        ydk::YLeaf direct_broadcast; //type: boolean
        ydk::YLeaf mask_reply; //type: boolean
        ydk::YLeaf rg_id_exists; //type: boolean
        ydk::YLeaf mlacp_active; //type: boolean
        ydk::YLeaf unnumbered_interface_name; //type: string
        ydk::YLeaf proxy_arp_disabled; //type: boolean
        ydk::YLeaf flow_tag_src; //type: boolean
        ydk::YLeaf flow_tag_dst; //type: boolean
        class Acl; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl
        class MultiAcl; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl
        class HelperAddress; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress
        class Rpf; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf
        class BgpPa; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa
        class PubUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime
        class IdbUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime
        class CapsUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime
        class FwdEnUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime
        class FwdDisUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime
        class MulticastGroup; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup
        class SecondaryAddress; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl> acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl> multi_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress> helper_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf> rpf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa> bgp_pa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime> pub_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime> idb_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime> caps_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime> fwd_en_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime> fwd_dis_utime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup> > multicast_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress> > secondary_address;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inbound; //type: string
        ydk::YLeaf outbound; //type: string
        ydk::YLeaf common_in_bound; //type: string
        ydk::YLeaf common_out_bound; //type: string

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl : public ydk::Entity
{
    public:
        MultiAcl();
        ~MultiAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inbound; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound
        class Outbound; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound
        class Common; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound> > inbound;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound> > outbound;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common> > common;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound : public ydk::Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Inbound


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound : public ydk::Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Outbound


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common : public ydk::Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::Common


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressArray; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray> > address_array;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray : public ydk::Entity
{
    public:
        AddressArray();
        ~AddressArray();

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

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::AddressArray


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf : public ydk::Entity
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
        ydk::YLeaf mode; //type: RpfMode

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa : public ydk::Entity
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

        class Input; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input
        class Output; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output> output;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf source; //type: boolean
        ydk::YLeaf destination; //type: boolean

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf source; //type: boolean
        ydk::YLeaf destination; //type: boolean

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime : public ydk::Entity
{
    public:
        PubUtime();
        ~PubUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime : public ydk::Entity
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


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime : public ydk::Entity
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


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime : public ydk::Entity
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


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime : public ydk::Entity
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


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup : public ydk::Entity
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

        ydk::YLeaf group_address; //type: string

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress : public ydk::Entity
{
    public:
        SecondaryAddress();
        ~SecondaryAddress();

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
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress


class Ipv4Network::Nodes::Node::InterfaceData::Summary : public ydk::Entity
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
        class IfUpUp; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp
        class IfUpDown; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown
        class IfDownDown; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown
        class IfShutdownDown; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp> if_up_up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown> if_up_down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown> if_down_down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown> if_shutdown_down;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Summary


class Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp : public ydk::Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp


class Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown : public ydk::Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown


class Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown : public ydk::Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown


class Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown : public ydk::Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown


class Ipv4Network::Nodes::Node::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Traffic; //type: Ipv4Network::Nodes::Node::Statistics::Traffic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics::Traffic> traffic;
        
}; // Ipv4Network::Nodes::Node::Statistics


class Ipv4Network::Nodes::Node::Statistics::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Stats; //type: Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats
        class IcmpStats; //type: Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats> ipv4_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats> icmp_stats;
        
}; // Ipv4Network::Nodes::Node::Statistics::Traffic


class Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats : public ydk::Entity
{
    public:
        Ipv4Stats();
        ~Ipv4Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input_packets; //type: uint32
        ydk::YLeaf received_packets; //type: uint32
        ydk::YLeaf format_errors; //type: uint32
        ydk::YLeaf bad_hop_count; //type: uint32
        ydk::YLeaf bad_source_address; //type: uint32
        ydk::YLeaf bad_header; //type: uint32
        ydk::YLeaf no_protocol; //type: uint32
        ydk::YLeaf no_gateway; //type: uint32
        ydk::YLeaf reassemble_input; //type: uint32
        ydk::YLeaf reassembled; //type: uint32
        ydk::YLeaf reassemble_timeout; //type: uint32
        ydk::YLeaf reassemble_max_drop; //type: uint32
        ydk::YLeaf reassemble_failed; //type: uint32
        ydk::YLeaf options_present; //type: uint32
        ydk::YLeaf bad_option; //type: uint32
        ydk::YLeaf unknown_option; //type: uint32
        ydk::YLeaf bad_security_option; //type: uint32
        ydk::YLeaf basic_security_option; //type: uint32
        ydk::YLeaf extended_security_option; //type: uint32
        ydk::YLeaf cipso_option; //type: uint32
        ydk::YLeaf strict_source_route_option; //type: uint32
        ydk::YLeaf loose_source_route_option; //type: uint32
        ydk::YLeaf record_route_option; //type: uint32
        ydk::YLeaf sid_option; //type: uint32
        ydk::YLeaf timestamp_option; //type: uint32
        ydk::YLeaf router_alert_option; //type: uint32
        ydk::YLeaf noop_option; //type: uint32
        ydk::YLeaf end_option; //type: uint32
        ydk::YLeaf packets_output; //type: uint32
        ydk::YLeaf packets_forwarded; //type: uint32
        ydk::YLeaf packets_fragmented; //type: uint32
        ydk::YLeaf fragment_count; //type: uint32
        ydk::YLeaf encapsulation_failed; //type: uint32
        ydk::YLeaf no_router; //type: uint32
        ydk::YLeaf packet_too_big; //type: uint32
        ydk::YLeaf multicast_in; //type: uint32
        ydk::YLeaf multicast_out; //type: uint32
        ydk::YLeaf broadcast_in; //type: uint32
        ydk::YLeaf broadcast_out; //type: uint32
        ydk::YLeaf lisp_v4_encap; //type: uint32
        ydk::YLeaf lisp_v4_decap; //type: uint32
        ydk::YLeaf lisp_v6_encap; //type: uint32
        ydk::YLeaf lisp_v6_decap; //type: uint32
        ydk::YLeaf lisp_encap_error; //type: uint32
        ydk::YLeaf lisp_decap_error; //type: uint32

}; // Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats


class Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats : public ydk::Entity
{
    public:
        IcmpStats();
        ~IcmpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf checksum_error; //type: uint32
        ydk::YLeaf unknown; //type: uint32
        ydk::YLeaf output; //type: uint32
        ydk::YLeaf admin_unreachable_sent; //type: uint32
        ydk::YLeaf network_unreachable_sent; //type: uint32
        ydk::YLeaf host_unreachable_sent; //type: uint32
        ydk::YLeaf protocol_unreachable_sent; //type: uint32
        ydk::YLeaf port_unreachable_sent; //type: uint32
        ydk::YLeaf fragment_unreachable_sent; //type: uint32
        ydk::YLeaf admin_unreachable_received; //type: uint32
        ydk::YLeaf network_unreachable_received; //type: uint32
        ydk::YLeaf host_unreachable_received; //type: uint32
        ydk::YLeaf protocol_unreachable_received; //type: uint32
        ydk::YLeaf port_unreachable_received; //type: uint32
        ydk::YLeaf fragment_unreachable_received; //type: uint32
        ydk::YLeaf hopcount_sent; //type: uint32
        ydk::YLeaf reassembly_sent; //type: uint32
        ydk::YLeaf hopcount_received; //type: uint32
        ydk::YLeaf reassebly_received; //type: uint32
        ydk::YLeaf param_error_received; //type: uint32
        ydk::YLeaf param_error_send; //type: uint32
        ydk::YLeaf echo_request_sent; //type: uint32
        ydk::YLeaf echo_request_received; //type: uint32
        ydk::YLeaf echo_reply_sent; //type: uint32
        ydk::YLeaf echo_reply_received; //type: uint32
        ydk::YLeaf mask_request_sent; //type: uint32
        ydk::YLeaf mask_request_received; //type: uint32
        ydk::YLeaf mask_reply_sent; //type: uint32
        ydk::YLeaf mask_reply_received; //type: uint32
        ydk::YLeaf source_quench_received; //type: uint32
        ydk::YLeaf redirect_received; //type: uint32
        ydk::YLeaf redirect_send; //type: uint32
        ydk::YLeaf timestamp_received; //type: uint32
        ydk::YLeaf timestamp_reply_received; //type: uint32
        ydk::YLeaf router_advert_received; //type: uint32
        ydk::YLeaf router_solicit_received; //type: uint32

}; // Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats


class Ipv4Network::Interfaces : public ydk::Entity
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

        class Interface; //type: Ipv4Network::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface> > interface;
        
}; // Ipv4Network::Interfaces


class Ipv4Network::Interfaces::Interface : public ydk::Entity
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
        class Vrfs; //type: Ipv4Network::Interfaces::Interface::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs> vrfs;
        
}; // Ipv4Network::Interfaces::Interface


class Ipv4Network::Interfaces::Interface::Vrfs : public ydk::Entity
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

        class Vrf; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf> > vrf;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf : public ydk::Entity
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
        class Detail; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail
        class Brief; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief> brief;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail : public ydk::Entity
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

        ydk::YLeaf primary_address; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf line_state; //type: Ipv4MaOperLineState
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_tag; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf unreachable; //type: boolean
        ydk::YLeaf redirect; //type: boolean
        ydk::YLeaf direct_broadcast; //type: boolean
        ydk::YLeaf mask_reply; //type: boolean
        ydk::YLeaf rg_id_exists; //type: boolean
        ydk::YLeaf mlacp_active; //type: boolean
        ydk::YLeaf unnumbered_interface_name; //type: string
        ydk::YLeaf proxy_arp_disabled; //type: boolean
        ydk::YLeaf flow_tag_src; //type: boolean
        ydk::YLeaf flow_tag_dst; //type: boolean
        class Acl; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl
        class MultiAcl; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl
        class HelperAddress; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress
        class Rpf; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf
        class BgpPa; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa
        class PubUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime
        class IdbUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime
        class CapsUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime
        class FwdEnUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime
        class FwdDisUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime
        class MulticastGroup; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup
        class SecondaryAddress; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl> acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl> multi_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress> helper_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf> rpf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa> bgp_pa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime> pub_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime> idb_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime> caps_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime> fwd_en_utime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime> fwd_dis_utime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup> > multicast_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress> > secondary_address;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inbound; //type: string
        ydk::YLeaf outbound; //type: string
        ydk::YLeaf common_in_bound; //type: string
        ydk::YLeaf common_out_bound; //type: string

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl : public ydk::Entity
{
    public:
        MultiAcl();
        ~MultiAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inbound; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Inbound
        class Outbound; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Outbound
        class Common; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Common

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Inbound> > inbound;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Outbound> > outbound;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Common> > common;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Inbound : public ydk::Entity
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

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Inbound


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Outbound : public ydk::Entity
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

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Outbound


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Common : public ydk::Entity
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

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::Common


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressArray; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::AddressArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::AddressArray> > address_array;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::AddressArray : public ydk::Entity
{
    public:
        AddressArray();
        ~AddressArray();

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

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::AddressArray


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf : public ydk::Entity
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
        ydk::YLeaf mode; //type: RpfMode

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa : public ydk::Entity
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

        class Input; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input
        class Output; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output> output;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf source; //type: boolean
        ydk::YLeaf destination; //type: boolean

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf source; //type: boolean
        ydk::YLeaf destination; //type: boolean

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime : public ydk::Entity
{
    public:
        PubUtime();
        ~PubUtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime : public ydk::Entity
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


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime : public ydk::Entity
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


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime : public ydk::Entity
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


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime : public ydk::Entity
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


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup : public ydk::Entity
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

        ydk::YLeaf group_address; //type: string

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress : public ydk::Entity
{
    public:
        SecondaryAddress();
        ~SecondaryAddress();

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
        ydk::YLeaf route_tag; //type: uint32

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief : public ydk::Entity
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

        ydk::YLeaf primary_address; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf line_state; //type: Ipv4MaOperLineState

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief

class RpfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class Ipv4MaOperLineState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IO_OPER_ */

