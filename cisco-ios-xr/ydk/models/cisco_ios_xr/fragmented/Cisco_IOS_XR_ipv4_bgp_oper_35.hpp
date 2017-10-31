#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_35_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_35_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_31.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_33.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_34.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn : public ydk::Entity
{
    public:
        AttributesAfterPolicyIn();
        ~AttributesAfterPolicyIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_as_path2_byte; //type: boolean
        ydk::YLeaf is_application_gateway_present; //type: boolean
        ydk::YLeaf is_attr_set_present; //type: boolean
        ydk::YLeaf set_aigp_inbound_igp; //type: boolean
        ydk::YLeaf set_aigp_inbound_metric; //type: boolean
        ydk::YLeaf is_rnh_present; //type: boolean
        ydk::YLeaf is_ribrnh_present; //type: boolean
        ydk::YLeaf attribute_key_number; //type: uint32
        ydk::YLeaf attribute_reuse_id_config; //type: boolean
        ydk::YLeaf attribute_reuse_id_max_id; //type: uint32
        ydk::YLeaf attribute_reuse_id_node; //type: uint32
        ydk::YLeaf attribute_reuse_id_current; //type: uint32
        ydk::YLeaf attribute_reuse_id_keys; //type: uint32
        ydk::YLeaf attribute_reuse_id_recover_sec; //type: uint32
        ydk::YLeaf vpn_distinguisher; //type: uint32
        ydk::YLeaf rnh_type; //type: uint16
        ydk::YLeaf rnh_len; //type: uint8
        ydk::YLeaf rnh_addr_len; //type: uint32
        ydk::YLeaf ribrnh_table; //type: uint32
        ydk::YLeaf ribrnh_mac; //type: string
        ydk::YLeaf ribrnhip_table; //type: uint32
        ydk::YLeaf ribrnh_vni; //type: uint32
        ydk::YLeaf ribrnh_encap; //type: uint8
        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes> common_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet> attr_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr> rnh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp> ribrnh_ip;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes : public ydk::Entity
{
    public:
        CommonAttributes();
        ~CommonAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet : public ydk::Entity
{
    public:
        AttrSet();
        ~AttrSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr : public ydk::Entity
{
    public:
        RnhAddr();
        ~RnhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf len; //type: BgpRnhAddrLen
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp : public ydk::Entity
{
    public:
        RibrnhIp();
        ~RibrnhIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut : public ydk::Entity
{
    public:
        AttributesAfterPolicyOut();
        ~AttributesAfterPolicyOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_as_path2_byte; //type: boolean
        ydk::YLeaf is_application_gateway_present; //type: boolean
        ydk::YLeaf is_attr_set_present; //type: boolean
        ydk::YLeaf set_aigp_inbound_igp; //type: boolean
        ydk::YLeaf set_aigp_inbound_metric; //type: boolean
        ydk::YLeaf is_rnh_present; //type: boolean
        ydk::YLeaf is_ribrnh_present; //type: boolean
        ydk::YLeaf attribute_key_number; //type: uint32
        ydk::YLeaf attribute_reuse_id_config; //type: boolean
        ydk::YLeaf attribute_reuse_id_max_id; //type: uint32
        ydk::YLeaf attribute_reuse_id_node; //type: uint32
        ydk::YLeaf attribute_reuse_id_current; //type: uint32
        ydk::YLeaf attribute_reuse_id_keys; //type: uint32
        ydk::YLeaf attribute_reuse_id_recover_sec; //type: uint32
        ydk::YLeaf vpn_distinguisher; //type: uint32
        ydk::YLeaf rnh_type; //type: uint16
        ydk::YLeaf rnh_len; //type: uint8
        ydk::YLeaf rnh_addr_len; //type: uint32
        ydk::YLeaf ribrnh_table; //type: uint32
        ydk::YLeaf ribrnh_mac; //type: string
        ydk::YLeaf ribrnhip_table; //type: uint32
        ydk::YLeaf ribrnh_vni; //type: uint32
        ydk::YLeaf ribrnh_encap; //type: uint8
        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes> common_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet> attr_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr> rnh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp> ribrnh_ip;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes : public ydk::Entity
{
    public:
        CommonAttributes();
        ~CommonAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet : public ydk::Entity
{
    public:
        AttrSet();
        ~AttrSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr : public ydk::Entity
{
    public:
        RnhAddr();
        ~RnhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf len; //type: BgpRnhAddrLen
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp : public ydk::Entity
{
    public:
        RibrnhIp();
        ~RibrnhIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Convergence : public ydk::Entity
{
    public:
        Convergence();
        ~Convergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf has_converged; //type: boolean
        ydk::YLeaf are_write_queues_empty; //type: boolean

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::Convergence


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo : public ydk::Entity
{
    public:
        AfProcessInfo();
        ~AfProcessInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf process_instance; //type: uint8
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_totals; //type: boolean
        class Global; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global
        class Vrf; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Vrf
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Vrf> vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics> performance_statistics;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_state; //type: BgpRtrState
        ydk::YLeaf table_version; //type: uint32
        ydk::YLeaf version_wrapped; //type: uint32
        ydk::YLeaf version_wrapped_tid; //type: uint32
        ydk::YLeaf max_active_pelem_version; //type: uint32
        ydk::YLeaf merged_table_version; //type: uint32
        ydk::YLeaf route_download_go_active_done_pending; //type: uint32
        ydk::YLeaf rib_brib_received_version; //type: uint32
        ydk::YLeaf table_brib_version; //type: uint32
        ydk::YLeaf label_version; //type: uint32
        ydk::YLeaf import_version; //type: uint32
        ydk::YLeaf standby_version; //type: uint32
        ydk::YLeaf send_version; //type: uint32
        ydk::YLeaf num_init_sync_pfx; //type: uint32
        ydk::YLeaf max_label_stack_depth_v4_next_hop; //type: uint32
        ydk::YLeaf max_label_stack_depth_v6_next_hop; //type: uint32
        ydk::YLeaf local_networks_num; //type: uint32
        ydk::YLeaf local_networks_memory; //type: uint32
        ydk::YLeaf local_networks_malloced_num; //type: uint32
        ydk::YLeaf local_networks_freed_num; //type: uint32
        ydk::YLeaf local_paths_num; //type: uint32
        ydk::YLeaf local_paths_memory; //type: uint32
        ydk::YLeaf local_paths_malloced_num; //type: uint32
        ydk::YLeaf local_paths_freed_num; //type: uint32
        ydk::YLeaf imported_paths_num; //type: uint32
        ydk::YLeaf imported_paths_memory; //type: uint32
        ydk::YLeaf networks_num; //type: uint32
        ydk::YLeaf networks_memory; //type: uint32
        ydk::YLeaf networks_malloced_num; //type: uint32
        ydk::YLeaf networks_freed_num; //type: uint32
        ydk::YLeaf paths_num; //type: uint32
        ydk::YLeaf paths_memory; //type: uint32
        ydk::YLeaf paths_malloced_num; //type: uint32
        ydk::YLeaf paths_freed_num; //type: uint32
        ydk::YLeaf path_elems_num; //type: uint32
        ydk::YLeaf path_elems_memory; //type: uint32
        ydk::YLeaf path_elems_malloced_num; //type: uint32
        ydk::YLeaf path_elems_freed_num; //type: uint32
        ydk::YLeaf label_last_trigger; //type: uint64
        ydk::YLeaf last_label_version; //type: uint32
        ydk::YLeaf label_bgp_version; //type: uint32
        ydk::YLeaf label_triggers; //type: uint32
        ydk::YLeaf rib_last_trigger; //type: uint64
        ydk::YLeaf last_rib_version; //type: uint32
        ydk::YLeaf rib_bgp_version; //type: uint32
        ydk::YLeaf rib_triggers; //type: uint32
        ydk::YLeaf import_last_trigger; //type: uint64
        ydk::YLeaf last_import_version; //type: uint32
        ydk::YLeaf import_bgp_version; //type: uint32
        ydk::YLeaf import_triggers; //type: uint32
        ydk::YLeaf update_gen_last_trigger; //type: uint64
        ydk::YLeaf update_gen_bgp_version; //type: uint32
        ydk::YLeaf update_triggers; //type: uint32
        ydk::YLeaf total_r_ds_num; //type: uint32
        ydk::YLeaf total_remote_r_ds_num; //type: uint32
        ydk::YLeaf total_same_r_ds_num; //type: uint32
        ydk::YLeaf malloced_rd_count; //type: uint32
        ydk::YLeaf freed_rd_count; //type: uint32
        ydk::YLeaf rd_memory; //type: uint32
        ydk::YLeaf multipath_network_entry_count; //type: uint32
        ydk::YLeaf multipath_network_entry_memory; //type: uint32
        ydk::YLeaf multipath_paths_count; //type: uint32
        ydk::YLeaf multipath_paths_memory; //type: uint32
        ydk::YLeaf update_wait_install_enabled; //type: uint32
        ydk::YLeaf rib_acked_table_version; //type: uint32
        ydk::YLeaf rib_ack_requests; //type: uint32
        ydk::YLeaf rib_acks_received; //type: uint32
        ydk::YLeaf rib_slow_acks; //type: uint32
        class VersionWrapTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec
        class VersionWrapStartTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec
        class VersionWrapDoneTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec
        class TriggerRib; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib
        class TriggerImport; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport
        class TriggerUpdate; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate
        class TriggerLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel
        class RibInstall; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec> version_wrap_time_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec> version_wrap_start_time_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec> version_wrap_done_time_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib> trigger_rib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport> trigger_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate> trigger_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel> trigger_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall> rib_install;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec : public ydk::Entity
{
    public:
        VersionWrapTimeSpec();
        ~VersionWrapTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec : public ydk::Entity
{
    public:
        VersionWrapStartTimeSpec();
        ~VersionWrapStartTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec : public ydk::Entity
{
    public:
        VersionWrapDoneTimeSpec();
        ~VersionWrapDoneTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib : public ydk::Entity
{
    public:
        TriggerRib();
        ~TriggerRib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf triggers; //type: uint32
        class Statistic; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic> > statistic;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trigger_version; //type: uint32
        ydk::YLeaf trigger_table_version; //type: uint32
        class TriggerTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec> trigger_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec : public ydk::Entity
{
    public:
        TriggerTimeSpec();
        ~TriggerTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport : public ydk::Entity
{
    public:
        TriggerImport();
        ~TriggerImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf triggers; //type: uint32
        class Statistic; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic> > statistic;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trigger_version; //type: uint32
        ydk::YLeaf trigger_table_version; //type: uint32
        class TriggerTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec> trigger_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec : public ydk::Entity
{
    public:
        TriggerTimeSpec();
        ~TriggerTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate : public ydk::Entity
{
    public:
        TriggerUpdate();
        ~TriggerUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf triggers; //type: uint32
        class Statistic; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic> > statistic;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trigger_version; //type: uint32
        ydk::YLeaf trigger_table_version; //type: uint32
        class TriggerTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec> trigger_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec : public ydk::Entity
{
    public:
        TriggerTimeSpec();
        ~TriggerTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel : public ydk::Entity
{
    public:
        TriggerLabel();
        ~TriggerLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf triggers; //type: uint32
        class Statistic; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic> > statistic;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trigger_version; //type: uint32
        ydk::YLeaf trigger_table_version; //type: uint32
        class TriggerTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec> trigger_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec : public ydk::Entity
{
    public:
        TriggerTimeSpec();
        ~TriggerTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall : public ydk::Entity
{
    public:
        RibInstall();
        ~RibInstall();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf installed_count; //type: uint32
        ydk::YLeaf modified_count; //type: uint32
        ydk::YLeaf skipped_count; //type: uint32
        ydk::YLeaf withdrawn_count; //type: uint32
        ydk::YLeaf start_version; //type: uint32
        ydk::YLeaf target_version; //type: uint32
        class UpdateTime; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime
        class InstallTime; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime> update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime> install_time;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime : public ydk::Entity
{
    public:
        UpdateTime();
        ~UpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime : public ydk::Entity
{
    public:
        InstallTime();
        ~InstallTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Vrf : public ydk::Entity
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

        ydk::YLeaf network_entry_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf imported_paths; //type: uint32
        ydk::YLeaf local_paths; //type: uint32
        ydk::YLeaf path_elems_count; //type: uint32
        ydk::YLeaf path_memory; //type: uint32
        ydk::YLeaf imported_path_memory; //type: uint32
        ydk::YLeaf local_path_memory; //type: uint32
        ydk::YLeaf prefix_memory; //type: uint32
        ydk::YLeaf path_elem_memory; //type: uint32
        ydk::YLeaf received_path_count; //type: uint32
        ydk::YLeaf history_path_count; //type: uint32
        ydk::YLeaf damped_path_count; //type: uint32
        ydk::YLeaf malloced_prefix_count; //type: uint32
        ydk::YLeaf freed_prefix_count; //type: uint32
        ydk::YLeaf malloced_path_count; //type: uint32
        ydk::YLeaf freed_path_count; //type: uint32
        ydk::YLeaf malloced_path_elem_count; //type: uint32
        ydk::YLeaf freed_path_elem_count; //type: uint32
        ydk::YLeaf any_ebgp_neighbor_missing_policy; //type: boolean
        ydk::YLeaf attribute_download; //type: boolean
        ydk::YLeaf route_target_download; //type: boolean
        ydk::YLeaf add_path_install_enable; //type: boolean
        ydk::YLeaf add_path_install_disable; //type: boolean
        ydk::YLeaf best_external; //type: boolean
        ydk::YLeaf best_external_disable; //type: boolean
        ydk::YLeaf label_retain; //type: boolean
        ydk::YLeaf label_retainvalue; //type: uint32
        ydk::YLeaf tbl_bitf_size; //type: uint16
        ydk::YLeaf tbl_chunk_bitf_size; //type: uint16
        ydk::YLeaf is_route_reflector; //type: boolean
        ydk::YLeaf asbr; //type: boolean
        ydk::YLeaf retain_rt_all; //type: boolean
        ydk::YLeaf ibgp_nexthop_self_count; //type: uint32
        ydk::YLeaf use_igpsr_label; //type: boolean
        ydk::YLeaf bmp_network_entry_count; //type: uint32
        ydk::YLeaf bmp_paths_count; //type: uint32
        ydk::YLeaf bmp_prefix_memory; //type: uint32
        ydk::YLeaf bmp_path_memory; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::Vrf


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics : public ydk::Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Global; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global
        class Vrf; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf> vrf;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_converged; //type: boolean
        ydk::YLeaf first_nbr_up_time; //type: uint32
        ydk::YLeaf total_pim_install; //type: uint32
        ydk::YLeaf total_pim_callbacks; //type: uint32
        ydk::YLeaf total_pim_callback_batch; //type: uint32
        class ModeEnterTime; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime
        class TotalPimInstallAdd; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd
        class TotalPimInstallDel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel
        class TotalPimCallbackAdd; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd
        class TotalPimCallbackDel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel
        class TotalPimCallbackAddLocal; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal
        class TotalPimCallbackDelLocal; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime> > mode_enter_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd> > total_pim_install_add;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel> > total_pim_install_del;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd> > total_pim_callback_add;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel> > total_pim_callback_del;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal> > total_pim_callback_add_local;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal> > total_pim_callback_del_local;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime : public ydk::Entity
{
    public:
        ModeEnterTime();
        ~ModeEnterTime();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd : public ydk::Entity
{
    public:
        TotalPimInstallAdd();
        ~TotalPimInstallAdd();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel : public ydk::Entity
{
    public:
        TotalPimInstallDel();
        ~TotalPimInstallDel();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd : public ydk::Entity
{
    public:
        TotalPimCallbackAdd();
        ~TotalPimCallbackAdd();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel : public ydk::Entity
{
    public:
        TotalPimCallbackDel();
        ~TotalPimCallbackDel();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal : public ydk::Entity
{
    public:
        TotalPimCallbackAddLocal();
        ~TotalPimCallbackAddLocal();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal : public ydk::Entity
{
    public:
        TotalPimCallbackDelLocal();
        ~TotalPimCallbackDelLocal();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf : public ydk::Entity
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

        ydk::YLeaf update_generation_calls; //type: uint32
        ydk::YLeaf update_generation_prefixes_count; //type: uint32
        ydk::YLeaf update_generation_be_prefixes_count; //type: uint32
        ydk::YLeaf update_generation_messages_count; //type: uint32
        ydk::YLeaf update_generation_time; //type: uint32
        ydk::YLeaf rib_update_calls; //type: uint32
        ydk::YLeaf rib_update_time; //type: uint32
        ydk::YLeaf prefixes_sent_to_rib; //type: uint32
        ydk::YLeaf prefixes_resent_to_rib; //type: uint32
        ydk::YLeaf prefixes_not_sent_to_rib; //type: uint32
        ydk::YLeaf prefixes_removed_from_rib; //type: uint32
        ydk::YLeaf attributes_sent_to_rib; //type: uint32
        ydk::YLeaf attributes_removed_from_rib; //type: uint32
        ydk::YLeaf attributes_recover_from_rib; //type: uint32
        ydk::YLeaf scanner_runs; //type: uint32
        ydk::YLeaf scanner_time; //type: uint32
        ydk::YLeaf rib_tbl_del_calls; //type: uint32
        ydk::YLeaf rib_tbl_invalid_calls; //type: uint32
        ydk::YLeaf rib_tbl_skip_calls; //type: uint32
        ydk::YLeaf rib_tbl_local_label; //type: uint32
        ydk::YLeaf rib_tbl_retry; //type: uint32
        ydk::YLeaf time_last_update_sent; //type: uint32
        ydk::YLeaf is_rib_table_full; //type: boolean
        ydk::YLeaf rib_table_full_version; //type: uint32
        ydk::YLeaf first_rib_table_full_version; //type: uint32
        ydk::YLeaf last_rib_table_full_version; //type: uint32
        ydk::YLeaf last_rib_table_full_age; //type: uint32
        ydk::YLeaf first_rib_table_has_space_version; //type: uint32
        ydk::YLeaf last_rib_table_has_space_version; //type: uint32
        ydk::YLeaf last_rib_table_has_space_age; //type: uint32
        ydk::YLeaf rib_trigger; //type: boolean
        ydk::YLeaf vrf_flags; //type: uint32
        ydk::YLeaf label_calls; //type: uint32
        ydk::YLeaf label_time; //type: uint32
        ydk::YLeaf label_rewrite_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_added_count; //type: uint32
        ydk::YLeaf import_calls; //type: uint32
        ydk::YLeaf import_time; //type: uint32
        ydk::YLeaf import_src_net_processed_count; //type: uint32
        ydk::YLeaf import_dest_net_processed_count; //type: uint32
        ydk::YLeaf import_added_path_count; //type: uint32
        ydk::YLeaf import_removed_path_count; //type: uint32
        ydk::YLeaf import_replaced_path_count; //type: uint32
        ydk::YLeaf update_group_count; //type: uint32
        ydk::YLeaf subgroup_count; //type: uint32
        class TimeRibCoverged; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeRibCoverged
        class TimeRibDown; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeRibDown
        class FirstRibTableFullTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::FirstRibTableFullTimestamp
        class LastRibTableFullTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::LastRibTableFullTimestamp
        class FirstRibTableHasSpaceTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::FirstRibTableHasSpaceTimestamp
        class LastRibTableHasSpaceTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::LastRibTableHasSpaceTimestamp
        class TimeLabelRetain; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeLabelRetain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeRibCoverged> time_rib_coverged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeRibDown> time_rib_down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::FirstRibTableFullTimestamp> first_rib_table_full_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::LastRibTableFullTimestamp> last_rib_table_full_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::FirstRibTableHasSpaceTimestamp> first_rib_table_has_space_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::LastRibTableHasSpaceTimestamp> last_rib_table_has_space_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeLabelRetain> time_label_retain;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeRibCoverged : public ydk::Entity
{
    public:
        TimeRibCoverged();
        ~TimeRibCoverged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeRibCoverged


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeRibDown : public ydk::Entity
{
    public:
        TimeRibDown();
        ~TimeRibDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeRibDown


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::FirstRibTableFullTimestamp : public ydk::Entity
{
    public:
        FirstRibTableFullTimestamp();
        ~FirstRibTableFullTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::FirstRibTableFullTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::LastRibTableFullTimestamp : public ydk::Entity
{
    public:
        LastRibTableFullTimestamp();
        ~LastRibTableFullTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::LastRibTableFullTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::FirstRibTableHasSpaceTimestamp : public ydk::Entity
{
    public:
        FirstRibTableHasSpaceTimestamp();
        ~FirstRibTableHasSpaceTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::FirstRibTableHasSpaceTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::LastRibTableHasSpaceTimestamp : public ydk::Entity
{
    public:
        LastRibTableHasSpaceTimestamp();
        ~LastRibTableHasSpaceTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::LastRibTableHasSpaceTimestamp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeLabelRetain : public ydk::Entity
{
    public:
        TimeLabelRetain();
        ~TimeLabelRetain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf::TimeLabelRetain


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable : public ydk::Entity
{
    public:
        PathUsedTable();
        ~PathUsedTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Path; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path> > path;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: string
        ydk::YLeaf network; //type: string
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf route_type; //type: BgpRoute
        ydk::YLeaf source_rd; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf no_path; //type: boolean
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf process_instance_id; //type: uint8
        ydk::YLeaf label_oor; //type: boolean
        ydk::YLeaf label_o_or_version; //type: uint32
        ydk::YLeaf label_fail; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf source_route_distinguisher; //type: string
        ydk::YLeaf prefix_version; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_vrf_name; //type: string
        ydk::YLeaf srcaf_name; //type: BgpAfi
        class NeighborAddressXr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr
        class PathInformation; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation
        class AttributesAfterPolicyIn; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::AttributesAfterPolicyIn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr> neighbor_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation> path_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::AttributesAfterPolicyIn> attributes_after_policy_in;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr : public ydk::Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation : public ydk::Entity
{
    public:
        PathInformation();
        ~PathInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_type; //type: BgpRoute1
        ydk::YLeaf is_path_valid; //type: boolean
        ydk::YLeaf is_path_damped; //type: boolean
        ydk::YLeaf is_path_history_held; //type: boolean
        ydk::YLeaf is_internal_path; //type: boolean
        ydk::YLeaf is_best_path; //type: boolean
        ydk::YLeaf is_as_best; //type: boolean
        ydk::YLeaf is_spkr_as_best; //type: boolean
        ydk::YLeaf is_partial_best; //type: boolean
        ydk::YLeaf is_aggregation_suppressed; //type: boolean
        ydk::YLeaf is_import_dampened; //type: boolean
        ydk::YLeaf is_import_suspect; //type: boolean
        ydk::YLeaf is_path_not_advertised; //type: boolean
        ydk::YLeaf is_path_not_advertised_to_ebgps; //type: boolean
        ydk::YLeaf is_path_advertised_local_as_only; //type: boolean
        ydk::YLeaf is_path_from_route_reflector; //type: boolean
        ydk::YLeaf is_path_received_only; //type: boolean
        ydk::YLeaf is_received_path_not_modified; //type: boolean
        ydk::YLeaf is_path_locally_sourced; //type: boolean
        ydk::YLeaf is_path_local_aggregate; //type: boolean
        ydk::YLeaf is_path_from_network_command; //type: boolean
        ydk::YLeaf is_path_from_redistribute_command; //type: boolean
        ydk::YLeaf is_path_imported; //type: boolean
        ydk::YLeaf is_path_reoriginated; //type: boolean
        ydk::YLeaf is_path_reoriginated_stitching; //type: boolean
        ydk::YLeaf is_path_vpn_only; //type: boolean
        ydk::YLeaf is_path_from_confederation_peer; //type: boolean
        ydk::YLeaf is_path_synced_with_igp; //type: boolean
        ydk::YLeaf is_path_multipath; //type: boolean
        ydk::YLeaf is_path_imp_candidate; //type: boolean
        ydk::YLeaf is_path_stale; //type: boolean
        ydk::YLeaf is_path_long_lived_stale; //type: boolean
        ydk::YLeaf is_path_backup; //type: boolean
        ydk::YLeaf is_path_backup_protect_multipath; //type: boolean
        ydk::YLeaf is_path_best_external; //type: boolean
        ydk::YLeaf is_path_additional_path; //type: boolean
        ydk::YLeaf is_path_nexthop_discarded; //type: boolean
        ydk::YLeaf rcvd_label_count; //type: uint32
        ydk::YLeaf has_local_net_label; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf path_weight; //type: uint16
        ydk::YLeaf neighbor_router_id; //type: string
        ydk::YLeaf has_mdt_group_addr; //type: boolean
        ydk::YLeaf l2vpn_size; //type: uint32
        ydk::YLeaf l2vpn_evpn_esi; //type: string
        ydk::YLeaf has_gw_addr; //type: boolean
        ydk::YLeaf has_nh_addr; //type: boolean
        ydk::YLeaf has_second_label; //type: boolean
        ydk::YLeaf second_label; //type: uint32
        ydk::YLeaf path_flap_count; //type: uint32
        ydk::YLeaf seconds_since_first_flap; //type: uint32
        ydk::YLeaf time_to_unsuppress; //type: uint32
        ydk::YLeaf dampen_penalty; //type: uint32
        ydk::YLeaf halflife_time; //type: uint32
        ydk::YLeaf suppress_penalty; //type: uint32
        ydk::YLeaf reuse_value; //type: uint32
        ydk::YLeaf maximum_suppress_time; //type: uint32
        ydk::YLeaf best_path_comp_stage; //type: BgpBpStage
        ydk::YLeaf best_path_id_comp_winner; //type: uint32
        ydk::YLeaf path_flags; //type: uint64
        ydk::YLeaf path_import_flags; //type: uint32
        ydk::YLeaf best_path_id; //type: uint32
        ydk::YLeaf local_path_id; //type: uint32
        ydk::YLeaf rcvd_path_id; //type: uint32
        ydk::YLeaf path_table_version; //type: uint32
        ydk::YLeaf advertisedto_pe; //type: boolean
        ydk::YLeaf rib_failed; //type: boolean
        ydk::YLeaf sn_rpki_origin_as_validity; //type: uint8
        ydk::YLeaf show_rpki_origin_as_validity; //type: boolean
        ydk::YLeaf ibgp_signaled_validity; //type: boolean
        ydk::YLeaf rpki_origin_as_validation_disabled; //type: boolean
        ydk::YLeaf accept_own_path; //type: boolean
        ydk::YLeaf accept_own_self_originated_p_ath; //type: boolean
        ydk::YLeaf aigp_metric; //type: uint64
        ydk::YLeaf mvpn_sfs_path; //type: boolean
        ydk::YLeaf fspec_invalid_path; //type: boolean
        ydk::YLeaf has_mvpn_nbr_addr; //type: boolean
        ydk::YLeaf has_mvpn_nexthop_addr; //type: boolean
        ydk::YLeaf has_mvpn_pmsi; //type: boolean
        ydk::YLeaf mvpn_pmsi_type; //type: uint16
        ydk::YLeaf mvpn_pmsi_flags; //type: uint8
        ydk::YLeaf mvpn_pmsi_label; //type: uint32
        ydk::YLeaf has_mvpn_extcomm; //type: boolean
        ydk::YLeaf mvpn_path_flags; //type: uint16
        ydk::YLeaf local_nh; //type: boolean
        ydk::YLeaf rt_set_limit_enabled; //type: boolean
        ydk::YLeaf path_rt_set_id; //type: uint32
        ydk::YLeaf path_rt_set_route_count; //type: uint32
        ydk::YLeaf is_path_af_install_eligible; //type: boolean
        ydk::YLeaf is_permanent_path; //type: boolean
        ydk::YLeaf graceful_shutdown; //type: boolean
        ydk::YLeaf labeled_unicast_safi_path; //type: boolean
        ydk::YLeaf vpn_path_flags; //type: uint8
        ydk::YLeaf has_vpn_nexthop_addr; //type: boolean
        ydk::YLeaf is_orig_src_rd_present; //type: boolean
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf route_distinguisher; //type: string
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress
        class NextHop; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NhTunnel
        class MdtGroupAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::MdtGroupAddr
        class GwAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::GwAddr
        class NhAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NhAddr
        class BestPathCompWinner; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BestPathCompWinner
        class MvpnNbrAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnNbrAddr
        class MvpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnNexthopAddr
        class VpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::VpnNexthopAddr
        class RcvdLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::RcvdLabel
        class L2VpnCircuitStatusValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::L2VpnCircuitStatusValue
        class MvpnPmsiValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnPmsiValue
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::ExtendedCommunity
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::AddPathOrrBitfield

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix> bgp_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress> neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NhTunnel> nh_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::MdtGroupAddr> mdt_group_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::GwAddr> gw_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NhAddr> nh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BestPathCompWinner> best_path_comp_winner;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnNbrAddr> mvpn_nbr_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnNexthopAddr> mvpn_nexthop_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::VpnNexthopAddr> vpn_nexthop_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::RcvdLabel> > rcvd_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::L2VpnCircuitStatusValue> > l2vpn_circuit_status_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnPmsiValue> > mvpn_pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::PePeersAdvertisedTo> > pe_peers_advertised_to;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::AddPathOrrBitfield> > add_path_orr_bitfield;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix : public ydk::Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop : public ydk::Entity
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

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_35_ */

