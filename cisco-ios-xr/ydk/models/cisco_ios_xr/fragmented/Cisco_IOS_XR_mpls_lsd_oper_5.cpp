
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId()
    :
    rewrite_id(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_>())
{
    rewrite_id->parent = this;

    yang_name = "rewrite-id"; yang_parent_name = "rewrite-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::~RewriteId()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::has_data() const
{
    return (rewrite_id !=  nullptr && rewrite_id->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::has_operation() const
{
    return is_set(yfilter)
	|| (rewrite_id !=  nullptr && rewrite_id->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-id")
    {
        if(rewrite_id == nullptr)
        {
            rewrite_id = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_>();
        }
        return rewrite_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rewrite_id != nullptr)
    {
        children["rewrite-id"] = rewrite_id;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::RewriteId_()
    :
    rewrite_id_type{YType::enumeration, "rewrite-id-type"}
    	,
    label_context(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext>())
	,local_label_rewrite(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite>())
{
    label_context->parent = this;
    local_label_rewrite->parent = this;

    yang_name = "rewrite-id"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::~RewriteId_()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::has_data() const
{
    return rewrite_id_type.is_set
	|| (label_context !=  nullptr && label_context->has_data())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rewrite_id_type.yfilter)
	|| (label_context !=  nullptr && label_context->has_operation())
	|| (local_label_rewrite !=  nullptr && local_label_rewrite->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rewrite_id_type.is_set || is_set(rewrite_id_type.yfilter)) leaf_name_data.push_back(rewrite_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-context")
    {
        if(label_context == nullptr)
        {
            label_context = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext>();
        }
        return label_context;
    }

    if(child_yang_name == "local-label-rewrite")
    {
        if(local_label_rewrite == nullptr)
        {
            local_label_rewrite = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite>();
        }
        return local_label_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_context != nullptr)
    {
        children["label-context"] = label_context;
    }

    if(local_label_rewrite != nullptr)
    {
        children["local-label-rewrite"] = local_label_rewrite;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rewrite-id-type")
    {
        rewrite_id_type = value;
        rewrite_id_type.value_namespace = name_space;
        rewrite_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rewrite-id-type")
    {
        rewrite_id_type.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-context" || name == "local-label-rewrite" || name == "rewrite-id-type")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelContext()
    :
    label_context_type{YType::enumeration, "label-context-type"}
    	,
    cev4l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData>())
	,cev6l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData>())
	,evpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData>())
	,generic_routing_encapsulation(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>())
	,ip_sub_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData>())
	,ipv4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data>())
	,ipv4blb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData>())
	,ipv4l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData>())
	,ipv6_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data>())
	,ipv6_generic_routing_encapsulation(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>())
	,ipv6blb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData>())
	,ipv6l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData>())
	,label_block_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData>())
	,label_block_srgb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>())
	,label_block_srlb_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData>())
	,mld_pv4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data>())
	,next_hop_set_l3vpn(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn>())
	,pi_mi_pmsi_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>())
	,pi_ms_pmsi_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>())
	,pseudowire_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData>())
	,pseudowire_head_end_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>())
	,sr_adj_segment_ipv4(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>())
	,sr_adj_segment_ipv6(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>())
	,sr_prefix_segment(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>())
	,te_binding(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding>())
	,tev4_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data>())
	,tev4p2mp_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData>())
	,tp_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData>())
	,vrf_l3vpn_data(std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData>())
{
    cev4l3vpn_data->parent = this;
    cev6l3vpn_data->parent = this;
    evpn_data->parent = this;
    generic_routing_encapsulation->parent = this;
    ip_sub_data->parent = this;
    ipv4_data->parent = this;
    ipv4blb_data->parent = this;
    ipv4l3vpn_data->parent = this;
    ipv6_data->parent = this;
    ipv6_generic_routing_encapsulation->parent = this;
    ipv6blb_data->parent = this;
    ipv6l3vpn_data->parent = this;
    label_block_data->parent = this;
    label_block_srgb_data->parent = this;
    label_block_srlb_data->parent = this;
    mld_pv4_data->parent = this;
    next_hop_set_l3vpn->parent = this;
    pi_mi_pmsi_data->parent = this;
    pi_ms_pmsi_data->parent = this;
    pseudowire_data->parent = this;
    pseudowire_head_end_data->parent = this;
    sr_adj_segment_ipv4->parent = this;
    sr_adj_segment_ipv6->parent = this;
    sr_prefix_segment->parent = this;
    te_binding->parent = this;
    tev4_data->parent = this;
    tev4p2mp_data->parent = this;
    tp_data->parent = this;
    vrf_l3vpn_data->parent = this;

    yang_name = "label-context"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::~LabelContext()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::has_data() const
{
    return label_context_type.is_set
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_data())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_data())
	|| (evpn_data !=  nullptr && evpn_data->has_data())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_data())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_data())
	|| (ipv4_data !=  nullptr && ipv4_data->has_data())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_data())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_data())
	|| (ipv6_data !=  nullptr && ipv6_data->has_data())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_data())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_data())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_data())
	|| (label_block_data !=  nullptr && label_block_data->has_data())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_data())
	|| (label_block_srlb_data !=  nullptr && label_block_srlb_data->has_data())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_data())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_data())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_data())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_data())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_data())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_data())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_data())
	|| (te_binding !=  nullptr && te_binding->has_data())
	|| (tev4_data !=  nullptr && tev4_data->has_data())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_data())
	|| (tp_data !=  nullptr && tp_data->has_data())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_data());
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_context_type.yfilter)
	|| (cev4l3vpn_data !=  nullptr && cev4l3vpn_data->has_operation())
	|| (cev6l3vpn_data !=  nullptr && cev6l3vpn_data->has_operation())
	|| (evpn_data !=  nullptr && evpn_data->has_operation())
	|| (generic_routing_encapsulation !=  nullptr && generic_routing_encapsulation->has_operation())
	|| (ip_sub_data !=  nullptr && ip_sub_data->has_operation())
	|| (ipv4_data !=  nullptr && ipv4_data->has_operation())
	|| (ipv4blb_data !=  nullptr && ipv4blb_data->has_operation())
	|| (ipv4l3vpn_data !=  nullptr && ipv4l3vpn_data->has_operation())
	|| (ipv6_data !=  nullptr && ipv6_data->has_operation())
	|| (ipv6_generic_routing_encapsulation !=  nullptr && ipv6_generic_routing_encapsulation->has_operation())
	|| (ipv6blb_data !=  nullptr && ipv6blb_data->has_operation())
	|| (ipv6l3vpn_data !=  nullptr && ipv6l3vpn_data->has_operation())
	|| (label_block_data !=  nullptr && label_block_data->has_operation())
	|| (label_block_srgb_data !=  nullptr && label_block_srgb_data->has_operation())
	|| (label_block_srlb_data !=  nullptr && label_block_srlb_data->has_operation())
	|| (mld_pv4_data !=  nullptr && mld_pv4_data->has_operation())
	|| (next_hop_set_l3vpn !=  nullptr && next_hop_set_l3vpn->has_operation())
	|| (pi_mi_pmsi_data !=  nullptr && pi_mi_pmsi_data->has_operation())
	|| (pi_ms_pmsi_data !=  nullptr && pi_ms_pmsi_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation())
	|| (pseudowire_head_end_data !=  nullptr && pseudowire_head_end_data->has_operation())
	|| (sr_adj_segment_ipv4 !=  nullptr && sr_adj_segment_ipv4->has_operation())
	|| (sr_adj_segment_ipv6 !=  nullptr && sr_adj_segment_ipv6->has_operation())
	|| (sr_prefix_segment !=  nullptr && sr_prefix_segment->has_operation())
	|| (te_binding !=  nullptr && te_binding->has_operation())
	|| (tev4_data !=  nullptr && tev4_data->has_operation())
	|| (tev4p2mp_data !=  nullptr && tev4p2mp_data->has_operation())
	|| (tp_data !=  nullptr && tp_data->has_operation())
	|| (vrf_l3vpn_data !=  nullptr && vrf_l3vpn_data->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_context_type.is_set || is_set(label_context_type.yfilter)) leaf_name_data.push_back(label_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cev4l3vpn-data")
    {
        if(cev4l3vpn_data == nullptr)
        {
            cev4l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData>();
        }
        return cev4l3vpn_data;
    }

    if(child_yang_name == "cev6l3vpn-data")
    {
        if(cev6l3vpn_data == nullptr)
        {
            cev6l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData>();
        }
        return cev6l3vpn_data;
    }

    if(child_yang_name == "evpn-data")
    {
        if(evpn_data == nullptr)
        {
            evpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData>();
        }
        return evpn_data;
    }

    if(child_yang_name == "generic-routing-encapsulation")
    {
        if(generic_routing_encapsulation == nullptr)
        {
            generic_routing_encapsulation = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation>();
        }
        return generic_routing_encapsulation;
    }

    if(child_yang_name == "ip-sub-data")
    {
        if(ip_sub_data == nullptr)
        {
            ip_sub_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData>();
        }
        return ip_sub_data;
    }

    if(child_yang_name == "ipv4-data")
    {
        if(ipv4_data == nullptr)
        {
            ipv4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data>();
        }
        return ipv4_data;
    }

    if(child_yang_name == "ipv4blb-data")
    {
        if(ipv4blb_data == nullptr)
        {
            ipv4blb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData>();
        }
        return ipv4blb_data;
    }

    if(child_yang_name == "ipv4l3vpn-data")
    {
        if(ipv4l3vpn_data == nullptr)
        {
            ipv4l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData>();
        }
        return ipv4l3vpn_data;
    }

    if(child_yang_name == "ipv6-data")
    {
        if(ipv6_data == nullptr)
        {
            ipv6_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data>();
        }
        return ipv6_data;
    }

    if(child_yang_name == "ipv6-generic-routing-encapsulation")
    {
        if(ipv6_generic_routing_encapsulation == nullptr)
        {
            ipv6_generic_routing_encapsulation = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation>();
        }
        return ipv6_generic_routing_encapsulation;
    }

    if(child_yang_name == "ipv6blb-data")
    {
        if(ipv6blb_data == nullptr)
        {
            ipv6blb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData>();
        }
        return ipv6blb_data;
    }

    if(child_yang_name == "ipv6l3vpn-data")
    {
        if(ipv6l3vpn_data == nullptr)
        {
            ipv6l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData>();
        }
        return ipv6l3vpn_data;
    }

    if(child_yang_name == "label-block-data")
    {
        if(label_block_data == nullptr)
        {
            label_block_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData>();
        }
        return label_block_data;
    }

    if(child_yang_name == "label-block-srgb-data")
    {
        if(label_block_srgb_data == nullptr)
        {
            label_block_srgb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData>();
        }
        return label_block_srgb_data;
    }

    if(child_yang_name == "label-block-srlb-data")
    {
        if(label_block_srlb_data == nullptr)
        {
            label_block_srlb_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData>();
        }
        return label_block_srlb_data;
    }

    if(child_yang_name == "mld-pv4-data")
    {
        if(mld_pv4_data == nullptr)
        {
            mld_pv4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data>();
        }
        return mld_pv4_data;
    }

    if(child_yang_name == "next-hop-set-l3vpn")
    {
        if(next_hop_set_l3vpn == nullptr)
        {
            next_hop_set_l3vpn = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn>();
        }
        return next_hop_set_l3vpn;
    }

    if(child_yang_name == "pi-mi-pmsi-data")
    {
        if(pi_mi_pmsi_data == nullptr)
        {
            pi_mi_pmsi_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData>();
        }
        return pi_mi_pmsi_data;
    }

    if(child_yang_name == "pi-ms-pmsi-data")
    {
        if(pi_ms_pmsi_data == nullptr)
        {
            pi_ms_pmsi_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData>();
        }
        return pi_ms_pmsi_data;
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data == nullptr)
        {
            pseudowire_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData>();
        }
        return pseudowire_data;
    }

    if(child_yang_name == "pseudowire-head-end-data")
    {
        if(pseudowire_head_end_data == nullptr)
        {
            pseudowire_head_end_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData>();
        }
        return pseudowire_head_end_data;
    }

    if(child_yang_name == "sr-adj-segment-ipv4")
    {
        if(sr_adj_segment_ipv4 == nullptr)
        {
            sr_adj_segment_ipv4 = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4>();
        }
        return sr_adj_segment_ipv4;
    }

    if(child_yang_name == "sr-adj-segment-ipv6")
    {
        if(sr_adj_segment_ipv6 == nullptr)
        {
            sr_adj_segment_ipv6 = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6>();
        }
        return sr_adj_segment_ipv6;
    }

    if(child_yang_name == "sr-prefix-segment")
    {
        if(sr_prefix_segment == nullptr)
        {
            sr_prefix_segment = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment>();
        }
        return sr_prefix_segment;
    }

    if(child_yang_name == "te-binding")
    {
        if(te_binding == nullptr)
        {
            te_binding = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding>();
        }
        return te_binding;
    }

    if(child_yang_name == "tev4-data")
    {
        if(tev4_data == nullptr)
        {
            tev4_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data>();
        }
        return tev4_data;
    }

    if(child_yang_name == "tev4p2mp-data")
    {
        if(tev4p2mp_data == nullptr)
        {
            tev4p2mp_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData>();
        }
        return tev4p2mp_data;
    }

    if(child_yang_name == "tp-data")
    {
        if(tp_data == nullptr)
        {
            tp_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData>();
        }
        return tp_data;
    }

    if(child_yang_name == "vrf-l3vpn-data")
    {
        if(vrf_l3vpn_data == nullptr)
        {
            vrf_l3vpn_data = std::make_shared<MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData>();
        }
        return vrf_l3vpn_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cev4l3vpn_data != nullptr)
    {
        children["cev4l3vpn-data"] = cev4l3vpn_data;
    }

    if(cev6l3vpn_data != nullptr)
    {
        children["cev6l3vpn-data"] = cev6l3vpn_data;
    }

    if(evpn_data != nullptr)
    {
        children["evpn-data"] = evpn_data;
    }

    if(generic_routing_encapsulation != nullptr)
    {
        children["generic-routing-encapsulation"] = generic_routing_encapsulation;
    }

    if(ip_sub_data != nullptr)
    {
        children["ip-sub-data"] = ip_sub_data;
    }

    if(ipv4_data != nullptr)
    {
        children["ipv4-data"] = ipv4_data;
    }

    if(ipv4blb_data != nullptr)
    {
        children["ipv4blb-data"] = ipv4blb_data;
    }

    if(ipv4l3vpn_data != nullptr)
    {
        children["ipv4l3vpn-data"] = ipv4l3vpn_data;
    }

    if(ipv6_data != nullptr)
    {
        children["ipv6-data"] = ipv6_data;
    }

    if(ipv6_generic_routing_encapsulation != nullptr)
    {
        children["ipv6-generic-routing-encapsulation"] = ipv6_generic_routing_encapsulation;
    }

    if(ipv6blb_data != nullptr)
    {
        children["ipv6blb-data"] = ipv6blb_data;
    }

    if(ipv6l3vpn_data != nullptr)
    {
        children["ipv6l3vpn-data"] = ipv6l3vpn_data;
    }

    if(label_block_data != nullptr)
    {
        children["label-block-data"] = label_block_data;
    }

    if(label_block_srgb_data != nullptr)
    {
        children["label-block-srgb-data"] = label_block_srgb_data;
    }

    if(label_block_srlb_data != nullptr)
    {
        children["label-block-srlb-data"] = label_block_srlb_data;
    }

    if(mld_pv4_data != nullptr)
    {
        children["mld-pv4-data"] = mld_pv4_data;
    }

    if(next_hop_set_l3vpn != nullptr)
    {
        children["next-hop-set-l3vpn"] = next_hop_set_l3vpn;
    }

    if(pi_mi_pmsi_data != nullptr)
    {
        children["pi-mi-pmsi-data"] = pi_mi_pmsi_data;
    }

    if(pi_ms_pmsi_data != nullptr)
    {
        children["pi-ms-pmsi-data"] = pi_ms_pmsi_data;
    }

    if(pseudowire_data != nullptr)
    {
        children["pseudowire-data"] = pseudowire_data;
    }

    if(pseudowire_head_end_data != nullptr)
    {
        children["pseudowire-head-end-data"] = pseudowire_head_end_data;
    }

    if(sr_adj_segment_ipv4 != nullptr)
    {
        children["sr-adj-segment-ipv4"] = sr_adj_segment_ipv4;
    }

    if(sr_adj_segment_ipv6 != nullptr)
    {
        children["sr-adj-segment-ipv6"] = sr_adj_segment_ipv6;
    }

    if(sr_prefix_segment != nullptr)
    {
        children["sr-prefix-segment"] = sr_prefix_segment;
    }

    if(te_binding != nullptr)
    {
        children["te-binding"] = te_binding;
    }

    if(tev4_data != nullptr)
    {
        children["tev4-data"] = tev4_data;
    }

    if(tev4p2mp_data != nullptr)
    {
        children["tev4p2mp-data"] = tev4p2mp_data;
    }

    if(tp_data != nullptr)
    {
        children["tp-data"] = tp_data;
    }

    if(vrf_l3vpn_data != nullptr)
    {
        children["vrf-l3vpn-data"] = vrf_l3vpn_data;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-context-type")
    {
        label_context_type = value;
        label_context_type.value_namespace = name_space;
        label_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-context-type")
    {
        label_context_type.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cev4l3vpn-data" || name == "cev6l3vpn-data" || name == "evpn-data" || name == "generic-routing-encapsulation" || name == "ip-sub-data" || name == "ipv4-data" || name == "ipv4blb-data" || name == "ipv4l3vpn-data" || name == "ipv6-data" || name == "ipv6-generic-routing-encapsulation" || name == "ipv6blb-data" || name == "ipv6l3vpn-data" || name == "label-block-data" || name == "label-block-srgb-data" || name == "label-block-srlb-data" || name == "mld-pv4-data" || name == "next-hop-set-l3vpn" || name == "pi-mi-pmsi-data" || name == "pi-ms-pmsi-data" || name == "pseudowire-data" || name == "pseudowire-head-end-data" || name == "sr-adj-segment-ipv4" || name == "sr-adj-segment-ipv6" || name == "sr-prefix-segment" || name == "te-binding" || name == "tev4-data" || name == "tev4p2mp-data" || name == "tp-data" || name == "vrf-l3vpn-data" || name == "label-context-type")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::Cev4L3VpnData()
    :
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "cev4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::~Cev4L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::has_data() const
{
    return ipv4_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-next-hop" || name == "security-id" || name == "table-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::Cev6L3VpnData()
    :
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "cev6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::~Cev6L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::has_data() const
{
    return ipv6_next_hop.is_set
	|| security_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cev6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
        ipv6_next_hop.value_namespace = name_space;
        ipv6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-next-hop" || name == "security-id" || name == "table-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::EvpnData()
    :
    ethernet_segment{YType::str, "ethernet-segment"},
    evpn_id{YType::uint32, "evpn-id"},
    evpn_tag{YType::uint32, "evpn-tag"}
{

    yang_name = "evpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::~EvpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::has_data() const
{
    return ethernet_segment.is_set
	|| evpn_id.is_set
	|| evpn_tag.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_segment.yfilter)
	|| ydk::is_set(evpn_id.yfilter)
	|| ydk::is_set(evpn_tag.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_segment.is_set || is_set(ethernet_segment.yfilter)) leaf_name_data.push_back(ethernet_segment.get_name_leafdata());
    if (evpn_id.is_set || is_set(evpn_id.yfilter)) leaf_name_data.push_back(evpn_id.get_name_leafdata());
    if (evpn_tag.is_set || is_set(evpn_tag.yfilter)) leaf_name_data.push_back(evpn_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-segment")
    {
        ethernet_segment = value;
        ethernet_segment.value_namespace = name_space;
        ethernet_segment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-id")
    {
        evpn_id = value;
        evpn_id.value_namespace = name_space;
        evpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-tag")
    {
        evpn_tag = value;
        evpn_tag.value_namespace = name_space;
        evpn_tag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-segment")
    {
        ethernet_segment.yfilter = yfilter;
    }
    if(value_path == "evpn-id")
    {
        evpn_id.yfilter = yfilter;
    }
    if(value_path == "evpn-tag")
    {
        evpn_tag.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment" || name == "evpn-id" || name == "evpn-tag")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::GenericRoutingEncapsulation()
    :
    gre_interface{YType::str, "gre-interface"}
{

    yang_name = "generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::~GenericRoutingEncapsulation()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_data() const
{
    return gre_interface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre_interface.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface.is_set || is_set(gre_interface.yfilter)) leaf_name_data.push_back(gre_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre-interface")
    {
        gre_interface = value;
        gre_interface.value_namespace = name_space;
        gre_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre-interface")
    {
        gre_interface.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-interface")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::IpSubData()
    :
    parent_interface{YType::str, "parent-interface"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "ip-sub-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::~IpSubData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::has_data() const
{
    return parent_interface.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-interface" || name == "table-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::Ipv4BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::~Ipv4BlbData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "blb-intf")
    {
        blb_intf = value;
        blb_intf.value_namespace = name_space;
        blb_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "blb-intf")
    {
        blb_intf.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::Ipv4Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::~Ipv4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "security-id" || name == "table-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::Ipv4L3VpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv4l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::~Ipv4L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::Ipv6BlbData()
    :
    blb_intf{YType::str, "blb-intf"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6blb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::~Ipv6BlbData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::has_data() const
{
    return blb_intf.is_set
	|| prefix.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blb_intf.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6blb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blb_intf.is_set || is_set(blb_intf.yfilter)) leaf_name_data.push_back(blb_intf.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "blb-intf")
    {
        blb_intf = value;
        blb_intf.value_namespace = name_space;
        blb_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "blb-intf")
    {
        blb_intf.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blb-intf" || name == "prefix")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::Ipv6Data()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::~Ipv6Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| security_id.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "security-id" || name == "table-id" || name == "vrf-name")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::Ipv6GenericRoutingEncapsulation()
    :
    greipv6_interface{YType::str, "greipv6-interface"}
{

    yang_name = "ipv6-generic-routing-encapsulation"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::~Ipv6GenericRoutingEncapsulation()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_data() const
{
    return greipv6_interface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(greipv6_interface.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-generic-routing-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greipv6_interface.is_set || is_set(greipv6_interface.yfilter)) leaf_name_data.push_back(greipv6_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface = value;
        greipv6_interface.value_namespace = name_space;
        greipv6_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "greipv6-interface")
    {
        greipv6_interface.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "greipv6-interface")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::Ipv6L3VpnData()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_distinguisher{YType::uint64, "route-distinguisher"}
{

    yang_name = "ipv6l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::~Ipv6L3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| route_distinguisher.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "route-distinguisher")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::LabelBlockData()
    :
    edge_id{YType::uint16, "edge-id"},
    offset{YType::uint32, "offset"},
    service{YType::uint8, "service"},
    size{YType::uint32, "size"},
    vpn_id{YType::uint16, "vpn-id"}
{

    yang_name = "label-block-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::~LabelBlockData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_data() const
{
    return edge_id.is_set
	|| offset.is_set
	|| service.is_set
	|| size.is_set
	|| vpn_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
        edge_id.value_namespace = name_space;
        edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge-id" || name == "offset" || name == "service" || name == "size" || name == "vpn-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::LabelBlockSrgbData()
    :
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"},
    start_label{YType::uint32, "start-label"}
{

    yang_name = "label-block-srgb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::~LabelBlockSrgbData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_data() const
{
    return offset.is_set
	|| size.is_set
	|| start_label.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(start_label.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srgb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-label")
    {
        start_label = value;
        start_label.value_namespace = name_space;
        start_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "start-label")
    {
        start_label.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "size" || name == "start-label")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::LabelBlockSrlbData()
    :
    offset{YType::uint32, "offset"},
    size{YType::uint32, "size"},
    start_label{YType::uint32, "start-label"}
{

    yang_name = "label-block-srlb-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::~LabelBlockSrlbData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_data() const
{
    return offset.is_set
	|| size.is_set
	|| start_label.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(start_label.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block-srlb-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start_label.is_set || is_set(start_label.yfilter)) leaf_name_data.push_back(start_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-label")
    {
        start_label = value;
        start_label.value_namespace = name_space;
        start_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "start-label")
    {
        start_label.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "size" || name == "start-label")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::MldPv4Data()
    :
    lsm_id{YType::uint32, "lsm-id"},
    peer_label_space_id{YType::uint16, "peer-label-space-id"},
    peer_lsrid{YType::str, "peer-lsrid"},
    table_id{YType::uint32, "table-id"},
    type{YType::uint16, "type"}
{

    yang_name = "mld-pv4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::~MldPv4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_data() const
{
    return lsm_id.is_set
	|| peer_label_space_id.is_set
	|| peer_lsrid.is_set
	|| table_id.is_set
	|| type.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(peer_label_space_id.yfilter)
	|| ydk::is_set(peer_lsrid.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-pv4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (peer_label_space_id.is_set || is_set(peer_label_space_id.yfilter)) leaf_name_data.push_back(peer_label_space_id.get_name_leafdata());
    if (peer_lsrid.is_set || is_set(peer_lsrid.yfilter)) leaf_name_data.push_back(peer_lsrid.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-label-space-id")
    {
        peer_label_space_id = value;
        peer_label_space_id.value_namespace = name_space;
        peer_label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-lsrid")
    {
        peer_lsrid = value;
        peer_lsrid.value_namespace = name_space;
        peer_lsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "peer-label-space-id")
    {
        peer_label_space_id.yfilter = yfilter;
    }
    if(value_path == "peer-lsrid")
    {
        peer_lsrid.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsm-id" || name == "peer-label-space-id" || name == "peer-lsrid" || name == "table-id" || name == "type")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::NextHopSetL3Vpn()
    :
    next_hop_set_id{YType::uint32, "next-hop-set-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "next-hop-set-l3vpn"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::~NextHopSetL3Vpn()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::has_data() const
{
    return next_hop_set_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-set-l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-set-id" || name == "table-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::PiMiPmsiData()
    :
    head{YType::int32, "head"},
    v6{YType::int32, "v6"},
    vrf_id{YType::uint32, "vrf-id"}
{

    yang_name = "pi-mi-pmsi-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::~PiMiPmsiData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_data() const
{
    return head.is_set
	|| v6.is_set
	|| vrf_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(v6.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mi-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (v6.is_set || is_set(v6.yfilter)) leaf_name_data.push_back(v6.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "head")
    {
        head = value;
        head.value_namespace = name_space;
        head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6")
    {
        v6 = value;
        v6.value_namespace = name_space;
        v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "v6")
    {
        v6.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "v6" || name == "vrf-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::PiMsPmsiData()
    :
    head{YType::int32, "head"},
    hli{YType::uint32, "hli"},
    seg{YType::int32, "seg"},
    source{YType::str, "source"},
    v6{YType::int32, "v6"},
    vrf_id{YType::uint32, "vrf-id"}
{

    yang_name = "pi-ms-pmsi-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::~PiMsPmsiData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_data() const
{
    return head.is_set
	|| hli.is_set
	|| seg.is_set
	|| source.is_set
	|| v6.is_set
	|| vrf_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(hli.yfilter)
	|| ydk::is_set(seg.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(v6.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-ms-pmsi-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (hli.is_set || is_set(hli.yfilter)) leaf_name_data.push_back(hli.get_name_leafdata());
    if (seg.is_set || is_set(seg.yfilter)) leaf_name_data.push_back(seg.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (v6.is_set || is_set(v6.yfilter)) leaf_name_data.push_back(v6.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "head")
    {
        head = value;
        head.value_namespace = name_space;
        head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hli")
    {
        hli = value;
        hli.value_namespace = name_space;
        hli.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg")
    {
        seg = value;
        seg.value_namespace = name_space;
        seg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6")
    {
        v6 = value;
        v6.value_namespace = name_space;
        v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "hli")
    {
        hli.yfilter = yfilter;
    }
    if(value_path == "seg")
    {
        seg.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "v6")
    {
        v6.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "hli" || name == "seg" || name == "source" || name == "v6" || name == "vrf-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::PseudowireData()
    :
    prefix{YType::str, "prefix"},
    pseudowire_id{YType::uint64, "pseudowire-id"},
    remote_l2_router_id{YType::uint32, "remote-l2-router-id"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "pseudowire-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::~PseudowireData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::has_data() const
{
    return prefix.is_set
	|| pseudowire_id.is_set
	|| remote_l2_router_id.is_set
	|| subinterface.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(remote_l2_router_id.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.yfilter)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id = value;
        remote_l2_router_id.value_namespace = name_space;
        remote_l2_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "pseudowire-id" || name == "remote-l2-router-id" || name == "subinterface")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::PseudowireHeadEndData()
    :
    pwhe_intf{YType::str, "pwhe-intf"}
{

    yang_name = "pseudowire-head-end-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::~PseudowireHeadEndData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_data() const
{
    return pwhe_intf.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwhe_intf.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwhe_intf.is_set || is_set(pwhe_intf.yfilter)) leaf_name_data.push_back(pwhe_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf = value;
        pwhe_intf.value_namespace = name_space;
        pwhe_intf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwhe-intf")
    {
        pwhe_intf.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwhe-intf")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::SrAdjSegmentIpv4()
    :
    addr{YType::str, "addr"},
    index_{YType::uint32, "index"},
    intf{YType::str, "intf"},
    type{YType::uint32, "type"}
{

    yang_name = "sr-adj-segment-ipv4"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::~SrAdjSegmentIpv4()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_data() const
{
    return addr.is_set
	|| index_.is_set
	|| intf.is_set
	|| type.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "index" || name == "intf" || name == "type")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::SrAdjSegmentIpv6()
    :
    addr{YType::str, "addr"},
    index_{YType::uint32, "index"},
    intf{YType::str, "intf"},
    type{YType::uint32, "type"}
{

    yang_name = "sr-adj-segment-ipv6"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::~SrAdjSegmentIpv6()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_data() const
{
    return addr.is_set
	|| index_.is_set
	|| intf.is_set
	|| type.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-adj-segment-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "index" || name == "intf" || name == "type")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::SrPrefixSegment()
    :
    segment_id{YType::uint32, "segment-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "sr-prefix-segment"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::~SrPrefixSegment()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_data() const
{
    return segment_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
        segment_id.value_namespace = name_space;
        segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-id")
    {
        segment_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "table-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::TeBinding()
    :
    te_identifier{YType::uint32, "te-identifier"},
    te_type{YType::enumeration, "te-type"}
{

    yang_name = "te-binding"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::~TeBinding()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::has_data() const
{
    return te_identifier.is_set
	|| te_type.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_identifier.yfilter)
	|| ydk::is_set(te_type.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_identifier.is_set || is_set(te_identifier.yfilter)) leaf_name_data.push_back(te_identifier.get_name_leafdata());
    if (te_type.is_set || is_set(te_type.yfilter)) leaf_name_data.push_back(te_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-identifier")
    {
        te_identifier = value;
        te_identifier.value_namespace = name_space;
        te_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-type")
    {
        te_type = value;
        te_type.value_namespace = name_space;
        te_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-identifier")
    {
        te_identifier.yfilter = yfilter;
    }
    if(value_path == "te-type")
    {
        te_type.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-identifier" || name == "te-type")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::Tev4Data()
    :
    is_srte{YType::int32, "is-srte"},
    table_id{YType::uint32, "table-id"},
    tunnel_dest{YType::str, "tunnel-dest"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    tunnel_source{YType::str, "tunnel-source"}
{

    yang_name = "tev4-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::~Tev4Data()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::has_data() const
{
    return is_srte.is_set
	|| table_id.is_set
	|| tunnel_dest.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_srte.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(tunnel_dest.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_extension.yfilter)
	|| ydk::is_set(tunnel_lsp_id.yfilter)
	|| ydk::is_set(tunnel_source.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_srte.is_set || is_set(is_srte.yfilter)) leaf_name_data.push_back(is_srte.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_dest.is_set || is_set(tunnel_dest.yfilter)) leaf_name_data.push_back(tunnel_dest.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.yfilter)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.yfilter)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.yfilter)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-srte")
    {
        is_srte = value;
        is_srte.value_namespace = name_space;
        is_srte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-dest")
    {
        tunnel_dest = value;
        tunnel_dest.value_namespace = name_space;
        tunnel_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-extension")
    {
        tunnel_id_extension = value;
        tunnel_id_extension.value_namespace = name_space;
        tunnel_id_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id = value;
        tunnel_lsp_id.value_namespace = name_space;
        tunnel_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
        tunnel_source.value_namespace = name_space;
        tunnel_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-srte")
    {
        is_srte.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-dest")
    {
        tunnel_dest.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-extension")
    {
        tunnel_id_extension.yfilter = yfilter;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-srte" || name == "table-id" || name == "tunnel-dest" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "tunnel-source")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::Tev4P2MpData()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    previous_hop{YType::str, "previous-hop"},
    table_id{YType::uint32, "table-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_extension{YType::uint32, "tunnel-id-extension"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    tunnel_source{YType::str, "tunnel-source"}
{

    yang_name = "tev4p2mp-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::~Tev4P2MpData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_data() const
{
    return p2mp_id.is_set
	|| previous_hop.is_set
	|| table_id.is_set
	|| tunnel_id.is_set
	|| tunnel_id_extension.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_source.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(previous_hop.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_extension.yfilter)
	|| ydk::is_set(tunnel_lsp_id.yfilter)
	|| ydk::is_set(tunnel_source.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tev4p2mp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (previous_hop.is_set || is_set(previous_hop.yfilter)) leaf_name_data.push_back(previous_hop.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_extension.is_set || is_set(tunnel_id_extension.yfilter)) leaf_name_data.push_back(tunnel_id_extension.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.yfilter)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (tunnel_source.is_set || is_set(tunnel_source.yfilter)) leaf_name_data.push_back(tunnel_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop")
    {
        previous_hop = value;
        previous_hop.value_namespace = name_space;
        previous_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-extension")
    {
        tunnel_id_extension = value;
        tunnel_id_extension.value_namespace = name_space;
        tunnel_id_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id = value;
        tunnel_lsp_id.value_namespace = name_space;
        tunnel_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source = value;
        tunnel_source.value_namespace = name_space;
        tunnel_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "previous-hop")
    {
        previous_hop.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-extension")
    {
        tunnel_id_extension.yfilter = yfilter;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-source")
    {
        tunnel_source.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "previous-hop" || name == "table-id" || name == "tunnel-id" || name == "tunnel-id-extension" || name == "tunnel-lsp-id" || name == "tunnel-source")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::TpData()
    :
    dest_global_id{YType::uint32, "dest-global-id"},
    dest_node_id{YType::str, "dest-node-id"},
    dest_tunnel_id{YType::uint16, "dest-tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint16, "source-tunnel-id"}
{

    yang_name = "tp-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::~TpData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::has_data() const
{
    return dest_global_id.is_set
	|| dest_node_id.is_set
	|| dest_tunnel_id.is_set
	|| lsp_id.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_global_id.yfilter)
	|| ydk::is_set(dest_node_id.yfilter)
	|| ydk::is_set(dest_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_global_id.is_set || is_set(dest_global_id.yfilter)) leaf_name_data.push_back(dest_global_id.get_name_leafdata());
    if (dest_node_id.is_set || is_set(dest_node_id.yfilter)) leaf_name_data.push_back(dest_node_id.get_name_leafdata());
    if (dest_tunnel_id.is_set || is_set(dest_tunnel_id.yfilter)) leaf_name_data.push_back(dest_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-global-id")
    {
        dest_global_id = value;
        dest_global_id.value_namespace = name_space;
        dest_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-node-id")
    {
        dest_node_id = value;
        dest_node_id.value_namespace = name_space;
        dest_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-tunnel-id")
    {
        dest_tunnel_id = value;
        dest_tunnel_id.value_namespace = name_space;
        dest_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-global-id")
    {
        dest_global_id.yfilter = yfilter;
    }
    if(value_path == "dest-node-id")
    {
        dest_node_id.yfilter = yfilter;
    }
    if(value_path == "dest-tunnel-id")
    {
        dest_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-global-id" || name == "dest-node-id" || name == "dest-tunnel-id" || name == "lsp-id" || name == "source-global-id" || name == "source-node-id" || name == "source-tunnel-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::VrfL3VpnData()
    :
    security_id{YType::uint32, "security-id"},
    table_id{YType::uint32, "table-id"}
{

    yang_name = "vrf-l3vpn-data"; yang_parent_name = "label-context"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::~VrfL3VpnData()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_data() const
{
    return security_id.is_set
	|| table_id.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_id.yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-l3vpn-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_id.is_set || is_set(security_id.yfilter)) leaf_name_data.push_back(security_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security-id")
    {
        security_id = value;
        security_id.value_namespace = name_space;
        security_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security-id")
    {
        security_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-id" || name == "table-id")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::LocalLabelRewrite()
    :
    label_data{YType::uint32, "label-data"}
{

    yang_name = "local-label-rewrite"; yang_parent_name = "rewrite-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::~LocalLabelRewrite()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::has_data() const
{
    for (auto const & leaf : label_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::has_operation() const
{
    for (auto const & leaf : label_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_data.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_data_name_datas = label_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_data_name_datas.begin(), label_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-data")
    {
        label_data.append(value);
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-data")
    {
        label_data.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-data")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::V4Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v4_rpf_neighbor{YType::str, "v4-rpf-neighbor"}
{

    yang_name = "v4-rpf"; yang_parent_name = "rewrite-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::~V4Rpf()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::has_data() const
{
    return table_id.is_set
	|| v4_rpf_neighbor.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v4_rpf_neighbor.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v4_rpf_neighbor.is_set || is_set(v4_rpf_neighbor.yfilter)) leaf_name_data.push_back(v4_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-rpf-neighbor")
    {
        v4_rpf_neighbor = value;
        v4_rpf_neighbor.value_namespace = name_space;
        v4_rpf_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "v4-rpf-neighbor")
    {
        v4_rpf_neighbor.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v4-rpf-neighbor")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::V6Rpf()
    :
    table_id{YType::uint32, "table-id"},
    v6_rpf_neighbor{YType::str, "v6-rpf-neighbor"}
{

    yang_name = "v6-rpf"; yang_parent_name = "rewrite-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::~V6Rpf()
{
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::has_data() const
{
    return table_id.is_set
	|| v6_rpf_neighbor.is_set;
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(v6_rpf_neighbor.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (v6_rpf_neighbor.is_set || is_set(v6_rpf_neighbor.yfilter)) leaf_name_data.push_back(v6_rpf_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-rpf-neighbor")
    {
        v6_rpf_neighbor = value;
        v6_rpf_neighbor.value_namespace = name_space;
        v6_rpf_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "v6-rpf-neighbor")
    {
        v6_rpf_neighbor.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "v6-rpf-neighbor")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::RewriteSummary()
    :
    num_dmtctefpi{YType::uint32, "num-dmtctefpi"},
    num_ipv4fpi{YType::uint32, "num-ipv4fpi"},
    num_ipv6fpi{YType::uint32, "num-ipv6fpi"},
    num_label_fpi{YType::uint32, "num-label-fpi"},
    num_pw_list_tefpi{YType::uint32, "num-pw-list-tefpi"},
    num_rewrite{YType::uint32, "num-rewrite"},
    num_rewrite_rpf_neighbors{YType::uint32, "num-rewrite-rpf-neighbors"},
    num_tefpi{YType::uint32, "num-tefpi"},
    total_dmtc_intf{YType::uint32, "total-dmtc-intf"},
    total_forwad_update_message{YType::uint32, "total-forwad-update-message"},
    total_forward_update{YType::uint32, "total-forward-update"},
    total_ip_sub_paths{YType::uint32, "total-ip-sub-paths"},
    total_ipv4rpf_neighbors{YType::uint32, "total-ipv4rpf-neighbors"},
    total_ipv6rpf_neighbors{YType::uint32, "total-ipv6rpf-neighbors"},
    total_paths{YType::uint32, "total-paths"},
    total_pw_paths{YType::uint32, "total-pw-paths"},
    total_t_ev4_paths{YType::uint32, "total-t-ev4-paths"},
    total_te_head_paths{YType::uint32, "total-te-head-paths"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
    	,
    ipv4_paths(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths>())
{
    ipv4_paths->parent = this;
    ipv6_paths->parent = this;

    yang_name = "rewrite-summary"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::~RewriteSummary()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::has_data() const
{
    return num_dmtctefpi.is_set
	|| num_ipv4fpi.is_set
	|| num_ipv6fpi.is_set
	|| num_label_fpi.is_set
	|| num_pw_list_tefpi.is_set
	|| num_rewrite.is_set
	|| num_rewrite_rpf_neighbors.is_set
	|| num_tefpi.is_set
	|| total_dmtc_intf.is_set
	|| total_forwad_update_message.is_set
	|| total_forward_update.is_set
	|| total_ip_sub_paths.is_set
	|| total_ipv4rpf_neighbors.is_set
	|| total_ipv6rpf_neighbors.is_set
	|| total_paths.is_set
	|| total_pw_paths.is_set
	|| total_t_ev4_paths.is_set
	|| total_te_head_paths.is_set
	|| vrf_name_xr.is_set
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_data())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_data());
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_dmtctefpi.yfilter)
	|| ydk::is_set(num_ipv4fpi.yfilter)
	|| ydk::is_set(num_ipv6fpi.yfilter)
	|| ydk::is_set(num_label_fpi.yfilter)
	|| ydk::is_set(num_pw_list_tefpi.yfilter)
	|| ydk::is_set(num_rewrite.yfilter)
	|| ydk::is_set(num_rewrite_rpf_neighbors.yfilter)
	|| ydk::is_set(num_tefpi.yfilter)
	|| ydk::is_set(total_dmtc_intf.yfilter)
	|| ydk::is_set(total_forwad_update_message.yfilter)
	|| ydk::is_set(total_forward_update.yfilter)
	|| ydk::is_set(total_ip_sub_paths.yfilter)
	|| ydk::is_set(total_ipv4rpf_neighbors.yfilter)
	|| ydk::is_set(total_ipv6rpf_neighbors.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pw_paths.yfilter)
	|| ydk::is_set(total_t_ev4_paths.yfilter)
	|| ydk::is_set(total_te_head_paths.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_operation())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::RewriteSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_dmtctefpi.is_set || is_set(num_dmtctefpi.yfilter)) leaf_name_data.push_back(num_dmtctefpi.get_name_leafdata());
    if (num_ipv4fpi.is_set || is_set(num_ipv4fpi.yfilter)) leaf_name_data.push_back(num_ipv4fpi.get_name_leafdata());
    if (num_ipv6fpi.is_set || is_set(num_ipv6fpi.yfilter)) leaf_name_data.push_back(num_ipv6fpi.get_name_leafdata());
    if (num_label_fpi.is_set || is_set(num_label_fpi.yfilter)) leaf_name_data.push_back(num_label_fpi.get_name_leafdata());
    if (num_pw_list_tefpi.is_set || is_set(num_pw_list_tefpi.yfilter)) leaf_name_data.push_back(num_pw_list_tefpi.get_name_leafdata());
    if (num_rewrite.is_set || is_set(num_rewrite.yfilter)) leaf_name_data.push_back(num_rewrite.get_name_leafdata());
    if (num_rewrite_rpf_neighbors.is_set || is_set(num_rewrite_rpf_neighbors.yfilter)) leaf_name_data.push_back(num_rewrite_rpf_neighbors.get_name_leafdata());
    if (num_tefpi.is_set || is_set(num_tefpi.yfilter)) leaf_name_data.push_back(num_tefpi.get_name_leafdata());
    if (total_dmtc_intf.is_set || is_set(total_dmtc_intf.yfilter)) leaf_name_data.push_back(total_dmtc_intf.get_name_leafdata());
    if (total_forwad_update_message.is_set || is_set(total_forwad_update_message.yfilter)) leaf_name_data.push_back(total_forwad_update_message.get_name_leafdata());
    if (total_forward_update.is_set || is_set(total_forward_update.yfilter)) leaf_name_data.push_back(total_forward_update.get_name_leafdata());
    if (total_ip_sub_paths.is_set || is_set(total_ip_sub_paths.yfilter)) leaf_name_data.push_back(total_ip_sub_paths.get_name_leafdata());
    if (total_ipv4rpf_neighbors.is_set || is_set(total_ipv4rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv4rpf_neighbors.get_name_leafdata());
    if (total_ipv6rpf_neighbors.is_set || is_set(total_ipv6rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv6rpf_neighbors.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pw_paths.is_set || is_set(total_pw_paths.yfilter)) leaf_name_data.push_back(total_pw_paths.get_name_leafdata());
    if (total_t_ev4_paths.is_set || is_set(total_t_ev4_paths.yfilter)) leaf_name_data.push_back(total_t_ev4_paths.get_name_leafdata());
    if (total_te_head_paths.is_set || is_set(total_te_head_paths.yfilter)) leaf_name_data.push_back(total_te_head_paths.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths == nullptr)
        {
            ipv4_paths = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths>();
        }
        return ipv4_paths;
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths == nullptr)
        {
            ipv6_paths = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths>();
        }
        return ipv6_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::RewriteSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_paths != nullptr)
    {
        children["ipv4-paths"] = ipv4_paths;
    }

    if(ipv6_paths != nullptr)
    {
        children["ipv6-paths"] = ipv6_paths;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi = value;
        num_dmtctefpi.value_namespace = name_space;
        num_dmtctefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi = value;
        num_ipv4fpi.value_namespace = name_space;
        num_ipv4fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi = value;
        num_ipv6fpi.value_namespace = name_space;
        num_ipv6fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-label-fpi")
    {
        num_label_fpi = value;
        num_label_fpi.value_namespace = name_space;
        num_label_fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi = value;
        num_pw_list_tefpi.value_namespace = name_space;
        num_pw_list_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite = value;
        num_rewrite.value_namespace = name_space;
        num_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors = value;
        num_rewrite_rpf_neighbors.value_namespace = name_space;
        num_rewrite_rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi = value;
        num_tefpi.value_namespace = name_space;
        num_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf = value;
        total_dmtc_intf.value_namespace = name_space;
        total_dmtc_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message = value;
        total_forwad_update_message.value_namespace = name_space;
        total_forwad_update_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update = value;
        total_forward_update.value_namespace = name_space;
        total_forward_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths = value;
        total_ip_sub_paths.value_namespace = name_space;
        total_ip_sub_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors = value;
        total_ipv4rpf_neighbors.value_namespace = name_space;
        total_ipv4rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors = value;
        total_ipv6rpf_neighbors.value_namespace = name_space;
        total_ipv6rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths = value;
        total_pw_paths.value_namespace = name_space;
        total_pw_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths = value;
        total_t_ev4_paths.value_namespace = name_space;
        total_t_ev4_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths = value;
        total_te_head_paths.value_namespace = name_space;
        total_te_head_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::RewriteSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi.yfilter = yfilter;
    }
    if(value_path == "num-label-fpi")
    {
        num_label_fpi.yfilter = yfilter;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite.yfilter = yfilter;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi.yfilter = yfilter;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf.yfilter = yfilter;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message.yfilter = yfilter;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update.yfilter = yfilter;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths.yfilter = yfilter;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths.yfilter = yfilter;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths.yfilter = yfilter;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-paths" || name == "ipv6-paths" || name == "num-dmtctefpi" || name == "num-ipv4fpi" || name == "num-ipv6fpi" || name == "num-label-fpi" || name == "num-pw-list-tefpi" || name == "num-rewrite" || name == "num-rewrite-rpf-neighbors" || name == "num-tefpi" || name == "total-dmtc-intf" || name == "total-forwad-update-message" || name == "total-forward-update" || name == "total-ip-sub-paths" || name == "total-ipv4rpf-neighbors" || name == "total-ipv6rpf-neighbors" || name == "total-paths" || name == "total-pw-paths" || name == "total-t-ev4-paths" || name == "total-te-head-paths" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::Ipv4Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{

    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-backup-paths" || name == "total-paths" || name == "total-pop-lkup-paths" || name == "total-protected-paths" || name == "total-remote-backup-paths")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::Ipv6Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{

    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-backup-paths" || name == "total-paths" || name == "total-pop-lkup-paths" || name == "total-protected-paths" || name == "total-remote-backup-paths")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrfs()
{

    yang_name = "rewrite-summary-vrfs"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::~RewriteSummaryVrfs()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::has_data() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::has_operation() const
{
    for (std::size_t index=0; index<rewrite_summary_vrf.size(); index++)
    {
        if(rewrite_summary_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-summary-vrf")
    {
        for(auto const & c : rewrite_summary_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf>();
        c->parent = this;
        rewrite_summary_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_summary_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-summary-vrf")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::RewriteSummaryVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    num_dmtctefpi{YType::uint32, "num-dmtctefpi"},
    num_ipv4fpi{YType::uint32, "num-ipv4fpi"},
    num_ipv6fpi{YType::uint32, "num-ipv6fpi"},
    num_label_fpi{YType::uint32, "num-label-fpi"},
    num_pw_list_tefpi{YType::uint32, "num-pw-list-tefpi"},
    num_rewrite{YType::uint32, "num-rewrite"},
    num_rewrite_rpf_neighbors{YType::uint32, "num-rewrite-rpf-neighbors"},
    num_tefpi{YType::uint32, "num-tefpi"},
    total_dmtc_intf{YType::uint32, "total-dmtc-intf"},
    total_forwad_update_message{YType::uint32, "total-forwad-update-message"},
    total_forward_update{YType::uint32, "total-forward-update"},
    total_ip_sub_paths{YType::uint32, "total-ip-sub-paths"},
    total_ipv4rpf_neighbors{YType::uint32, "total-ipv4rpf-neighbors"},
    total_ipv6rpf_neighbors{YType::uint32, "total-ipv6rpf-neighbors"},
    total_paths{YType::uint32, "total-paths"},
    total_pw_paths{YType::uint32, "total-pw-paths"},
    total_t_ev4_paths{YType::uint32, "total-t-ev4-paths"},
    total_te_head_paths{YType::uint32, "total-te-head-paths"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
    	,
    ipv4_paths(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>())
	,ipv6_paths(std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>())
{
    ipv4_paths->parent = this;
    ipv6_paths->parent = this;

    yang_name = "rewrite-summary-vrf"; yang_parent_name = "rewrite-summary-vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::~RewriteSummaryVrf()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::has_data() const
{
    return vrf_name.is_set
	|| num_dmtctefpi.is_set
	|| num_ipv4fpi.is_set
	|| num_ipv6fpi.is_set
	|| num_label_fpi.is_set
	|| num_pw_list_tefpi.is_set
	|| num_rewrite.is_set
	|| num_rewrite_rpf_neighbors.is_set
	|| num_tefpi.is_set
	|| total_dmtc_intf.is_set
	|| total_forwad_update_message.is_set
	|| total_forward_update.is_set
	|| total_ip_sub_paths.is_set
	|| total_ipv4rpf_neighbors.is_set
	|| total_ipv6rpf_neighbors.is_set
	|| total_paths.is_set
	|| total_pw_paths.is_set
	|| total_t_ev4_paths.is_set
	|| total_te_head_paths.is_set
	|| vrf_name_xr.is_set
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_data())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_data());
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(num_dmtctefpi.yfilter)
	|| ydk::is_set(num_ipv4fpi.yfilter)
	|| ydk::is_set(num_ipv6fpi.yfilter)
	|| ydk::is_set(num_label_fpi.yfilter)
	|| ydk::is_set(num_pw_list_tefpi.yfilter)
	|| ydk::is_set(num_rewrite.yfilter)
	|| ydk::is_set(num_rewrite_rpf_neighbors.yfilter)
	|| ydk::is_set(num_tefpi.yfilter)
	|| ydk::is_set(total_dmtc_intf.yfilter)
	|| ydk::is_set(total_forwad_update_message.yfilter)
	|| ydk::is_set(total_forward_update.yfilter)
	|| ydk::is_set(total_ip_sub_paths.yfilter)
	|| ydk::is_set(total_ipv4rpf_neighbors.yfilter)
	|| ydk::is_set(total_ipv6rpf_neighbors.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pw_paths.yfilter)
	|| ydk::is_set(total_t_ev4_paths.yfilter)
	|| ydk::is_set(total_te_head_paths.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| (ipv4_paths !=  nullptr && ipv4_paths->has_operation())
	|| (ipv6_paths !=  nullptr && ipv6_paths->has_operation());
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-summary-vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (num_dmtctefpi.is_set || is_set(num_dmtctefpi.yfilter)) leaf_name_data.push_back(num_dmtctefpi.get_name_leafdata());
    if (num_ipv4fpi.is_set || is_set(num_ipv4fpi.yfilter)) leaf_name_data.push_back(num_ipv4fpi.get_name_leafdata());
    if (num_ipv6fpi.is_set || is_set(num_ipv6fpi.yfilter)) leaf_name_data.push_back(num_ipv6fpi.get_name_leafdata());
    if (num_label_fpi.is_set || is_set(num_label_fpi.yfilter)) leaf_name_data.push_back(num_label_fpi.get_name_leafdata());
    if (num_pw_list_tefpi.is_set || is_set(num_pw_list_tefpi.yfilter)) leaf_name_data.push_back(num_pw_list_tefpi.get_name_leafdata());
    if (num_rewrite.is_set || is_set(num_rewrite.yfilter)) leaf_name_data.push_back(num_rewrite.get_name_leafdata());
    if (num_rewrite_rpf_neighbors.is_set || is_set(num_rewrite_rpf_neighbors.yfilter)) leaf_name_data.push_back(num_rewrite_rpf_neighbors.get_name_leafdata());
    if (num_tefpi.is_set || is_set(num_tefpi.yfilter)) leaf_name_data.push_back(num_tefpi.get_name_leafdata());
    if (total_dmtc_intf.is_set || is_set(total_dmtc_intf.yfilter)) leaf_name_data.push_back(total_dmtc_intf.get_name_leafdata());
    if (total_forwad_update_message.is_set || is_set(total_forwad_update_message.yfilter)) leaf_name_data.push_back(total_forwad_update_message.get_name_leafdata());
    if (total_forward_update.is_set || is_set(total_forward_update.yfilter)) leaf_name_data.push_back(total_forward_update.get_name_leafdata());
    if (total_ip_sub_paths.is_set || is_set(total_ip_sub_paths.yfilter)) leaf_name_data.push_back(total_ip_sub_paths.get_name_leafdata());
    if (total_ipv4rpf_neighbors.is_set || is_set(total_ipv4rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv4rpf_neighbors.get_name_leafdata());
    if (total_ipv6rpf_neighbors.is_set || is_set(total_ipv6rpf_neighbors.yfilter)) leaf_name_data.push_back(total_ipv6rpf_neighbors.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pw_paths.is_set || is_set(total_pw_paths.yfilter)) leaf_name_data.push_back(total_pw_paths.get_name_leafdata());
    if (total_t_ev4_paths.is_set || is_set(total_t_ev4_paths.yfilter)) leaf_name_data.push_back(total_t_ev4_paths.get_name_leafdata());
    if (total_te_head_paths.is_set || is_set(total_te_head_paths.yfilter)) leaf_name_data.push_back(total_te_head_paths.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-paths")
    {
        if(ipv4_paths == nullptr)
        {
            ipv4_paths = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths>();
        }
        return ipv4_paths;
    }

    if(child_yang_name == "ipv6-paths")
    {
        if(ipv6_paths == nullptr)
        {
            ipv6_paths = std::make_shared<MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths>();
        }
        return ipv6_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_paths != nullptr)
    {
        children["ipv4-paths"] = ipv4_paths;
    }

    if(ipv6_paths != nullptr)
    {
        children["ipv6-paths"] = ipv6_paths;
    }

    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi = value;
        num_dmtctefpi.value_namespace = name_space;
        num_dmtctefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi = value;
        num_ipv4fpi.value_namespace = name_space;
        num_ipv4fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi = value;
        num_ipv6fpi.value_namespace = name_space;
        num_ipv6fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-label-fpi")
    {
        num_label_fpi = value;
        num_label_fpi.value_namespace = name_space;
        num_label_fpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi = value;
        num_pw_list_tefpi.value_namespace = name_space;
        num_pw_list_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite = value;
        num_rewrite.value_namespace = name_space;
        num_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors = value;
        num_rewrite_rpf_neighbors.value_namespace = name_space;
        num_rewrite_rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi = value;
        num_tefpi.value_namespace = name_space;
        num_tefpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf = value;
        total_dmtc_intf.value_namespace = name_space;
        total_dmtc_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message = value;
        total_forwad_update_message.value_namespace = name_space;
        total_forwad_update_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update = value;
        total_forward_update.value_namespace = name_space;
        total_forward_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths = value;
        total_ip_sub_paths.value_namespace = name_space;
        total_ip_sub_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors = value;
        total_ipv4rpf_neighbors.value_namespace = name_space;
        total_ipv4rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors = value;
        total_ipv6rpf_neighbors.value_namespace = name_space;
        total_ipv6rpf_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths = value;
        total_pw_paths.value_namespace = name_space;
        total_pw_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths = value;
        total_t_ev4_paths.value_namespace = name_space;
        total_t_ev4_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths = value;
        total_te_head_paths.value_namespace = name_space;
        total_te_head_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "num-dmtctefpi")
    {
        num_dmtctefpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv4fpi")
    {
        num_ipv4fpi.yfilter = yfilter;
    }
    if(value_path == "num-ipv6fpi")
    {
        num_ipv6fpi.yfilter = yfilter;
    }
    if(value_path == "num-label-fpi")
    {
        num_label_fpi.yfilter = yfilter;
    }
    if(value_path == "num-pw-list-tefpi")
    {
        num_pw_list_tefpi.yfilter = yfilter;
    }
    if(value_path == "num-rewrite")
    {
        num_rewrite.yfilter = yfilter;
    }
    if(value_path == "num-rewrite-rpf-neighbors")
    {
        num_rewrite_rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "num-tefpi")
    {
        num_tefpi.yfilter = yfilter;
    }
    if(value_path == "total-dmtc-intf")
    {
        total_dmtc_intf.yfilter = yfilter;
    }
    if(value_path == "total-forwad-update-message")
    {
        total_forwad_update_message.yfilter = yfilter;
    }
    if(value_path == "total-forward-update")
    {
        total_forward_update.yfilter = yfilter;
    }
    if(value_path == "total-ip-sub-paths")
    {
        total_ip_sub_paths.yfilter = yfilter;
    }
    if(value_path == "total-ipv4rpf-neighbors")
    {
        total_ipv4rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-ipv6rpf-neighbors")
    {
        total_ipv6rpf_neighbors.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-pw-paths")
    {
        total_pw_paths.yfilter = yfilter;
    }
    if(value_path == "total-t-ev4-paths")
    {
        total_t_ev4_paths.yfilter = yfilter;
    }
    if(value_path == "total-te-head-paths")
    {
        total_te_head_paths.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-paths" || name == "ipv6-paths" || name == "vrf-name" || name == "num-dmtctefpi" || name == "num-ipv4fpi" || name == "num-ipv6fpi" || name == "num-label-fpi" || name == "num-pw-list-tefpi" || name == "num-rewrite" || name == "num-rewrite-rpf-neighbors" || name == "num-tefpi" || name == "total-dmtc-intf" || name == "total-forwad-update-message" || name == "total-forward-update" || name == "total-ip-sub-paths" || name == "total-ipv4rpf-neighbors" || name == "total-ipv6rpf-neighbors" || name == "total-paths" || name == "total-pw-paths" || name == "total-t-ev4-paths" || name == "total-te-head-paths" || name == "vrf-name-xr")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::Ipv4Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{

    yang_name = "ipv4-paths"; yang_parent_name = "rewrite-summary-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::~Ipv4Paths()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-backup-paths" || name == "total-paths" || name == "total-pop-lkup-paths" || name == "total-protected-paths" || name == "total-remote-backup-paths")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::Ipv6Paths()
    :
    total_backup_paths{YType::uint32, "total-backup-paths"},
    total_paths{YType::uint32, "total-paths"},
    total_pop_lkup_paths{YType::uint32, "total-pop-lkup-paths"},
    total_protected_paths{YType::uint32, "total-protected-paths"},
    total_remote_backup_paths{YType::uint32, "total-remote-backup-paths"}
{

    yang_name = "ipv6-paths"; yang_parent_name = "rewrite-summary-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::~Ipv6Paths()
{
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_data() const
{
    return total_backup_paths.is_set
	|| total_paths.is_set
	|| total_pop_lkup_paths.is_set
	|| total_protected_paths.is_set
	|| total_remote_backup_paths.is_set;
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_backup_paths.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_pop_lkup_paths.yfilter)
	|| ydk::is_set(total_protected_paths.yfilter)
	|| ydk::is_set(total_remote_backup_paths.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_backup_paths.is_set || is_set(total_backup_paths.yfilter)) leaf_name_data.push_back(total_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_pop_lkup_paths.is_set || is_set(total_pop_lkup_paths.yfilter)) leaf_name_data.push_back(total_pop_lkup_paths.get_name_leafdata());
    if (total_protected_paths.is_set || is_set(total_protected_paths.yfilter)) leaf_name_data.push_back(total_protected_paths.get_name_leafdata());
    if (total_remote_backup_paths.is_set || is_set(total_remote_backup_paths.yfilter)) leaf_name_data.push_back(total_remote_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths = value;
        total_backup_paths.value_namespace = name_space;
        total_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths = value;
        total_pop_lkup_paths.value_namespace = name_space;
        total_pop_lkup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths = value;
        total_protected_paths.value_namespace = name_space;
        total_protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths = value;
        total_remote_backup_paths.value_namespace = name_space;
        total_remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-backup-paths")
    {
        total_backup_paths.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-pop-lkup-paths")
    {
        total_pop_lkup_paths.yfilter = yfilter;
    }
    if(value_path == "total-protected-paths")
    {
        total_protected_paths.yfilter = yfilter;
    }
    if(value_path == "total-remote-backup-paths")
    {
        total_remote_backup_paths.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-backup-paths" || name == "total-paths" || name == "total-pop-lkup-paths" || name == "total-protected-paths" || name == "total-remote-backup-paths")
        return true;
    return false;
}

MplsLsdNodes::MplsLsdNode::SrlbInconsistency::SrlbInconsistency()
    :
    end_srlb_range{YType::uint32, "end-srlb-range"},
    start_srlb_range{YType::uint32, "start-srlb-range"}
{

    yang_name = "srlb-inconsistency"; yang_parent_name = "mpls-lsd-node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsdNodes::MplsLsdNode::SrlbInconsistency::~SrlbInconsistency()
{
}

bool MplsLsdNodes::MplsLsdNode::SrlbInconsistency::has_data() const
{
    return end_srlb_range.is_set
	|| start_srlb_range.is_set;
}

bool MplsLsdNodes::MplsLsdNode::SrlbInconsistency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_srlb_range.yfilter)
	|| ydk::is_set(start_srlb_range.yfilter);
}

std::string MplsLsdNodes::MplsLsdNode::SrlbInconsistency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlb-inconsistency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsdNodes::MplsLsdNode::SrlbInconsistency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_srlb_range.is_set || is_set(end_srlb_range.yfilter)) leaf_name_data.push_back(end_srlb_range.get_name_leafdata());
    if (start_srlb_range.is_set || is_set(start_srlb_range.yfilter)) leaf_name_data.push_back(start_srlb_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsdNodes::MplsLsdNode::SrlbInconsistency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsdNodes::MplsLsdNode::SrlbInconsistency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLsdNodes::MplsLsdNode::SrlbInconsistency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-srlb-range")
    {
        end_srlb_range = value;
        end_srlb_range.value_namespace = name_space;
        end_srlb_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-srlb-range")
    {
        start_srlb_range = value;
        start_srlb_range.value_namespace = name_space;
        start_srlb_range.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsdNodes::MplsLsdNode::SrlbInconsistency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-srlb-range")
    {
        end_srlb_range.yfilter = yfilter;
    }
    if(value_path == "start-srlb-range")
    {
        start_srlb_range.yfilter = yfilter;
    }
}

bool MplsLsdNodes::MplsLsdNode::SrlbInconsistency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-srlb-range" || name == "start-srlb-range")
        return true;
    return false;
}


}
}

