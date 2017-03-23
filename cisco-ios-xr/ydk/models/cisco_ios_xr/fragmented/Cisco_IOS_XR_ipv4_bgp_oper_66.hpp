#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_66_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_66_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_49.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_65.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_iid; //type: int32
        YLeaf attribute_cache_bucket; //type: int32
        YLeaf attribute_cache_id; //type: int32
        YLeaf process_instance_id; //type: uint8
        YLeaf attribute_instance_id; //type: uint8
        YLeaf attribute_structure_id; //type: uint32
        YLeaf attribute_structure_hash_value; //type: uint32
        YLeaf reference_count; //type: uint32

        class AttributeInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo> attribute_info;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo : public Entity
{
    public:
        AttributeInfo();
        ~AttributeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_as_path2_byte; //type: boolean
        YLeaf is_application_gateway_present; //type: boolean
        YLeaf is_attr_set_present; //type: boolean
        YLeaf set_aigp_inbound_igp; //type: boolean
        YLeaf set_aigp_inbound_metric; //type: boolean
        YLeaf is_rnh_present; //type: boolean
        YLeaf is_ribrnh_present; //type: boolean
        YLeaf attribute_key_number; //type: uint32
        YLeaf attribute_reuse_id_config; //type: boolean
        YLeaf attribute_reuse_id_max_id; //type: uint32
        YLeaf attribute_reuse_id_node; //type: uint32
        YLeaf attribute_reuse_id_current; //type: uint32
        YLeaf attribute_reuse_id_keys; //type: uint32
        YLeaf attribute_reuse_id_recover_sec; //type: uint32
        YLeaf vpn_distinguisher; //type: uint32
        YLeaf rnh_type; //type: uint16
        YLeaf rnh_len; //type: uint8
        YLeaf rnh_addr_len; //type: uint32
        YLeaf ribrnh_table; //type: uint32
        YLeaf ribrnh_mac; //type: string
        YLeaf ribrnhip_table; //type: uint32
        YLeaf ribrnh_vni; //type: uint32
        YLeaf ribrnh_encap; //type: uint8

        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet> attr_set;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes> common_attributes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp> ribrnh_ip;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr> rnh_addr;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes : public Entity
{
    public:
        CommonAttributes();
        ~CommonAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_metric_present; //type: boolean
        YLeaf is_local_pref_present; //type: boolean
        YLeaf is_atomic_aggregate_present; //type: boolean
        YLeaf is_aggregator_present; //type: boolean
        YLeaf is_origin_present; //type: boolean
        YLeaf is_as_path_present; //type: boolean
        YLeaf is_community_present; //type: boolean
        YLeaf is_extended_community_present; //type: boolean
        YLeaf is_ssa_present; //type: boolean
        YLeaf is_connector_present; //type: boolean
        YLeaf is_pmsi_present; //type: boolean
        YLeaf is_pppmp_present; //type: boolean
        YLeaf is_aigp_present; //type: boolean
        YLeaf is_pe_distinguisher_label_present; //type: boolean
        YLeaf is_ls_attribute_present; //type: boolean
        YLeaf is_label_index_present; //type: boolean
        YLeaf is_tunnel_encap_present; //type: boolean
        YLeaf neighbor_as; //type: uint32
        YLeaf aggregator_as; //type: uint32
        YLeaf aggregator_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf local_preference; //type: uint32
        YLeaf origin; //type: uint16
        YLeaf as_path; //type: string
        YLeaf extended_community_flags; //type: uint8
        YLeaf originator; //type: string
        YLeaf l2tpv3_session_id; //type: uint32
        YLeaf connector_type; //type: uint16
        YLeaf aigp_metric_value; //type: uint64
        YLeaf pmsi_type; //type: uint16
        YLeaf pmsi_flags; //type: uint8
        YLeaf pmsi_label; //type: uint32
        YLeaf ppm_pvalue; //type: uint32
        YLeaf tunnel_encap_type; //type: uint16
        YLeaf sr_policy_preference; //type: uint32
        YLeaf sr_tunnel_state; //type: uint32
        YLeaf sr_tunnel_request_state; //type: BgpSrpolicyTunReqStateEnum

        class SrPolicyBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid
        class SrPolicyAllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel
        class SrPolicyExplicitPath; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue> > pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid> sr_policy_allocated_binding_sid;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid> sr_policy_binding_sid;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath> > sr_policy_explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute> > unknown_attribute;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid : public Entity
{
    public:
        SrPolicyBindingSid();
        ~SrPolicyBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid : public Entity
{
    public:
        SrPolicyAllocatedBindingSid();
        ~SrPolicyAllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute : public Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster : public Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie : public Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue : public Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue : public Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr : public Entity
{
    public:
        LsAttr();
        ~LsAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr : public Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel : public Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pe_address; //type: string
        YLeaf label; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath : public Entity
{
    public:
        SrPolicyExplicitPath();
        ~SrPolicyExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf weight; //type: uint8

        class Sid; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid> > sid;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid : public Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf label; //type: uint32
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet : public Entity
{
    public:
        AttrSet();
        ~AttrSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_metric_present; //type: boolean
        YLeaf is_local_pref_present; //type: boolean
        YLeaf is_atomic_aggregate_present; //type: boolean
        YLeaf is_aggregator_present; //type: boolean
        YLeaf is_origin_present; //type: boolean
        YLeaf is_as_path_present; //type: boolean
        YLeaf is_community_present; //type: boolean
        YLeaf is_extended_community_present; //type: boolean
        YLeaf is_ssa_present; //type: boolean
        YLeaf is_connector_present; //type: boolean
        YLeaf is_pmsi_present; //type: boolean
        YLeaf is_pppmp_present; //type: boolean
        YLeaf is_aigp_present; //type: boolean
        YLeaf is_pe_distinguisher_label_present; //type: boolean
        YLeaf is_ls_attribute_present; //type: boolean
        YLeaf is_label_index_present; //type: boolean
        YLeaf is_tunnel_encap_present; //type: boolean
        YLeaf neighbor_as; //type: uint32
        YLeaf aggregator_as; //type: uint32
        YLeaf aggregator_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf local_preference; //type: uint32
        YLeaf origin; //type: uint16
        YLeaf as_path; //type: string
        YLeaf extended_community_flags; //type: uint8
        YLeaf originator; //type: string
        YLeaf l2tpv3_session_id; //type: uint32
        YLeaf connector_type; //type: uint16
        YLeaf aigp_metric_value; //type: uint64
        YLeaf pmsi_type; //type: uint16
        YLeaf pmsi_flags; //type: uint8
        YLeaf pmsi_label; //type: uint32
        YLeaf ppm_pvalue; //type: uint32
        YLeaf tunnel_encap_type; //type: uint16
        YLeaf sr_policy_preference; //type: uint32
        YLeaf sr_tunnel_state; //type: uint32
        YLeaf sr_tunnel_request_state; //type: BgpSrpolicyTunReqStateEnum

        class SrPolicyBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid
        class SrPolicyAllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel
        class SrPolicyExplicitPath; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community> > community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue> > pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid> sr_policy_allocated_binding_sid;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid> sr_policy_binding_sid;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath> > sr_policy_explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute> > unknown_attribute;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid : public Entity
{
    public:
        SrPolicyBindingSid();
        ~SrPolicyBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid : public Entity
{
    public:
        SrPolicyAllocatedBindingSid();
        ~SrPolicyAllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute : public Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster : public Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie : public Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue : public Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue : public Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr : public Entity
{
    public:
        LsAttr();
        ~LsAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr : public Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel : public Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pe_address; //type: string
        YLeaf label; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath : public Entity
{
    public:
        SrPolicyExplicitPath();
        ~SrPolicyExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf weight; //type: uint8

        class Sid; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid> > sid;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid : public Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf label; //type: uint32
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr : public Entity
{
    public:
        RnhAddr();
        ~RnhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf len; //type: BgpRnhAddrLenEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf mac_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp : public Entity
{
    public:
        RibrnhIp();
        ~RibrnhIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_distinguisher; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf : public Entity
{
    public:
        UpdateInboundFilterVrf();
        ~UpdateInboundFilterVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_vrf_name; //type: string
        YLeaf update_filtered_message_count; //type: uint32
        YLeaf update_filtered_neighbor_count; //type: uint32
        YLeaf last_update_filtered_age; //type: uint32

        class LastUpdateFilteredTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp> last_update_filtered_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp : public Entity
{
    public:
        LastUpdateFilteredTimestamp();
        ~LastUpdateFilteredTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits : public Entity
{
    public:
        Postits();
        ~Postits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Postit; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit> > postit;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit : public Entity
{
    public:
        Postit();
        ~Postit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf vrf_name; //type: string
        YLeaf connect_state; //type: uint32
        YLeaf start_time; //type: uint32
        YLeaf nsr_state; //type: BgpSyncNbrNsrStateEnum

        class NeighborsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress
        class NeighborAf; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf
        class PostitInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf> > neighbor_af;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress> neighbors_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo> > postit_info;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress : public Entity
{
    public:
        NeighborsAddress();
        ~NeighborsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf : public Entity
{
    public:
        NeighborAf();
        ~NeighborAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: boolean



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo : public Entity
{
    public:
        PostitInfo();
        ~PostitInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf postit_type; //type: uint32
        YLeaf postit_subtype; //type: uint32
        YLeaf postit_flags; //type: uint8
        YLeaf postit_af_name; //type: BgpAfiEnum
        YLeaf postit_ts; //type: uint64
        YLeaf postit_direction; //type: uint8
        YLeaf postit_id; //type: uint32
        YLeaf peer_id; //type: uint32
        YLeaf postit_policy; //type: string
        YLeaf postit_reset; //type: BgpResetReasonIndexEnum

        class PostitNotification; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification> postit_notification;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification : public Entity
{
    public:
        PostitNotification();
        ~PostitNotification();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_since_last_notification; //type: uint32
        YLeaf notification_error_code; //type: uint8
        YLeaf notification_error_subcode; //type: uint8

        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData> > last_notification_data;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData : public Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo : public Entity
{
    public:
        GlobalProcessInfo();
        ~GlobalProcessInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf vrfid; //type: uint32

        class Global; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global
        class Vrf_; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_> vrf;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_standalone_mode; //type: boolean
        YLeaf local_as; //type: uint32
        YLeaf instance_name; //type: string
        YLeaf restart_count; //type: uint32
        YLeaf update_delay; //type: uint32
        YLeaf generic_scan_period; //type: uint16
        YLeaf confederation_id; //type: uint32
        YLeaf cluster_id; //type: uint32
        YLeaf configured_cluster_id; //type: uint32
        YLeaf is_cluster_id_specified_as_ip; //type: boolean
        YLeaf asn_format; //type: uint32
        YLeaf srgb_start_configured; //type: uint32
        YLeaf srgb_end_configured; //type: uint32
        YLeaf srgb_start; //type: uint32
        YLeaf srgb_end; //type: uint32
        YLeaf graceful_maintenance; //type: boolean
        YLeaf graceful_maint_all_nbrs; //type: boolean
        YLeaf graceful_maint_retain_routes; //type: boolean
        YLeaf process_rlimit; //type: uint64
        YLeaf bmp_maximum_buffer_size; //type: uint64
        YLeaf bmp_default_buffer_size; //type: uint64
        YLeaf bmp_current_buffer_size; //type: uint64

        class ClusterIdEntry; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry> > cluster_id_entry;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry : public Entity
{
    public:
        ClusterIdEntry();
        ~ClusterIdEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cluster_id_val; //type: uint32
        YLeaf cluster_id_type; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_is_active; //type: boolean
        YLeaf route_distinguisher; //type: string
        YLeaf router_id; //type: string
        YLeaf configured_router_id; //type: string
        YLeaf is_redistribute_ibgp_to_ig_ps_enabled; //type: boolean
        YLeaf is_fast_external_fallover_enabled; //type: boolean
        YLeaf is_bestpath_missing_med_is_worst_enabled; //type: boolean
        YLeaf is_bestpath_always_compare_med_enabled; //type: boolean
        YLeaf is_bestpath_ignore_as_path_enabled; //type: boolean
        YLeaf is_bestpath_as_path_mpath_relax_enabled; //type: boolean
        YLeaf is_bestpath_compare_med_from_confed_peer_enabled; //type: boolean
        YLeaf is_bestpath_compare_router_id_for_ebgp_peers_enabled; //type: boolean
        YLeaf is_bestpath_aigp_ignore_enabled; //type: boolean
        YLeaf is_multipath_as_path_ignore_onwards_enabled; //type: boolean
        YLeaf is_enforce_first_as_enabled; //type: boolean
        YLeaf default_local_preference; //type: uint32
        YLeaf keep_alive_time; //type: uint16
        YLeaf hold_time; //type: uint16
        YLeaf min_acceptable_hold_time; //type: uint16
        YLeaf is_neighbor_logging; //type: boolean
        YLeaf is_default_metric_configured; //type: boolean
        YLeaf default_metric; //type: uint32
        YLeaf is_default_originate_configured; //type: boolean
        YLeaf is_graceful_restart; //type: boolean
        YLeaf is_nsr; //type: boolean
        YLeaf restart_time; //type: uint32
        YLeaf stale_path_time; //type: uint32
        YLeaf rib_purge_timeout; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors : public Entity
{
    public:
        UpdateInboundErrorNeighbors();
        ~UpdateInboundErrorNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UpdateInboundErrorNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor> > update_inbound_error_neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor : public Entity
{
    public:
        UpdateInboundErrorNeighbor();
        ~UpdateInboundErrorNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf update_vrf_name; //type: string
        YLeaf update_error_handling_avoid_reset; //type: boolean
        YLeaf total_update_message_count; //type: uint32
        YLeaf update_malformed_message_count; //type: uint32
        YLeaf last_update_malformed_age; //type: uint32
        YLeaf update_memory_allocation_fail_count; //type: uint32
        YLeaf last_update_memory_allocation_fail_age; //type: uint32
        YLeaf update_error_handling_reset_count; //type: uint32
        YLeaf last_error_handling_reset_age; //type: uint32
        YLeaf update_error_message_list_count; //type: uint32
        YLeaf update_attribute_discard_count; //type: uint32
        YLeaf establishment_total_update_message_count; //type: uint32

        class UpdateNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress
        class FirstUpdateMalformedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp
        class LastUpdateMalformedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp
        class FirstUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp
        class FirstUpdateErrorHandlingResetTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp
        class LastErrorHandlingResetTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp
        class EstablishmentActionCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount
        class UpdateErrorMessage; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount> > establishment_action_count;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp> first_update_error_handling_reset_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp> first_update_malformed_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp> first_update_memory_allocation_fail_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp> last_error_handling_reset_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp> last_update_malformed_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage> > update_error_message;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress> update_neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress : public Entity
{
    public:
        UpdateNeighborAddress();
        ~UpdateNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp : public Entity
{
    public:
        FirstUpdateMalformedTimestamp();
        ~FirstUpdateMalformedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp : public Entity
{
    public:
        LastUpdateMalformedTimestamp();
        ~LastUpdateMalformedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp : public Entity
{
    public:
        FirstUpdateMemoryAllocationFailTimestamp();
        ~FirstUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp : public Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp : public Entity
{
    public:
        FirstUpdateErrorHandlingResetTimestamp();
        ~FirstUpdateErrorHandlingResetTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp : public Entity
{
    public:
        LastErrorHandlingResetTimestamp();
        ~LastErrorHandlingResetTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount : public Entity
{
    public:
        EstablishmentActionCount();
        ~EstablishmentActionCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage : public Entity
{
    public:
        UpdateErrorMessage();
        ~UpdateErrorMessage();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_error_final_action; //type: BgpBagUpdErrActionEnum
        YLeaf update_attribute_discard_count; //type: uint32
        YLeaf update_error_nlri_address_family; //type: BgpAfiEnum
        YLeaf update_error_nlri_string; //type: string
        YLeaf update_error_nlri_string_truncated; //type: boolean

        class UpdateMessageTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp
        class UpdateMessageResetData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData
        class UpdateMessageData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData
        class UpdateErrorElement; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement> > update_error_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData> > update_message_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData> update_message_reset_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp> update_message_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp : public Entity
{
    public:
        UpdateMessageTimestamp();
        ~UpdateMessageTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData : public Entity
{
    public:
        UpdateMessageResetData();
        ~UpdateMessageResetData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_error_reset_reason; //type: BgpResetReasonIndexEnum
        YLeaf update_error_reset_notification_code; //type: uint8
        YLeaf update_error_reset_notification_sub_code; //type: uint16
        YLeaf update_error_reset_notification_data; //type: string
        YLeaf update_error_reset_notification_data_length; //type: uint16



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData : public Entity
{
    public:
        UpdateMessageData();
        ~UpdateMessageData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement : public Entity
{
    public:
        UpdateErrorElement();
        ~UpdateErrorElement();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_attribute_flags; //type: uint8
        YLeaf update_attribute_code; //type: uint8
        YLeaf update_attribute_length; //type: uint16
        YLeaf update_error_data; //type: string
        YLeaf update_error_data_length; //type: uint16
        YLeaf update_error_action; //type: BgpBagUpdErrActionEnum



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors : public Entity
{
    public:
        UpdateInboundFilterNeighbors();
        ~UpdateInboundFilterNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UpdateInboundFilterNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor> > update_inbound_filter_neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor : public Entity
{
    public:
        UpdateInboundFilterNeighbor();
        ~UpdateInboundFilterNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf update_vrf_name; //type: string
        YLeaf update_filter_logging_enabled; //type: boolean
        YLeaf configured_update_filter_message_buffer_count; //type: uint32
        YLeaf operational_update_filter_message_buffer_count; //type: uint32
        YLeaf update_filter_message_buffer_circular; //type: boolean
        YLeaf update_attribute_filter_group_name; //type: string
        YLeaf operational_update_attribute_filtering_enabled; //type: boolean
        YLeaf message_update_attribute_filtering_enabled; //type: boolean
        YLeaf total_filter_update_message_count; //type: uint32
        YLeaf establishment_total_filter_update_message_count; //type: uint32
        YLeaf update_filtered_message_count; //type: uint32
        YLeaf establishment_update_filtered_message_count; //type: uint32
        YLeaf last_update_filtered_age; //type: uint32
        YLeaf update_filter_message_list_count; //type: uint32

        class UpdateNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress
        class FirstUpdateFilteredTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp
        class LastUpdateFilteredTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp
        class UpdateAttributeFilterAttributes; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes
        class UpdateFilterMessage; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp> first_update_filtered_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp> last_update_filtered_timestamp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes> > update_attribute_filter_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage> > update_filter_message;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress> update_neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress : public Entity
{
    public:
        UpdateNeighborAddress();
        ~UpdateNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp : public Entity
{
    public:
        FirstUpdateFilteredTimestamp();
        ~FirstUpdateFilteredTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp : public Entity
{
    public:
        LastUpdateFilteredTimestamp();
        ~LastUpdateFilteredTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes : public Entity
{
    public:
        UpdateAttributeFilterAttributes();
        ~UpdateAttributeFilterAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_internal_attribute_code; //type: uint32
        YLeaf update_filter_action; //type: BgpBagUpdFilterActionEnum
        YLeaf update_filter_match_count; //type: uint32
        YLeaf establishment_update_filter_match_count; //type: uint32
        YLeaf last_update_filter_match_age; //type: uint32

        class LastUpdateFilterMatchTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp> last_update_filter_match_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp : public Entity
{
    public:
        LastUpdateFilterMatchTimestamp();
        ~LastUpdateFilterMatchTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage : public Entity
{
    public:
        UpdateFilterMessage();
        ~UpdateFilterMessage();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_filtered_attribute_count; //type: uint32
        YLeaf update_filter_final_action; //type: BgpBagUpdFilterActionEnum
        YLeaf update_filter_nlri_address_family; //type: BgpAfiEnum
        YLeaf update_filter_nlri_string; //type: string
        YLeaf update_filter_nlri_string_truncated; //type: boolean

        class UpdateFilterMessageTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp
        class UpdateFilterMessageData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData
        class UpdateFilterElement; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement> > update_filter_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData> > update_filter_message_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp> update_filter_message_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp : public Entity
{
    public:
        UpdateFilterMessageTimestamp();
        ~UpdateFilterMessageTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData : public Entity
{
    public:
        UpdateFilterMessageData();
        ~UpdateFilterMessageData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement : public Entity
{
    public:
        UpdateFilterElement();
        ~UpdateFilterElement();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_attribute_flags; //type: uint8
        YLeaf update_attribute_code; //type: uint8
        YLeaf update_filter_action; //type: BgpBagUpdFilterActionEnum



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp : public Entity
{
    public:
        Bmp();
        ~Bmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServerSummaries; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries
        class ServerNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors> server_neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries> server_summaries;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries : public Entity
{
    public:
        ServerSummaries();
        ~ServerSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServerSummary; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary> > server_summary;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary : public Entity
{
    public:
        ServerSummary();
        ~ServerSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_id; //type: uint32
        YLeaf bmp_server_id; //type: uint8
        YLeaf bmp_server_host_name; //type: string
        YLeaf bmp_server_port; //type: uint32
        YLeaf bmp_server_state; //type: BgpBmpStateEnum
        YLeaf bmp_server_is_flapping; //type: boolean
        YLeaf bmp_server_nbr_count; //type: uint32
        YLeaf bmp_init_msg_count; //type: uint32
        YLeaf bmp_termination_msg_count; //type: uint32
        YLeaf bmp_status_report_count; //type: uint32
        YLeaf bmp_per_peer_msg_count; //type: uint32
        YLeaf bmp_peer_msg_drop_count; //type: uint32
        YLeaf bmp_peer_msg_pending_count; //type: uint32
        YLeaf tos_type; //type: uint8
        YLeaf tos_value; //type: uint8
        YLeaf update_source_interface_name; //type: string
        YLeaf update_source_vrf_id; //type: uint32
        YLeaf bmp_vrf_name; //type: string
        YLeaf bmp_vrf_id; //type: uint32
        YLeaf bmp_update_mode; //type: BgpBmpUpdModeEnum
        YLeaf tcp_keep_alive_interval; //type: uint32
        YLeaf tcp_maximum_segment_size; //type: uint32
        YLeaf tcp_write_cb_pending; //type: uint32
        YLeaf tcp_last_write_result; //type: uint32
        YLeaf tcp_last_write_cb_time; //type: uint64
        YLeaf tcp_last_write_time; //type: uint64
        YLeaf bmpq_last_write_pulse_sent_time; //type: uint64
        YLeaf bmpq_last_all_write_pulse_sent_time; //type: uint64
        YLeaf bmpq_last_write_pulse_cb_time; //type: uint64
        YLeaf path_update_count; //type: uint32
        YLeaf path_withdraw_count; //type: uint32
        YLeaf path_update_drop; //type: uint32
        YLeaf path_withdraw_drop; //type: uint32
        YLeaf bmp_peer_msg_pending_count_max; //type: uint32
        YLeaf bmp_peer_msg_pending_count_hwts; //type: uint64
        YLeaf bmp_bytes_written_tcp; //type: uint64
        YLeaf tcp_write_time; //type: uint32
        YLeaf bmpr_mon_upd_messages; //type: uint32
        YLeaf bmpr_mon_wdraw_messages; //type: uint32
        YLeaf bmp_messages_wdraw_discarded; //type: uint32
        YLeaf bmp_pfx_wdraw_discarded; //type: uint32
        YLeaf bmp_per_peer_msg_route_mon_count; //type: uint32
        YLeaf bmpr_mon_update_gen_time; //type: uint32

        class BmpServerStateAge; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge
        class BmpServerStateTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec
        class BmpServerLastDisconTime; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime
        class UpdateSourceAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress
        class BmpSendVersion; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion> > bmp_send_version;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime> bmp_server_last_discon_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge> bmp_server_state_age;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec> bmp_server_state_time_spec;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress> update_source_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge : public Entity
{
    public:
        BmpServerStateAge();
        ~BmpServerStateAge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec : public Entity
{
    public:
        BmpServerStateTimeSpec();
        ~BmpServerStateTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime : public Entity
{
    public:
        BmpServerLastDisconTime();
        ~BmpServerLastDisconTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress : public Entity
{
    public:
        UpdateSourceAddress();
        ~UpdateSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion : public Entity
{
    public:
        BmpSendVersion();
        ~BmpSendVersion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors : public Entity
{
    public:
        ServerNeighbors();
        ~ServerNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServerNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor> > server_neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor : public Entity
{
    public:
        ServerNeighbor();
        ~ServerNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_id; //type: int32

        class MonitoredNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors> monitored_neighbors;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors : public Entity
{
    public:
        MonitoredNeighbors();
        ~MonitoredNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MonitoredNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor> > monitored_neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor : public Entity
{
    public:
        MonitoredNeighbor();
        ~MonitoredNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf bmp_neighbor_msg_pending; //type: uint32
        YLeaf bmp_neighbor_msg_dropped; //type: uint32
        YLeaf bmp_neighbor_peer_up_sent; //type: uint32
        YLeaf bmp_neighbor_peer_down_sent; //type: uint32
        YLeaf bmp_neighbor_route_monitor_sent; //type: uint32
        YLeaf bmp_neighbor_path_update_sent; //type: uint32
        YLeaf bmp_neighbor_path_withdraw_sent; //type: uint32
        YLeaf bmp_neighbor_path_update_drop; //type: uint32
        YLeaf bmp_neighbor_path_withdraw_drop; //type: uint32
        YLeaf bmp_neighbor_upd_msg_sent; //type: uint32
        YLeaf bmp_neighbor_wdraw_msg_sent; //type: uint32

        class BmpNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress> bmp_neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress : public Entity
{
    public:
        BmpNeighborAddress();
        ~BmpNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo : public Entity
{
    public:
        ProcessInfo();
        ~ProcessInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process_instance; //type: uint8
        YLeaf vrf_name; //type: string
        YLeaf vrf_totals; //type: boolean

        class Global; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global
        class Vrf_; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics> performance_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_> vrf;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process_instance_node; //type: string
        YLeaf restart_count; //type: uint32
        YLeaf path_attributes_entry_count; //type: uint32
        YLeaf path_attribute_memory; //type: uint32
        YLeaf as_path_entry_count; //type: uint32
        YLeaf as_path_entries_memory; //type: uint32
        YLeaf community_entry_count; //type: uint32
        YLeaf community_memory; //type: uint32
        YLeaf extended_community_entry_count; //type: uint32
        YLeaf extended_community_memory; //type: uint32
        YLeaf pe_distinguisher_label_entry_count; //type: uint32
        YLeaf pe_distinguisher_label_memory; //type: uint32
        YLeaf pta_entry_count; //type: uint32
        YLeaf pta_memory; //type: uint32
        YLeaf tunnel_encap_entry_count; //type: uint32
        YLeaf tunnel_encap_memory; //type: uint32
        YLeaf ribrnh_entry_count; //type: uint32
        YLeaf ribrnh_memory; //type: uint32
        YLeaf ppmp_entry_count; //type: uint32
        YLeaf ppmp_memory; //type: uint32
        YLeaf route_reflectors; //type: uint32
        YLeaf route_reflector_memory; //type: uint32
        YLeaf nexthop_count; //type: uint32
        YLeaf nexthop_memory; //type: uint32
        YLeaf lsattr_entry_count; //type: uint32
        YLeaf lsattr_memory; //type: uint32
        YLeaf attr_set_entry_count; //type: uint32
        YLeaf attr_set_memory; //type: uint32
        YLeaf lindex_entry_count; //type: uint32
        YLeaf lindex_memory; //type: uint32
        YLeaf local_as; //type: uint32
        YLeaf total_vrf_count; //type: uint32
        YLeaf neighbors_count_total; //type: uint32
        YLeaf established_neighbors_count_total; //type: uint32
        YLeaf sn_num_non_dflt_vrf_nbrs; //type: uint32
        YLeaf sn_num_non_dflt_vrf_nbrs_estab; //type: uint32

        class PoolSize; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize
        class PoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount
        class PoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount
        class MsgLogPoolSize; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize
        class MsgLogPoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount
        class MsgLogPoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount
        class BmpPoolSize; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize
        class BmpPoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount
        class BmpPoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount> > bmp_pool_alloc_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount> > bmp_pool_free_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize> > bmp_pool_size;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount> > msg_log_pool_alloc_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount> > msg_log_pool_free_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize> > msg_log_pool_size;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount> > pool_alloc_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount> > pool_free_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize> > pool_size;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize : public Entity
{
    public:
        PoolSize();
        ~PoolSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount : public Entity
{
    public:
        PoolAllocCount();
        ~PoolAllocCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount : public Entity
{
    public:
        PoolFreeCount();
        ~PoolFreeCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize : public Entity
{
    public:
        MsgLogPoolSize();
        ~MsgLogPoolSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount : public Entity
{
    public:
        MsgLogPoolAllocCount();
        ~MsgLogPoolAllocCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount : public Entity
{
    public:
        MsgLogPoolFreeCount();
        ~MsgLogPoolFreeCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize : public Entity
{
    public:
        BmpPoolSize();
        ~BmpPoolSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount : public Entity
{
    public:
        BmpPoolAllocCount();
        ~BmpPoolAllocCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount : public Entity
{
    public:
        BmpPoolFreeCount();
        ~BmpPoolFreeCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbors_count; //type: uint32
        YLeaf established_neighbors_count; //type: uint32
        YLeaf update_messages_received; //type: uint32
        YLeaf update_messages_sent; //type: uint32
        YLeaf notifications_received; //type: uint32
        YLeaf notifications_sent; //type: uint32
        YLeaf network_count; //type: uint32
        YLeaf path_count; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics : public Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global
        class Vrf_; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_> vrf;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configuration_items_processed; //type: uint32
        YLeaf configuration_processing_time; //type: uint32
        YLeaf edm_requests_count; //type: uint32
        YLeaf edm_processing_time; //type: uint32
        YLeaf brib_api_output_messages_sent; //type: uint32
        YLeaf brib_api_output_bytes_sent; //type: uint32
        YLeaf brib_api_output_bytes_generated; //type: uint32
        YLeaf brib_api_output_prefixes_advertised; //type: uint32
        YLeaf brib_api_output_prefixes_withdrawn; //type: uint32
        YLeaf brib_api_output_sending_time; //type: uint32
        YLeaf brib_api_output_generation_time; //type: uint32
        YLeaf brib_api_output_calls; //type: uint32
        YLeaf brib_api_input_messages; //type: uint32
        YLeaf brib_api_input_bytes; //type: uint32
        YLeaf brib_api_input_prefixes_received; //type: uint32
        YLeaf brib_api_input_withdrawn_prefixes; //type: uint32
        YLeaf brib_api_input_processing_time; //type: uint32
        YLeaf instance_node_role; //type: boolean
        YLeaf active_nsrtcp_phase_two_enter_time; //type: uint32
        YLeaf sec_active_nsrtcp_phase_two_enter_time; //type: uint32
        YLeaf proc_scoped_sync_state; //type: BgpScopedSyncStateEnum
        YLeaf initial_sync_sessions_added; //type: boolean
        YLeaf in_event_attach_calls; //type: uint32
        YLeaf out_event_attach_calls; //type: uint32
        YLeaf in_out_event_attach_calls; //type: uint32
        YLeaf updgen_timer_id; //type: uint32
        YLeaf updgen_tree_timer_left; //type: uint64
        YLeaf updgen_tree_timer_expiry; //type: uint64
        YLeaf current_clock_time; //type: uint64
        YLeaf updgen_handler_tm; //type: uint64
        YLeaf io_timer_id; //type: uint32
        YLeaf io_tree_timer_left; //type: uint64
        YLeaf io_tree_timer_expiry; //type: uint64
        YLeaf io_handler_tm; //type: uint64
        YLeaf qad_messages_sent; //type: uint32
        YLeaf qadack_sent; //type: uint32
        YLeaf qad_send_failure; //type: uint32
        YLeaf qad_ac_ks_failure; //type: uint32
        YLeaf qad_suspends; //type: uint32
        YLeaf qad_resumes; //type: uint32
        YLeaf qad_send_drops; //type: uint32
        YLeaf qad_messages_received; //type: uint32
        YLeaf qad_processed; //type: uint32
        YLeaf qad_ac_ks_received; //type: uint32
        YLeaf qad_timeout_received; //type: uint32
        YLeaf qad_init_drops; //type: uint32
        YLeaf qadoos_drops; //type: uint32
        YLeaf qad_recv_drops; //type: uint32
        YLeaf qad_timeout_recvd; //type: uint32
        YLeaf nsr_last_reset_reason; //type: uint8
        YLeaf redcon_nsr_ready; //type: boolean
        YLeaf redcon_state_time; //type: uint32
        YLeaf active_nsr_state; //type: uint32
        YLeaf sec_active_nsr_state; //type: uint32
        YLeaf total_outstanding_postits; //type: uint32
        YLeaf total_neighbors_with_pending_postits; //type: uint32
        YLeaf tep2p_auto_tunnel_enabled; //type: boolean
        YLeaf issu_milestone_packed; //type: boolean
        YLeaf bgp_te_infra_tunnel_type; //type: BgpTeInfraTunnelEnum

        class Ipv4RibServer; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer
        class Ipv6RibServer; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer
        class TeConnection; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection
        class LsdConnection; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection
        class DsNpl; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl
        class ActiveNsrModeEnterTime; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime
        class StandbyNsrModeEnterTime; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime
        class ActiveNsrfoTime; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime
        class PostitCountInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo
        class IssuMilestone; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime> > active_nsr_mode_enter_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime> > active_nsrfo_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl> ds_npl;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer> ipv4rib_server;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer> ipv6rib_server;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone> > issu_milestone;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection> lsd_connection;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo> > postit_count_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime> > standby_nsr_mode_enter_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection> te_connection;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer : public Entity
{
    public:
        Ipv4RibServer();
        ~Ipv4RibServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_rib_connection_up; //type: boolean
        YLeaf rib_connection_up_count; //type: uint32
        YLeaf last_rib_connection_up_age; //type: uint32
        YLeaf rib_connection_down_count; //type: uint32
        YLeaf last_rib_connection_down_age; //type: uint32

        class FirstRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp
        class LastRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp
        class FirstRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp
        class LastRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp> first_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp> first_rib_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp> last_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp> last_rib_connection_up_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp : public Entity
{
    public:
        FirstRibConnectionUpTimestamp();
        ~FirstRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp : public Entity
{
    public:
        LastRibConnectionUpTimestamp();
        ~LastRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp : public Entity
{
    public:
        FirstRibConnectionDownTimestamp();
        ~FirstRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp : public Entity
{
    public:
        LastRibConnectionDownTimestamp();
        ~LastRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer : public Entity
{
    public:
        Ipv6RibServer();
        ~Ipv6RibServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_rib_connection_up; //type: boolean
        YLeaf rib_connection_up_count; //type: uint32
        YLeaf last_rib_connection_up_age; //type: uint32
        YLeaf rib_connection_down_count; //type: uint32
        YLeaf last_rib_connection_down_age; //type: uint32

        class FirstRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp
        class LastRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp
        class FirstRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp
        class LastRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp> first_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp> first_rib_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp> last_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp> last_rib_connection_up_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp : public Entity
{
    public:
        FirstRibConnectionUpTimestamp();
        ~FirstRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp : public Entity
{
    public:
        LastRibConnectionUpTimestamp();
        ~LastRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp : public Entity
{
    public:
        FirstRibConnectionDownTimestamp();
        ~FirstRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp : public Entity
{
    public:
        LastRibConnectionDownTimestamp();
        ~LastRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection : public Entity
{
    public:
        TeConnection();
        ~TeConnection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_connection_up; //type: boolean
        YLeaf connection_up_count; //type: uint32
        YLeaf last_connection_up_age; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeaf last_connection_down_age; //type: uint32

        class FirstConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp
        class LastConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp
        class FirstConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp
        class LastConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp> first_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp> first_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp> last_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp> last_connection_up_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp : public Entity
{
    public:
        FirstConnectionUpTimestamp();
        ~FirstConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp : public Entity
{
    public:
        LastConnectionUpTimestamp();
        ~LastConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp : public Entity
{
    public:
        FirstConnectionDownTimestamp();
        ~FirstConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp : public Entity
{
    public:
        LastConnectionDownTimestamp();
        ~LastConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection : public Entity
{
    public:
        LsdConnection();
        ~LsdConnection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_connection_up; //type: boolean
        YLeaf connection_up_count; //type: uint32
        YLeaf last_connection_up_age; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeaf last_connection_down_age; //type: uint32

        class FirstConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp
        class LastConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp
        class FirstConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp
        class LastConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp> first_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp> first_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp> last_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp> last_connection_up_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp : public Entity
{
    public:
        FirstConnectionUpTimestamp();
        ~FirstConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp : public Entity
{
    public:
        LastConnectionUpTimestamp();
        ~LastConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp : public Entity
{
    public:
        FirstConnectionDownTimestamp();
        ~FirstConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp : public Entity
{
    public:
        LastConnectionDownTimestamp();
        ~LastConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl : public Entity
{
    public:
        DsNpl();
        ~DsNpl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dir_service_conn_state; //type: BgpDsConnStateEnum
        YLeaf issu_mgr_conn_state; //type: BgpIsmConnStateEnum
        YLeaf issu_phase; //type: string
        YLeaf issu_type_ng; //type: boolean
        YLeaf issuha_option; //type: string
        YLeaf local_ds_handle; //type: uint64
        YLeaf service_name; //type: string
        YLeaf dsissu_status_flag; //type: uint32

        class NplPriorityStatistic; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic
        class NplEndpoint; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint> > npl_endpoint;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic> > npl_priority_statistic;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic : public Entity
{
    public:
        NplPriorityStatistic();
        ~NplPriorityStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NumSent; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent
        class NumRecv; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv
        class NumSentDrop; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop
        class NumRecvDrop; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv> > num_recv;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop> > num_recv_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent> > num_sent;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop> > num_sent_drop;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent : public Entity
{
    public:
        NumSent();
        ~NumSent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint64



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv : public Entity
{
    public:
        NumRecv();
        ~NumRecv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint64



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop : public Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NsrPlSendDropArray; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray> > nsr_pl_send_drop_array;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_66_ */

