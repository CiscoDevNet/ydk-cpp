
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_66.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_67.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::Attribute()
    :
    attribute_cache_bucket{YType::int32, "attribute-cache-bucket"},
    attribute_cache_id{YType::int32, "attribute-cache-id"},
    attribute_iid{YType::int32, "attribute-iid"},
    attribute_instance_id{YType::uint8, "attribute-instance-id"},
    attribute_structure_hash_value{YType::uint32, "attribute-structure-hash-value"},
    attribute_structure_id{YType::uint32, "attribute-structure-id"},
    process_instance_id{YType::uint8, "process-instance-id"},
    reference_count{YType::uint32, "reference-count"}
    	,
    attribute_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo>())
{
    attribute_info->parent = this;

    yang_name = "attribute"; yang_parent_name = "attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::~Attribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::has_data() const
{
    return attribute_cache_bucket.is_set
	|| attribute_cache_id.is_set
	|| attribute_iid.is_set
	|| attribute_instance_id.is_set
	|| attribute_structure_hash_value.is_set
	|| attribute_structure_id.is_set
	|| process_instance_id.is_set
	|| reference_count.is_set
	|| (attribute_info !=  nullptr && attribute_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_cache_bucket.operation)
	|| is_set(attribute_cache_id.operation)
	|| is_set(attribute_iid.operation)
	|| is_set(attribute_instance_id.operation)
	|| is_set(attribute_structure_hash_value.operation)
	|| is_set(attribute_structure_id.operation)
	|| is_set(process_instance_id.operation)
	|| is_set(reference_count.operation)
	|| (attribute_info !=  nullptr && attribute_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attribute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_cache_bucket.is_set || is_set(attribute_cache_bucket.operation)) leaf_name_data.push_back(attribute_cache_bucket.get_name_leafdata());
    if (attribute_cache_id.is_set || is_set(attribute_cache_id.operation)) leaf_name_data.push_back(attribute_cache_id.get_name_leafdata());
    if (attribute_iid.is_set || is_set(attribute_iid.operation)) leaf_name_data.push_back(attribute_iid.get_name_leafdata());
    if (attribute_instance_id.is_set || is_set(attribute_instance_id.operation)) leaf_name_data.push_back(attribute_instance_id.get_name_leafdata());
    if (attribute_structure_hash_value.is_set || is_set(attribute_structure_hash_value.operation)) leaf_name_data.push_back(attribute_structure_hash_value.get_name_leafdata());
    if (attribute_structure_id.is_set || is_set(attribute_structure_id.operation)) leaf_name_data.push_back(attribute_structure_id.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.operation)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.operation)) leaf_name_data.push_back(reference_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-info")
    {
        if(attribute_info == nullptr)
        {
            attribute_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo>();
        }
        return attribute_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_info != nullptr)
    {
        children["attribute-info"] = attribute_info;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket = value;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id = value;
    }
    if(value_path == "attribute-iid")
    {
        attribute_iid = value;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id = value;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value = value;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id = value;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttributeInfo()
    :
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_type{YType::uint16, "rnh-type"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"}
    	,
    attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>())
	,common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>())
{
    attr_set->parent = this;

    common_attributes->parent = this;

    ribrnh_ip->parent = this;

    rnh_addr->parent = this;

    yang_name = "attribute-info"; yang_parent_name = "attribute";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::~AttributeInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_data() const
{
    return attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| is_application_gateway_present.is_set
	|| is_as_path2_byte.is_set
	|| is_attr_set_present.is_set
	|| is_ribrnh_present.is_set
	|| is_rnh_present.is_set
	|| ribrnh_encap.is_set
	|| ribrnh_mac.is_set
	|| ribrnh_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnhip_table.is_set
	|| rnh_addr_len.is_set
	|| rnh_len.is_set
	|| rnh_type.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| vpn_distinguisher.is_set
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_key_number.operation)
	|| is_set(attribute_reuse_id_config.operation)
	|| is_set(attribute_reuse_id_current.operation)
	|| is_set(attribute_reuse_id_keys.operation)
	|| is_set(attribute_reuse_id_max_id.operation)
	|| is_set(attribute_reuse_id_node.operation)
	|| is_set(attribute_reuse_id_recover_sec.operation)
	|| is_set(is_application_gateway_present.operation)
	|| is_set(is_as_path2_byte.operation)
	|| is_set(is_attr_set_present.operation)
	|| is_set(is_ribrnh_present.operation)
	|| is_set(is_rnh_present.operation)
	|| is_set(ribrnh_encap.operation)
	|| is_set(ribrnh_mac.operation)
	|| is_set(ribrnh_table.operation)
	|| is_set(ribrnh_vni.operation)
	|| is_set(ribrnhip_table.operation)
	|| is_set(rnh_addr_len.operation)
	|| is_set(rnh_len.operation)
	|| is_set(rnh_type.operation)
	|| is_set(set_aigp_inbound_igp.operation)
	|| is_set(set_aigp_inbound_metric.operation)
	|| is_set(vpn_distinguisher.operation)
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-info";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_key_number.is_set || is_set(attribute_key_number.operation)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.operation)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.operation)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.operation)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.operation)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.operation)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.operation)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.operation)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.operation)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.operation)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.operation)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.operation)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.operation)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.operation)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.operation)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.operation)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.operation)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.operation)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.operation)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.operation)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.operation)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.operation)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.operation)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attr-set")
    {
        if(attr_set == nullptr)
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>();
        }
        return attr_set;
    }

    if(child_yang_name == "common-attributes")
    {
        if(common_attributes == nullptr)
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>();
        }
        return common_attributes;
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip == nullptr)
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>();
        }
        return ribrnh_ip;
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr == nullptr)
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>();
        }
        return rnh_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attr_set != nullptr)
    {
        children["attr-set"] = attr_set;
    }

    if(common_attributes != nullptr)
    {
        children["common-attributes"] = common_attributes;
    }

    if(ribrnh_ip != nullptr)
    {
        children["ribrnh-ip"] = ribrnh_ip;
    }

    if(rnh_addr != nullptr)
    {
        children["rnh-addr"] = rnh_addr;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
    }
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::CommonAttributes()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_tunnel_encap_present{YType::boolean, "is-tunnel-encap-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    sr_policy_preference{YType::uint32, "sr-policy-preference"},
    sr_tunnel_request_state{YType::enumeration, "sr-tunnel-request-state"},
    sr_tunnel_state{YType::uint32, "sr-tunnel-state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;

    sr_policy_binding_sid->parent = this;

    yang_name = "common-attributes"; yang_parent_name = "attribute-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| is_tunnel_encap_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| sr_policy_preference.is_set
	|| sr_tunnel_request_state.is_set
	|| sr_tunnel_state.is_set
	|| tunnel_encap_type.is_set
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_data())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aggregator_address.operation)
	|| is_set(aggregator_as.operation)
	|| is_set(aigp_metric_value.operation)
	|| is_set(as_path.operation)
	|| is_set(connector_type.operation)
	|| is_set(extended_community_flags.operation)
	|| is_set(is_aggregator_present.operation)
	|| is_set(is_aigp_present.operation)
	|| is_set(is_as_path_present.operation)
	|| is_set(is_atomic_aggregate_present.operation)
	|| is_set(is_community_present.operation)
	|| is_set(is_connector_present.operation)
	|| is_set(is_extended_community_present.operation)
	|| is_set(is_label_index_present.operation)
	|| is_set(is_local_pref_present.operation)
	|| is_set(is_ls_attribute_present.operation)
	|| is_set(is_metric_present.operation)
	|| is_set(is_origin_present.operation)
	|| is_set(is_pe_distinguisher_label_present.operation)
	|| is_set(is_pmsi_present.operation)
	|| is_set(is_pppmp_present.operation)
	|| is_set(is_ssa_present.operation)
	|| is_set(is_tunnel_encap_present.operation)
	|| is_set(l2tpv3_session_id.operation)
	|| is_set(local_preference.operation)
	|| is_set(metric.operation)
	|| is_set(neighbor_as.operation)
	|| is_set(origin.operation)
	|| is_set(originator.operation)
	|| is_set(pmsi_flags.operation)
	|| is_set(pmsi_label.operation)
	|| is_set(pmsi_type.operation)
	|| is_set(ppm_pvalue.operation)
	|| is_set(sr_policy_preference.operation)
	|| is_set(sr_tunnel_request_state.operation)
	|| is_set(sr_tunnel_state.operation)
	|| is_set(tunnel_encap_type.operation)
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_operation())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonAttributes' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.operation)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.operation)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.operation)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.operation)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.operation)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.operation)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.operation)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.operation)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.operation)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.operation)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.operation)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.operation)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.operation)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.operation)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.operation)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.operation)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.operation)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.operation)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.operation)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.operation)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.operation)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.operation)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_tunnel_encap_present.is_set || is_set(is_tunnel_encap_present.operation)) leaf_name_data.push_back(is_tunnel_encap_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.operation)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.operation)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.operation)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.operation)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.operation)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.operation)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.operation)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (sr_policy_preference.is_set || is_set(sr_policy_preference.operation)) leaf_name_data.push_back(sr_policy_preference.get_name_leafdata());
    if (sr_tunnel_request_state.is_set || is_set(sr_tunnel_request_state.operation)) leaf_name_data.push_back(sr_tunnel_request_state.get_name_leafdata());
    if (sr_tunnel_state.is_set || is_set(sr_tunnel_state.operation)) leaf_name_data.push_back(sr_tunnel_state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.operation)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-policy-allocated-binding-sid")
    {
        if(sr_policy_allocated_binding_sid == nullptr)
        {
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid>();
        }
        return sr_policy_allocated_binding_sid;
    }

    if(child_yang_name == "sr-policy-binding-sid")
    {
        if(sr_policy_binding_sid == nullptr)
        {
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid>();
        }
        return sr_policy_binding_sid;
    }

    if(child_yang_name == "sr-policy-explicit-path")
    {
        for(auto const & c : sr_policy_explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath>();
        c->parent = this;
        sr_policy_explicit_path.push_back(c);
        return c;
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cluster)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connector_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2tpv3_cookie)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : label_index_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ls_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_distinguisher_label)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    if(sr_policy_allocated_binding_sid != nullptr)
    {
        children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
    }

    if(sr_policy_binding_sid != nullptr)
    {
        children["sr-policy-binding-sid"] = sr_policy_binding_sid;
    }

    for (auto const & c : sr_policy_explicit_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
    }
    if(value_path == "as-path")
    {
        as_path = value;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
    }
    if(value_path == "is-tunnel-encap-present")
    {
        is_tunnel_encap_present = value;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "originator")
    {
        originator = value;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
    }
    if(value_path == "sr-policy-preference")
    {
        sr_policy_preference = value;
    }
    if(value_path == "sr-tunnel-request-state")
    {
        sr_tunnel_request_state = value;
    }
    if(value_path == "sr-tunnel-state")
    {
        sr_tunnel_state = value;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyAllocatedBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cluster' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Cookie' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectorValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmsiValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelIndexAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeDistinguisherLabel' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.operation)) leaf_name_data.push_back(pe_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyExplicitPath' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid")
    {
        for(auto const & c : sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::AttrSet()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_tunnel_encap_present{YType::boolean, "is-tunnel-encap-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    sr_policy_preference{YType::uint32, "sr-policy-preference"},
    sr_tunnel_request_state{YType::enumeration, "sr-tunnel-request-state"},
    sr_tunnel_state{YType::uint32, "sr-tunnel-state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;

    sr_policy_binding_sid->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attribute-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| is_tunnel_encap_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| sr_policy_preference.is_set
	|| sr_tunnel_request_state.is_set
	|| sr_tunnel_state.is_set
	|| tunnel_encap_type.is_set
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_data())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aggregator_address.operation)
	|| is_set(aggregator_as.operation)
	|| is_set(aigp_metric_value.operation)
	|| is_set(as_path.operation)
	|| is_set(connector_type.operation)
	|| is_set(extended_community_flags.operation)
	|| is_set(is_aggregator_present.operation)
	|| is_set(is_aigp_present.operation)
	|| is_set(is_as_path_present.operation)
	|| is_set(is_atomic_aggregate_present.operation)
	|| is_set(is_community_present.operation)
	|| is_set(is_connector_present.operation)
	|| is_set(is_extended_community_present.operation)
	|| is_set(is_label_index_present.operation)
	|| is_set(is_local_pref_present.operation)
	|| is_set(is_ls_attribute_present.operation)
	|| is_set(is_metric_present.operation)
	|| is_set(is_origin_present.operation)
	|| is_set(is_pe_distinguisher_label_present.operation)
	|| is_set(is_pmsi_present.operation)
	|| is_set(is_pppmp_present.operation)
	|| is_set(is_ssa_present.operation)
	|| is_set(is_tunnel_encap_present.operation)
	|| is_set(l2tpv3_session_id.operation)
	|| is_set(local_preference.operation)
	|| is_set(metric.operation)
	|| is_set(neighbor_as.operation)
	|| is_set(origin.operation)
	|| is_set(originator.operation)
	|| is_set(pmsi_flags.operation)
	|| is_set(pmsi_label.operation)
	|| is_set(pmsi_type.operation)
	|| is_set(ppm_pvalue.operation)
	|| is_set(sr_policy_preference.operation)
	|| is_set(sr_tunnel_request_state.operation)
	|| is_set(sr_tunnel_state.operation)
	|| is_set(tunnel_encap_type.operation)
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_operation())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttrSet' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.operation)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.operation)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.operation)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.operation)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.operation)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.operation)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.operation)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.operation)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.operation)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.operation)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.operation)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.operation)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.operation)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.operation)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.operation)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.operation)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.operation)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.operation)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.operation)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.operation)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.operation)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.operation)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_tunnel_encap_present.is_set || is_set(is_tunnel_encap_present.operation)) leaf_name_data.push_back(is_tunnel_encap_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.operation)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.operation)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.operation)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.operation)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.operation)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.operation)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.operation)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (sr_policy_preference.is_set || is_set(sr_policy_preference.operation)) leaf_name_data.push_back(sr_policy_preference.get_name_leafdata());
    if (sr_tunnel_request_state.is_set || is_set(sr_tunnel_request_state.operation)) leaf_name_data.push_back(sr_tunnel_request_state.get_name_leafdata());
    if (sr_tunnel_state.is_set || is_set(sr_tunnel_state.operation)) leaf_name_data.push_back(sr_tunnel_state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.operation)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-policy-allocated-binding-sid")
    {
        if(sr_policy_allocated_binding_sid == nullptr)
        {
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid>();
        }
        return sr_policy_allocated_binding_sid;
    }

    if(child_yang_name == "sr-policy-binding-sid")
    {
        if(sr_policy_binding_sid == nullptr)
        {
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid>();
        }
        return sr_policy_binding_sid;
    }

    if(child_yang_name == "sr-policy-explicit-path")
    {
        for(auto const & c : sr_policy_explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath>();
        c->parent = this;
        sr_policy_explicit_path.push_back(c);
        return c;
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cluster)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connector_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2tpv3_cookie)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : label_index_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ls_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_distinguisher_label)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    if(sr_policy_allocated_binding_sid != nullptr)
    {
        children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
    }

    if(sr_policy_binding_sid != nullptr)
    {
        children["sr-policy-binding-sid"] = sr_policy_binding_sid;
    }

    for (auto const & c : sr_policy_explicit_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
    }
    if(value_path == "as-path")
    {
        as_path = value;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
    }
    if(value_path == "is-tunnel-encap-present")
    {
        is_tunnel_encap_present = value;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "originator")
    {
        originator = value;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
    }
    if(value_path == "sr-policy-preference")
    {
        sr_policy_preference = value;
    }
    if(value_path == "sr-tunnel-request-state")
    {
        sr_tunnel_request_state = value;
    }
    if(value_path == "sr-tunnel-state")
    {
        sr_tunnel_state = value;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyAllocatedBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cluster' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Cookie' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectorValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmsiValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelIndexAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeDistinguisherLabel' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.operation)) leaf_name_data.push_back(pe_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyExplicitPath' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid")
    {
        for(auto const & c : sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::RnhAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "rnh-addr"; yang_parent_name = "attribute-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(len.operation)
	|| is_set(mac_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RnhAddr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (len.is_set || is_set(len.operation)) leaf_name_data.push_back(len.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "len")
    {
        len = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attribute-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibrnhIp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::Information()
    :
    route_distinguisher{YType::str, "route-distinguisher"}
{
    yang_name = "information"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::~Information()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::has_data() const
{
    return route_distinguisher.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(route_distinguisher.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::UpdateInboundFilterVrf()
    :
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_filtered_neighbor_count{YType::uint32, "update-filtered-neighbor-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>())
{
    last_update_filtered_timestamp->parent = this;

    yang_name = "update-inbound-filter-vrf"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::~UpdateInboundFilterVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::has_data() const
{
    return last_update_filtered_age.is_set
	|| update_filtered_message_count.is_set
	|| update_filtered_neighbor_count.is_set
	|| update_vrf_name.is_set
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(last_update_filtered_age.operation)
	|| is_set(update_filtered_message_count.operation)
	|| is_set(update_filtered_neighbor_count.operation)
	|| is_set(update_vrf_name.operation)
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-vrf";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundFilterVrf' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.operation)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.operation)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_filtered_neighbor_count.is_set || is_set(update_filtered_neighbor_count.operation)) leaf_name_data.push_back(update_filtered_neighbor_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.operation)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_filtered_timestamp != nullptr)
    {
        children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count = value;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateFilteredTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postits()
{
    yang_name = "postits"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::~Postits()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::has_data() const
{
    for (std::size_t index=0; index<postit.size(); index++)
    {
        if(postit[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::has_operation() const
{
    for (std::size_t index=0; index<postit.size(); index++)
    {
        if(postit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postits";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Postits' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "postit")
    {
        for(auto const & c : postit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit>();
        c->parent = this;
        postit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : postit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::Postit()
    :
    neighbor_address{YType::str, "neighbor-address"},
    connect_state{YType::uint32, "connect-state"},
    nsr_state{YType::enumeration, "nsr-state"},
    start_time{YType::uint32, "start-time"},
    vrf_name{YType::str, "vrf-name"}
    	,
    neighbors_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress>())
{
    neighbors_address->parent = this;

    yang_name = "postit"; yang_parent_name = "postits";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::~Postit()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::has_data() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<postit_info.size(); index++)
    {
        if(postit_info[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| connect_state.is_set
	|| nsr_state.is_set
	|| start_time.is_set
	|| vrf_name.is_set
	|| (neighbors_address !=  nullptr && neighbors_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<postit_info.size(); index++)
    {
        if(postit_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(connect_state.operation)
	|| is_set(nsr_state.operation)
	|| is_set(start_time.operation)
	|| is_set(vrf_name.operation)
	|| (neighbors_address !=  nullptr && neighbors_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Postit' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (connect_state.is_set || is_set(connect_state.operation)) leaf_name_data.push_back(connect_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-af")
    {
        for(auto const & c : neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf>();
        c->parent = this;
        neighbor_af.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbors-address")
    {
        if(neighbors_address == nullptr)
        {
            neighbors_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress>();
        }
        return neighbors_address;
    }

    if(child_yang_name == "postit-info")
    {
        for(auto const & c : postit_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo>();
        c->parent = this;
        postit_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_af)
    {
        children[c->get_segment_path()] = c;
    }

    if(neighbors_address != nullptr)
    {
        children["neighbors-address"] = neighbors_address;
    }

    for (auto const & c : postit_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "connect-state")
    {
        connect_state = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::NeighborsAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "neighbors-address"; yang_parent_name = "postit";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::~NeighborsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbors-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbors-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbors-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbors-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::NeighborAf()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "neighbor-af"; yang_parent_name = "postit";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAf' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitInfo()
    :
    peer_id{YType::uint32, "peer-id"},
    postit_af_name{YType::enumeration, "postit-af-name"},
    postit_direction{YType::uint8, "postit-direction"},
    postit_flags{YType::uint8, "postit-flags"},
    postit_id{YType::uint32, "postit-id"},
    postit_policy{YType::str, "postit-policy"},
    postit_reset{YType::enumeration, "postit-reset"},
    postit_subtype{YType::uint32, "postit-subtype"},
    postit_ts{YType::uint64, "postit-ts"},
    postit_type{YType::uint32, "postit-type"}
    	,
    postit_notification(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification>())
{
    postit_notification->parent = this;

    yang_name = "postit-info"; yang_parent_name = "postit";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::~PostitInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::has_data() const
{
    return peer_id.is_set
	|| postit_af_name.is_set
	|| postit_direction.is_set
	|| postit_flags.is_set
	|| postit_id.is_set
	|| postit_policy.is_set
	|| postit_reset.is_set
	|| postit_subtype.is_set
	|| postit_ts.is_set
	|| postit_type.is_set
	|| (postit_notification !=  nullptr && postit_notification->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_id.operation)
	|| is_set(postit_af_name.operation)
	|| is_set(postit_direction.operation)
	|| is_set(postit_flags.operation)
	|| is_set(postit_id.operation)
	|| is_set(postit_policy.operation)
	|| is_set(postit_reset.operation)
	|| is_set(postit_subtype.operation)
	|| is_set(postit_ts.operation)
	|| is_set(postit_type.operation)
	|| (postit_notification !=  nullptr && postit_notification->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-info";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostitInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (postit_af_name.is_set || is_set(postit_af_name.operation)) leaf_name_data.push_back(postit_af_name.get_name_leafdata());
    if (postit_direction.is_set || is_set(postit_direction.operation)) leaf_name_data.push_back(postit_direction.get_name_leafdata());
    if (postit_flags.is_set || is_set(postit_flags.operation)) leaf_name_data.push_back(postit_flags.get_name_leafdata());
    if (postit_id.is_set || is_set(postit_id.operation)) leaf_name_data.push_back(postit_id.get_name_leafdata());
    if (postit_policy.is_set || is_set(postit_policy.operation)) leaf_name_data.push_back(postit_policy.get_name_leafdata());
    if (postit_reset.is_set || is_set(postit_reset.operation)) leaf_name_data.push_back(postit_reset.get_name_leafdata());
    if (postit_subtype.is_set || is_set(postit_subtype.operation)) leaf_name_data.push_back(postit_subtype.get_name_leafdata());
    if (postit_ts.is_set || is_set(postit_ts.operation)) leaf_name_data.push_back(postit_ts.get_name_leafdata());
    if (postit_type.is_set || is_set(postit_type.operation)) leaf_name_data.push_back(postit_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "postit-notification")
    {
        if(postit_notification == nullptr)
        {
            postit_notification = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification>();
        }
        return postit_notification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(postit_notification != nullptr)
    {
        children["postit-notification"] = postit_notification;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
    if(value_path == "postit-af-name")
    {
        postit_af_name = value;
    }
    if(value_path == "postit-direction")
    {
        postit_direction = value;
    }
    if(value_path == "postit-flags")
    {
        postit_flags = value;
    }
    if(value_path == "postit-id")
    {
        postit_id = value;
    }
    if(value_path == "postit-policy")
    {
        postit_policy = value;
    }
    if(value_path == "postit-reset")
    {
        postit_reset = value;
    }
    if(value_path == "postit-subtype")
    {
        postit_subtype = value;
    }
    if(value_path == "postit-ts")
    {
        postit_ts = value;
    }
    if(value_path == "postit-type")
    {
        postit_type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::PostitNotification()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "postit-notification"; yang_parent_name = "postit-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::~PostitNotification()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(notification_error_code.operation)
	|| is_set(notification_error_subcode.operation)
	|| is_set(time_since_last_notification.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-notification";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostitNotification' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.operation)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.operation)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.operation)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : last_notification_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "postit-notification";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastNotificationData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::GlobalProcessInfo()
    :
    vrf_name{YType::str, "vrf-name"},
    vrfid{YType::uint32, "vrfid"}
    	,
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_>())
{
    global->parent = this;

    vrf->parent = this;

    yang_name = "global-process-info"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::~GlobalProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::has_data() const
{
    return vrf_name.is_set
	|| vrfid.is_set
	|| (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrfid.operation)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-process-info";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalProcessInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.operation)) leaf_name_data.push_back(vrfid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::Global()
    :
    asn_format{YType::uint32, "asn-format"},
    bmp_current_buffer_size{YType::uint64, "bmp-current-buffer-size"},
    bmp_default_buffer_size{YType::uint64, "bmp-default-buffer-size"},
    bmp_maximum_buffer_size{YType::uint64, "bmp-maximum-buffer-size"},
    cluster_id{YType::uint32, "cluster-id"},
    confederation_id{YType::uint32, "confederation-id"},
    configured_cluster_id{YType::uint32, "configured-cluster-id"},
    generic_scan_period{YType::uint16, "generic-scan-period"},
    graceful_maint_all_nbrs{YType::boolean, "graceful-maint-all-nbrs"},
    graceful_maint_retain_routes{YType::boolean, "graceful-maint-retain-routes"},
    graceful_maintenance{YType::boolean, "graceful-maintenance"},
    in_standalone_mode{YType::boolean, "in-standalone-mode"},
    instance_name{YType::str, "instance-name"},
    is_cluster_id_specified_as_ip{YType::boolean, "is-cluster-id-specified-as-ip"},
    local_as{YType::uint32, "local-as"},
    process_rlimit{YType::uint64, "process-rlimit"},
    restart_count{YType::uint32, "restart-count"},
    srgb_end{YType::uint32, "srgb-end"},
    srgb_end_configured{YType::uint32, "srgb-end-configured"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_start_configured{YType::uint32, "srgb-start-configured"},
    update_delay{YType::uint32, "update-delay"}
{
    yang_name = "global"; yang_parent_name = "global-process-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::has_data() const
{
    for (std::size_t index=0; index<cluster_id_entry.size(); index++)
    {
        if(cluster_id_entry[index]->has_data())
            return true;
    }
    return asn_format.is_set
	|| bmp_current_buffer_size.is_set
	|| bmp_default_buffer_size.is_set
	|| bmp_maximum_buffer_size.is_set
	|| cluster_id.is_set
	|| confederation_id.is_set
	|| configured_cluster_id.is_set
	|| generic_scan_period.is_set
	|| graceful_maint_all_nbrs.is_set
	|| graceful_maint_retain_routes.is_set
	|| graceful_maintenance.is_set
	|| in_standalone_mode.is_set
	|| instance_name.is_set
	|| is_cluster_id_specified_as_ip.is_set
	|| local_as.is_set
	|| process_rlimit.is_set
	|| restart_count.is_set
	|| srgb_end.is_set
	|| srgb_end_configured.is_set
	|| srgb_start.is_set
	|| srgb_start_configured.is_set
	|| update_delay.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::has_operation() const
{
    for (std::size_t index=0; index<cluster_id_entry.size(); index++)
    {
        if(cluster_id_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(asn_format.operation)
	|| is_set(bmp_current_buffer_size.operation)
	|| is_set(bmp_default_buffer_size.operation)
	|| is_set(bmp_maximum_buffer_size.operation)
	|| is_set(cluster_id.operation)
	|| is_set(confederation_id.operation)
	|| is_set(configured_cluster_id.operation)
	|| is_set(generic_scan_period.operation)
	|| is_set(graceful_maint_all_nbrs.operation)
	|| is_set(graceful_maint_retain_routes.operation)
	|| is_set(graceful_maintenance.operation)
	|| is_set(in_standalone_mode.operation)
	|| is_set(instance_name.operation)
	|| is_set(is_cluster_id_specified_as_ip.operation)
	|| is_set(local_as.operation)
	|| is_set(process_rlimit.operation)
	|| is_set(restart_count.operation)
	|| is_set(srgb_end.operation)
	|| is_set(srgb_end_configured.operation)
	|| is_set(srgb_start.operation)
	|| is_set(srgb_start_configured.operation)
	|| is_set(update_delay.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_format.is_set || is_set(asn_format.operation)) leaf_name_data.push_back(asn_format.get_name_leafdata());
    if (bmp_current_buffer_size.is_set || is_set(bmp_current_buffer_size.operation)) leaf_name_data.push_back(bmp_current_buffer_size.get_name_leafdata());
    if (bmp_default_buffer_size.is_set || is_set(bmp_default_buffer_size.operation)) leaf_name_data.push_back(bmp_default_buffer_size.get_name_leafdata());
    if (bmp_maximum_buffer_size.is_set || is_set(bmp_maximum_buffer_size.operation)) leaf_name_data.push_back(bmp_maximum_buffer_size.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.operation)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (confederation_id.is_set || is_set(confederation_id.operation)) leaf_name_data.push_back(confederation_id.get_name_leafdata());
    if (configured_cluster_id.is_set || is_set(configured_cluster_id.operation)) leaf_name_data.push_back(configured_cluster_id.get_name_leafdata());
    if (generic_scan_period.is_set || is_set(generic_scan_period.operation)) leaf_name_data.push_back(generic_scan_period.get_name_leafdata());
    if (graceful_maint_all_nbrs.is_set || is_set(graceful_maint_all_nbrs.operation)) leaf_name_data.push_back(graceful_maint_all_nbrs.get_name_leafdata());
    if (graceful_maint_retain_routes.is_set || is_set(graceful_maint_retain_routes.operation)) leaf_name_data.push_back(graceful_maint_retain_routes.get_name_leafdata());
    if (graceful_maintenance.is_set || is_set(graceful_maintenance.operation)) leaf_name_data.push_back(graceful_maintenance.get_name_leafdata());
    if (in_standalone_mode.is_set || is_set(in_standalone_mode.operation)) leaf_name_data.push_back(in_standalone_mode.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (is_cluster_id_specified_as_ip.is_set || is_set(is_cluster_id_specified_as_ip.operation)) leaf_name_data.push_back(is_cluster_id_specified_as_ip.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (process_rlimit.is_set || is_set(process_rlimit.operation)) leaf_name_data.push_back(process_rlimit.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.operation)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.operation)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (srgb_end_configured.is_set || is_set(srgb_end_configured.operation)) leaf_name_data.push_back(srgb_end_configured.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.operation)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_start_configured.is_set || is_set(srgb_start_configured.operation)) leaf_name_data.push_back(srgb_start_configured.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.operation)) leaf_name_data.push_back(update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster-id-entry")
    {
        for(auto const & c : cluster_id_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry>();
        c->parent = this;
        cluster_id_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cluster_id_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-format")
    {
        asn_format = value;
    }
    if(value_path == "bmp-current-buffer-size")
    {
        bmp_current_buffer_size = value;
    }
    if(value_path == "bmp-default-buffer-size")
    {
        bmp_default_buffer_size = value;
    }
    if(value_path == "bmp-maximum-buffer-size")
    {
        bmp_maximum_buffer_size = value;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
    }
    if(value_path == "confederation-id")
    {
        confederation_id = value;
    }
    if(value_path == "configured-cluster-id")
    {
        configured_cluster_id = value;
    }
    if(value_path == "generic-scan-period")
    {
        generic_scan_period = value;
    }
    if(value_path == "graceful-maint-all-nbrs")
    {
        graceful_maint_all_nbrs = value;
    }
    if(value_path == "graceful-maint-retain-routes")
    {
        graceful_maint_retain_routes = value;
    }
    if(value_path == "graceful-maintenance")
    {
        graceful_maintenance = value;
    }
    if(value_path == "in-standalone-mode")
    {
        in_standalone_mode = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "is-cluster-id-specified-as-ip")
    {
        is_cluster_id_specified_as_ip = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "process-rlimit")
    {
        process_rlimit = value;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
    }
    if(value_path == "srgb-end")
    {
        srgb_end = value;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured = value;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured = value;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::ClusterIdEntry()
    :
    cluster_id_type{YType::uint8, "cluster-id-type"},
    cluster_id_val{YType::uint32, "cluster-id-val"}
{
    yang_name = "cluster-id-entry"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::~ClusterIdEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::has_data() const
{
    return cluster_id_type.is_set
	|| cluster_id_val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_type.operation)
	|| is_set(cluster_id_val.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster-id-entry";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClusterIdEntry' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_type.is_set || is_set(cluster_id_type.operation)) leaf_name_data.push_back(cluster_id_type.get_name_leafdata());
    if (cluster_id_val.is_set || is_set(cluster_id_val.operation)) leaf_name_data.push_back(cluster_id_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-type")
    {
        cluster_id_type = value;
    }
    if(value_path == "cluster-id-val")
    {
        cluster_id_val = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::Vrf_()
    :
    configured_router_id{YType::str, "configured-router-id"},
    default_local_preference{YType::uint32, "default-local-preference"},
    default_metric{YType::uint32, "default-metric"},
    hold_time{YType::uint16, "hold-time"},
    is_bestpath_aigp_ignore_enabled{YType::boolean, "is-bestpath-aigp-ignore-enabled"},
    is_bestpath_always_compare_med_enabled{YType::boolean, "is-bestpath-always-compare-med-enabled"},
    is_bestpath_as_path_mpath_relax_enabled{YType::boolean, "is-bestpath-as-path-mpath-relax-enabled"},
    is_bestpath_compare_med_from_confed_peer_enabled{YType::boolean, "is-bestpath-compare-med-from-confed-peer-enabled"},
    is_bestpath_compare_router_id_for_ebgp_peers_enabled{YType::boolean, "is-bestpath-compare-router-id-for-ebgp-peers-enabled"},
    is_bestpath_ignore_as_path_enabled{YType::boolean, "is-bestpath-ignore-as-path-enabled"},
    is_bestpath_missing_med_is_worst_enabled{YType::boolean, "is-bestpath-missing-med-is-worst-enabled"},
    is_default_metric_configured{YType::boolean, "is-default-metric-configured"},
    is_default_originate_configured{YType::boolean, "is-default-originate-configured"},
    is_enforce_first_as_enabled{YType::boolean, "is-enforce-first-as-enabled"},
    is_fast_external_fallover_enabled{YType::boolean, "is-fast-external-fallover-enabled"},
    is_graceful_restart{YType::boolean, "is-graceful-restart"},
    is_multipath_as_path_ignore_onwards_enabled{YType::boolean, "is-multipath-as-path-ignore-onwards-enabled"},
    is_neighbor_logging{YType::boolean, "is-neighbor-logging"},
    is_nsr{YType::boolean, "is-nsr"},
    is_redistribute_ibgp_to_ig_ps_enabled{YType::boolean, "is-redistribute-ibgp-to-ig-ps-enabled"},
    keep_alive_time{YType::uint16, "keep-alive-time"},
    min_acceptable_hold_time{YType::uint16, "min-acceptable-hold-time"},
    restart_time{YType::uint32, "restart-time"},
    rib_purge_timeout{YType::uint32, "rib-purge-timeout"},
    route_distinguisher{YType::str, "route-distinguisher"},
    router_id{YType::str, "router-id"},
    stale_path_time{YType::uint32, "stale-path-time"},
    vrf_is_active{YType::boolean, "vrf-is-active"}
{
    yang_name = "vrf"; yang_parent_name = "global-process-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::has_data() const
{
    return configured_router_id.is_set
	|| default_local_preference.is_set
	|| default_metric.is_set
	|| hold_time.is_set
	|| is_bestpath_aigp_ignore_enabled.is_set
	|| is_bestpath_always_compare_med_enabled.is_set
	|| is_bestpath_as_path_mpath_relax_enabled.is_set
	|| is_bestpath_compare_med_from_confed_peer_enabled.is_set
	|| is_bestpath_compare_router_id_for_ebgp_peers_enabled.is_set
	|| is_bestpath_ignore_as_path_enabled.is_set
	|| is_bestpath_missing_med_is_worst_enabled.is_set
	|| is_default_metric_configured.is_set
	|| is_default_originate_configured.is_set
	|| is_enforce_first_as_enabled.is_set
	|| is_fast_external_fallover_enabled.is_set
	|| is_graceful_restart.is_set
	|| is_multipath_as_path_ignore_onwards_enabled.is_set
	|| is_neighbor_logging.is_set
	|| is_nsr.is_set
	|| is_redistribute_ibgp_to_ig_ps_enabled.is_set
	|| keep_alive_time.is_set
	|| min_acceptable_hold_time.is_set
	|| restart_time.is_set
	|| rib_purge_timeout.is_set
	|| route_distinguisher.is_set
	|| router_id.is_set
	|| stale_path_time.is_set
	|| vrf_is_active.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_router_id.operation)
	|| is_set(default_local_preference.operation)
	|| is_set(default_metric.operation)
	|| is_set(hold_time.operation)
	|| is_set(is_bestpath_aigp_ignore_enabled.operation)
	|| is_set(is_bestpath_always_compare_med_enabled.operation)
	|| is_set(is_bestpath_as_path_mpath_relax_enabled.operation)
	|| is_set(is_bestpath_compare_med_from_confed_peer_enabled.operation)
	|| is_set(is_bestpath_compare_router_id_for_ebgp_peers_enabled.operation)
	|| is_set(is_bestpath_ignore_as_path_enabled.operation)
	|| is_set(is_bestpath_missing_med_is_worst_enabled.operation)
	|| is_set(is_default_metric_configured.operation)
	|| is_set(is_default_originate_configured.operation)
	|| is_set(is_enforce_first_as_enabled.operation)
	|| is_set(is_fast_external_fallover_enabled.operation)
	|| is_set(is_graceful_restart.operation)
	|| is_set(is_multipath_as_path_ignore_onwards_enabled.operation)
	|| is_set(is_neighbor_logging.operation)
	|| is_set(is_nsr.operation)
	|| is_set(is_redistribute_ibgp_to_ig_ps_enabled.operation)
	|| is_set(keep_alive_time.operation)
	|| is_set(min_acceptable_hold_time.operation)
	|| is_set(restart_time.operation)
	|| is_set(rib_purge_timeout.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(router_id.operation)
	|| is_set(stale_path_time.operation)
	|| is_set(vrf_is_active.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_router_id.is_set || is_set(configured_router_id.operation)) leaf_name_data.push_back(configured_router_id.get_name_leafdata());
    if (default_local_preference.is_set || is_set(default_local_preference.operation)) leaf_name_data.push_back(default_local_preference.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_bestpath_aigp_ignore_enabled.is_set || is_set(is_bestpath_aigp_ignore_enabled.operation)) leaf_name_data.push_back(is_bestpath_aigp_ignore_enabled.get_name_leafdata());
    if (is_bestpath_always_compare_med_enabled.is_set || is_set(is_bestpath_always_compare_med_enabled.operation)) leaf_name_data.push_back(is_bestpath_always_compare_med_enabled.get_name_leafdata());
    if (is_bestpath_as_path_mpath_relax_enabled.is_set || is_set(is_bestpath_as_path_mpath_relax_enabled.operation)) leaf_name_data.push_back(is_bestpath_as_path_mpath_relax_enabled.get_name_leafdata());
    if (is_bestpath_compare_med_from_confed_peer_enabled.is_set || is_set(is_bestpath_compare_med_from_confed_peer_enabled.operation)) leaf_name_data.push_back(is_bestpath_compare_med_from_confed_peer_enabled.get_name_leafdata());
    if (is_bestpath_compare_router_id_for_ebgp_peers_enabled.is_set || is_set(is_bestpath_compare_router_id_for_ebgp_peers_enabled.operation)) leaf_name_data.push_back(is_bestpath_compare_router_id_for_ebgp_peers_enabled.get_name_leafdata());
    if (is_bestpath_ignore_as_path_enabled.is_set || is_set(is_bestpath_ignore_as_path_enabled.operation)) leaf_name_data.push_back(is_bestpath_ignore_as_path_enabled.get_name_leafdata());
    if (is_bestpath_missing_med_is_worst_enabled.is_set || is_set(is_bestpath_missing_med_is_worst_enabled.operation)) leaf_name_data.push_back(is_bestpath_missing_med_is_worst_enabled.get_name_leafdata());
    if (is_default_metric_configured.is_set || is_set(is_default_metric_configured.operation)) leaf_name_data.push_back(is_default_metric_configured.get_name_leafdata());
    if (is_default_originate_configured.is_set || is_set(is_default_originate_configured.operation)) leaf_name_data.push_back(is_default_originate_configured.get_name_leafdata());
    if (is_enforce_first_as_enabled.is_set || is_set(is_enforce_first_as_enabled.operation)) leaf_name_data.push_back(is_enforce_first_as_enabled.get_name_leafdata());
    if (is_fast_external_fallover_enabled.is_set || is_set(is_fast_external_fallover_enabled.operation)) leaf_name_data.push_back(is_fast_external_fallover_enabled.get_name_leafdata());
    if (is_graceful_restart.is_set || is_set(is_graceful_restart.operation)) leaf_name_data.push_back(is_graceful_restart.get_name_leafdata());
    if (is_multipath_as_path_ignore_onwards_enabled.is_set || is_set(is_multipath_as_path_ignore_onwards_enabled.operation)) leaf_name_data.push_back(is_multipath_as_path_ignore_onwards_enabled.get_name_leafdata());
    if (is_neighbor_logging.is_set || is_set(is_neighbor_logging.operation)) leaf_name_data.push_back(is_neighbor_logging.get_name_leafdata());
    if (is_nsr.is_set || is_set(is_nsr.operation)) leaf_name_data.push_back(is_nsr.get_name_leafdata());
    if (is_redistribute_ibgp_to_ig_ps_enabled.is_set || is_set(is_redistribute_ibgp_to_ig_ps_enabled.operation)) leaf_name_data.push_back(is_redistribute_ibgp_to_ig_ps_enabled.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.operation)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (min_acceptable_hold_time.is_set || is_set(min_acceptable_hold_time.operation)) leaf_name_data.push_back(min_acceptable_hold_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (rib_purge_timeout.is_set || is_set(rib_purge_timeout.operation)) leaf_name_data.push_back(rib_purge_timeout.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (stale_path_time.is_set || is_set(stale_path_time.operation)) leaf_name_data.push_back(stale_path_time.get_name_leafdata());
    if (vrf_is_active.is_set || is_set(vrf_is_active.operation)) leaf_name_data.push_back(vrf_is_active.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-router-id")
    {
        configured_router_id = value;
    }
    if(value_path == "default-local-preference")
    {
        default_local_preference = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "is-bestpath-aigp-ignore-enabled")
    {
        is_bestpath_aigp_ignore_enabled = value;
    }
    if(value_path == "is-bestpath-always-compare-med-enabled")
    {
        is_bestpath_always_compare_med_enabled = value;
    }
    if(value_path == "is-bestpath-as-path-mpath-relax-enabled")
    {
        is_bestpath_as_path_mpath_relax_enabled = value;
    }
    if(value_path == "is-bestpath-compare-med-from-confed-peer-enabled")
    {
        is_bestpath_compare_med_from_confed_peer_enabled = value;
    }
    if(value_path == "is-bestpath-compare-router-id-for-ebgp-peers-enabled")
    {
        is_bestpath_compare_router_id_for_ebgp_peers_enabled = value;
    }
    if(value_path == "is-bestpath-ignore-as-path-enabled")
    {
        is_bestpath_ignore_as_path_enabled = value;
    }
    if(value_path == "is-bestpath-missing-med-is-worst-enabled")
    {
        is_bestpath_missing_med_is_worst_enabled = value;
    }
    if(value_path == "is-default-metric-configured")
    {
        is_default_metric_configured = value;
    }
    if(value_path == "is-default-originate-configured")
    {
        is_default_originate_configured = value;
    }
    if(value_path == "is-enforce-first-as-enabled")
    {
        is_enforce_first_as_enabled = value;
    }
    if(value_path == "is-fast-external-fallover-enabled")
    {
        is_fast_external_fallover_enabled = value;
    }
    if(value_path == "is-graceful-restart")
    {
        is_graceful_restart = value;
    }
    if(value_path == "is-multipath-as-path-ignore-onwards-enabled")
    {
        is_multipath_as_path_ignore_onwards_enabled = value;
    }
    if(value_path == "is-neighbor-logging")
    {
        is_neighbor_logging = value;
    }
    if(value_path == "is-nsr")
    {
        is_nsr = value;
    }
    if(value_path == "is-redistribute-ibgp-to-ig-ps-enabled")
    {
        is_redistribute_ibgp_to_ig_ps_enabled = value;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
    }
    if(value_path == "min-acceptable-hold-time")
    {
        min_acceptable_hold_time = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "rib-purge-timeout")
    {
        rib_purge_timeout = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "stale-path-time")
    {
        stale_path_time = value;
    }
    if(value_path == "vrf-is-active")
    {
        vrf_is_active = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbors()
{
    yang_name = "update-inbound-error-neighbors"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::~UpdateInboundErrorNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::has_data() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbors";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundErrorNeighbors' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-error-neighbor")
    {
        for(auto const & c : update_inbound_error_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor>();
        c->parent = this;
        update_inbound_error_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_inbound_error_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateInboundErrorNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    establishment_total_update_message_count{YType::uint32, "establishment-total-update-message-count"},
    last_error_handling_reset_age{YType::uint32, "last-error-handling-reset-age"},
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"},
    last_update_memory_allocation_fail_age{YType::uint32, "last-update-memory-allocation-fail-age"},
    total_update_message_count{YType::uint32, "total-update-message-count"},
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    update_error_handling_avoid_reset{YType::boolean, "update-error-handling-avoid-reset"},
    update_error_handling_reset_count{YType::uint32, "update-error-handling-reset-count"},
    update_error_message_list_count{YType::uint32, "update-error-message-list-count"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_memory_allocation_fail_count{YType::uint32, "update-memory-allocation-fail-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    first_update_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>())
	,first_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>())
	,first_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>())
	,last_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>())
	,last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>())
	,last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>())
	,update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>())
{
    first_update_error_handling_reset_timestamp->parent = this;

    first_update_malformed_timestamp->parent = this;

    first_update_memory_allocation_fail_timestamp->parent = this;

    last_error_handling_reset_timestamp->parent = this;

    last_update_malformed_timestamp->parent = this;

    last_update_memory_allocation_fail_timestamp->parent = this;

    update_neighbor_address->parent = this;

    yang_name = "update-inbound-error-neighbor"; yang_parent_name = "update-inbound-error-neighbors";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::~UpdateInboundErrorNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_data() const
{
    for (std::size_t index=0; index<establishment_action_count.size(); index++)
    {
        if(establishment_action_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.size(); index++)
    {
        if(update_error_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| establishment_total_update_message_count.is_set
	|| last_error_handling_reset_age.is_set
	|| last_update_malformed_age.is_set
	|| last_update_memory_allocation_fail_age.is_set
	|| total_update_message_count.is_set
	|| update_attribute_discard_count.is_set
	|| update_error_handling_avoid_reset.is_set
	|| update_error_handling_reset_count.is_set
	|| update_error_message_list_count.is_set
	|| update_malformed_message_count.is_set
	|| update_memory_allocation_fail_count.is_set
	|| update_vrf_name.is_set
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_data())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_data())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_data())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_data())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_data())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_operation() const
{
    for (std::size_t index=0; index<establishment_action_count.size(); index++)
    {
        if(establishment_action_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.size(); index++)
    {
        if(update_error_message[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(establishment_total_update_message_count.operation)
	|| is_set(last_error_handling_reset_age.operation)
	|| is_set(last_update_malformed_age.operation)
	|| is_set(last_update_memory_allocation_fail_age.operation)
	|| is_set(total_update_message_count.operation)
	|| is_set(update_attribute_discard_count.operation)
	|| is_set(update_error_handling_avoid_reset.operation)
	|| is_set(update_error_handling_reset_count.operation)
	|| is_set(update_error_message_list_count.operation)
	|| is_set(update_malformed_message_count.operation)
	|| is_set(update_memory_allocation_fail_count.operation)
	|| is_set(update_vrf_name.operation)
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_operation())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_operation())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_operation())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_operation())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_operation())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundErrorNeighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (establishment_total_update_message_count.is_set || is_set(establishment_total_update_message_count.operation)) leaf_name_data.push_back(establishment_total_update_message_count.get_name_leafdata());
    if (last_error_handling_reset_age.is_set || is_set(last_error_handling_reset_age.operation)) leaf_name_data.push_back(last_error_handling_reset_age.get_name_leafdata());
    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.operation)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());
    if (last_update_memory_allocation_fail_age.is_set || is_set(last_update_memory_allocation_fail_age.operation)) leaf_name_data.push_back(last_update_memory_allocation_fail_age.get_name_leafdata());
    if (total_update_message_count.is_set || is_set(total_update_message_count.operation)) leaf_name_data.push_back(total_update_message_count.get_name_leafdata());
    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.operation)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (update_error_handling_avoid_reset.is_set || is_set(update_error_handling_avoid_reset.operation)) leaf_name_data.push_back(update_error_handling_avoid_reset.get_name_leafdata());
    if (update_error_handling_reset_count.is_set || is_set(update_error_handling_reset_count.operation)) leaf_name_data.push_back(update_error_handling_reset_count.get_name_leafdata());
    if (update_error_message_list_count.is_set || is_set(update_error_message_list_count.operation)) leaf_name_data.push_back(update_error_message_list_count.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.operation)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_memory_allocation_fail_count.is_set || is_set(update_memory_allocation_fail_count.operation)) leaf_name_data.push_back(update_memory_allocation_fail_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.operation)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "establishment-action-count")
    {
        for(auto const & c : establishment_action_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount>();
        c->parent = this;
        establishment_action_count.push_back(c);
        return c;
    }

    if(child_yang_name == "first-update-error-handling-reset-timestamp")
    {
        if(first_update_error_handling_reset_timestamp == nullptr)
        {
            first_update_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>();
        }
        return first_update_error_handling_reset_timestamp;
    }

    if(child_yang_name == "first-update-malformed-timestamp")
    {
        if(first_update_malformed_timestamp == nullptr)
        {
            first_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>();
        }
        return first_update_malformed_timestamp;
    }

    if(child_yang_name == "first-update-memory-allocation-fail-timestamp")
    {
        if(first_update_memory_allocation_fail_timestamp == nullptr)
        {
            first_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>();
        }
        return first_update_memory_allocation_fail_timestamp;
    }

    if(child_yang_name == "last-error-handling-reset-timestamp")
    {
        if(last_error_handling_reset_timestamp == nullptr)
        {
            last_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>();
        }
        return last_error_handling_reset_timestamp;
    }

    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp == nullptr)
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>();
        }
        return last_update_memory_allocation_fail_timestamp;
    }

    if(child_yang_name == "update-error-message")
    {
        for(auto const & c : update_error_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage>();
        c->parent = this;
        update_error_message.push_back(c);
        return c;
    }

    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : establishment_action_count)
    {
        children[c->get_segment_path()] = c;
    }

    if(first_update_error_handling_reset_timestamp != nullptr)
    {
        children["first-update-error-handling-reset-timestamp"] = first_update_error_handling_reset_timestamp;
    }

    if(first_update_malformed_timestamp != nullptr)
    {
        children["first-update-malformed-timestamp"] = first_update_malformed_timestamp;
    }

    if(first_update_memory_allocation_fail_timestamp != nullptr)
    {
        children["first-update-memory-allocation-fail-timestamp"] = first_update_memory_allocation_fail_timestamp;
    }

    if(last_error_handling_reset_timestamp != nullptr)
    {
        children["last-error-handling-reset-timestamp"] = last_error_handling_reset_timestamp;
    }

    if(last_update_malformed_timestamp != nullptr)
    {
        children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    if(last_update_memory_allocation_fail_timestamp != nullptr)
    {
        children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
    }

    for (auto const & c : update_error_message)
    {
        children[c->get_segment_path()] = c;
    }

    if(update_neighbor_address != nullptr)
    {
        children["update-neighbor-address"] = update_neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "establishment-total-update-message-count")
    {
        establishment_total_update_message_count = value;
    }
    if(value_path == "last-error-handling-reset-age")
    {
        last_error_handling_reset_age = value;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age = value;
    }
    if(value_path == "total-update-message-count")
    {
        total_update_message_count = value;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count = value;
    }
    if(value_path == "update-error-handling-avoid-reset")
    {
        update_error_handling_avoid_reset = value;
    }
    if(value_path == "update-error-handling-reset-count")
    {
        update_error_handling_reset_count = value;
    }
    if(value_path == "update-error-message-list-count")
    {
        update_error_message_list_count = value;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count = value;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateNeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::FirstUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::~FirstUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-malformed-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstUpdateMalformedTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateMalformedTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::FirstUpdateMemoryAllocationFailTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::~FirstUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-memory-allocation-fail-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstUpdateMemoryAllocationFailTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::LastUpdateMemoryAllocationFailTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::~LastUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-memory-allocation-fail-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateMemoryAllocationFailTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::FirstUpdateErrorHandlingResetTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-update-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::~FirstUpdateErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-error-handling-reset-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstUpdateErrorHandlingResetTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::LastErrorHandlingResetTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::~LastErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-handling-reset-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErrorHandlingResetTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::EstablishmentActionCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "establishment-action-count"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::~EstablishmentActionCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "establishment-action-count";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EstablishmentActionCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorMessage()
    :
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    update_error_final_action{YType::enumeration, "update-error-final-action"},
    update_error_nlri_address_family{YType::enumeration, "update-error-nlri-address-family"},
    update_error_nlri_string{YType::str, "update-error-nlri-string"},
    update_error_nlri_string_truncated{YType::boolean, "update-error-nlri-string-truncated"}
    	,
    update_message_reset_data(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>())
	,update_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>())
{
    update_message_reset_data->parent = this;

    update_message_timestamp->parent = this;

    yang_name = "update-error-message"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::~UpdateErrorMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_data() const
{
    for (std::size_t index=0; index<update_error_element.size(); index++)
    {
        if(update_error_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_message_data.size(); index++)
    {
        if(update_message_data[index]->has_data())
            return true;
    }
    return update_attribute_discard_count.is_set
	|| update_error_final_action.is_set
	|| update_error_nlri_address_family.is_set
	|| update_error_nlri_string.is_set
	|| update_error_nlri_string_truncated.is_set
	|| (update_message_reset_data !=  nullptr && update_message_reset_data->has_data())
	|| (update_message_timestamp !=  nullptr && update_message_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_operation() const
{
    for (std::size_t index=0; index<update_error_element.size(); index++)
    {
        if(update_error_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_message_data.size(); index++)
    {
        if(update_message_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(update_attribute_discard_count.operation)
	|| is_set(update_error_final_action.operation)
	|| is_set(update_error_nlri_address_family.operation)
	|| is_set(update_error_nlri_string.operation)
	|| is_set(update_error_nlri_string_truncated.operation)
	|| (update_message_reset_data !=  nullptr && update_message_reset_data->has_operation())
	|| (update_message_timestamp !=  nullptr && update_message_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-message";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateErrorMessage' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.operation)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (update_error_final_action.is_set || is_set(update_error_final_action.operation)) leaf_name_data.push_back(update_error_final_action.get_name_leafdata());
    if (update_error_nlri_address_family.is_set || is_set(update_error_nlri_address_family.operation)) leaf_name_data.push_back(update_error_nlri_address_family.get_name_leafdata());
    if (update_error_nlri_string.is_set || is_set(update_error_nlri_string.operation)) leaf_name_data.push_back(update_error_nlri_string.get_name_leafdata());
    if (update_error_nlri_string_truncated.is_set || is_set(update_error_nlri_string_truncated.operation)) leaf_name_data.push_back(update_error_nlri_string_truncated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-error-element")
    {
        for(auto const & c : update_error_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement>();
        c->parent = this;
        update_error_element.push_back(c);
        return c;
    }

    if(child_yang_name == "update-message-data")
    {
        for(auto const & c : update_message_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData>();
        c->parent = this;
        update_message_data.push_back(c);
        return c;
    }

    if(child_yang_name == "update-message-reset-data")
    {
        if(update_message_reset_data == nullptr)
        {
            update_message_reset_data = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>();
        }
        return update_message_reset_data;
    }

    if(child_yang_name == "update-message-timestamp")
    {
        if(update_message_timestamp == nullptr)
        {
            update_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>();
        }
        return update_message_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_error_element)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_message_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(update_message_reset_data != nullptr)
    {
        children["update-message-reset-data"] = update_message_reset_data;
    }

    if(update_message_timestamp != nullptr)
    {
        children["update-message-timestamp"] = update_message_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count = value;
    }
    if(value_path == "update-error-final-action")
    {
        update_error_final_action = value;
    }
    if(value_path == "update-error-nlri-address-family")
    {
        update_error_nlri_address_family = value;
    }
    if(value_path == "update-error-nlri-string")
    {
        update_error_nlri_string = value;
    }
    if(value_path == "update-error-nlri-string-truncated")
    {
        update_error_nlri_string_truncated = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::UpdateMessageTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "update-message-timestamp"; yang_parent_name = "update-error-message";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::~UpdateMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateMessageTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::UpdateMessageResetData()
    :
    update_error_reset_notification_code{YType::uint8, "update-error-reset-notification-code"},
    update_error_reset_notification_data{YType::str, "update-error-reset-notification-data"},
    update_error_reset_notification_data_length{YType::uint16, "update-error-reset-notification-data-length"},
    update_error_reset_notification_sub_code{YType::uint16, "update-error-reset-notification-sub-code"},
    update_error_reset_reason{YType::enumeration, "update-error-reset-reason"}
{
    yang_name = "update-message-reset-data"; yang_parent_name = "update-error-message";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::~UpdateMessageResetData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_data() const
{
    return update_error_reset_notification_code.is_set
	|| update_error_reset_notification_data.is_set
	|| update_error_reset_notification_data_length.is_set
	|| update_error_reset_notification_sub_code.is_set
	|| update_error_reset_reason.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_operation() const
{
    return is_set(operation)
	|| is_set(update_error_reset_notification_code.operation)
	|| is_set(update_error_reset_notification_data.operation)
	|| is_set(update_error_reset_notification_data_length.operation)
	|| is_set(update_error_reset_notification_sub_code.operation)
	|| is_set(update_error_reset_reason.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-reset-data";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateMessageResetData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_error_reset_notification_code.is_set || is_set(update_error_reset_notification_code.operation)) leaf_name_data.push_back(update_error_reset_notification_code.get_name_leafdata());
    if (update_error_reset_notification_data.is_set || is_set(update_error_reset_notification_data.operation)) leaf_name_data.push_back(update_error_reset_notification_data.get_name_leafdata());
    if (update_error_reset_notification_data_length.is_set || is_set(update_error_reset_notification_data_length.operation)) leaf_name_data.push_back(update_error_reset_notification_data_length.get_name_leafdata());
    if (update_error_reset_notification_sub_code.is_set || is_set(update_error_reset_notification_sub_code.operation)) leaf_name_data.push_back(update_error_reset_notification_sub_code.get_name_leafdata());
    if (update_error_reset_reason.is_set || is_set(update_error_reset_reason.operation)) leaf_name_data.push_back(update_error_reset_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-error-reset-notification-code")
    {
        update_error_reset_notification_code = value;
    }
    if(value_path == "update-error-reset-notification-data")
    {
        update_error_reset_notification_data = value;
    }
    if(value_path == "update-error-reset-notification-data-length")
    {
        update_error_reset_notification_data_length = value;
    }
    if(value_path == "update-error-reset-notification-sub-code")
    {
        update_error_reset_notification_sub_code = value;
    }
    if(value_path == "update-error-reset-reason")
    {
        update_error_reset_reason = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::UpdateMessageData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "update-message-data"; yang_parent_name = "update-error-message";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::~UpdateMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-data";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateMessageData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::UpdateErrorElement()
    :
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_attribute_length{YType::uint16, "update-attribute-length"},
    update_error_action{YType::enumeration, "update-error-action"},
    update_error_data{YType::str, "update-error-data"},
    update_error_data_length{YType::uint16, "update-error-data-length"}
{
    yang_name = "update-error-element"; yang_parent_name = "update-error-message";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::~UpdateErrorElement()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_data() const
{
    return update_attribute_code.is_set
	|| update_attribute_flags.is_set
	|| update_attribute_length.is_set
	|| update_error_action.is_set
	|| update_error_data.is_set
	|| update_error_data_length.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_operation() const
{
    return is_set(operation)
	|| is_set(update_attribute_code.operation)
	|| is_set(update_attribute_flags.operation)
	|| is_set(update_attribute_length.operation)
	|| is_set(update_error_action.operation)
	|| is_set(update_error_data.operation)
	|| is_set(update_error_data_length.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-element";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateErrorElement' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_code.is_set || is_set(update_attribute_code.operation)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_attribute_flags.is_set || is_set(update_attribute_flags.operation)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_attribute_length.is_set || is_set(update_attribute_length.operation)) leaf_name_data.push_back(update_attribute_length.get_name_leafdata());
    if (update_error_action.is_set || is_set(update_error_action.operation)) leaf_name_data.push_back(update_error_action.get_name_leafdata());
    if (update_error_data.is_set || is_set(update_error_data.operation)) leaf_name_data.push_back(update_error_data.get_name_leafdata());
    if (update_error_data_length.is_set || is_set(update_error_data_length.operation)) leaf_name_data.push_back(update_error_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-attribute-code")
    {
        update_attribute_code = value;
    }
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags = value;
    }
    if(value_path == "update-attribute-length")
    {
        update_attribute_length = value;
    }
    if(value_path == "update-error-action")
    {
        update_error_action = value;
    }
    if(value_path == "update-error-data")
    {
        update_error_data = value;
    }
    if(value_path == "update-error-data-length")
    {
        update_error_data_length = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbors()
{
    yang_name = "update-inbound-filter-neighbors"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::~UpdateInboundFilterNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::has_data() const
{
    for (std::size_t index=0; index<update_inbound_filter_neighbor.size(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_filter_neighbor.size(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbors";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundFilterNeighbors' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-filter-neighbor")
    {
        for(auto const & c : update_inbound_filter_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor>();
        c->parent = this;
        update_inbound_filter_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_inbound_filter_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateInboundFilterNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    configured_update_filter_message_buffer_count{YType::uint32, "configured-update-filter-message-buffer-count"},
    establishment_total_filter_update_message_count{YType::uint32, "establishment-total-filter-update-message-count"},
    establishment_update_filtered_message_count{YType::uint32, "establishment-update-filtered-message-count"},
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"},
    message_update_attribute_filtering_enabled{YType::boolean, "message-update-attribute-filtering-enabled"},
    operational_update_attribute_filtering_enabled{YType::boolean, "operational-update-attribute-filtering-enabled"},
    operational_update_filter_message_buffer_count{YType::uint32, "operational-update-filter-message-buffer-count"},
    total_filter_update_message_count{YType::uint32, "total-filter-update-message-count"},
    update_attribute_filter_group_name{YType::str, "update-attribute-filter-group-name"},
    update_filter_logging_enabled{YType::boolean, "update-filter-logging-enabled"},
    update_filter_message_buffer_circular{YType::boolean, "update-filter-message-buffer-circular"},
    update_filter_message_list_count{YType::uint32, "update-filter-message-list-count"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    first_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>())
	,last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>())
	,update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>())
{
    first_update_filtered_timestamp->parent = this;

    last_update_filtered_timestamp->parent = this;

    update_neighbor_address->parent = this;

    yang_name = "update-inbound-filter-neighbor"; yang_parent_name = "update-inbound-filter-neighbors";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::~UpdateInboundFilterNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_data() const
{
    for (std::size_t index=0; index<update_attribute_filter_attributes.size(); index++)
    {
        if(update_attribute_filter_attributes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message.size(); index++)
    {
        if(update_filter_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| configured_update_filter_message_buffer_count.is_set
	|| establishment_total_filter_update_message_count.is_set
	|| establishment_update_filtered_message_count.is_set
	|| last_update_filtered_age.is_set
	|| message_update_attribute_filtering_enabled.is_set
	|| operational_update_attribute_filtering_enabled.is_set
	|| operational_update_filter_message_buffer_count.is_set
	|| total_filter_update_message_count.is_set
	|| update_attribute_filter_group_name.is_set
	|| update_filter_logging_enabled.is_set
	|| update_filter_message_buffer_circular.is_set
	|| update_filter_message_list_count.is_set
	|| update_filtered_message_count.is_set
	|| update_vrf_name.is_set
	|| (first_update_filtered_timestamp !=  nullptr && first_update_filtered_timestamp->has_data())
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_operation() const
{
    for (std::size_t index=0; index<update_attribute_filter_attributes.size(); index++)
    {
        if(update_attribute_filter_attributes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message.size(); index++)
    {
        if(update_filter_message[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(configured_update_filter_message_buffer_count.operation)
	|| is_set(establishment_total_filter_update_message_count.operation)
	|| is_set(establishment_update_filtered_message_count.operation)
	|| is_set(last_update_filtered_age.operation)
	|| is_set(message_update_attribute_filtering_enabled.operation)
	|| is_set(operational_update_attribute_filtering_enabled.operation)
	|| is_set(operational_update_filter_message_buffer_count.operation)
	|| is_set(total_filter_update_message_count.operation)
	|| is_set(update_attribute_filter_group_name.operation)
	|| is_set(update_filter_logging_enabled.operation)
	|| is_set(update_filter_message_buffer_circular.operation)
	|| is_set(update_filter_message_list_count.operation)
	|| is_set(update_filtered_message_count.operation)
	|| is_set(update_vrf_name.operation)
	|| (first_update_filtered_timestamp !=  nullptr && first_update_filtered_timestamp->has_operation())
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundFilterNeighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (configured_update_filter_message_buffer_count.is_set || is_set(configured_update_filter_message_buffer_count.operation)) leaf_name_data.push_back(configured_update_filter_message_buffer_count.get_name_leafdata());
    if (establishment_total_filter_update_message_count.is_set || is_set(establishment_total_filter_update_message_count.operation)) leaf_name_data.push_back(establishment_total_filter_update_message_count.get_name_leafdata());
    if (establishment_update_filtered_message_count.is_set || is_set(establishment_update_filtered_message_count.operation)) leaf_name_data.push_back(establishment_update_filtered_message_count.get_name_leafdata());
    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.operation)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());
    if (message_update_attribute_filtering_enabled.is_set || is_set(message_update_attribute_filtering_enabled.operation)) leaf_name_data.push_back(message_update_attribute_filtering_enabled.get_name_leafdata());
    if (operational_update_attribute_filtering_enabled.is_set || is_set(operational_update_attribute_filtering_enabled.operation)) leaf_name_data.push_back(operational_update_attribute_filtering_enabled.get_name_leafdata());
    if (operational_update_filter_message_buffer_count.is_set || is_set(operational_update_filter_message_buffer_count.operation)) leaf_name_data.push_back(operational_update_filter_message_buffer_count.get_name_leafdata());
    if (total_filter_update_message_count.is_set || is_set(total_filter_update_message_count.operation)) leaf_name_data.push_back(total_filter_update_message_count.get_name_leafdata());
    if (update_attribute_filter_group_name.is_set || is_set(update_attribute_filter_group_name.operation)) leaf_name_data.push_back(update_attribute_filter_group_name.get_name_leafdata());
    if (update_filter_logging_enabled.is_set || is_set(update_filter_logging_enabled.operation)) leaf_name_data.push_back(update_filter_logging_enabled.get_name_leafdata());
    if (update_filter_message_buffer_circular.is_set || is_set(update_filter_message_buffer_circular.operation)) leaf_name_data.push_back(update_filter_message_buffer_circular.get_name_leafdata());
    if (update_filter_message_list_count.is_set || is_set(update_filter_message_list_count.operation)) leaf_name_data.push_back(update_filter_message_list_count.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.operation)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.operation)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-update-filtered-timestamp")
    {
        if(first_update_filtered_timestamp == nullptr)
        {
            first_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>();
        }
        return first_update_filtered_timestamp;
    }

    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    if(child_yang_name == "update-attribute-filter-attributes")
    {
        for(auto const & c : update_attribute_filter_attributes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes>();
        c->parent = this;
        update_attribute_filter_attributes.push_back(c);
        return c;
    }

    if(child_yang_name == "update-filter-message")
    {
        for(auto const & c : update_filter_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage>();
        c->parent = this;
        update_filter_message.push_back(c);
        return c;
    }

    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_update_filtered_timestamp != nullptr)
    {
        children["first-update-filtered-timestamp"] = first_update_filtered_timestamp;
    }

    if(last_update_filtered_timestamp != nullptr)
    {
        children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    for (auto const & c : update_attribute_filter_attributes)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_filter_message)
    {
        children[c->get_segment_path()] = c;
    }

    if(update_neighbor_address != nullptr)
    {
        children["update-neighbor-address"] = update_neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "configured-update-filter-message-buffer-count")
    {
        configured_update_filter_message_buffer_count = value;
    }
    if(value_path == "establishment-total-filter-update-message-count")
    {
        establishment_total_filter_update_message_count = value;
    }
    if(value_path == "establishment-update-filtered-message-count")
    {
        establishment_update_filtered_message_count = value;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
    }
    if(value_path == "message-update-attribute-filtering-enabled")
    {
        message_update_attribute_filtering_enabled = value;
    }
    if(value_path == "operational-update-attribute-filtering-enabled")
    {
        operational_update_attribute_filtering_enabled = value;
    }
    if(value_path == "operational-update-filter-message-buffer-count")
    {
        operational_update_filter_message_buffer_count = value;
    }
    if(value_path == "total-filter-update-message-count")
    {
        total_filter_update_message_count = value;
    }
    if(value_path == "update-attribute-filter-group-name")
    {
        update_attribute_filter_group_name = value;
    }
    if(value_path == "update-filter-logging-enabled")
    {
        update_filter_logging_enabled = value;
    }
    if(value_path == "update-filter-message-buffer-circular")
    {
        update_filter_message_buffer_circular = value;
    }
    if(value_path == "update-filter-message-list-count")
    {
        update_filter_message_list_count = value;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-filter-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateNeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::FirstUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::~FirstUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-filtered-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstUpdateFilteredTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateFilteredTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::UpdateAttributeFilterAttributes()
    :
    establishment_update_filter_match_count{YType::uint32, "establishment-update-filter-match-count"},
    last_update_filter_match_age{YType::uint32, "last-update-filter-match-age"},
    update_filter_action{YType::enumeration, "update-filter-action"},
    update_filter_match_count{YType::uint32, "update-filter-match-count"},
    update_internal_attribute_code{YType::uint32, "update-internal-attribute-code"}
    	,
    last_update_filter_match_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>())
{
    last_update_filter_match_timestamp->parent = this;

    yang_name = "update-attribute-filter-attributes"; yang_parent_name = "update-inbound-filter-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::~UpdateAttributeFilterAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_data() const
{
    return establishment_update_filter_match_count.is_set
	|| last_update_filter_match_age.is_set
	|| update_filter_action.is_set
	|| update_filter_match_count.is_set
	|| update_internal_attribute_code.is_set
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(establishment_update_filter_match_count.operation)
	|| is_set(last_update_filter_match_age.operation)
	|| is_set(update_filter_action.operation)
	|| is_set(update_filter_match_count.operation)
	|| is_set(update_internal_attribute_code.operation)
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-attribute-filter-attributes";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateAttributeFilterAttributes' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (establishment_update_filter_match_count.is_set || is_set(establishment_update_filter_match_count.operation)) leaf_name_data.push_back(establishment_update_filter_match_count.get_name_leafdata());
    if (last_update_filter_match_age.is_set || is_set(last_update_filter_match_age.operation)) leaf_name_data.push_back(last_update_filter_match_age.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.operation)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());
    if (update_filter_match_count.is_set || is_set(update_filter_match_count.operation)) leaf_name_data.push_back(update_filter_match_count.get_name_leafdata());
    if (update_internal_attribute_code.is_set || is_set(update_internal_attribute_code.operation)) leaf_name_data.push_back(update_internal_attribute_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filter-match-timestamp")
    {
        if(last_update_filter_match_timestamp == nullptr)
        {
            last_update_filter_match_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>();
        }
        return last_update_filter_match_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_filter_match_timestamp != nullptr)
    {
        children["last-update-filter-match-timestamp"] = last_update_filter_match_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "establishment-update-filter-match-count")
    {
        establishment_update_filter_match_count = value;
    }
    if(value_path == "last-update-filter-match-age")
    {
        last_update_filter_match_age = value;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
    }
    if(value_path == "update-filter-match-count")
    {
        update_filter_match_count = value;
    }
    if(value_path == "update-internal-attribute-code")
    {
        update_internal_attribute_code = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::LastUpdateFilterMatchTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-filter-match-timestamp"; yang_parent_name = "update-attribute-filter-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::~LastUpdateFilterMatchTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filter-match-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateFilterMatchTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessage()
    :
    update_filter_final_action{YType::enumeration, "update-filter-final-action"},
    update_filter_nlri_address_family{YType::enumeration, "update-filter-nlri-address-family"},
    update_filter_nlri_string{YType::str, "update-filter-nlri-string"},
    update_filter_nlri_string_truncated{YType::boolean, "update-filter-nlri-string-truncated"},
    update_filtered_attribute_count{YType::uint32, "update-filtered-attribute-count"}
    	,
    update_filter_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>())
{
    update_filter_message_timestamp->parent = this;

    yang_name = "update-filter-message"; yang_parent_name = "update-inbound-filter-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::~UpdateFilterMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_data() const
{
    for (std::size_t index=0; index<update_filter_element.size(); index++)
    {
        if(update_filter_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message_data.size(); index++)
    {
        if(update_filter_message_data[index]->has_data())
            return true;
    }
    return update_filter_final_action.is_set
	|| update_filter_nlri_address_family.is_set
	|| update_filter_nlri_string.is_set
	|| update_filter_nlri_string_truncated.is_set
	|| update_filtered_attribute_count.is_set
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_operation() const
{
    for (std::size_t index=0; index<update_filter_element.size(); index++)
    {
        if(update_filter_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message_data.size(); index++)
    {
        if(update_filter_message_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(update_filter_final_action.operation)
	|| is_set(update_filter_nlri_address_family.operation)
	|| is_set(update_filter_nlri_string.operation)
	|| is_set(update_filter_nlri_string_truncated.operation)
	|| is_set(update_filtered_attribute_count.operation)
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateFilterMessage' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_filter_final_action.is_set || is_set(update_filter_final_action.operation)) leaf_name_data.push_back(update_filter_final_action.get_name_leafdata());
    if (update_filter_nlri_address_family.is_set || is_set(update_filter_nlri_address_family.operation)) leaf_name_data.push_back(update_filter_nlri_address_family.get_name_leafdata());
    if (update_filter_nlri_string.is_set || is_set(update_filter_nlri_string.operation)) leaf_name_data.push_back(update_filter_nlri_string.get_name_leafdata());
    if (update_filter_nlri_string_truncated.is_set || is_set(update_filter_nlri_string_truncated.operation)) leaf_name_data.push_back(update_filter_nlri_string_truncated.get_name_leafdata());
    if (update_filtered_attribute_count.is_set || is_set(update_filtered_attribute_count.operation)) leaf_name_data.push_back(update_filtered_attribute_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-filter-element")
    {
        for(auto const & c : update_filter_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement>();
        c->parent = this;
        update_filter_element.push_back(c);
        return c;
    }

    if(child_yang_name == "update-filter-message-data")
    {
        for(auto const & c : update_filter_message_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData>();
        c->parent = this;
        update_filter_message_data.push_back(c);
        return c;
    }

    if(child_yang_name == "update-filter-message-timestamp")
    {
        if(update_filter_message_timestamp == nullptr)
        {
            update_filter_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>();
        }
        return update_filter_message_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_filter_element)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_filter_message_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(update_filter_message_timestamp != nullptr)
    {
        children["update-filter-message-timestamp"] = update_filter_message_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-filter-final-action")
    {
        update_filter_final_action = value;
    }
    if(value_path == "update-filter-nlri-address-family")
    {
        update_filter_nlri_address_family = value;
    }
    if(value_path == "update-filter-nlri-string")
    {
        update_filter_nlri_string = value;
    }
    if(value_path == "update-filter-nlri-string-truncated")
    {
        update_filter_nlri_string_truncated = value;
    }
    if(value_path == "update-filtered-attribute-count")
    {
        update_filtered_attribute_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::UpdateFilterMessageTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "update-filter-message-timestamp"; yang_parent_name = "update-filter-message";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::~UpdateFilterMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateFilterMessageTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::UpdateFilterMessageData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "update-filter-message-data"; yang_parent_name = "update-filter-message";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::~UpdateFilterMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-data";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateFilterMessageData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::UpdateFilterElement()
    :
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_filter_action{YType::enumeration, "update-filter-action"}
{
    yang_name = "update-filter-element"; yang_parent_name = "update-filter-message";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::~UpdateFilterElement()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_data() const
{
    return update_attribute_code.is_set
	|| update_attribute_flags.is_set
	|| update_filter_action.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_operation() const
{
    return is_set(operation)
	|| is_set(update_attribute_code.operation)
	|| is_set(update_attribute_flags.operation)
	|| is_set(update_filter_action.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-element";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateFilterElement' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_code.is_set || is_set(update_attribute_code.operation)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_attribute_flags.is_set || is_set(update_attribute_flags.operation)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.operation)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-attribute-code")
    {
        update_attribute_code = value;
    }
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags = value;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::Bmp()
    :
    server_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors>())
	,server_summaries(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries>())
{
    server_neighbors->parent = this;

    server_summaries->parent = this;

    yang_name = "bmp"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::~Bmp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::has_data() const
{
    return (server_neighbors !=  nullptr && server_neighbors->has_data())
	|| (server_summaries !=  nullptr && server_summaries->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::has_operation() const
{
    return is_set(operation)
	|| (server_neighbors !=  nullptr && server_neighbors->has_operation())
	|| (server_summaries !=  nullptr && server_summaries->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bmp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-neighbors")
    {
        if(server_neighbors == nullptr)
        {
            server_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors>();
        }
        return server_neighbors;
    }

    if(child_yang_name == "server-summaries")
    {
        if(server_summaries == nullptr)
        {
            server_summaries = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries>();
        }
        return server_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server_neighbors != nullptr)
    {
        children["server-neighbors"] = server_neighbors;
    }

    if(server_summaries != nullptr)
    {
        children["server-summaries"] = server_summaries;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummaries()
{
    yang_name = "server-summaries"; yang_parent_name = "bmp";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::~ServerSummaries()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::has_data() const
{
    for (std::size_t index=0; index<server_summary.size(); index++)
    {
        if(server_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::has_operation() const
{
    for (std::size_t index=0; index<server_summary.size(); index++)
    {
        if(server_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-summaries";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerSummaries' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-summary")
    {
        for(auto const & c : server_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary>();
        c->parent = this;
        server_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::ServerSummary()
    :
    server_id{YType::uint32, "server-id"},
    bmp_bytes_written_tcp{YType::uint64, "bmp-bytes-written-tcp"},
    bmp_init_msg_count{YType::uint32, "bmp-init-msg-count"},
    bmp_messages_wdraw_discarded{YType::uint32, "bmp-messages-wdraw-discarded"},
    bmp_peer_msg_drop_count{YType::uint32, "bmp-peer-msg-drop-count"},
    bmp_peer_msg_pending_count{YType::uint32, "bmp-peer-msg-pending-count"},
    bmp_peer_msg_pending_count_hwts{YType::uint64, "bmp-peer-msg-pending-count-hwts"},
    bmp_peer_msg_pending_count_max{YType::uint32, "bmp-peer-msg-pending-count-max"},
    bmp_per_peer_msg_count{YType::uint32, "bmp-per-peer-msg-count"},
    bmp_per_peer_msg_route_mon_count{YType::uint32, "bmp-per-peer-msg-route-mon-count"},
    bmp_pfx_wdraw_discarded{YType::uint32, "bmp-pfx-wdraw-discarded"},
    bmp_server_host_name{YType::str, "bmp-server-host-name"},
    bmp_server_id{YType::uint8, "bmp-server-id"},
    bmp_server_is_flapping{YType::boolean, "bmp-server-is-flapping"},
    bmp_server_nbr_count{YType::uint32, "bmp-server-nbr-count"},
    bmp_server_port{YType::uint32, "bmp-server-port"},
    bmp_server_state{YType::enumeration, "bmp-server-state"},
    bmp_status_report_count{YType::uint32, "bmp-status-report-count"},
    bmp_termination_msg_count{YType::uint32, "bmp-termination-msg-count"},
    bmp_update_mode{YType::enumeration, "bmp-update-mode"},
    bmp_vrf_id{YType::uint32, "bmp-vrf-id"},
    bmp_vrf_name{YType::str, "bmp-vrf-name"},
    bmpq_last_all_write_pulse_sent_time{YType::uint64, "bmpq-last-all-write-pulse-sent-time"},
    bmpq_last_write_pulse_cb_time{YType::uint64, "bmpq-last-write-pulse-cb-time"},
    bmpq_last_write_pulse_sent_time{YType::uint64, "bmpq-last-write-pulse-sent-time"},
    bmpr_mon_upd_messages{YType::uint32, "bmpr-mon-upd-messages"},
    bmpr_mon_update_gen_time{YType::uint32, "bmpr-mon-update-gen-time"},
    bmpr_mon_wdraw_messages{YType::uint32, "bmpr-mon-wdraw-messages"},
    path_update_count{YType::uint32, "path-update-count"},
    path_update_drop{YType::uint32, "path-update-drop"},
    path_withdraw_count{YType::uint32, "path-withdraw-count"},
    path_withdraw_drop{YType::uint32, "path-withdraw-drop"},
    tcp_keep_alive_interval{YType::uint32, "tcp-keep-alive-interval"},
    tcp_last_write_cb_time{YType::uint64, "tcp-last-write-cb-time"},
    tcp_last_write_result{YType::uint32, "tcp-last-write-result"},
    tcp_last_write_time{YType::uint64, "tcp-last-write-time"},
    tcp_maximum_segment_size{YType::uint32, "tcp-maximum-segment-size"},
    tcp_write_cb_pending{YType::uint32, "tcp-write-cb-pending"},
    tcp_write_time{YType::uint32, "tcp-write-time"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    update_source_interface_name{YType::str, "update-source-interface-name"},
    update_source_vrf_id{YType::uint32, "update-source-vrf-id"}
    	,
    bmp_server_last_discon_time(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime>())
	,bmp_server_state_age(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge>())
	,bmp_server_state_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec>())
	,update_source_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress>())
{
    bmp_server_last_discon_time->parent = this;

    bmp_server_state_age->parent = this;

    bmp_server_state_time_spec->parent = this;

    update_source_address->parent = this;

    yang_name = "server-summary"; yang_parent_name = "server-summaries";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::~ServerSummary()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::has_data() const
{
    for (std::size_t index=0; index<bmp_send_version.size(); index++)
    {
        if(bmp_send_version[index]->has_data())
            return true;
    }
    return server_id.is_set
	|| bmp_bytes_written_tcp.is_set
	|| bmp_init_msg_count.is_set
	|| bmp_messages_wdraw_discarded.is_set
	|| bmp_peer_msg_drop_count.is_set
	|| bmp_peer_msg_pending_count.is_set
	|| bmp_peer_msg_pending_count_hwts.is_set
	|| bmp_peer_msg_pending_count_max.is_set
	|| bmp_per_peer_msg_count.is_set
	|| bmp_per_peer_msg_route_mon_count.is_set
	|| bmp_pfx_wdraw_discarded.is_set
	|| bmp_server_host_name.is_set
	|| bmp_server_id.is_set
	|| bmp_server_is_flapping.is_set
	|| bmp_server_nbr_count.is_set
	|| bmp_server_port.is_set
	|| bmp_server_state.is_set
	|| bmp_status_report_count.is_set
	|| bmp_termination_msg_count.is_set
	|| bmp_update_mode.is_set
	|| bmp_vrf_id.is_set
	|| bmp_vrf_name.is_set
	|| bmpq_last_all_write_pulse_sent_time.is_set
	|| bmpq_last_write_pulse_cb_time.is_set
	|| bmpq_last_write_pulse_sent_time.is_set
	|| bmpr_mon_upd_messages.is_set
	|| bmpr_mon_update_gen_time.is_set
	|| bmpr_mon_wdraw_messages.is_set
	|| path_update_count.is_set
	|| path_update_drop.is_set
	|| path_withdraw_count.is_set
	|| path_withdraw_drop.is_set
	|| tcp_keep_alive_interval.is_set
	|| tcp_last_write_cb_time.is_set
	|| tcp_last_write_result.is_set
	|| tcp_last_write_time.is_set
	|| tcp_maximum_segment_size.is_set
	|| tcp_write_cb_pending.is_set
	|| tcp_write_time.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| update_source_interface_name.is_set
	|| update_source_vrf_id.is_set
	|| (bmp_server_last_discon_time !=  nullptr && bmp_server_last_discon_time->has_data())
	|| (bmp_server_state_age !=  nullptr && bmp_server_state_age->has_data())
	|| (bmp_server_state_time_spec !=  nullptr && bmp_server_state_time_spec->has_data())
	|| (update_source_address !=  nullptr && update_source_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::has_operation() const
{
    for (std::size_t index=0; index<bmp_send_version.size(); index++)
    {
        if(bmp_send_version[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(server_id.operation)
	|| is_set(bmp_bytes_written_tcp.operation)
	|| is_set(bmp_init_msg_count.operation)
	|| is_set(bmp_messages_wdraw_discarded.operation)
	|| is_set(bmp_peer_msg_drop_count.operation)
	|| is_set(bmp_peer_msg_pending_count.operation)
	|| is_set(bmp_peer_msg_pending_count_hwts.operation)
	|| is_set(bmp_peer_msg_pending_count_max.operation)
	|| is_set(bmp_per_peer_msg_count.operation)
	|| is_set(bmp_per_peer_msg_route_mon_count.operation)
	|| is_set(bmp_pfx_wdraw_discarded.operation)
	|| is_set(bmp_server_host_name.operation)
	|| is_set(bmp_server_id.operation)
	|| is_set(bmp_server_is_flapping.operation)
	|| is_set(bmp_server_nbr_count.operation)
	|| is_set(bmp_server_port.operation)
	|| is_set(bmp_server_state.operation)
	|| is_set(bmp_status_report_count.operation)
	|| is_set(bmp_termination_msg_count.operation)
	|| is_set(bmp_update_mode.operation)
	|| is_set(bmp_vrf_id.operation)
	|| is_set(bmp_vrf_name.operation)
	|| is_set(bmpq_last_all_write_pulse_sent_time.operation)
	|| is_set(bmpq_last_write_pulse_cb_time.operation)
	|| is_set(bmpq_last_write_pulse_sent_time.operation)
	|| is_set(bmpr_mon_upd_messages.operation)
	|| is_set(bmpr_mon_update_gen_time.operation)
	|| is_set(bmpr_mon_wdraw_messages.operation)
	|| is_set(path_update_count.operation)
	|| is_set(path_update_drop.operation)
	|| is_set(path_withdraw_count.operation)
	|| is_set(path_withdraw_drop.operation)
	|| is_set(tcp_keep_alive_interval.operation)
	|| is_set(tcp_last_write_cb_time.operation)
	|| is_set(tcp_last_write_result.operation)
	|| is_set(tcp_last_write_time.operation)
	|| is_set(tcp_maximum_segment_size.operation)
	|| is_set(tcp_write_cb_pending.operation)
	|| is_set(tcp_write_time.operation)
	|| is_set(tos_type.operation)
	|| is_set(tos_value.operation)
	|| is_set(update_source_interface_name.operation)
	|| is_set(update_source_vrf_id.operation)
	|| (bmp_server_last_discon_time !=  nullptr && bmp_server_last_discon_time->has_operation())
	|| (bmp_server_state_age !=  nullptr && bmp_server_state_age->has_operation())
	|| (bmp_server_state_time_spec !=  nullptr && bmp_server_state_time_spec->has_operation())
	|| (update_source_address !=  nullptr && update_source_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-summary" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerSummary' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());
    if (bmp_bytes_written_tcp.is_set || is_set(bmp_bytes_written_tcp.operation)) leaf_name_data.push_back(bmp_bytes_written_tcp.get_name_leafdata());
    if (bmp_init_msg_count.is_set || is_set(bmp_init_msg_count.operation)) leaf_name_data.push_back(bmp_init_msg_count.get_name_leafdata());
    if (bmp_messages_wdraw_discarded.is_set || is_set(bmp_messages_wdraw_discarded.operation)) leaf_name_data.push_back(bmp_messages_wdraw_discarded.get_name_leafdata());
    if (bmp_peer_msg_drop_count.is_set || is_set(bmp_peer_msg_drop_count.operation)) leaf_name_data.push_back(bmp_peer_msg_drop_count.get_name_leafdata());
    if (bmp_peer_msg_pending_count.is_set || is_set(bmp_peer_msg_pending_count.operation)) leaf_name_data.push_back(bmp_peer_msg_pending_count.get_name_leafdata());
    if (bmp_peer_msg_pending_count_hwts.is_set || is_set(bmp_peer_msg_pending_count_hwts.operation)) leaf_name_data.push_back(bmp_peer_msg_pending_count_hwts.get_name_leafdata());
    if (bmp_peer_msg_pending_count_max.is_set || is_set(bmp_peer_msg_pending_count_max.operation)) leaf_name_data.push_back(bmp_peer_msg_pending_count_max.get_name_leafdata());
    if (bmp_per_peer_msg_count.is_set || is_set(bmp_per_peer_msg_count.operation)) leaf_name_data.push_back(bmp_per_peer_msg_count.get_name_leafdata());
    if (bmp_per_peer_msg_route_mon_count.is_set || is_set(bmp_per_peer_msg_route_mon_count.operation)) leaf_name_data.push_back(bmp_per_peer_msg_route_mon_count.get_name_leafdata());
    if (bmp_pfx_wdraw_discarded.is_set || is_set(bmp_pfx_wdraw_discarded.operation)) leaf_name_data.push_back(bmp_pfx_wdraw_discarded.get_name_leafdata());
    if (bmp_server_host_name.is_set || is_set(bmp_server_host_name.operation)) leaf_name_data.push_back(bmp_server_host_name.get_name_leafdata());
    if (bmp_server_id.is_set || is_set(bmp_server_id.operation)) leaf_name_data.push_back(bmp_server_id.get_name_leafdata());
    if (bmp_server_is_flapping.is_set || is_set(bmp_server_is_flapping.operation)) leaf_name_data.push_back(bmp_server_is_flapping.get_name_leafdata());
    if (bmp_server_nbr_count.is_set || is_set(bmp_server_nbr_count.operation)) leaf_name_data.push_back(bmp_server_nbr_count.get_name_leafdata());
    if (bmp_server_port.is_set || is_set(bmp_server_port.operation)) leaf_name_data.push_back(bmp_server_port.get_name_leafdata());
    if (bmp_server_state.is_set || is_set(bmp_server_state.operation)) leaf_name_data.push_back(bmp_server_state.get_name_leafdata());
    if (bmp_status_report_count.is_set || is_set(bmp_status_report_count.operation)) leaf_name_data.push_back(bmp_status_report_count.get_name_leafdata());
    if (bmp_termination_msg_count.is_set || is_set(bmp_termination_msg_count.operation)) leaf_name_data.push_back(bmp_termination_msg_count.get_name_leafdata());
    if (bmp_update_mode.is_set || is_set(bmp_update_mode.operation)) leaf_name_data.push_back(bmp_update_mode.get_name_leafdata());
    if (bmp_vrf_id.is_set || is_set(bmp_vrf_id.operation)) leaf_name_data.push_back(bmp_vrf_id.get_name_leafdata());
    if (bmp_vrf_name.is_set || is_set(bmp_vrf_name.operation)) leaf_name_data.push_back(bmp_vrf_name.get_name_leafdata());
    if (bmpq_last_all_write_pulse_sent_time.is_set || is_set(bmpq_last_all_write_pulse_sent_time.operation)) leaf_name_data.push_back(bmpq_last_all_write_pulse_sent_time.get_name_leafdata());
    if (bmpq_last_write_pulse_cb_time.is_set || is_set(bmpq_last_write_pulse_cb_time.operation)) leaf_name_data.push_back(bmpq_last_write_pulse_cb_time.get_name_leafdata());
    if (bmpq_last_write_pulse_sent_time.is_set || is_set(bmpq_last_write_pulse_sent_time.operation)) leaf_name_data.push_back(bmpq_last_write_pulse_sent_time.get_name_leafdata());
    if (bmpr_mon_upd_messages.is_set || is_set(bmpr_mon_upd_messages.operation)) leaf_name_data.push_back(bmpr_mon_upd_messages.get_name_leafdata());
    if (bmpr_mon_update_gen_time.is_set || is_set(bmpr_mon_update_gen_time.operation)) leaf_name_data.push_back(bmpr_mon_update_gen_time.get_name_leafdata());
    if (bmpr_mon_wdraw_messages.is_set || is_set(bmpr_mon_wdraw_messages.operation)) leaf_name_data.push_back(bmpr_mon_wdraw_messages.get_name_leafdata());
    if (path_update_count.is_set || is_set(path_update_count.operation)) leaf_name_data.push_back(path_update_count.get_name_leafdata());
    if (path_update_drop.is_set || is_set(path_update_drop.operation)) leaf_name_data.push_back(path_update_drop.get_name_leafdata());
    if (path_withdraw_count.is_set || is_set(path_withdraw_count.operation)) leaf_name_data.push_back(path_withdraw_count.get_name_leafdata());
    if (path_withdraw_drop.is_set || is_set(path_withdraw_drop.operation)) leaf_name_data.push_back(path_withdraw_drop.get_name_leafdata());
    if (tcp_keep_alive_interval.is_set || is_set(tcp_keep_alive_interval.operation)) leaf_name_data.push_back(tcp_keep_alive_interval.get_name_leafdata());
    if (tcp_last_write_cb_time.is_set || is_set(tcp_last_write_cb_time.operation)) leaf_name_data.push_back(tcp_last_write_cb_time.get_name_leafdata());
    if (tcp_last_write_result.is_set || is_set(tcp_last_write_result.operation)) leaf_name_data.push_back(tcp_last_write_result.get_name_leafdata());
    if (tcp_last_write_time.is_set || is_set(tcp_last_write_time.operation)) leaf_name_data.push_back(tcp_last_write_time.get_name_leafdata());
    if (tcp_maximum_segment_size.is_set || is_set(tcp_maximum_segment_size.operation)) leaf_name_data.push_back(tcp_maximum_segment_size.get_name_leafdata());
    if (tcp_write_cb_pending.is_set || is_set(tcp_write_cb_pending.operation)) leaf_name_data.push_back(tcp_write_cb_pending.get_name_leafdata());
    if (tcp_write_time.is_set || is_set(tcp_write_time.operation)) leaf_name_data.push_back(tcp_write_time.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.operation)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.operation)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (update_source_interface_name.is_set || is_set(update_source_interface_name.operation)) leaf_name_data.push_back(update_source_interface_name.get_name_leafdata());
    if (update_source_vrf_id.is_set || is_set(update_source_vrf_id.operation)) leaf_name_data.push_back(update_source_vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-send-version")
    {
        for(auto const & c : bmp_send_version)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion>();
        c->parent = this;
        bmp_send_version.push_back(c);
        return c;
    }

    if(child_yang_name == "bmp-server-last-discon-time")
    {
        if(bmp_server_last_discon_time == nullptr)
        {
            bmp_server_last_discon_time = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime>();
        }
        return bmp_server_last_discon_time;
    }

    if(child_yang_name == "bmp-server-state-age")
    {
        if(bmp_server_state_age == nullptr)
        {
            bmp_server_state_age = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge>();
        }
        return bmp_server_state_age;
    }

    if(child_yang_name == "bmp-server-state-time-spec")
    {
        if(bmp_server_state_time_spec == nullptr)
        {
            bmp_server_state_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec>();
        }
        return bmp_server_state_time_spec;
    }

    if(child_yang_name == "update-source-address")
    {
        if(update_source_address == nullptr)
        {
            update_source_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress>();
        }
        return update_source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_send_version)
    {
        children[c->get_segment_path()] = c;
    }

    if(bmp_server_last_discon_time != nullptr)
    {
        children["bmp-server-last-discon-time"] = bmp_server_last_discon_time;
    }

    if(bmp_server_state_age != nullptr)
    {
        children["bmp-server-state-age"] = bmp_server_state_age;
    }

    if(bmp_server_state_time_spec != nullptr)
    {
        children["bmp-server-state-time-spec"] = bmp_server_state_time_spec;
    }

    if(update_source_address != nullptr)
    {
        children["update-source-address"] = update_source_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
    if(value_path == "bmp-bytes-written-tcp")
    {
        bmp_bytes_written_tcp = value;
    }
    if(value_path == "bmp-init-msg-count")
    {
        bmp_init_msg_count = value;
    }
    if(value_path == "bmp-messages-wdraw-discarded")
    {
        bmp_messages_wdraw_discarded = value;
    }
    if(value_path == "bmp-peer-msg-drop-count")
    {
        bmp_peer_msg_drop_count = value;
    }
    if(value_path == "bmp-peer-msg-pending-count")
    {
        bmp_peer_msg_pending_count = value;
    }
    if(value_path == "bmp-peer-msg-pending-count-hwts")
    {
        bmp_peer_msg_pending_count_hwts = value;
    }
    if(value_path == "bmp-peer-msg-pending-count-max")
    {
        bmp_peer_msg_pending_count_max = value;
    }
    if(value_path == "bmp-per-peer-msg-count")
    {
        bmp_per_peer_msg_count = value;
    }
    if(value_path == "bmp-per-peer-msg-route-mon-count")
    {
        bmp_per_peer_msg_route_mon_count = value;
    }
    if(value_path == "bmp-pfx-wdraw-discarded")
    {
        bmp_pfx_wdraw_discarded = value;
    }
    if(value_path == "bmp-server-host-name")
    {
        bmp_server_host_name = value;
    }
    if(value_path == "bmp-server-id")
    {
        bmp_server_id = value;
    }
    if(value_path == "bmp-server-is-flapping")
    {
        bmp_server_is_flapping = value;
    }
    if(value_path == "bmp-server-nbr-count")
    {
        bmp_server_nbr_count = value;
    }
    if(value_path == "bmp-server-port")
    {
        bmp_server_port = value;
    }
    if(value_path == "bmp-server-state")
    {
        bmp_server_state = value;
    }
    if(value_path == "bmp-status-report-count")
    {
        bmp_status_report_count = value;
    }
    if(value_path == "bmp-termination-msg-count")
    {
        bmp_termination_msg_count = value;
    }
    if(value_path == "bmp-update-mode")
    {
        bmp_update_mode = value;
    }
    if(value_path == "bmp-vrf-id")
    {
        bmp_vrf_id = value;
    }
    if(value_path == "bmp-vrf-name")
    {
        bmp_vrf_name = value;
    }
    if(value_path == "bmpq-last-all-write-pulse-sent-time")
    {
        bmpq_last_all_write_pulse_sent_time = value;
    }
    if(value_path == "bmpq-last-write-pulse-cb-time")
    {
        bmpq_last_write_pulse_cb_time = value;
    }
    if(value_path == "bmpq-last-write-pulse-sent-time")
    {
        bmpq_last_write_pulse_sent_time = value;
    }
    if(value_path == "bmpr-mon-upd-messages")
    {
        bmpr_mon_upd_messages = value;
    }
    if(value_path == "bmpr-mon-update-gen-time")
    {
        bmpr_mon_update_gen_time = value;
    }
    if(value_path == "bmpr-mon-wdraw-messages")
    {
        bmpr_mon_wdraw_messages = value;
    }
    if(value_path == "path-update-count")
    {
        path_update_count = value;
    }
    if(value_path == "path-update-drop")
    {
        path_update_drop = value;
    }
    if(value_path == "path-withdraw-count")
    {
        path_withdraw_count = value;
    }
    if(value_path == "path-withdraw-drop")
    {
        path_withdraw_drop = value;
    }
    if(value_path == "tcp-keep-alive-interval")
    {
        tcp_keep_alive_interval = value;
    }
    if(value_path == "tcp-last-write-cb-time")
    {
        tcp_last_write_cb_time = value;
    }
    if(value_path == "tcp-last-write-result")
    {
        tcp_last_write_result = value;
    }
    if(value_path == "tcp-last-write-time")
    {
        tcp_last_write_time = value;
    }
    if(value_path == "tcp-maximum-segment-size")
    {
        tcp_maximum_segment_size = value;
    }
    if(value_path == "tcp-write-cb-pending")
    {
        tcp_write_cb_pending = value;
    }
    if(value_path == "tcp-write-time")
    {
        tcp_write_time = value;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
    }
    if(value_path == "update-source-interface-name")
    {
        update_source_interface_name = value;
    }
    if(value_path == "update-source-vrf-id")
    {
        update_source_vrf_id = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::BmpServerStateAge()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "bmp-server-state-age"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::~BmpServerStateAge()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-state-age";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpServerStateAge' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::BmpServerStateTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "bmp-server-state-time-spec"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::~BmpServerStateTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-state-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpServerStateTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::BmpServerLastDisconTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "bmp-server-last-discon-time"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::~BmpServerLastDisconTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-last-discon-time";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpServerLastDisconTime' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::UpdateSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "update-source-address"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::~UpdateSourceAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateSourceAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "update-source-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-source-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "update-source-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "update-source-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::BmpSendVersion()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "bmp-send-version"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::~BmpSendVersion()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-send-version";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpSendVersion' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbors()
{
    yang_name = "server-neighbors"; yang_parent_name = "bmp";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::~ServerNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::has_data() const
{
    for (std::size_t index=0; index<server_neighbor.size(); index++)
    {
        if(server_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::has_operation() const
{
    for (std::size_t index=0; index<server_neighbor.size(); index++)
    {
        if(server_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-neighbors";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerNeighbors' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-neighbor")
    {
        for(auto const & c : server_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor>();
        c->parent = this;
        server_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::ServerNeighbor()
    :
    server_id{YType::int32, "server-id"}
    	,
    monitored_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors>())
{
    monitored_neighbors->parent = this;

    yang_name = "server-neighbor"; yang_parent_name = "server-neighbors";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::~ServerNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::has_data() const
{
    return server_id.is_set
	|| (monitored_neighbors !=  nullptr && monitored_neighbors->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(server_id.operation)
	|| (monitored_neighbors !=  nullptr && monitored_neighbors->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-neighbor" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerNeighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitored-neighbors")
    {
        if(monitored_neighbors == nullptr)
        {
            monitored_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors>();
        }
        return monitored_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitored_neighbors != nullptr)
    {
        children["monitored-neighbors"] = monitored_neighbors;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbors()
{
    yang_name = "monitored-neighbors"; yang_parent_name = "server-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::~MonitoredNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::has_data() const
{
    for (std::size_t index=0; index<monitored_neighbor.size(); index++)
    {
        if(monitored_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::has_operation() const
{
    for (std::size_t index=0; index<monitored_neighbor.size(); index++)
    {
        if(monitored_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitored-neighbors";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitoredNeighbors' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitored-neighbor")
    {
        for(auto const & c : monitored_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor>();
        c->parent = this;
        monitored_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : monitored_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::MonitoredNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    bmp_neighbor_msg_dropped{YType::uint32, "bmp-neighbor-msg-dropped"},
    bmp_neighbor_msg_pending{YType::uint32, "bmp-neighbor-msg-pending"},
    bmp_neighbor_path_update_drop{YType::uint32, "bmp-neighbor-path-update-drop"},
    bmp_neighbor_path_update_sent{YType::uint32, "bmp-neighbor-path-update-sent"},
    bmp_neighbor_path_withdraw_drop{YType::uint32, "bmp-neighbor-path-withdraw-drop"},
    bmp_neighbor_path_withdraw_sent{YType::uint32, "bmp-neighbor-path-withdraw-sent"},
    bmp_neighbor_peer_down_sent{YType::uint32, "bmp-neighbor-peer-down-sent"},
    bmp_neighbor_peer_up_sent{YType::uint32, "bmp-neighbor-peer-up-sent"},
    bmp_neighbor_route_monitor_sent{YType::uint32, "bmp-neighbor-route-monitor-sent"},
    bmp_neighbor_upd_msg_sent{YType::uint32, "bmp-neighbor-upd-msg-sent"},
    bmp_neighbor_wdraw_msg_sent{YType::uint32, "bmp-neighbor-wdraw-msg-sent"}
    	,
    bmp_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress>())
{
    bmp_neighbor_address->parent = this;

    yang_name = "monitored-neighbor"; yang_parent_name = "monitored-neighbors";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::~MonitoredNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::has_data() const
{
    return neighbor_address.is_set
	|| bmp_neighbor_msg_dropped.is_set
	|| bmp_neighbor_msg_pending.is_set
	|| bmp_neighbor_path_update_drop.is_set
	|| bmp_neighbor_path_update_sent.is_set
	|| bmp_neighbor_path_withdraw_drop.is_set
	|| bmp_neighbor_path_withdraw_sent.is_set
	|| bmp_neighbor_peer_down_sent.is_set
	|| bmp_neighbor_peer_up_sent.is_set
	|| bmp_neighbor_route_monitor_sent.is_set
	|| bmp_neighbor_upd_msg_sent.is_set
	|| bmp_neighbor_wdraw_msg_sent.is_set
	|| (bmp_neighbor_address !=  nullptr && bmp_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(bmp_neighbor_msg_dropped.operation)
	|| is_set(bmp_neighbor_msg_pending.operation)
	|| is_set(bmp_neighbor_path_update_drop.operation)
	|| is_set(bmp_neighbor_path_update_sent.operation)
	|| is_set(bmp_neighbor_path_withdraw_drop.operation)
	|| is_set(bmp_neighbor_path_withdraw_sent.operation)
	|| is_set(bmp_neighbor_peer_down_sent.operation)
	|| is_set(bmp_neighbor_peer_up_sent.operation)
	|| is_set(bmp_neighbor_route_monitor_sent.operation)
	|| is_set(bmp_neighbor_upd_msg_sent.operation)
	|| is_set(bmp_neighbor_wdraw_msg_sent.operation)
	|| (bmp_neighbor_address !=  nullptr && bmp_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitored-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitoredNeighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (bmp_neighbor_msg_dropped.is_set || is_set(bmp_neighbor_msg_dropped.operation)) leaf_name_data.push_back(bmp_neighbor_msg_dropped.get_name_leafdata());
    if (bmp_neighbor_msg_pending.is_set || is_set(bmp_neighbor_msg_pending.operation)) leaf_name_data.push_back(bmp_neighbor_msg_pending.get_name_leafdata());
    if (bmp_neighbor_path_update_drop.is_set || is_set(bmp_neighbor_path_update_drop.operation)) leaf_name_data.push_back(bmp_neighbor_path_update_drop.get_name_leafdata());
    if (bmp_neighbor_path_update_sent.is_set || is_set(bmp_neighbor_path_update_sent.operation)) leaf_name_data.push_back(bmp_neighbor_path_update_sent.get_name_leafdata());
    if (bmp_neighbor_path_withdraw_drop.is_set || is_set(bmp_neighbor_path_withdraw_drop.operation)) leaf_name_data.push_back(bmp_neighbor_path_withdraw_drop.get_name_leafdata());
    if (bmp_neighbor_path_withdraw_sent.is_set || is_set(bmp_neighbor_path_withdraw_sent.operation)) leaf_name_data.push_back(bmp_neighbor_path_withdraw_sent.get_name_leafdata());
    if (bmp_neighbor_peer_down_sent.is_set || is_set(bmp_neighbor_peer_down_sent.operation)) leaf_name_data.push_back(bmp_neighbor_peer_down_sent.get_name_leafdata());
    if (bmp_neighbor_peer_up_sent.is_set || is_set(bmp_neighbor_peer_up_sent.operation)) leaf_name_data.push_back(bmp_neighbor_peer_up_sent.get_name_leafdata());
    if (bmp_neighbor_route_monitor_sent.is_set || is_set(bmp_neighbor_route_monitor_sent.operation)) leaf_name_data.push_back(bmp_neighbor_route_monitor_sent.get_name_leafdata());
    if (bmp_neighbor_upd_msg_sent.is_set || is_set(bmp_neighbor_upd_msg_sent.operation)) leaf_name_data.push_back(bmp_neighbor_upd_msg_sent.get_name_leafdata());
    if (bmp_neighbor_wdraw_msg_sent.is_set || is_set(bmp_neighbor_wdraw_msg_sent.operation)) leaf_name_data.push_back(bmp_neighbor_wdraw_msg_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-neighbor-address")
    {
        if(bmp_neighbor_address == nullptr)
        {
            bmp_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress>();
        }
        return bmp_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bmp_neighbor_address != nullptr)
    {
        children["bmp-neighbor-address"] = bmp_neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "bmp-neighbor-msg-dropped")
    {
        bmp_neighbor_msg_dropped = value;
    }
    if(value_path == "bmp-neighbor-msg-pending")
    {
        bmp_neighbor_msg_pending = value;
    }
    if(value_path == "bmp-neighbor-path-update-drop")
    {
        bmp_neighbor_path_update_drop = value;
    }
    if(value_path == "bmp-neighbor-path-update-sent")
    {
        bmp_neighbor_path_update_sent = value;
    }
    if(value_path == "bmp-neighbor-path-withdraw-drop")
    {
        bmp_neighbor_path_withdraw_drop = value;
    }
    if(value_path == "bmp-neighbor-path-withdraw-sent")
    {
        bmp_neighbor_path_withdraw_sent = value;
    }
    if(value_path == "bmp-neighbor-peer-down-sent")
    {
        bmp_neighbor_peer_down_sent = value;
    }
    if(value_path == "bmp-neighbor-peer-up-sent")
    {
        bmp_neighbor_peer_up_sent = value;
    }
    if(value_path == "bmp-neighbor-route-monitor-sent")
    {
        bmp_neighbor_route_monitor_sent = value;
    }
    if(value_path == "bmp-neighbor-upd-msg-sent")
    {
        bmp_neighbor_upd_msg_sent = value;
    }
    if(value_path == "bmp-neighbor-wdraw-msg-sent")
    {
        bmp_neighbor_wdraw_msg_sent = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::BmpNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "bmp-neighbor-address"; yang_parent_name = "monitored-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::~BmpNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-neighbor-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpNeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "bmp-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "bmp-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "bmp-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "bmp-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::ProcessInfo()
    :
    process_instance{YType::uint8, "process-instance"},
    vrf_name{YType::str, "vrf-name"},
    vrf_totals{YType::boolean, "vrf-totals"}
    	,
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global>())
	,performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_>())
{
    global->parent = this;

    performance_statistics->parent = this;

    vrf->parent = this;

    yang_name = "process-info"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::~ProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::has_data() const
{
    return process_instance.is_set
	|| vrf_name.is_set
	|| vrf_totals.is_set
	|| (global !=  nullptr && global->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(process_instance.operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrf_totals.operation)
	|| (global !=  nullptr && global->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-info";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_instance.is_set || is_set(process_instance.operation)) leaf_name_data.push_back(process_instance.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_totals.is_set || is_set(vrf_totals.operation)) leaf_name_data.push_back(vrf_totals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global>();
        }
        return global;
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics == nullptr)
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics>();
        }
        return performance_statistics;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(performance_statistics != nullptr)
    {
        children["performance-statistics"] = performance_statistics;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-instance")
    {
        process_instance = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::Global()
    :
    as_path_entries_memory{YType::uint32, "as-path-entries-memory"},
    as_path_entry_count{YType::uint32, "as-path-entry-count"},
    attr_set_entry_count{YType::uint32, "attr-set-entry-count"},
    attr_set_memory{YType::uint32, "attr-set-memory"},
    community_entry_count{YType::uint32, "community-entry-count"},
    community_memory{YType::uint32, "community-memory"},
    established_neighbors_count_total{YType::uint32, "established-neighbors-count-total"},
    extended_community_entry_count{YType::uint32, "extended-community-entry-count"},
    extended_community_memory{YType::uint32, "extended-community-memory"},
    lindex_entry_count{YType::uint32, "lindex-entry-count"},
    lindex_memory{YType::uint32, "lindex-memory"},
    local_as{YType::uint32, "local-as"},
    lsattr_entry_count{YType::uint32, "lsattr-entry-count"},
    lsattr_memory{YType::uint32, "lsattr-memory"},
    neighbors_count_total{YType::uint32, "neighbors-count-total"},
    nexthop_count{YType::uint32, "nexthop-count"},
    nexthop_memory{YType::uint32, "nexthop-memory"},
    path_attribute_memory{YType::uint32, "path-attribute-memory"},
    path_attributes_entry_count{YType::uint32, "path-attributes-entry-count"},
    pe_distinguisher_label_entry_count{YType::uint32, "pe-distinguisher-label-entry-count"},
    pe_distinguisher_label_memory{YType::uint32, "pe-distinguisher-label-memory"},
    ppmp_entry_count{YType::uint32, "ppmp-entry-count"},
    ppmp_memory{YType::uint32, "ppmp-memory"},
    process_instance_node{YType::str, "process-instance-node"},
    pta_entry_count{YType::uint32, "pta-entry-count"},
    pta_memory{YType::uint32, "pta-memory"},
    restart_count{YType::uint32, "restart-count"},
    ribrnh_entry_count{YType::uint32, "ribrnh-entry-count"},
    ribrnh_memory{YType::uint32, "ribrnh-memory"},
    route_reflector_memory{YType::uint32, "route-reflector-memory"},
    route_reflectors{YType::uint32, "route-reflectors"},
    sn_num_non_dflt_vrf_nbrs{YType::uint32, "sn-num-non-dflt-vrf-nbrs"},
    sn_num_non_dflt_vrf_nbrs_estab{YType::uint32, "sn-num-non-dflt-vrf-nbrs-estab"},
    total_vrf_count{YType::uint32, "total-vrf-count"},
    tunnel_encap_entry_count{YType::uint32, "tunnel-encap-entry-count"},
    tunnel_encap_memory{YType::uint32, "tunnel-encap-memory"}
{
    yang_name = "global"; yang_parent_name = "process-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::has_data() const
{
    for (std::size_t index=0; index<bmp_pool_alloc_count.size(); index++)
    {
        if(bmp_pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_free_count.size(); index++)
    {
        if(bmp_pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_size.size(); index++)
    {
        if(bmp_pool_size[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_alloc_count.size(); index++)
    {
        if(msg_log_pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_free_count.size(); index++)
    {
        if(msg_log_pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_size.size(); index++)
    {
        if(msg_log_pool_size[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_alloc_count.size(); index++)
    {
        if(pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_free_count.size(); index++)
    {
        if(pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_size.size(); index++)
    {
        if(pool_size[index]->has_data())
            return true;
    }
    return as_path_entries_memory.is_set
	|| as_path_entry_count.is_set
	|| attr_set_entry_count.is_set
	|| attr_set_memory.is_set
	|| community_entry_count.is_set
	|| community_memory.is_set
	|| established_neighbors_count_total.is_set
	|| extended_community_entry_count.is_set
	|| extended_community_memory.is_set
	|| lindex_entry_count.is_set
	|| lindex_memory.is_set
	|| local_as.is_set
	|| lsattr_entry_count.is_set
	|| lsattr_memory.is_set
	|| neighbors_count_total.is_set
	|| nexthop_count.is_set
	|| nexthop_memory.is_set
	|| path_attribute_memory.is_set
	|| path_attributes_entry_count.is_set
	|| pe_distinguisher_label_entry_count.is_set
	|| pe_distinguisher_label_memory.is_set
	|| ppmp_entry_count.is_set
	|| ppmp_memory.is_set
	|| process_instance_node.is_set
	|| pta_entry_count.is_set
	|| pta_memory.is_set
	|| restart_count.is_set
	|| ribrnh_entry_count.is_set
	|| ribrnh_memory.is_set
	|| route_reflector_memory.is_set
	|| route_reflectors.is_set
	|| sn_num_non_dflt_vrf_nbrs.is_set
	|| sn_num_non_dflt_vrf_nbrs_estab.is_set
	|| total_vrf_count.is_set
	|| tunnel_encap_entry_count.is_set
	|| tunnel_encap_memory.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::has_operation() const
{
    for (std::size_t index=0; index<bmp_pool_alloc_count.size(); index++)
    {
        if(bmp_pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_free_count.size(); index++)
    {
        if(bmp_pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_size.size(); index++)
    {
        if(bmp_pool_size[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_alloc_count.size(); index++)
    {
        if(msg_log_pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_free_count.size(); index++)
    {
        if(msg_log_pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_size.size(); index++)
    {
        if(msg_log_pool_size[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_alloc_count.size(); index++)
    {
        if(pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_free_count.size(); index++)
    {
        if(pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_size.size(); index++)
    {
        if(pool_size[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(as_path_entries_memory.operation)
	|| is_set(as_path_entry_count.operation)
	|| is_set(attr_set_entry_count.operation)
	|| is_set(attr_set_memory.operation)
	|| is_set(community_entry_count.operation)
	|| is_set(community_memory.operation)
	|| is_set(established_neighbors_count_total.operation)
	|| is_set(extended_community_entry_count.operation)
	|| is_set(extended_community_memory.operation)
	|| is_set(lindex_entry_count.operation)
	|| is_set(lindex_memory.operation)
	|| is_set(local_as.operation)
	|| is_set(lsattr_entry_count.operation)
	|| is_set(lsattr_memory.operation)
	|| is_set(neighbors_count_total.operation)
	|| is_set(nexthop_count.operation)
	|| is_set(nexthop_memory.operation)
	|| is_set(path_attribute_memory.operation)
	|| is_set(path_attributes_entry_count.operation)
	|| is_set(pe_distinguisher_label_entry_count.operation)
	|| is_set(pe_distinguisher_label_memory.operation)
	|| is_set(ppmp_entry_count.operation)
	|| is_set(ppmp_memory.operation)
	|| is_set(process_instance_node.operation)
	|| is_set(pta_entry_count.operation)
	|| is_set(pta_memory.operation)
	|| is_set(restart_count.operation)
	|| is_set(ribrnh_entry_count.operation)
	|| is_set(ribrnh_memory.operation)
	|| is_set(route_reflector_memory.operation)
	|| is_set(route_reflectors.operation)
	|| is_set(sn_num_non_dflt_vrf_nbrs.operation)
	|| is_set(sn_num_non_dflt_vrf_nbrs_estab.operation)
	|| is_set(total_vrf_count.operation)
	|| is_set(tunnel_encap_entry_count.operation)
	|| is_set(tunnel_encap_memory.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_entries_memory.is_set || is_set(as_path_entries_memory.operation)) leaf_name_data.push_back(as_path_entries_memory.get_name_leafdata());
    if (as_path_entry_count.is_set || is_set(as_path_entry_count.operation)) leaf_name_data.push_back(as_path_entry_count.get_name_leafdata());
    if (attr_set_entry_count.is_set || is_set(attr_set_entry_count.operation)) leaf_name_data.push_back(attr_set_entry_count.get_name_leafdata());
    if (attr_set_memory.is_set || is_set(attr_set_memory.operation)) leaf_name_data.push_back(attr_set_memory.get_name_leafdata());
    if (community_entry_count.is_set || is_set(community_entry_count.operation)) leaf_name_data.push_back(community_entry_count.get_name_leafdata());
    if (community_memory.is_set || is_set(community_memory.operation)) leaf_name_data.push_back(community_memory.get_name_leafdata());
    if (established_neighbors_count_total.is_set || is_set(established_neighbors_count_total.operation)) leaf_name_data.push_back(established_neighbors_count_total.get_name_leafdata());
    if (extended_community_entry_count.is_set || is_set(extended_community_entry_count.operation)) leaf_name_data.push_back(extended_community_entry_count.get_name_leafdata());
    if (extended_community_memory.is_set || is_set(extended_community_memory.operation)) leaf_name_data.push_back(extended_community_memory.get_name_leafdata());
    if (lindex_entry_count.is_set || is_set(lindex_entry_count.operation)) leaf_name_data.push_back(lindex_entry_count.get_name_leafdata());
    if (lindex_memory.is_set || is_set(lindex_memory.operation)) leaf_name_data.push_back(lindex_memory.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (lsattr_entry_count.is_set || is_set(lsattr_entry_count.operation)) leaf_name_data.push_back(lsattr_entry_count.get_name_leafdata());
    if (lsattr_memory.is_set || is_set(lsattr_memory.operation)) leaf_name_data.push_back(lsattr_memory.get_name_leafdata());
    if (neighbors_count_total.is_set || is_set(neighbors_count_total.operation)) leaf_name_data.push_back(neighbors_count_total.get_name_leafdata());
    if (nexthop_count.is_set || is_set(nexthop_count.operation)) leaf_name_data.push_back(nexthop_count.get_name_leafdata());
    if (nexthop_memory.is_set || is_set(nexthop_memory.operation)) leaf_name_data.push_back(nexthop_memory.get_name_leafdata());
    if (path_attribute_memory.is_set || is_set(path_attribute_memory.operation)) leaf_name_data.push_back(path_attribute_memory.get_name_leafdata());
    if (path_attributes_entry_count.is_set || is_set(path_attributes_entry_count.operation)) leaf_name_data.push_back(path_attributes_entry_count.get_name_leafdata());
    if (pe_distinguisher_label_entry_count.is_set || is_set(pe_distinguisher_label_entry_count.operation)) leaf_name_data.push_back(pe_distinguisher_label_entry_count.get_name_leafdata());
    if (pe_distinguisher_label_memory.is_set || is_set(pe_distinguisher_label_memory.operation)) leaf_name_data.push_back(pe_distinguisher_label_memory.get_name_leafdata());
    if (ppmp_entry_count.is_set || is_set(ppmp_entry_count.operation)) leaf_name_data.push_back(ppmp_entry_count.get_name_leafdata());
    if (ppmp_memory.is_set || is_set(ppmp_memory.operation)) leaf_name_data.push_back(ppmp_memory.get_name_leafdata());
    if (process_instance_node.is_set || is_set(process_instance_node.operation)) leaf_name_data.push_back(process_instance_node.get_name_leafdata());
    if (pta_entry_count.is_set || is_set(pta_entry_count.operation)) leaf_name_data.push_back(pta_entry_count.get_name_leafdata());
    if (pta_memory.is_set || is_set(pta_memory.operation)) leaf_name_data.push_back(pta_memory.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.operation)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (ribrnh_entry_count.is_set || is_set(ribrnh_entry_count.operation)) leaf_name_data.push_back(ribrnh_entry_count.get_name_leafdata());
    if (ribrnh_memory.is_set || is_set(ribrnh_memory.operation)) leaf_name_data.push_back(ribrnh_memory.get_name_leafdata());
    if (route_reflector_memory.is_set || is_set(route_reflector_memory.operation)) leaf_name_data.push_back(route_reflector_memory.get_name_leafdata());
    if (route_reflectors.is_set || is_set(route_reflectors.operation)) leaf_name_data.push_back(route_reflectors.get_name_leafdata());
    if (sn_num_non_dflt_vrf_nbrs.is_set || is_set(sn_num_non_dflt_vrf_nbrs.operation)) leaf_name_data.push_back(sn_num_non_dflt_vrf_nbrs.get_name_leafdata());
    if (sn_num_non_dflt_vrf_nbrs_estab.is_set || is_set(sn_num_non_dflt_vrf_nbrs_estab.operation)) leaf_name_data.push_back(sn_num_non_dflt_vrf_nbrs_estab.get_name_leafdata());
    if (total_vrf_count.is_set || is_set(total_vrf_count.operation)) leaf_name_data.push_back(total_vrf_count.get_name_leafdata());
    if (tunnel_encap_entry_count.is_set || is_set(tunnel_encap_entry_count.operation)) leaf_name_data.push_back(tunnel_encap_entry_count.get_name_leafdata());
    if (tunnel_encap_memory.is_set || is_set(tunnel_encap_memory.operation)) leaf_name_data.push_back(tunnel_encap_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-pool-alloc-count")
    {
        for(auto const & c : bmp_pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount>();
        c->parent = this;
        bmp_pool_alloc_count.push_back(c);
        return c;
    }

    if(child_yang_name == "bmp-pool-free-count")
    {
        for(auto const & c : bmp_pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount>();
        c->parent = this;
        bmp_pool_free_count.push_back(c);
        return c;
    }

    if(child_yang_name == "bmp-pool-size")
    {
        for(auto const & c : bmp_pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize>();
        c->parent = this;
        bmp_pool_size.push_back(c);
        return c;
    }

    if(child_yang_name == "msg-log-pool-alloc-count")
    {
        for(auto const & c : msg_log_pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount>();
        c->parent = this;
        msg_log_pool_alloc_count.push_back(c);
        return c;
    }

    if(child_yang_name == "msg-log-pool-free-count")
    {
        for(auto const & c : msg_log_pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount>();
        c->parent = this;
        msg_log_pool_free_count.push_back(c);
        return c;
    }

    if(child_yang_name == "msg-log-pool-size")
    {
        for(auto const & c : msg_log_pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize>();
        c->parent = this;
        msg_log_pool_size.push_back(c);
        return c;
    }

    if(child_yang_name == "pool-alloc-count")
    {
        for(auto const & c : pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount>();
        c->parent = this;
        pool_alloc_count.push_back(c);
        return c;
    }

    if(child_yang_name == "pool-free-count")
    {
        for(auto const & c : pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount>();
        c->parent = this;
        pool_free_count.push_back(c);
        return c;
    }

    if(child_yang_name == "pool-size")
    {
        for(auto const & c : pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize>();
        c->parent = this;
        pool_size.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_pool_alloc_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bmp_pool_free_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bmp_pool_size)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : msg_log_pool_alloc_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : msg_log_pool_free_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : msg_log_pool_size)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool_alloc_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool_free_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool_size)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-path-entries-memory")
    {
        as_path_entries_memory = value;
    }
    if(value_path == "as-path-entry-count")
    {
        as_path_entry_count = value;
    }
    if(value_path == "attr-set-entry-count")
    {
        attr_set_entry_count = value;
    }
    if(value_path == "attr-set-memory")
    {
        attr_set_memory = value;
    }
    if(value_path == "community-entry-count")
    {
        community_entry_count = value;
    }
    if(value_path == "community-memory")
    {
        community_memory = value;
    }
    if(value_path == "established-neighbors-count-total")
    {
        established_neighbors_count_total = value;
    }
    if(value_path == "extended-community-entry-count")
    {
        extended_community_entry_count = value;
    }
    if(value_path == "extended-community-memory")
    {
        extended_community_memory = value;
    }
    if(value_path == "lindex-entry-count")
    {
        lindex_entry_count = value;
    }
    if(value_path == "lindex-memory")
    {
        lindex_memory = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "lsattr-entry-count")
    {
        lsattr_entry_count = value;
    }
    if(value_path == "lsattr-memory")
    {
        lsattr_memory = value;
    }
    if(value_path == "neighbors-count-total")
    {
        neighbors_count_total = value;
    }
    if(value_path == "nexthop-count")
    {
        nexthop_count = value;
    }
    if(value_path == "nexthop-memory")
    {
        nexthop_memory = value;
    }
    if(value_path == "path-attribute-memory")
    {
        path_attribute_memory = value;
    }
    if(value_path == "path-attributes-entry-count")
    {
        path_attributes_entry_count = value;
    }
    if(value_path == "pe-distinguisher-label-entry-count")
    {
        pe_distinguisher_label_entry_count = value;
    }
    if(value_path == "pe-distinguisher-label-memory")
    {
        pe_distinguisher_label_memory = value;
    }
    if(value_path == "ppmp-entry-count")
    {
        ppmp_entry_count = value;
    }
    if(value_path == "ppmp-memory")
    {
        ppmp_memory = value;
    }
    if(value_path == "process-instance-node")
    {
        process_instance_node = value;
    }
    if(value_path == "pta-entry-count")
    {
        pta_entry_count = value;
    }
    if(value_path == "pta-memory")
    {
        pta_memory = value;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
    }
    if(value_path == "ribrnh-entry-count")
    {
        ribrnh_entry_count = value;
    }
    if(value_path == "ribrnh-memory")
    {
        ribrnh_memory = value;
    }
    if(value_path == "route-reflector-memory")
    {
        route_reflector_memory = value;
    }
    if(value_path == "route-reflectors")
    {
        route_reflectors = value;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs")
    {
        sn_num_non_dflt_vrf_nbrs = value;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs-estab")
    {
        sn_num_non_dflt_vrf_nbrs_estab = value;
    }
    if(value_path == "total-vrf-count")
    {
        total_vrf_count = value;
    }
    if(value_path == "tunnel-encap-entry-count")
    {
        tunnel_encap_entry_count = value;
    }
    if(value_path == "tunnel-encap-memory")
    {
        tunnel_encap_memory = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize::PoolSize()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "pool-size"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize::~PoolSize()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-size";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoolSize' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::PoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "pool-alloc-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::~PoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-alloc-count";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoolAllocCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::PoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "pool-free-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::~PoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-free-count";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoolFreeCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::MsgLogPoolSize()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "msg-log-pool-size"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::~MsgLogPoolSize()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-size";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogPoolSize' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::MsgLogPoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "msg-log-pool-alloc-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::~MsgLogPoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-alloc-count";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogPoolAllocCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::MsgLogPoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "msg-log-pool-free-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::~MsgLogPoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-free-count";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogPoolFreeCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::BmpPoolSize()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "bmp-pool-size"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::~BmpPoolSize()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-size";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpPoolSize' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::BmpPoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "bmp-pool-alloc-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::~BmpPoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-alloc-count";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpPoolAllocCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::BmpPoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "bmp-pool-free-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::~BmpPoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-free-count";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpPoolFreeCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_::Vrf_()
    :
    established_neighbors_count{YType::uint32, "established-neighbors-count"},
    neighbors_count{YType::uint32, "neighbors-count"},
    network_count{YType::uint32, "network-count"},
    notifications_received{YType::uint32, "notifications-received"},
    notifications_sent{YType::uint32, "notifications-sent"},
    path_count{YType::uint32, "path-count"},
    update_messages_received{YType::uint32, "update-messages-received"},
    update_messages_sent{YType::uint32, "update-messages-sent"}
{
    yang_name = "vrf"; yang_parent_name = "process-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_::has_data() const
{
    return established_neighbors_count.is_set
	|| neighbors_count.is_set
	|| network_count.is_set
	|| notifications_received.is_set
	|| notifications_sent.is_set
	|| path_count.is_set
	|| update_messages_received.is_set
	|| update_messages_sent.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(established_neighbors_count.operation)
	|| is_set(neighbors_count.operation)
	|| is_set(network_count.operation)
	|| is_set(notifications_received.operation)
	|| is_set(notifications_sent.operation)
	|| is_set(path_count.operation)
	|| is_set(update_messages_received.operation)
	|| is_set(update_messages_sent.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (established_neighbors_count.is_set || is_set(established_neighbors_count.operation)) leaf_name_data.push_back(established_neighbors_count.get_name_leafdata());
    if (neighbors_count.is_set || is_set(neighbors_count.operation)) leaf_name_data.push_back(neighbors_count.get_name_leafdata());
    if (network_count.is_set || is_set(network_count.operation)) leaf_name_data.push_back(network_count.get_name_leafdata());
    if (notifications_received.is_set || is_set(notifications_received.operation)) leaf_name_data.push_back(notifications_received.get_name_leafdata());
    if (notifications_sent.is_set || is_set(notifications_sent.operation)) leaf_name_data.push_back(notifications_sent.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (update_messages_received.is_set || is_set(update_messages_received.operation)) leaf_name_data.push_back(update_messages_received.get_name_leafdata());
    if (update_messages_sent.is_set || is_set(update_messages_sent.operation)) leaf_name_data.push_back(update_messages_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "established-neighbors-count")
    {
        established_neighbors_count = value;
    }
    if(value_path == "neighbors-count")
    {
        neighbors_count = value;
    }
    if(value_path == "network-count")
    {
        network_count = value;
    }
    if(value_path == "notifications-received")
    {
        notifications_received = value;
    }
    if(value_path == "notifications-sent")
    {
        notifications_sent = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "update-messages-received")
    {
        update_messages_received = value;
    }
    if(value_path == "update-messages-sent")
    {
        update_messages_sent = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::PerformanceStatistics()
    :
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_>())
{
    global->parent = this;

    vrf->parent = this;

    yang_name = "performance-statistics"; yang_parent_name = "process-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Global()
    :
    active_nsr_state{YType::uint32, "active-nsr-state"},
    active_nsrtcp_phase_two_enter_time{YType::uint32, "active-nsrtcp-phase-two-enter-time"},
    bgp_te_infra_tunnel_type{YType::enumeration, "bgp-te-infra-tunnel-type"},
    brib_api_input_bytes{YType::uint32, "brib-api-input-bytes"},
    brib_api_input_messages{YType::uint32, "brib-api-input-messages"},
    brib_api_input_prefixes_received{YType::uint32, "brib-api-input-prefixes-received"},
    brib_api_input_processing_time{YType::uint32, "brib-api-input-processing-time"},
    brib_api_input_withdrawn_prefixes{YType::uint32, "brib-api-input-withdrawn-prefixes"},
    brib_api_output_bytes_generated{YType::uint32, "brib-api-output-bytes-generated"},
    brib_api_output_bytes_sent{YType::uint32, "brib-api-output-bytes-sent"},
    brib_api_output_calls{YType::uint32, "brib-api-output-calls"},
    brib_api_output_generation_time{YType::uint32, "brib-api-output-generation-time"},
    brib_api_output_messages_sent{YType::uint32, "brib-api-output-messages-sent"},
    brib_api_output_prefixes_advertised{YType::uint32, "brib-api-output-prefixes-advertised"},
    brib_api_output_prefixes_withdrawn{YType::uint32, "brib-api-output-prefixes-withdrawn"},
    brib_api_output_sending_time{YType::uint32, "brib-api-output-sending-time"},
    configuration_items_processed{YType::uint32, "configuration-items-processed"},
    configuration_processing_time{YType::uint32, "configuration-processing-time"},
    current_clock_time{YType::uint64, "current-clock-time"},
    edm_processing_time{YType::uint32, "edm-processing-time"},
    edm_requests_count{YType::uint32, "edm-requests-count"},
    in_event_attach_calls{YType::uint32, "in-event-attach-calls"},
    in_out_event_attach_calls{YType::uint32, "in-out-event-attach-calls"},
    initial_sync_sessions_added{YType::boolean, "initial-sync-sessions-added"},
    instance_node_role{YType::boolean, "instance-node-role"},
    io_handler_tm{YType::uint64, "io-handler-tm"},
    io_timer_id{YType::uint32, "io-timer-id"},
    io_tree_timer_expiry{YType::uint64, "io-tree-timer-expiry"},
    io_tree_timer_left{YType::uint64, "io-tree-timer-left"},
    issu_milestone_packed{YType::boolean, "issu-milestone-packed"},
    nsr_last_reset_reason{YType::uint8, "nsr-last-reset-reason"},
    out_event_attach_calls{YType::uint32, "out-event-attach-calls"},
    proc_scoped_sync_state{YType::enumeration, "proc-scoped-sync-state"},
    qad_ac_ks_failure{YType::uint32, "qad-ac-ks-failure"},
    qad_ac_ks_received{YType::uint32, "qad-ac-ks-received"},
    qad_init_drops{YType::uint32, "qad-init-drops"},
    qad_messages_received{YType::uint32, "qad-messages-received"},
    qad_messages_sent{YType::uint32, "qad-messages-sent"},
    qad_processed{YType::uint32, "qad-processed"},
    qad_recv_drops{YType::uint32, "qad-recv-drops"},
    qad_resumes{YType::uint32, "qad-resumes"},
    qad_send_drops{YType::uint32, "qad-send-drops"},
    qad_send_failure{YType::uint32, "qad-send-failure"},
    qad_suspends{YType::uint32, "qad-suspends"},
    qad_timeout_received{YType::uint32, "qad-timeout-received"},
    qad_timeout_recvd{YType::uint32, "qad-timeout-recvd"},
    qadack_sent{YType::uint32, "qadack-sent"},
    qadoos_drops{YType::uint32, "qadoos-drops"},
    redcon_nsr_ready{YType::boolean, "redcon-nsr-ready"},
    redcon_state_time{YType::uint32, "redcon-state-time"},
    sec_active_nsr_state{YType::uint32, "sec-active-nsr-state"},
    sec_active_nsrtcp_phase_two_enter_time{YType::uint32, "sec-active-nsrtcp-phase-two-enter-time"},
    tep2p_auto_tunnel_enabled{YType::boolean, "tep2p-auto-tunnel-enabled"},
    total_neighbors_with_pending_postits{YType::uint32, "total-neighbors-with-pending-postits"},
    total_outstanding_postits{YType::uint32, "total-outstanding-postits"},
    updgen_handler_tm{YType::uint64, "updgen-handler-tm"},
    updgen_timer_id{YType::uint32, "updgen-timer-id"},
    updgen_tree_timer_expiry{YType::uint64, "updgen-tree-timer-expiry"},
    updgen_tree_timer_left{YType::uint64, "updgen-tree-timer-left"}
    	,
    ds_npl(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl>())
	,ipv4rib_server(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer>())
	,ipv6rib_server(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer>())
	,lsd_connection(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection>())
	,te_connection(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection>())
{
    ds_npl->parent = this;

    ipv4rib_server->parent = this;

    ipv6rib_server->parent = this;

    lsd_connection->parent = this;

    te_connection->parent = this;

    yang_name = "global"; yang_parent_name = "performance-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::has_data() const
{
    for (std::size_t index=0; index<active_nsr_mode_enter_time.size(); index++)
    {
        if(active_nsr_mode_enter_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_nsrfo_time.size(); index++)
    {
        if(active_nsrfo_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<issu_milestone.size(); index++)
    {
        if(issu_milestone[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<postit_count_info.size(); index++)
    {
        if(postit_count_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_nsr_mode_enter_time.size(); index++)
    {
        if(standby_nsr_mode_enter_time[index]->has_data())
            return true;
    }
    return active_nsr_state.is_set
	|| active_nsrtcp_phase_two_enter_time.is_set
	|| bgp_te_infra_tunnel_type.is_set
	|| brib_api_input_bytes.is_set
	|| brib_api_input_messages.is_set
	|| brib_api_input_prefixes_received.is_set
	|| brib_api_input_processing_time.is_set
	|| brib_api_input_withdrawn_prefixes.is_set
	|| brib_api_output_bytes_generated.is_set
	|| brib_api_output_bytes_sent.is_set
	|| brib_api_output_calls.is_set
	|| brib_api_output_generation_time.is_set
	|| brib_api_output_messages_sent.is_set
	|| brib_api_output_prefixes_advertised.is_set
	|| brib_api_output_prefixes_withdrawn.is_set
	|| brib_api_output_sending_time.is_set
	|| configuration_items_processed.is_set
	|| configuration_processing_time.is_set
	|| current_clock_time.is_set
	|| edm_processing_time.is_set
	|| edm_requests_count.is_set
	|| in_event_attach_calls.is_set
	|| in_out_event_attach_calls.is_set
	|| initial_sync_sessions_added.is_set
	|| instance_node_role.is_set
	|| io_handler_tm.is_set
	|| io_timer_id.is_set
	|| io_tree_timer_expiry.is_set
	|| io_tree_timer_left.is_set
	|| issu_milestone_packed.is_set
	|| nsr_last_reset_reason.is_set
	|| out_event_attach_calls.is_set
	|| proc_scoped_sync_state.is_set
	|| qad_ac_ks_failure.is_set
	|| qad_ac_ks_received.is_set
	|| qad_init_drops.is_set
	|| qad_messages_received.is_set
	|| qad_messages_sent.is_set
	|| qad_processed.is_set
	|| qad_recv_drops.is_set
	|| qad_resumes.is_set
	|| qad_send_drops.is_set
	|| qad_send_failure.is_set
	|| qad_suspends.is_set
	|| qad_timeout_received.is_set
	|| qad_timeout_recvd.is_set
	|| qadack_sent.is_set
	|| qadoos_drops.is_set
	|| redcon_nsr_ready.is_set
	|| redcon_state_time.is_set
	|| sec_active_nsr_state.is_set
	|| sec_active_nsrtcp_phase_two_enter_time.is_set
	|| tep2p_auto_tunnel_enabled.is_set
	|| total_neighbors_with_pending_postits.is_set
	|| total_outstanding_postits.is_set
	|| updgen_handler_tm.is_set
	|| updgen_timer_id.is_set
	|| updgen_tree_timer_expiry.is_set
	|| updgen_tree_timer_left.is_set
	|| (ds_npl !=  nullptr && ds_npl->has_data())
	|| (ipv4rib_server !=  nullptr && ipv4rib_server->has_data())
	|| (ipv6rib_server !=  nullptr && ipv6rib_server->has_data())
	|| (lsd_connection !=  nullptr && lsd_connection->has_data())
	|| (te_connection !=  nullptr && te_connection->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::has_operation() const
{
    for (std::size_t index=0; index<active_nsr_mode_enter_time.size(); index++)
    {
        if(active_nsr_mode_enter_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_nsrfo_time.size(); index++)
    {
        if(active_nsrfo_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<issu_milestone.size(); index++)
    {
        if(issu_milestone[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<postit_count_info.size(); index++)
    {
        if(postit_count_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_nsr_mode_enter_time.size(); index++)
    {
        if(standby_nsr_mode_enter_time[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_nsr_state.operation)
	|| is_set(active_nsrtcp_phase_two_enter_time.operation)
	|| is_set(bgp_te_infra_tunnel_type.operation)
	|| is_set(brib_api_input_bytes.operation)
	|| is_set(brib_api_input_messages.operation)
	|| is_set(brib_api_input_prefixes_received.operation)
	|| is_set(brib_api_input_processing_time.operation)
	|| is_set(brib_api_input_withdrawn_prefixes.operation)
	|| is_set(brib_api_output_bytes_generated.operation)
	|| is_set(brib_api_output_bytes_sent.operation)
	|| is_set(brib_api_output_calls.operation)
	|| is_set(brib_api_output_generation_time.operation)
	|| is_set(brib_api_output_messages_sent.operation)
	|| is_set(brib_api_output_prefixes_advertised.operation)
	|| is_set(brib_api_output_prefixes_withdrawn.operation)
	|| is_set(brib_api_output_sending_time.operation)
	|| is_set(configuration_items_processed.operation)
	|| is_set(configuration_processing_time.operation)
	|| is_set(current_clock_time.operation)
	|| is_set(edm_processing_time.operation)
	|| is_set(edm_requests_count.operation)
	|| is_set(in_event_attach_calls.operation)
	|| is_set(in_out_event_attach_calls.operation)
	|| is_set(initial_sync_sessions_added.operation)
	|| is_set(instance_node_role.operation)
	|| is_set(io_handler_tm.operation)
	|| is_set(io_timer_id.operation)
	|| is_set(io_tree_timer_expiry.operation)
	|| is_set(io_tree_timer_left.operation)
	|| is_set(issu_milestone_packed.operation)
	|| is_set(nsr_last_reset_reason.operation)
	|| is_set(out_event_attach_calls.operation)
	|| is_set(proc_scoped_sync_state.operation)
	|| is_set(qad_ac_ks_failure.operation)
	|| is_set(qad_ac_ks_received.operation)
	|| is_set(qad_init_drops.operation)
	|| is_set(qad_messages_received.operation)
	|| is_set(qad_messages_sent.operation)
	|| is_set(qad_processed.operation)
	|| is_set(qad_recv_drops.operation)
	|| is_set(qad_resumes.operation)
	|| is_set(qad_send_drops.operation)
	|| is_set(qad_send_failure.operation)
	|| is_set(qad_suspends.operation)
	|| is_set(qad_timeout_received.operation)
	|| is_set(qad_timeout_recvd.operation)
	|| is_set(qadack_sent.operation)
	|| is_set(qadoos_drops.operation)
	|| is_set(redcon_nsr_ready.operation)
	|| is_set(redcon_state_time.operation)
	|| is_set(sec_active_nsr_state.operation)
	|| is_set(sec_active_nsrtcp_phase_two_enter_time.operation)
	|| is_set(tep2p_auto_tunnel_enabled.operation)
	|| is_set(total_neighbors_with_pending_postits.operation)
	|| is_set(total_outstanding_postits.operation)
	|| is_set(updgen_handler_tm.operation)
	|| is_set(updgen_timer_id.operation)
	|| is_set(updgen_tree_timer_expiry.operation)
	|| is_set(updgen_tree_timer_left.operation)
	|| (ds_npl !=  nullptr && ds_npl->has_operation())
	|| (ipv4rib_server !=  nullptr && ipv4rib_server->has_operation())
	|| (ipv6rib_server !=  nullptr && ipv6rib_server->has_operation())
	|| (lsd_connection !=  nullptr && lsd_connection->has_operation())
	|| (te_connection !=  nullptr && te_connection->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_nsr_state.is_set || is_set(active_nsr_state.operation)) leaf_name_data.push_back(active_nsr_state.get_name_leafdata());
    if (active_nsrtcp_phase_two_enter_time.is_set || is_set(active_nsrtcp_phase_two_enter_time.operation)) leaf_name_data.push_back(active_nsrtcp_phase_two_enter_time.get_name_leafdata());
    if (bgp_te_infra_tunnel_type.is_set || is_set(bgp_te_infra_tunnel_type.operation)) leaf_name_data.push_back(bgp_te_infra_tunnel_type.get_name_leafdata());
    if (brib_api_input_bytes.is_set || is_set(brib_api_input_bytes.operation)) leaf_name_data.push_back(brib_api_input_bytes.get_name_leafdata());
    if (brib_api_input_messages.is_set || is_set(brib_api_input_messages.operation)) leaf_name_data.push_back(brib_api_input_messages.get_name_leafdata());
    if (brib_api_input_prefixes_received.is_set || is_set(brib_api_input_prefixes_received.operation)) leaf_name_data.push_back(brib_api_input_prefixes_received.get_name_leafdata());
    if (brib_api_input_processing_time.is_set || is_set(brib_api_input_processing_time.operation)) leaf_name_data.push_back(brib_api_input_processing_time.get_name_leafdata());
    if (brib_api_input_withdrawn_prefixes.is_set || is_set(brib_api_input_withdrawn_prefixes.operation)) leaf_name_data.push_back(brib_api_input_withdrawn_prefixes.get_name_leafdata());
    if (brib_api_output_bytes_generated.is_set || is_set(brib_api_output_bytes_generated.operation)) leaf_name_data.push_back(brib_api_output_bytes_generated.get_name_leafdata());
    if (brib_api_output_bytes_sent.is_set || is_set(brib_api_output_bytes_sent.operation)) leaf_name_data.push_back(brib_api_output_bytes_sent.get_name_leafdata());
    if (brib_api_output_calls.is_set || is_set(brib_api_output_calls.operation)) leaf_name_data.push_back(brib_api_output_calls.get_name_leafdata());
    if (brib_api_output_generation_time.is_set || is_set(brib_api_output_generation_time.operation)) leaf_name_data.push_back(brib_api_output_generation_time.get_name_leafdata());
    if (brib_api_output_messages_sent.is_set || is_set(brib_api_output_messages_sent.operation)) leaf_name_data.push_back(brib_api_output_messages_sent.get_name_leafdata());
    if (brib_api_output_prefixes_advertised.is_set || is_set(brib_api_output_prefixes_advertised.operation)) leaf_name_data.push_back(brib_api_output_prefixes_advertised.get_name_leafdata());
    if (brib_api_output_prefixes_withdrawn.is_set || is_set(brib_api_output_prefixes_withdrawn.operation)) leaf_name_data.push_back(brib_api_output_prefixes_withdrawn.get_name_leafdata());
    if (brib_api_output_sending_time.is_set || is_set(brib_api_output_sending_time.operation)) leaf_name_data.push_back(brib_api_output_sending_time.get_name_leafdata());
    if (configuration_items_processed.is_set || is_set(configuration_items_processed.operation)) leaf_name_data.push_back(configuration_items_processed.get_name_leafdata());
    if (configuration_processing_time.is_set || is_set(configuration_processing_time.operation)) leaf_name_data.push_back(configuration_processing_time.get_name_leafdata());
    if (current_clock_time.is_set || is_set(current_clock_time.operation)) leaf_name_data.push_back(current_clock_time.get_name_leafdata());
    if (edm_processing_time.is_set || is_set(edm_processing_time.operation)) leaf_name_data.push_back(edm_processing_time.get_name_leafdata());
    if (edm_requests_count.is_set || is_set(edm_requests_count.operation)) leaf_name_data.push_back(edm_requests_count.get_name_leafdata());
    if (in_event_attach_calls.is_set || is_set(in_event_attach_calls.operation)) leaf_name_data.push_back(in_event_attach_calls.get_name_leafdata());
    if (in_out_event_attach_calls.is_set || is_set(in_out_event_attach_calls.operation)) leaf_name_data.push_back(in_out_event_attach_calls.get_name_leafdata());
    if (initial_sync_sessions_added.is_set || is_set(initial_sync_sessions_added.operation)) leaf_name_data.push_back(initial_sync_sessions_added.get_name_leafdata());
    if (instance_node_role.is_set || is_set(instance_node_role.operation)) leaf_name_data.push_back(instance_node_role.get_name_leafdata());
    if (io_handler_tm.is_set || is_set(io_handler_tm.operation)) leaf_name_data.push_back(io_handler_tm.get_name_leafdata());
    if (io_timer_id.is_set || is_set(io_timer_id.operation)) leaf_name_data.push_back(io_timer_id.get_name_leafdata());
    if (io_tree_timer_expiry.is_set || is_set(io_tree_timer_expiry.operation)) leaf_name_data.push_back(io_tree_timer_expiry.get_name_leafdata());
    if (io_tree_timer_left.is_set || is_set(io_tree_timer_left.operation)) leaf_name_data.push_back(io_tree_timer_left.get_name_leafdata());
    if (issu_milestone_packed.is_set || is_set(issu_milestone_packed.operation)) leaf_name_data.push_back(issu_milestone_packed.get_name_leafdata());
    if (nsr_last_reset_reason.is_set || is_set(nsr_last_reset_reason.operation)) leaf_name_data.push_back(nsr_last_reset_reason.get_name_leafdata());
    if (out_event_attach_calls.is_set || is_set(out_event_attach_calls.operation)) leaf_name_data.push_back(out_event_attach_calls.get_name_leafdata());
    if (proc_scoped_sync_state.is_set || is_set(proc_scoped_sync_state.operation)) leaf_name_data.push_back(proc_scoped_sync_state.get_name_leafdata());
    if (qad_ac_ks_failure.is_set || is_set(qad_ac_ks_failure.operation)) leaf_name_data.push_back(qad_ac_ks_failure.get_name_leafdata());
    if (qad_ac_ks_received.is_set || is_set(qad_ac_ks_received.operation)) leaf_name_data.push_back(qad_ac_ks_received.get_name_leafdata());
    if (qad_init_drops.is_set || is_set(qad_init_drops.operation)) leaf_name_data.push_back(qad_init_drops.get_name_leafdata());
    if (qad_messages_received.is_set || is_set(qad_messages_received.operation)) leaf_name_data.push_back(qad_messages_received.get_name_leafdata());
    if (qad_messages_sent.is_set || is_set(qad_messages_sent.operation)) leaf_name_data.push_back(qad_messages_sent.get_name_leafdata());
    if (qad_processed.is_set || is_set(qad_processed.operation)) leaf_name_data.push_back(qad_processed.get_name_leafdata());
    if (qad_recv_drops.is_set || is_set(qad_recv_drops.operation)) leaf_name_data.push_back(qad_recv_drops.get_name_leafdata());
    if (qad_resumes.is_set || is_set(qad_resumes.operation)) leaf_name_data.push_back(qad_resumes.get_name_leafdata());
    if (qad_send_drops.is_set || is_set(qad_send_drops.operation)) leaf_name_data.push_back(qad_send_drops.get_name_leafdata());
    if (qad_send_failure.is_set || is_set(qad_send_failure.operation)) leaf_name_data.push_back(qad_send_failure.get_name_leafdata());
    if (qad_suspends.is_set || is_set(qad_suspends.operation)) leaf_name_data.push_back(qad_suspends.get_name_leafdata());
    if (qad_timeout_received.is_set || is_set(qad_timeout_received.operation)) leaf_name_data.push_back(qad_timeout_received.get_name_leafdata());
    if (qad_timeout_recvd.is_set || is_set(qad_timeout_recvd.operation)) leaf_name_data.push_back(qad_timeout_recvd.get_name_leafdata());
    if (qadack_sent.is_set || is_set(qadack_sent.operation)) leaf_name_data.push_back(qadack_sent.get_name_leafdata());
    if (qadoos_drops.is_set || is_set(qadoos_drops.operation)) leaf_name_data.push_back(qadoos_drops.get_name_leafdata());
    if (redcon_nsr_ready.is_set || is_set(redcon_nsr_ready.operation)) leaf_name_data.push_back(redcon_nsr_ready.get_name_leafdata());
    if (redcon_state_time.is_set || is_set(redcon_state_time.operation)) leaf_name_data.push_back(redcon_state_time.get_name_leafdata());
    if (sec_active_nsr_state.is_set || is_set(sec_active_nsr_state.operation)) leaf_name_data.push_back(sec_active_nsr_state.get_name_leafdata());
    if (sec_active_nsrtcp_phase_two_enter_time.is_set || is_set(sec_active_nsrtcp_phase_two_enter_time.operation)) leaf_name_data.push_back(sec_active_nsrtcp_phase_two_enter_time.get_name_leafdata());
    if (tep2p_auto_tunnel_enabled.is_set || is_set(tep2p_auto_tunnel_enabled.operation)) leaf_name_data.push_back(tep2p_auto_tunnel_enabled.get_name_leafdata());
    if (total_neighbors_with_pending_postits.is_set || is_set(total_neighbors_with_pending_postits.operation)) leaf_name_data.push_back(total_neighbors_with_pending_postits.get_name_leafdata());
    if (total_outstanding_postits.is_set || is_set(total_outstanding_postits.operation)) leaf_name_data.push_back(total_outstanding_postits.get_name_leafdata());
    if (updgen_handler_tm.is_set || is_set(updgen_handler_tm.operation)) leaf_name_data.push_back(updgen_handler_tm.get_name_leafdata());
    if (updgen_timer_id.is_set || is_set(updgen_timer_id.operation)) leaf_name_data.push_back(updgen_timer_id.get_name_leafdata());
    if (updgen_tree_timer_expiry.is_set || is_set(updgen_tree_timer_expiry.operation)) leaf_name_data.push_back(updgen_tree_timer_expiry.get_name_leafdata());
    if (updgen_tree_timer_left.is_set || is_set(updgen_tree_timer_left.operation)) leaf_name_data.push_back(updgen_tree_timer_left.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-nsr-mode-enter-time")
    {
        for(auto const & c : active_nsr_mode_enter_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime>();
        c->parent = this;
        active_nsr_mode_enter_time.push_back(c);
        return c;
    }

    if(child_yang_name == "active-nsrfo-time")
    {
        for(auto const & c : active_nsrfo_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime>();
        c->parent = this;
        active_nsrfo_time.push_back(c);
        return c;
    }

    if(child_yang_name == "ds-npl")
    {
        if(ds_npl == nullptr)
        {
            ds_npl = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl>();
        }
        return ds_npl;
    }

    if(child_yang_name == "ipv4rib-server")
    {
        if(ipv4rib_server == nullptr)
        {
            ipv4rib_server = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer>();
        }
        return ipv4rib_server;
    }

    if(child_yang_name == "ipv6rib-server")
    {
        if(ipv6rib_server == nullptr)
        {
            ipv6rib_server = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer>();
        }
        return ipv6rib_server;
    }

    if(child_yang_name == "issu-milestone")
    {
        for(auto const & c : issu_milestone)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone>();
        c->parent = this;
        issu_milestone.push_back(c);
        return c;
    }

    if(child_yang_name == "lsd-connection")
    {
        if(lsd_connection == nullptr)
        {
            lsd_connection = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection>();
        }
        return lsd_connection;
    }

    if(child_yang_name == "postit-count-info")
    {
        for(auto const & c : postit_count_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo>();
        c->parent = this;
        postit_count_info.push_back(c);
        return c;
    }

    if(child_yang_name == "standby-nsr-mode-enter-time")
    {
        for(auto const & c : standby_nsr_mode_enter_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime>();
        c->parent = this;
        standby_nsr_mode_enter_time.push_back(c);
        return c;
    }

    if(child_yang_name == "te-connection")
    {
        if(te_connection == nullptr)
        {
            te_connection = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection>();
        }
        return te_connection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : active_nsr_mode_enter_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : active_nsrfo_time)
    {
        children[c->get_segment_path()] = c;
    }

    if(ds_npl != nullptr)
    {
        children["ds-npl"] = ds_npl;
    }

    if(ipv4rib_server != nullptr)
    {
        children["ipv4rib-server"] = ipv4rib_server;
    }

    if(ipv6rib_server != nullptr)
    {
        children["ipv6rib-server"] = ipv6rib_server;
    }

    for (auto const & c : issu_milestone)
    {
        children[c->get_segment_path()] = c;
    }

    if(lsd_connection != nullptr)
    {
        children["lsd-connection"] = lsd_connection;
    }

    for (auto const & c : postit_count_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standby_nsr_mode_enter_time)
    {
        children[c->get_segment_path()] = c;
    }

    if(te_connection != nullptr)
    {
        children["te-connection"] = te_connection;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-nsr-state")
    {
        active_nsr_state = value;
    }
    if(value_path == "active-nsrtcp-phase-two-enter-time")
    {
        active_nsrtcp_phase_two_enter_time = value;
    }
    if(value_path == "bgp-te-infra-tunnel-type")
    {
        bgp_te_infra_tunnel_type = value;
    }
    if(value_path == "brib-api-input-bytes")
    {
        brib_api_input_bytes = value;
    }
    if(value_path == "brib-api-input-messages")
    {
        brib_api_input_messages = value;
    }
    if(value_path == "brib-api-input-prefixes-received")
    {
        brib_api_input_prefixes_received = value;
    }
    if(value_path == "brib-api-input-processing-time")
    {
        brib_api_input_processing_time = value;
    }
    if(value_path == "brib-api-input-withdrawn-prefixes")
    {
        brib_api_input_withdrawn_prefixes = value;
    }
    if(value_path == "brib-api-output-bytes-generated")
    {
        brib_api_output_bytes_generated = value;
    }
    if(value_path == "brib-api-output-bytes-sent")
    {
        brib_api_output_bytes_sent = value;
    }
    if(value_path == "brib-api-output-calls")
    {
        brib_api_output_calls = value;
    }
    if(value_path == "brib-api-output-generation-time")
    {
        brib_api_output_generation_time = value;
    }
    if(value_path == "brib-api-output-messages-sent")
    {
        brib_api_output_messages_sent = value;
    }
    if(value_path == "brib-api-output-prefixes-advertised")
    {
        brib_api_output_prefixes_advertised = value;
    }
    if(value_path == "brib-api-output-prefixes-withdrawn")
    {
        brib_api_output_prefixes_withdrawn = value;
    }
    if(value_path == "brib-api-output-sending-time")
    {
        brib_api_output_sending_time = value;
    }
    if(value_path == "configuration-items-processed")
    {
        configuration_items_processed = value;
    }
    if(value_path == "configuration-processing-time")
    {
        configuration_processing_time = value;
    }
    if(value_path == "current-clock-time")
    {
        current_clock_time = value;
    }
    if(value_path == "edm-processing-time")
    {
        edm_processing_time = value;
    }
    if(value_path == "edm-requests-count")
    {
        edm_requests_count = value;
    }
    if(value_path == "in-event-attach-calls")
    {
        in_event_attach_calls = value;
    }
    if(value_path == "in-out-event-attach-calls")
    {
        in_out_event_attach_calls = value;
    }
    if(value_path == "initial-sync-sessions-added")
    {
        initial_sync_sessions_added = value;
    }
    if(value_path == "instance-node-role")
    {
        instance_node_role = value;
    }
    if(value_path == "io-handler-tm")
    {
        io_handler_tm = value;
    }
    if(value_path == "io-timer-id")
    {
        io_timer_id = value;
    }
    if(value_path == "io-tree-timer-expiry")
    {
        io_tree_timer_expiry = value;
    }
    if(value_path == "io-tree-timer-left")
    {
        io_tree_timer_left = value;
    }
    if(value_path == "issu-milestone-packed")
    {
        issu_milestone_packed = value;
    }
    if(value_path == "nsr-last-reset-reason")
    {
        nsr_last_reset_reason = value;
    }
    if(value_path == "out-event-attach-calls")
    {
        out_event_attach_calls = value;
    }
    if(value_path == "proc-scoped-sync-state")
    {
        proc_scoped_sync_state = value;
    }
    if(value_path == "qad-ac-ks-failure")
    {
        qad_ac_ks_failure = value;
    }
    if(value_path == "qad-ac-ks-received")
    {
        qad_ac_ks_received = value;
    }
    if(value_path == "qad-init-drops")
    {
        qad_init_drops = value;
    }
    if(value_path == "qad-messages-received")
    {
        qad_messages_received = value;
    }
    if(value_path == "qad-messages-sent")
    {
        qad_messages_sent = value;
    }
    if(value_path == "qad-processed")
    {
        qad_processed = value;
    }
    if(value_path == "qad-recv-drops")
    {
        qad_recv_drops = value;
    }
    if(value_path == "qad-resumes")
    {
        qad_resumes = value;
    }
    if(value_path == "qad-send-drops")
    {
        qad_send_drops = value;
    }
    if(value_path == "qad-send-failure")
    {
        qad_send_failure = value;
    }
    if(value_path == "qad-suspends")
    {
        qad_suspends = value;
    }
    if(value_path == "qad-timeout-received")
    {
        qad_timeout_received = value;
    }
    if(value_path == "qad-timeout-recvd")
    {
        qad_timeout_recvd = value;
    }
    if(value_path == "qadack-sent")
    {
        qadack_sent = value;
    }
    if(value_path == "qadoos-drops")
    {
        qadoos_drops = value;
    }
    if(value_path == "redcon-nsr-ready")
    {
        redcon_nsr_ready = value;
    }
    if(value_path == "redcon-state-time")
    {
        redcon_state_time = value;
    }
    if(value_path == "sec-active-nsr-state")
    {
        sec_active_nsr_state = value;
    }
    if(value_path == "sec-active-nsrtcp-phase-two-enter-time")
    {
        sec_active_nsrtcp_phase_two_enter_time = value;
    }
    if(value_path == "tep2p-auto-tunnel-enabled")
    {
        tep2p_auto_tunnel_enabled = value;
    }
    if(value_path == "total-neighbors-with-pending-postits")
    {
        total_neighbors_with_pending_postits = value;
    }
    if(value_path == "total-outstanding-postits")
    {
        total_outstanding_postits = value;
    }
    if(value_path == "updgen-handler-tm")
    {
        updgen_handler_tm = value;
    }
    if(value_path == "updgen-timer-id")
    {
        updgen_timer_id = value;
    }
    if(value_path == "updgen-tree-timer-expiry")
    {
        updgen_tree_timer_expiry = value;
    }
    if(value_path == "updgen-tree-timer-left")
    {
        updgen_tree_timer_left = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::Ipv4RibServer()
    :
    is_rib_connection_up{YType::boolean, "is-rib-connection-up"},
    last_rib_connection_down_age{YType::uint32, "last-rib-connection-down-age"},
    last_rib_connection_up_age{YType::uint32, "last-rib-connection-up-age"},
    rib_connection_down_count{YType::uint32, "rib-connection-down-count"},
    rib_connection_up_count{YType::uint32, "rib-connection-up-count"}
    	,
    first_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp>())
	,first_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp>())
	,last_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp>())
	,last_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp>())
{
    first_rib_connection_down_timestamp->parent = this;

    first_rib_connection_up_timestamp->parent = this;

    last_rib_connection_down_timestamp->parent = this;

    last_rib_connection_up_timestamp->parent = this;

    yang_name = "ipv4rib-server"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::~Ipv4RibServer()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_data() const
{
    return is_rib_connection_up.is_set
	|| last_rib_connection_down_age.is_set
	|| last_rib_connection_up_age.is_set
	|| rib_connection_down_count.is_set
	|| rib_connection_up_count.is_set
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_data())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_data())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_data())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_operation() const
{
    return is_set(operation)
	|| is_set(is_rib_connection_up.operation)
	|| is_set(last_rib_connection_down_age.operation)
	|| is_set(last_rib_connection_up_age.operation)
	|| is_set(rib_connection_down_count.operation)
	|| is_set(rib_connection_up_count.operation)
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_operation())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_operation())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_operation())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rib-server";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibServer' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_rib_connection_up.is_set || is_set(is_rib_connection_up.operation)) leaf_name_data.push_back(is_rib_connection_up.get_name_leafdata());
    if (last_rib_connection_down_age.is_set || is_set(last_rib_connection_down_age.operation)) leaf_name_data.push_back(last_rib_connection_down_age.get_name_leafdata());
    if (last_rib_connection_up_age.is_set || is_set(last_rib_connection_up_age.operation)) leaf_name_data.push_back(last_rib_connection_up_age.get_name_leafdata());
    if (rib_connection_down_count.is_set || is_set(rib_connection_down_count.operation)) leaf_name_data.push_back(rib_connection_down_count.get_name_leafdata());
    if (rib_connection_up_count.is_set || is_set(rib_connection_up_count.operation)) leaf_name_data.push_back(rib_connection_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-rib-connection-down-timestamp")
    {
        if(first_rib_connection_down_timestamp == nullptr)
        {
            first_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp>();
        }
        return first_rib_connection_down_timestamp;
    }

    if(child_yang_name == "first-rib-connection-up-timestamp")
    {
        if(first_rib_connection_up_timestamp == nullptr)
        {
            first_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp>();
        }
        return first_rib_connection_up_timestamp;
    }

    if(child_yang_name == "last-rib-connection-down-timestamp")
    {
        if(last_rib_connection_down_timestamp == nullptr)
        {
            last_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp>();
        }
        return last_rib_connection_down_timestamp;
    }

    if(child_yang_name == "last-rib-connection-up-timestamp")
    {
        if(last_rib_connection_up_timestamp == nullptr)
        {
            last_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp>();
        }
        return last_rib_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_rib_connection_down_timestamp != nullptr)
    {
        children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
    }

    if(first_rib_connection_up_timestamp != nullptr)
    {
        children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
    }

    if(last_rib_connection_down_timestamp != nullptr)
    {
        children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
    }

    if(last_rib_connection_up_timestamp != nullptr)
    {
        children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up = value;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age = value;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age = value;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count = value;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::FirstRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-rib-connection-up-timestamp"; yang_parent_name = "ipv4rib-server";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::~FirstRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-up-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstRibConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::LastRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-rib-connection-up-timestamp"; yang_parent_name = "ipv4rib-server";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::~LastRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-up-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRibConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::FirstRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-rib-connection-down-timestamp"; yang_parent_name = "ipv4rib-server";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::~FirstRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-down-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstRibConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::LastRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-rib-connection-down-timestamp"; yang_parent_name = "ipv4rib-server";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::~LastRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-down-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRibConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::Ipv6RibServer()
    :
    is_rib_connection_up{YType::boolean, "is-rib-connection-up"},
    last_rib_connection_down_age{YType::uint32, "last-rib-connection-down-age"},
    last_rib_connection_up_age{YType::uint32, "last-rib-connection-up-age"},
    rib_connection_down_count{YType::uint32, "rib-connection-down-count"},
    rib_connection_up_count{YType::uint32, "rib-connection-up-count"}
    	,
    first_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>())
	,first_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>())
	,last_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>())
	,last_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>())
{
    first_rib_connection_down_timestamp->parent = this;

    first_rib_connection_up_timestamp->parent = this;

    last_rib_connection_down_timestamp->parent = this;

    last_rib_connection_up_timestamp->parent = this;

    yang_name = "ipv6rib-server"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::~Ipv6RibServer()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_data() const
{
    return is_rib_connection_up.is_set
	|| last_rib_connection_down_age.is_set
	|| last_rib_connection_up_age.is_set
	|| rib_connection_down_count.is_set
	|| rib_connection_up_count.is_set
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_data())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_data())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_data())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_operation() const
{
    return is_set(operation)
	|| is_set(is_rib_connection_up.operation)
	|| is_set(last_rib_connection_down_age.operation)
	|| is_set(last_rib_connection_up_age.operation)
	|| is_set(rib_connection_down_count.operation)
	|| is_set(rib_connection_up_count.operation)
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_operation())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_operation())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_operation())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6rib-server";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibServer' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_rib_connection_up.is_set || is_set(is_rib_connection_up.operation)) leaf_name_data.push_back(is_rib_connection_up.get_name_leafdata());
    if (last_rib_connection_down_age.is_set || is_set(last_rib_connection_down_age.operation)) leaf_name_data.push_back(last_rib_connection_down_age.get_name_leafdata());
    if (last_rib_connection_up_age.is_set || is_set(last_rib_connection_up_age.operation)) leaf_name_data.push_back(last_rib_connection_up_age.get_name_leafdata());
    if (rib_connection_down_count.is_set || is_set(rib_connection_down_count.operation)) leaf_name_data.push_back(rib_connection_down_count.get_name_leafdata());
    if (rib_connection_up_count.is_set || is_set(rib_connection_up_count.operation)) leaf_name_data.push_back(rib_connection_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-rib-connection-down-timestamp")
    {
        if(first_rib_connection_down_timestamp == nullptr)
        {
            first_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>();
        }
        return first_rib_connection_down_timestamp;
    }

    if(child_yang_name == "first-rib-connection-up-timestamp")
    {
        if(first_rib_connection_up_timestamp == nullptr)
        {
            first_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>();
        }
        return first_rib_connection_up_timestamp;
    }

    if(child_yang_name == "last-rib-connection-down-timestamp")
    {
        if(last_rib_connection_down_timestamp == nullptr)
        {
            last_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>();
        }
        return last_rib_connection_down_timestamp;
    }

    if(child_yang_name == "last-rib-connection-up-timestamp")
    {
        if(last_rib_connection_up_timestamp == nullptr)
        {
            last_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>();
        }
        return last_rib_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_rib_connection_down_timestamp != nullptr)
    {
        children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
    }

    if(first_rib_connection_up_timestamp != nullptr)
    {
        children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
    }

    if(last_rib_connection_down_timestamp != nullptr)
    {
        children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
    }

    if(last_rib_connection_up_timestamp != nullptr)
    {
        children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up = value;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age = value;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age = value;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count = value;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::FirstRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::~FirstRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-up-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstRibConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::LastRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::~LastRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-up-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRibConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::FirstRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::~FirstRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-down-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstRibConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::LastRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::~LastRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-down-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRibConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::TeConnection()
    :
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    is_connection_up{YType::boolean, "is-connection-up"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"}
    	,
    first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>())
	,first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>())
{
    first_connection_down_timestamp->parent = this;

    first_connection_up_timestamp->parent = this;

    last_connection_down_timestamp->parent = this;

    last_connection_up_timestamp->parent = this;

    yang_name = "te-connection"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::~TeConnection()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_data() const
{
    return connection_down_count.is_set
	|| connection_up_count.is_set
	|| is_connection_up.is_set
	|| last_connection_down_age.is_set
	|| last_connection_up_age.is_set
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_data())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_data())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_data())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(is_connection_up.operation)
	|| is_set(last_connection_down_age.operation)
	|| is_set(last_connection_up_age.operation)
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_operation())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_operation())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_operation())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-connection";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeConnection' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.operation)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.operation)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.operation)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp == nullptr)
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>();
        }
        return first_connection_down_timestamp;
    }

    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp == nullptr)
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>();
        }
        return first_connection_up_timestamp;
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp == nullptr)
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>();
        }
        return last_connection_down_timestamp;
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp == nullptr)
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>();
        }
        return last_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_connection_down_timestamp != nullptr)
    {
        children["first-connection-down-timestamp"] = first_connection_down_timestamp;
    }

    if(first_connection_up_timestamp != nullptr)
    {
        children["first-connection-up-timestamp"] = first_connection_up_timestamp;
    }

    if(last_connection_down_timestamp != nullptr)
    {
        children["last-connection-down-timestamp"] = last_connection_down_timestamp;
    }

    if(last_connection_up_timestamp != nullptr)
    {
        children["last-connection-up-timestamp"] = last_connection_up_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age = value;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-connection-up-timestamp"; yang_parent_name = "te-connection";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-connection-up-timestamp"; yang_parent_name = "te-connection";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::FirstConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-connection-down-timestamp"; yang_parent_name = "te-connection";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::~FirstConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-down-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::LastConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-connection-down-timestamp"; yang_parent_name = "te-connection";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::~LastConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-down-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LsdConnection()
    :
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    is_connection_up{YType::boolean, "is-connection-up"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"}
    	,
    first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>())
	,first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>())
{
    first_connection_down_timestamp->parent = this;

    first_connection_up_timestamp->parent = this;

    last_connection_down_timestamp->parent = this;

    last_connection_up_timestamp->parent = this;

    yang_name = "lsd-connection"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::~LsdConnection()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_data() const
{
    return connection_down_count.is_set
	|| connection_up_count.is_set
	|| is_connection_up.is_set
	|| last_connection_down_age.is_set
	|| last_connection_up_age.is_set
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_data())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_data())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_data())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(is_connection_up.operation)
	|| is_set(last_connection_down_age.operation)
	|| is_set(last_connection_up_age.operation)
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_operation())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_operation())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_operation())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-connection";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdConnection' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.operation)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.operation)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.operation)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp == nullptr)
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>();
        }
        return first_connection_down_timestamp;
    }

    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp == nullptr)
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>();
        }
        return first_connection_up_timestamp;
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp == nullptr)
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>();
        }
        return last_connection_down_timestamp;
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp == nullptr)
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>();
        }
        return last_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_connection_down_timestamp != nullptr)
    {
        children["first-connection-down-timestamp"] = first_connection_down_timestamp;
    }

    if(first_connection_up_timestamp != nullptr)
    {
        children["first-connection-up-timestamp"] = first_connection_up_timestamp;
    }

    if(last_connection_down_timestamp != nullptr)
    {
        children["last-connection-down-timestamp"] = last_connection_down_timestamp;
    }

    if(last_connection_up_timestamp != nullptr)
    {
        children["last-connection-up-timestamp"] = last_connection_up_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age = value;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-connection-up-timestamp"; yang_parent_name = "lsd-connection";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-connection-up-timestamp"; yang_parent_name = "lsd-connection";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::FirstConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-connection-down-timestamp"; yang_parent_name = "lsd-connection";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::~FirstConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-down-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::LastConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-connection-down-timestamp"; yang_parent_name = "lsd-connection";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::~LastConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-down-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::DsNpl()
    :
    dir_service_conn_state{YType::enumeration, "dir-service-conn-state"},
    dsissu_status_flag{YType::uint32, "dsissu-status-flag"},
    issu_mgr_conn_state{YType::enumeration, "issu-mgr-conn-state"},
    issu_phase{YType::str, "issu-phase"},
    issu_type_ng{YType::boolean, "issu-type-ng"},
    issuha_option{YType::str, "issuha-option"},
    local_ds_handle{YType::uint64, "local-ds-handle"},
    service_name{YType::str, "service-name"}
{
    yang_name = "ds-npl"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::~DsNpl()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::has_data() const
{
    for (std::size_t index=0; index<npl_endpoint.size(); index++)
    {
        if(npl_endpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<npl_priority_statistic.size(); index++)
    {
        if(npl_priority_statistic[index]->has_data())
            return true;
    }
    return dir_service_conn_state.is_set
	|| dsissu_status_flag.is_set
	|| issu_mgr_conn_state.is_set
	|| issu_phase.is_set
	|| issu_type_ng.is_set
	|| issuha_option.is_set
	|| local_ds_handle.is_set
	|| service_name.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::has_operation() const
{
    for (std::size_t index=0; index<npl_endpoint.size(); index++)
    {
        if(npl_endpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<npl_priority_statistic.size(); index++)
    {
        if(npl_priority_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dir_service_conn_state.operation)
	|| is_set(dsissu_status_flag.operation)
	|| is_set(issu_mgr_conn_state.operation)
	|| is_set(issu_phase.operation)
	|| is_set(issu_type_ng.operation)
	|| is_set(issuha_option.operation)
	|| is_set(local_ds_handle.operation)
	|| is_set(service_name.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds-npl";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DsNpl' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir_service_conn_state.is_set || is_set(dir_service_conn_state.operation)) leaf_name_data.push_back(dir_service_conn_state.get_name_leafdata());
    if (dsissu_status_flag.is_set || is_set(dsissu_status_flag.operation)) leaf_name_data.push_back(dsissu_status_flag.get_name_leafdata());
    if (issu_mgr_conn_state.is_set || is_set(issu_mgr_conn_state.operation)) leaf_name_data.push_back(issu_mgr_conn_state.get_name_leafdata());
    if (issu_phase.is_set || is_set(issu_phase.operation)) leaf_name_data.push_back(issu_phase.get_name_leafdata());
    if (issu_type_ng.is_set || is_set(issu_type_ng.operation)) leaf_name_data.push_back(issu_type_ng.get_name_leafdata());
    if (issuha_option.is_set || is_set(issuha_option.operation)) leaf_name_data.push_back(issuha_option.get_name_leafdata());
    if (local_ds_handle.is_set || is_set(local_ds_handle.operation)) leaf_name_data.push_back(local_ds_handle.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npl-endpoint")
    {
        for(auto const & c : npl_endpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint>();
        c->parent = this;
        npl_endpoint.push_back(c);
        return c;
    }

    if(child_yang_name == "npl-priority-statistic")
    {
        for(auto const & c : npl_priority_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic>();
        c->parent = this;
        npl_priority_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : npl_endpoint)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : npl_priority_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dir-service-conn-state")
    {
        dir_service_conn_state = value;
    }
    if(value_path == "dsissu-status-flag")
    {
        dsissu_status_flag = value;
    }
    if(value_path == "issu-mgr-conn-state")
    {
        issu_mgr_conn_state = value;
    }
    if(value_path == "issu-phase")
    {
        issu_phase = value;
    }
    if(value_path == "issu-type-ng")
    {
        issu_type_ng = value;
    }
    if(value_path == "issuha-option")
    {
        issuha_option = value;
    }
    if(value_path == "local-ds-handle")
    {
        local_ds_handle = value;
    }
    if(value_path == "service-name")
    {
        service_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NplPriorityStatistic()
{
    yang_name = "npl-priority-statistic"; yang_parent_name = "ds-npl";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::~NplPriorityStatistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::has_data() const
{
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::has_operation() const
{
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npl-priority-statistic";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NplPriorityStatistic' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "num-recv")
    {
        for(auto const & c : num_recv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv>();
        c->parent = this;
        num_recv.push_back(c);
        return c;
    }

    if(child_yang_name == "num-recv-drop")
    {
        for(auto const & c : num_recv_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop>();
        c->parent = this;
        num_recv_drop.push_back(c);
        return c;
    }

    if(child_yang_name == "num-sent")
    {
        for(auto const & c : num_sent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent>();
        c->parent = this;
        num_sent.push_back(c);
        return c;
    }

    if(child_yang_name == "num-sent-drop")
    {
        for(auto const & c : num_sent_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : num_recv)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : num_recv_drop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : num_sent)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : num_sent_drop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::NumSent()
    :
    entry{YType::uint64, "entry"}
{
    yang_name = "num-sent"; yang_parent_name = "npl-priority-statistic";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::~NumSent()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumSent' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::NumRecv()
    :
    entry{YType::uint64, "entry"}
{
    yang_name = "num-recv"; yang_parent_name = "npl-priority-statistic";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::~NumRecv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumRecv' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NumSentDrop()
{
    yang_name = "num-sent-drop"; yang_parent_name = "npl-priority-statistic";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::~NumSentDrop()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumSentDrop' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pl-send-drop-array")
    {
        for(auto const & c : nsr_pl_send_drop_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray>();
        c->parent = this;
        nsr_pl_send_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pl_send_drop_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::set_value(const std::string & value_path, std::string value)
{
}


}
}

